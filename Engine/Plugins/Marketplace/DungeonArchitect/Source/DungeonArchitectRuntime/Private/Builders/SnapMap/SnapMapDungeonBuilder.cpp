//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/SnapMapDungeonBuilder.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/Serialization/SnapMapSerialization.h"
#include "Builders/SnapMap/SnapMapDungeonDiagnostics.h"
#include "Builders/SnapMap/SnapMapDungeonModel.h"
#include "Builders/SnapMap/SnapMapDungeonQuery.h"
#include "Builders/SnapMap/SnapMapDungeonSelectorLogic.h"
#include "Builders/SnapMap/SnapMapDungeonToolData.h"
#include "Builders/SnapMap/SnapMapDungeonTransformLogic.h"
#include "Builders/SnapMap/SnapMapGraph.h"
#include "Core/Dungeon.h"
#include "Core/DungeonFlow/DungeonFlow.h"
#include "Core/SceneProviders/PooledDungeonSceneProvider.h"
#include "Core/Utils/DungeonModelHelper.h"
#include "Core/Utils/MathUtils.h"
#include "Core/Volumes/DungeonNegationVolume.h"
#include "Core/Volumes/DungeonThemeOverrideVolume.h"
#include "Frameworks/GraphGrammar/GraphGrammar.h"
#include "Frameworks/GraphGrammar/GraphGrammarProcessor.h"
#include "Frameworks/GraphGrammar/Script/GrammarRuleScript.h"
#include "Frameworks/GraphGrammar/Script/GrammarScriptGraph.h"

#include "Components/ModelComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/Engine.h"
#include "Engine/Level.h"
#include "Engine/LevelStreaming.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

using namespace SnapMapGraph;

DEFINE_LOG_CATEGORY(SnapMapDungeonBuilderLog);

USnapMapDungeonBuilder::USnapMapDungeonBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {

}

void USnapMapDungeonBuilder::BuildNonThemedDungeonImpl(UWorld* World, TSharedPtr<FDungeonSceneProvider> SceneProvider) {
    SnapMapModel = Cast<USnapMapDungeonModel>(model);
    SnapMapConfig = Cast<USnapMapDungeonConfig>(config);

    if (!World || !SnapMapConfig || !SnapMapModel) {
        UE_LOG(SnapMapDungeonBuilderLog, Error, TEXT("Invalid reference passed to the snap builder"));
        return;
    }

    if (!SnapMapConfig->DungeonFlowGraph) {
        UE_LOG(SnapMapDungeonBuilderLog, Error, TEXT("Dungeon Flow asset not specified"));
        return;
    }

    if (!SnapMapConfig->ModuleDatabase) {
        UE_LOG(SnapMapDungeonBuilderLog, Error, TEXT("Module Database asset is not specified"));
        return;
    }

    SnapMapModel->Reset();
    ClearStreamingLevels(World, false);
    PropSockets.Reset();

    if (Diagnostics.IsValid()) {
        Diagnostics->Clear();
    }

    const int32 MaxTries = SnapMapConfig->bSupportBuildRetries ? FMath::Max(1, SnapMapConfig->NumBuildRetries) : 1;
    int32 NumTries = 0;

    TSet<int32> ProcessedSeeds;
    int32 Seed = SnapMapConfig->Seed;
    FModuleNodePtr GraphRootNode = nullptr;
    while (NumTries < MaxTries && !GraphRootNode.IsValid()) {
        ProcessedSeeds.Add(Seed);
        GraphRootNode = GenerateModuleNodeGraph(Seed);
        NumTries++;

        if (!GraphRootNode.IsValid()) {
            FRandomStream SeedGenerator(Seed);
            Seed = SeedGenerator.FRandRange(0, MAX_int32 - 1);
            while (ProcessedSeeds.Contains(Seed)) {
                Seed++;
            }
        }
    }
    
    SerializeModuleGraph(GraphRootNode);
    GenerateLevelStreamingModel(World, GraphRootNode);
}

namespace {
    void PopulateNegationVolumeBounds(ADungeon* InDungeon, TArray<FSnapNegationVolumeState>& OutNegationVolumes) {
        UWorld* World = InDungeon ? InDungeon->GetWorld() : nullptr;
        if (!World) return;

        // Grab the bounds of all the negation volumes
        for (TObjectIterator<ADungeonNegationVolume> NegationVolume; NegationVolume; ++NegationVolume) {
            if (!NegationVolume->IsValidLowLevel() || NegationVolume->IsPendingKill()) {
                continue;
            }
            if (NegationVolume->Dungeon != InDungeon) {
                continue;
            }

            FVector Origin, Extent;
            NegationVolume->GetActorBounds(false, Origin, Extent);

            FSnapNegationVolumeState State;
            State.Bounds = FBox(Origin - Extent, Origin + Extent);
            State.bInverse = NegationVolume->Reversed;

            OutNegationVolumes.Add(State);
        }
    }
}

FModuleNodePtr USnapMapDungeonBuilder::GenerateModuleNodeGraph(int32 InSeed) {
    UGrammarScriptGraph* MissionGraph = NewObject<UGrammarScriptGraph>(SnapMapModel);
    SnapMapModel->MissionGraph = MissionGraph;

    UGraphGrammar* MissionGrammar = SnapMapConfig->DungeonFlowGraph->MissionGrammar;

    FGrowthStaticState StaticState;
    StaticState.Random = random;
    StaticState.BoundsContraction = SnapMapConfig->CollisionTestContraction;
    StaticState.ModuleDatabase = SnapMapConfig->ModuleDatabase;
    StaticState.DungeonBaseTransform = Dungeon
                                           ? FTransform(FRotator::ZeroRotator, Dungeon->GetActorLocation())
                                           : FTransform::Identity;
    StaticState.StartTimeSecs = FPlatformTime::Seconds();
    StaticState.MaxProcessingTimeSecs = SnapMapConfig->MaxProcessingTimeSecs;
    StaticState.bAllowModuleRotations = SnapMapConfig->bAllowModuleRotations;
    StaticState.Diagnostics = Diagnostics;

    for (const FSnapMapModuleDatabaseItem& ModuleInfo : StaticState.ModuleDatabase->Modules) {
        TArray<FSnapMapModuleDatabaseItem>& CategoryModuleNames = StaticState.ModulesByCategory.FindOrAdd(ModuleInfo.Category);
        CategoryModuleNames.Add(ModuleInfo);
    }

    PopulateNegationVolumeBounds(Dungeon, StaticState.NegationVolumes);

    return FSnapMapGraphGenerator::Generate(InSeed, MissionGrammar, MissionGraph, StaticState);
}

void USnapMapDungeonBuilder::BuildPreviewSnapLayout() {
    SnapMapModel = Cast<USnapMapDungeonModel>(model);
    SnapMapConfig = Cast<USnapMapDungeonConfig>(config);

    UWorld* World = Dungeon ? Dungeon->GetWorld() : nullptr;

    if (!World || !SnapMapConfig || !SnapMapModel) {
        UE_LOG(SnapMapDungeonBuilderLog, Error, TEXT("Invalid reference passed to the snap builder"));
        return;
    }

    if (!SnapMapConfig->DungeonFlowGraph) {
        UE_LOG(SnapMapDungeonBuilderLog, Error, TEXT("Dungeon Flow asset not specified"));
        return;
    }

    int32 Seed = config->Seed;
    random.Initialize(Seed);
    SnapMapModel->Reset();
    ClearStreamingLevels(World, false);
    PropSockets.Reset();

    const FModuleNodePtr GraphRootNode = GenerateModuleNodeGraph(Seed);
    SerializeModuleGraph(GraphRootNode);
}


void USnapMapDungeonBuilder::DestroyNonThemedDungeonImpl(UWorld* World) {
    UDungeonBuilder::DestroyNonThemedDungeonImpl(World);

    SnapMapModel = Cast<USnapMapDungeonModel>(model);
    SnapMapConfig = Cast<USnapMapDungeonConfig>(config);

    SnapMapModel->Reset();

    ClearStreamingLevels(World, false);

    if (Diagnostics.IsValid()) {
        Diagnostics->Clear();
    }
}

void USnapMapDungeonBuilder::GetSnapMapConnectionActors(ULevel* ModuleLevel,
                                                        TArray<ASnapMapConnectionActor*>& OutConnectionActors) {
    OutConnectionActors.Reset();
    for (AActor* Actor : ModuleLevel->Actors) {
        if (!Actor) continue;
        if (ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(Actor)) {
            OutConnectionActors.Add(ConnectionActor);
        }
    }
}

void USnapMapDungeonBuilder::SetDiagnostics(TSharedPtr<SnapMapDiagnostics::FDiagnostics> InDiagnostics) {
    Diagnostics = InDiagnostics;
}

void USnapMapDungeonBuilder::DrawDebugData(UWorld* InWorld, bool bPersistent /*= false*/, float LifeTime /*= 0*/) {
    TMap<FGuid, TArray<FSnapMapConnectionInstance>> ConnectionsByModuleId;
    USnapMapDungeonModel* DModel = Cast<USnapMapDungeonModel>(model);
    if (DModel) {
        for (const FSnapMapConnectionInstance& Connection : DModel->Connections) {
            TArray<FSnapMapConnectionInstance>& ModuleConnections = ConnectionsByModuleId.FindOrAdd(Connection.ModuleA);
            ModuleConnections.Add(Connection);
        }
    }

    if (Dungeon && Dungeon->LevelStreamingModel) {
        for (UDungeonStreamingChunk* Chunk : Dungeon->LevelStreamingModel->Chunks) {
            if (!Chunk) continue;

            // Draw the bounds
            FVector Center, Extent;
            Chunk->Bounds.GetCenterAndExtents(Center, Extent);
            DrawDebugBox(InWorld, Center, Extent, FQuat::Identity, FColor::Red, false, -1, 0, 10);

            // Draw the connections to the doors
            float AvgZ = 0;
            const FVector CylinderOffset = FVector(0, 0, 10);
            TArray<FSnapMapConnectionInstance>& ModuleConnections = ConnectionsByModuleId.FindOrAdd(Chunk->ID);
            for (const FSnapMapConnectionInstance& Connection : ModuleConnections) {
                FVector Location = Connection.WorldTransform.GetLocation();
                DrawDebugCylinder(InWorld, Location, Location + CylinderOffset, 50, 8, FColor::Red, false, -1, 0, 8);
                AvgZ += Location.Z;
            }

            if (ModuleConnections.Num() > 0) {
                AvgZ /= ModuleConnections.Num();
                FVector CenterPoint = Center;
                CenterPoint.Z = AvgZ;

                DrawDebugCylinder(InWorld, CenterPoint, CenterPoint + CylinderOffset, 80, 16, FColor::Green, false, -1,
                                  0, 4);

                // Draw a point in the center of the room
                for (const FSnapMapConnectionInstance& Connection : ModuleConnections) {
                    FVector Start = CenterPoint + CylinderOffset / 2.0f;
                    FVector End = Connection.WorldTransform.GetLocation() + CylinderOffset / 2.0f;
                    DrawDebugLine(InWorld, Start, End, FColor::Green, false, -1, 0, 20);
                }

            }
        }
    }
}

TSubclassOf<UDungeonModel> USnapMapDungeonBuilder::GetModelClass() {
    return USnapMapDungeonModel::StaticClass();
}

TSubclassOf<UDungeonConfig> USnapMapDungeonBuilder::GetConfigClass() {
    return USnapMapDungeonConfig::StaticClass();
}

TSubclassOf<UDungeonToolData> USnapMapDungeonBuilder::GetToolDataClass() {
    return USnapMapDungeonToolData::StaticClass();
}

TSubclassOf<UDungeonQuery> USnapMapDungeonBuilder::GetQueryClass() {
    return USnapMapDungeonQuery::StaticClass();
}

bool USnapMapDungeonBuilder::ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint,
                                                      const FTransform& Transform, FQuat& OutRotationOffset) {
    return false;
}

bool USnapMapDungeonBuilder::SupportsProperty(const FName& PropertyName) const {
    if (PropertyName == "Themes") return false;
    if (PropertyName == "MarkerEmitters") return false;
    if (PropertyName == "EventListeners") return false;

    return true;
}

TSharedPtr<class FDungeonSceneProvider> USnapMapDungeonBuilder::CreateSceneProvider(
    UDungeonConfig* Config, ADungeon* pDungeon, UWorld* World) {
    return MakeShareable(new FPooledDungeonSceneProvider(pDungeon, World));
}

bool USnapMapDungeonBuilder::CanBuildDungeon(FString& OutMessage) {
    ADungeon* OuterDungeon = Cast<ADungeon>(GetOuter());
    if (OuterDungeon) {
        SnapMapConfig = Cast<USnapMapDungeonConfig>(OuterDungeon->GetConfig());

        if (!SnapMapConfig) {
            OutMessage = "Dungeon not initialized correctly";
            return false;
        }

        if (!SnapMapConfig->DungeonFlowGraph) {
            OutMessage = "Dungeon Flow asset not assigned";
            return false;
        }

        if (!SnapMapConfig->ModuleDatabase) {
            OutMessage = "Module Database asset not assigned";
            return false;
        }
    }
    else {
        OutMessage = "Dungeon not initialized correctly";
        return false;
    }

    return true;
}

bool USnapMapDungeonBuilder::PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                                                   const FPropSocket& socket) {
    return false;
}

FTransform USnapMapDungeonBuilder::PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                                         const FPropSocket& socket) {
    return FTransform::Identity;
}

namespace {
    FSnapMapConnectionInstance ReverseConnection(const FSnapMapConnectionInstance& InConnection) {
        FSnapMapConnectionInstance Connection;
        Connection.ModuleA = InConnection.ModuleB;
        Connection.DoorA = InConnection.DoorB;
        Connection.ModuleB = InConnection.ModuleA;
        Connection.DoorB = InConnection.DoorA;
        Connection.WorldTransform = InConnection.WorldTransform; // TODO: Rotate along Z by 180
        return Connection;
    }

    void SerializeModuleData(FModuleNodePtr InNode, USnapMapDungeonModel* SnapMapModel, TSet<FModuleNodePtr>& Visited) {
        if (!InNode.IsValid() || Visited.Contains(InNode)) {
            return;
        }
        Visited.Add(InNode);

        FSnapMapModuleInstanceSerializedData ModuleData;
        ModuleData.ModuleInstanceId = InNode->ModuleInstanceId;
        ModuleData.WorldTransform = InNode->WorldTransform;
        ModuleData.Level = InNode->ModuleDBInfo.Level;
        ModuleData.Category = InNode->ModuleDBInfo.Category;
        ModuleData.ModuleBounds = InNode->ModuleDBInfo.ModuleBounds;
        SnapMapModel->ModuleInstances.Add(ModuleData);

        // Save the node's outgoing links in the connection array and traverse those links
        for (FModuleDoorPtr Door : InNode->Outgoing) {
            if (Door.IsValid() && Door->ConnectedDoor.IsValid() && Door->ConnectedDoor->Owner.IsValid()) {
                FSnapMapConnectionInstance Connection;
                Connection.ModuleA = InNode->ModuleInstanceId;
                Connection.DoorA = Door->ConnectionId;

                FModuleDoorPtr OtherDoor = Door->ConnectedDoor;
                Connection.ModuleB = OtherDoor->Owner->ModuleInstanceId;
                Connection.DoorB = OtherDoor->ConnectionId;

                Connection.WorldTransform = Door->LocalTransform * InNode->WorldTransform;

                SnapMapModel->Connections.Add(Connection);
                SnapMapModel->Connections.Add(ReverseConnection(Connection));

                SerializeModuleData(OtherDoor->Owner, SnapMapModel, Visited);
            }
        }
    }

    template <typename T>
    TArray<T*> GetActorsOfType(ULevel* Level) {
        TArray<T*> Result;
        for (int i = 0; i < Level->Actors.Num(); i++) {
            if (T* TargetActor = Cast<T>(Level->Actors[i])) {
                Result.Add(TargetActor);
            }
        }
        return Result;
    }

    const FSnapMapConnectionInstance* FindConnectedDoorInstance(const FSnapMapConnectionInstance* InConnection,
                                                                const TArray<FSnapMapConnectionInstance>&
                                                                InConnectionList) {
        if (InConnection) {
            for (const FSnapMapConnectionInstance& Other : InConnectionList) {
                if (Other.ModuleA == InConnection->ModuleB && Other.DoorA == InConnection->DoorB
                    && Other.ModuleB == InConnection->ModuleA && Other.DoorB == InConnection->DoorA) {
                    return &Other;
                }
            }
        }
        return nullptr;
    }
}

void USnapMapDungeonBuilder::SerializeModuleGraph(FModuleNodePtr InRootNode) {
    SnapMapModel->Connections.Reset();
    SnapMapModel->ModuleInstances.Reset();

    TSet<FModuleNodePtr> Visited;
    SerializeModuleData(InRootNode, SnapMapModel, Visited);
}

void USnapMapDungeonBuilder::OnChunkVisible(USnapMapStreamingChunk* Chunk) {
    UWorld* World = Dungeon ? Dungeon->GetWorld() : nullptr;
    if (!World) return;

    UpdateChunkDoorStates(Chunk, World->PersistentLevel);

    if (Chunk) {
        SnapMapModel = Cast<USnapMapDungeonModel>(model);
        SnapMapModel->VisibleModules.Add(Chunk->ID);
    }


}

void USnapMapDungeonBuilder::OnChunkHidden(USnapMapStreamingChunk* Chunk) {

    DestroyChunkDoorActors(Chunk);


}


void USnapMapDungeonBuilder::UpdateChunkDoorStates(USnapMapStreamingChunk* Chunk, ULevel* PersistentLevel) {
    if (!Chunk) {
        return;
    }
    ULevel* ChunkLevel = Chunk->GetLoadedLevel();
    if (!ChunkLevel) {
        return;
    }

    // The connection info for this chunk, by their door ids
    TMap<FGuid, FSnapMapConnectionInstance*> ModuleConnections;
    for (FSnapMapConnectionInstance& ConnectionData : SnapMapModel->Connections) {
        if (ConnectionData.ModuleA == Chunk->ID) {
            if (!ModuleConnections.Contains(ConnectionData.DoorA)) {
                ModuleConnections.Add(ConnectionData.DoorA, &ConnectionData);
            }
        }
    }

    TArray<ASnapMapConnectionActor*> ConnectionActors = GetActorsOfType<ASnapMapConnectionActor>(ChunkLevel);
    for (ASnapMapConnectionActor* ConnectionActor : ConnectionActors) {
        if (ConnectionActor->SpawnedInstance.IsValid()) {
            continue;
        }

        FSnapMapConnectionInstance** ConnectionDataSearchResult = ModuleConnections.Find(
            ConnectionActor->GetConnectionId());
        FSnapMapConnectionInstance* ConnectionData = ConnectionDataSearchResult ? *ConnectionDataSearchResult : nullptr;

        const FSnapMapConnectionInstance* OtherConnectionData = FindConnectedDoorInstance(
            ConnectionData, SnapMapModel->Connections);
        if (ConnectionData && OtherConnectionData) {
            // We have a connection to another chunk node.  This is a door
            ConnectionActor->ConnectionComponent->ConnectionState = ESnapMapConnectionState::Door;

            // If the other door has spawned the shared door actor, copy it over
            if (!ConnectionData->PersistentDoorActor.IsValid()) {
                ConnectionData->PersistentDoorActor = OtherConnectionData->PersistentDoorActor;
            }

            // The other door does not exist yet or has not spawned the door actor. build a new one and save a reference
            if (!ConnectionData->PersistentDoorActor.IsValid()) {
                ConnectionData->PersistentDoorActor = ConnectionActor->BuildConnectionInstance(PersistentLevel);
            }

            ConnectionActor->SpawnedInstance = ConnectionData->PersistentDoorActor;
        }
        else {
            // No connection exists. This is a wall
            ConnectionActor->ConnectionComponent->ConnectionState = ESnapMapConnectionState::Wall;
            ConnectionActor->SpawnedInstance = ConnectionActor->BuildConnectionInstance(ChunkLevel);
        }
    }
}

void USnapMapDungeonBuilder::DestroyChunkDoorActors(USnapMapStreamingChunk* Chunk) {
    if (!Chunk) {
        return;
    }
    SnapMapModel->VisibleModules.Remove(Chunk->ID);

    ULevel* ChunkLevel = Chunk->GetLoadedLevel();
    if (!ChunkLevel) {
        return;
    }

    // The connection info for this chunk, by their door ids
    TMap<FGuid, FSnapMapConnectionInstance*> ModuleConnections;
    for (FSnapMapConnectionInstance& ConnectionData : SnapMapModel->Connections) {
        if (ConnectionData.ModuleA == Chunk->ID) {
            if (!ModuleConnections.Contains(ConnectionData.DoorA)) {
                ModuleConnections.Add(ConnectionData.DoorA, &ConnectionData);
            }
        }
    }

    TArray<ASnapMapConnectionActor*> ConnectionActors = GetActorsOfType<ASnapMapConnectionActor>(ChunkLevel);
    for (ASnapMapConnectionActor* ConnectionActor : ConnectionActors) {

        FSnapMapConnectionInstance** ConnectionDataSearchResult = ModuleConnections.Find(
            ConnectionActor->GetConnectionId());
        FSnapMapConnectionInstance* ConnectionData = ConnectionDataSearchResult ? *ConnectionDataSearchResult : nullptr;

        if (ConnectionData && ConnectionData->PersistentDoorActor.IsValid()) {
            // We have a door here in the persistent level
            const FSnapMapConnectionInstance* OtherConnectionData = FindConnectedDoorInstance(
                ConnectionData, SnapMapModel->Connections);
            if (!OtherConnectionData || !OtherConnectionData->PersistentDoorActor.IsValid()) {
                // The other door does not contain a reference to the door actor. Only this module holds it and is being hidden. Destroy it
                ConnectionData->PersistentDoorActor->Destroy();
            }
            ConnectionData->PersistentDoorActor = nullptr;
            ConnectionActor->SpawnedInstance = nullptr;
        }
    }

}

void USnapMapDungeonBuilder::OnChunkLoaded(USnapMapStreamingChunk* Chunk) {
    // Update the BSP transforms
    if (Chunk) {
        ULevel* ChunkLevel = Chunk->GetLoadedLevel();
        for (UModelComponent* Component : ChunkLevel->ModelComponents) {
            FTransform OldTransform = Component->GetComponentTransform();
            FTransform NewTransform = OldTransform * Chunk->GetLevelTransform();
            Component->SetWorldTransform(NewTransform);
        }
    }
}



void USnapMapDungeonBuilder::GenerateLevelStreamingModel(UWorld* World, FModuleNodePtr RootNode) {
    if (!Dungeon || !World || !Dungeon->LevelStreamingModel) return;

    Dungeon->LevelStreamingModel->Initialize(World);

    TSet<FModuleNodePtr> VisitedNodes;
    GenerateLevelStreamingChunkRecursive(World, Dungeon->LevelStreamingModel, RootNode, nullptr,
                                         Dungeon->LevelStreamingModel->Chunks, VisitedNodes);

    World->UpdateLevelStreaming();
    World->FlushLevelStreaming(EFlushLevelStreamingType::Full);
}


UDungeonStreamingChunk* USnapMapDungeonBuilder::GenerateLevelStreamingChunkRecursive(
    UWorld* World, UObject* ChunkOwner, FModuleNodePtr Node, UDungeonStreamingChunk* IncomingChunk,
    TArray<UDungeonStreamingChunk*>& OutChunks, TSet<FModuleNodePtr>& Visited) {
    if (!Node.IsValid()) return nullptr;

    check(!Visited.Contains(Node));
    Visited.Add(Node);

    USnapMapStreamingChunk* Chunk = NewObject<USnapMapStreamingChunk>(ChunkOwner);
    Chunk->ID = Node->ModuleInstanceId;
    Chunk->Bounds = Node->GetModuleBounds();
    Chunk->ModuleTransform = Node->WorldTransform;

    for (FModuleDoorPtr OutgoingDoor : Node->Outgoing) {
        if (!OutgoingDoor.IsValid() || !OutgoingDoor->ConnectedDoor.IsValid()) {
            continue;
        }
        FModuleNodePtr ChildNode = OutgoingDoor->ConnectedDoor->Owner;
        if (!ChildNode.IsValid()) {
            continue;
        }

        if (!Visited.Contains(ChildNode)) {
            UDungeonStreamingChunk* ChildChunk = GenerateLevelStreamingChunkRecursive(
                World, ChunkOwner, ChildNode, Chunk, OutChunks, Visited);
            if (ChildChunk) {
                Chunk->Neighbors.Add(ChildChunk);
            }
        }
    }
    if (IncomingChunk) {
        Chunk->Neighbors.Add(IncomingChunk);
    }

    // Generate the level streaming object
    {
        const FTransform NodeTransform = Node->WorldTransform;
        const FVector Location = NodeTransform.GetLocation();
        const FRotator Rotation = NodeTransform.GetRotation().Rotator();
        TSoftObjectPtr<UWorld> ModuleLevelAsset = Node->ModuleDBInfo.Level;
        bool bSuccess = false;
        Chunk->CreateLevelStreaming(World, ModuleLevelAsset, Node->NetworkId, Location, Rotation, bSuccess);
        Chunk->OnChunkVisible.BindUObject(this, &USnapMapDungeonBuilder::OnChunkVisible);
        Chunk->OnChunkHidden.BindUObject(this, &USnapMapDungeonBuilder::OnChunkHidden);
        Chunk->OnChunkLoaded.BindUObject(this, &USnapMapDungeonBuilder::OnChunkLoaded);
    }

    OutChunks.Add(Chunk);

    return Chunk;
}

void USnapMapDungeonBuilder::ClearStreamingLevels(UWorld* World, bool bForceRemoveAllStreamingLevels) {
    if (!World) return;

    // Destroy the spawned door actors
    {
        TSet<AActor*> ConnectionInstances;
        for (TActorIterator<ASnapMapConnectionActor> It(World); It; ++It) {
            ASnapMapConnectionActor* Connection = *It;
            if (Connection->SpawnedInstance.IsValid()) {
                ConnectionInstances.Add(Connection->SpawnedInstance.Get());
            }
        }

        // Destroy the spawned doors
        for (AActor* ConnectionInstance : ConnectionInstances) {
            ConnectionInstance->Destroy();
        }
        ConnectionInstances.Reset();
    }

    if (Dungeon && Dungeon->LevelStreamingModel) {
        // Save a reference to this chunk so they can be removed when destroyed
        Dungeon->LevelStreamingModel->Release(World);
    }

    World->UpdateLevelStreaming();
    World->FlushLevelStreaming(EFlushLevelStreamingType::Full);

    if (GEngine) {
        GEngine->ForceGarbageCollection(true);
    }

    SnapMapModel = Cast<USnapMapDungeonModel>(Dungeon->GetModel());
    if (SnapMapModel) {
        SnapMapModel->VisibleModules.Reset();
    }
}


///////////////////////////////////////// USnapDungeonStreamingChunk ///////////////////////////////////////// 

USnapMapStreamingChunk::USnapMapStreamingChunk(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    SerializedData = ObjectInitializer.CreateDefaultSubobject<USnapMapStreamingChunkActorData>(this, "SerializedData");
}

void USnapMapStreamingChunk::HandleChunkVisible() {
    Super::HandleChunkVisible();

    if (OnChunkVisible.IsBound()) {
        OnChunkVisible.Execute(this);
    }

    ULevel* Level = GetLoadedLevel();

    // Serialize the level actor data
    if (Level) {
        SerializedData->LoadLevel(Level);
    }

    //UE_LOG(SnapMapDungeonBuilderLog, Log, TEXT("Streaming level Visible"));
}

void USnapMapStreamingChunk::HandleChunkHidden() {
    Super::HandleChunkHidden();

    if (OnChunkHidden.IsBound()) {
        OnChunkHidden.Execute(this);
    }

    UObject* DungeonObject = GetOuter()->GetOuter();
    UWorld* OwningWorld = DungeonObject ? DungeonObject->GetWorld() : nullptr;

    ULevel* Level = GetLoadedLevel();
    if (Level) {
        SerializedData->SaveLevel(Level);
    }

    //UE_LOG(SnapMapDungeonBuilderLog, Log, TEXT("Streaming level Hidden"));
}


void USnapMapStreamingChunk::HandleChunkLoaded() {
    Super::HandleChunkLoaded();

    if (OnChunkLoaded.IsBound()) {
        OnChunkLoaded.Execute(this);
    }

    //UE_LOG(SnapMapDungeonBuilderLog, Log, TEXT("Streaming level loaded"));
}

void USnapMapStreamingChunk::HandleChunkUnloaded() {
    Super::HandleChunkUnloaded();

    if (OnChunkUnloaded.IsBound()) {
        OnChunkUnloaded.Execute(this);
    }
}

void USnapMapStreamingChunk::DestroyChunk(UWorld* InWorld) {
    Super::DestroyChunk(InWorld);
}

////////////////////////////////////// USnapMapNavigation //////////////////////////////////////

