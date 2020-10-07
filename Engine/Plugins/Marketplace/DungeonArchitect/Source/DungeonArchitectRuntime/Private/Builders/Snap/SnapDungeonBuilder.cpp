//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/SnapDungeonBuilder.h"

#include "Builders/Snap/Connection/SnapConnection.h"
#include "Builders/Snap/Module/SnapModuleState.h"
#include "Builders/Snap/SnapDungeonConfig.h"
#include "Builders/Snap/SnapDungeonModel.h"
#include "Builders/Snap/SnapDungeonQuery.h"
#include "Builders/Snap/SnapDungeonSelectorLogic.h"
#include "Builders/Snap/SnapDungeonToolData.h"
#include "Builders/Snap/SnapDungeonTransformLogic.h"
#include "Core/Dungeon.h"
#include "Core/SceneProviders/PooledDungeonSceneProvider.h"
#include "Core/Utils/DungeonModelHelper.h"
#include "Core/Utils/MathUtils.h"

#include <functional>
#include <sstream>
#include <stack>

DEFINE_LOG_CATEGORY(SnapDungeonBuilderLog);

class SnapSceneProviderCommand_SpawnModule : public SceneProviderCommand {
public:
    SnapSceneProviderCommand_SpawnModule(ADungeon* InDungeon, const FDungeonSceneProviderContext& InContext,
                                         TSubclassOf<AActor> InModuleClass)
        : SceneProviderCommand(InDungeon, InContext)
          , ModuleClass(InModuleClass) {
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        float DistanceSq = (Context.transform.GetLocation() - BuildPosition).SizeSquared();
        ExecutionPriority = DistanceSq; // Sort based on distance
    }

protected:
    void UpdateModuleDoorStates(AActor* ModuleActor) {
        FName ModuleInstanceId = Context.NodeId;

        // Set the door states of this module on the template
        USnapDungeonModel* SnapModel = Cast<USnapDungeonModel>(Dungeon->GetModel());
        if (SnapModel) {
            TSet<int32> DoorIndices;
            for (const FSnapModuleConnection& Connection : SnapModel->Connections) {
                if (Connection.ModuleAInstanceID == ModuleInstanceId) {
                    DoorIndices.Add(Connection.DoorAIndex);
                }
                else if (Connection.ModuleBInstanceID == ModuleInstanceId) {
                    DoorIndices.Add(Connection.DoorBIndex);
                }
            }

            TArray<UChildActorComponent*> ModuleDoorComponents;
            USnapDungeonBuilder::GetSnapConnectionChildActors(ModuleActor->GetRootComponent(), ModuleDoorComponents);
            TMap<FGuid, ESnapConnectionState> InstanceConnectionStates;

            for (int i = 0; i < ModuleDoorComponents.Num(); i++) {
                bool bIsDoor = DoorIndices.Contains(i);
                UChildActorComponent* DoorChildActor = ModuleDoorComponents[i];

                FGuid InstanceConnectionId = FGuid::NewGuid();
                ESnapConnectionState ConnectionState =
                    bIsDoor ? ESnapConnectionState::Door : ESnapConnectionState::Wall;
                InstanceConnectionStates.Add(InstanceConnectionId, ConnectionState);

                ASnapConnection* ConnectionTemplate = Cast<ASnapConnection>(DoorChildActor->GetChildActorTemplate());
                //ConnectionTemplate->ConnectionState = ConnectionState;
                //ConnectionTemplate->InstanceId = InstanceId;

                ASnapConnection* Connection = Cast<ASnapConnection>(DoorChildActor->GetChildActor());
                Connection->ConnectionState = ConnectionState;
                Connection->InstanceId = InstanceConnectionId;
            }

            // Save the instance connection state in the spawned module blueprint
            {
                USnapModuleState* ModuleState = Cast<USnapModuleState>(
                    ModuleActor->GetComponentByClass(USnapModuleState::StaticClass()));
                if (!ModuleState) {
                    // Create a new state component in module blueprint
                    ModuleState = NewObject<USnapModuleState>(ModuleActor, TEXT("ModuleState"));
                    ModuleState->SetupAttachment(ModuleActor->GetRootComponent());
                    ModuleState->RegisterComponent();
                }

                ModuleState->ModuleInstanceId = ModuleInstanceId;
                ModuleState->ConnectionStates = InstanceConnectionStates;
            }

            // Rebuild the connections
            for (int i = 0; i < ModuleDoorComponents.Num(); i++) {
                bool bIsDoor = DoorIndices.Contains(i);
                UChildActorComponent* DoorChildActor = ModuleDoorComponents[i];
                ASnapConnection* Connection = Cast<ASnapConnection>(DoorChildActor->GetChildActor());
                Connection->BuildConnection();
            }
        }
    }

    void ExecuteImpl(UWorld* InWorld) override {
        FActorSpawnParameters SpawnParams;
        SpawnParams.OverrideLevel = Dungeon ? Dungeon->GetLevel() : nullptr;
        AActor* ModuleActor = InWorld->SpawnActor<AActor>(ModuleClass, Context.transform, SpawnParams);
        UpdateModuleDoorStates(ModuleActor);

        FName ModuleInstanceId = Context.NodeId;
        AddNodeTag(ModuleActor, *ModuleInstanceId.ToString(), false);
        MoveToFolder(ModuleActor);

        TagAsComplexObject(ModuleActor);
    }

private:
    TSubclassOf<AActor> ModuleClass;
};

/*
class SnapSceneProviderCommand_FixDoorConnections : public SceneProviderCommand {
public:
	SnapSceneProviderCommand_FixDoorConnections(ADungeon* InDungeon) : SceneProviderCommand(InDungeon) {}

protected:
	typedef TMap<FName, AActor*> ModulesById_t;
	typedef TMap<FName, TArray<UChildActorComponent*> > DoorsByModuleId_t;
	typedef TMap<FName, TArray<bool> > DoorFlagsByModuleId_t;

	virtual void ExecuteImpl(UWorld* InWorld) override {
		if (!Dungeon) return;
		USnapDungeonModel* Model = Cast<USnapDungeonModel>(Dungeon->GetModel());

		// Cache all the module instances in the scene for fast lookup
		ModulesById_t ModulesById;
		GenerateModuleMap(InWorld, Model->Modules, ModulesById);

		DoorsByModuleId_t DoorsByModuleId;
		GenerateDoorMap(ModulesById, DoorsByModuleId);

		DoorFlagsByModuleId_t DoorFlagsByModuleId;
		GenerateDoorFlags(Model->Connections, DoorsByModuleId, DoorFlagsByModuleId);

		for (auto& ModuleElem : DoorsByModuleId) {
			FName ModuleInstanceId = ModuleElem.Key;

			TArray<UChildActorComponent*>& DoorActorComponents = ModuleElem.Value;
			TArray<bool>& DoorStates = DoorFlagsByModuleId[ModuleInstanceId];

			if (DoorActorComponents.Num() != DoorStates.Num()) {
				UE_LOG(SnapDungeonBuilderLog, Error, TEXT("Invalid door states"));
				continue;
			}

			for (int i = 0; i < DoorActorComponents.Num(); i++) {
				UChildActorComponent* DoorChildComponent = DoorActorComponents[i];
				AActor* ActorTemplate = DoorChildComponent->GetChildActorTemplate();
				ASnapConnection* ConnectionActorTemplate = Cast<ASnapConnection>(ActorTemplate);
				if (ConnectionActorTemplate) {
					// Set the state of the door
					bool bDoorState = DoorStates[i];
					ESnapConnectionState ConnectionState = bDoorState ? ESnapConnectionState::Door : ESnapConnectionState::Wall;
					ConnectionActorTemplate->ConnectionState = ConnectionState;

					// Rebuild the child actor from the template
					//DoorChildComponent->CreateChildActor();
					ASnapConnection* ConnectionActor = Cast<ASnapConnection>(DoorChildComponent->GetChildActor());
					if (ConnectionActor) {
						ConnectionActor->ConnectionState = ConnectionState;
						ConnectionActor->RerunConstructionScripts();
					}
				}
			}
		}
	}

	static void GenerateDoorFlags(const TArray<FSnapModuleConnection>& Connections, const DoorsByModuleId_t& DoorsByModuleId, DoorFlagsByModuleId_t& OutDoorFlagsByModuleId) {
		for (auto& DoorElem : DoorsByModuleId) {
			TArray<bool> DoorFlags;
			DoorFlags.Init(false, DoorElem.Value.Num());
			OutDoorFlagsByModuleId.Add(DoorElem.Key, DoorFlags);
		}

		auto SetDoorFlag = [&](FName ModuleInstanceId, int32 DoorIndex) {
			if (OutDoorFlagsByModuleId.Contains(ModuleInstanceId)) {
				auto& DoorFlags = OutDoorFlagsByModuleId[ModuleInstanceId];
				if (DoorIndex < DoorFlags.Num()) {
					DoorFlags[DoorIndex] = true;
				}
			}
		};

		for (const FSnapModuleConnection& Connection : Connections) {
			SetDoorFlag(Connection.ModuleAInstanceID, Connection.DoorAIndex);
			SetDoorFlag(Connection.ModuleBInstanceID, Connection.DoorBIndex);
		}
	}

	static void GenerateModuleMap(UWorld* InWorld, const TArray<FSnapModule>& Modules, ModulesById_t& OutModulesById) {
		TSet<FName> ModuleInstancIds;
		for (const FSnapModule& Module : Modules) {
			ModuleInstancIds.Add(Module.InstanceID);
		}

		for (TActorIterator<AActor> It(InWorld); It; ++It) {
			AActor* Actor = *It;
			for (const FName& ModuleTag : ModuleInstancIds) {
				if (Actor->Tags.Contains(ModuleTag) && !OutModulesById.Contains(ModuleTag)) {
					OutModulesById.Add(ModuleTag, Actor);
					break;
				}
			}
		}
	}

	static void GenerateDoorMap(const ModulesById_t& ModulesById, DoorsByModuleId_t& OutDoorsByModuleId) {
		for (auto& ModuleElem : ModulesById) {
			AActor* ModuleActor = ModuleElem.Value;
			if (!ModuleActor) continue;
			TArray<UChildActorComponent*> ModuleDoorComponents;
			USnapDungeonBuilder::GetSnapConnectionChildActors(ModuleActor->GetRootComponent(), ModuleDoorComponents);

			FName ModuleInstanceId = ModuleElem.Key;
			OutDoorsByModuleId.Add(ModuleInstanceId, ModuleDoorComponents);
		}
	}

	virtual void UpdateExecutionPriority(const FVector& BuildPosition) override {
		// Make sure we execute this in the end after all the snap instances are spawned into the scene
		ExecutionPriority = MAX_int32;
	}
};
*/


struct FSnapAttachmentConfiguration {
    FSnapModuleInfoPtr AttachedModule;
    int32 AttachedModuleDoorIndex;
    FBox AttachedModuleWorldBounds;
    FTransform AttachedModuleTransform;
};

struct FModuleGrowthNode {
    FModuleGrowthNode() : IncomingModuleDoorIndex(-1), bStartNode(false) {
    }

    FTransform ModuleTransform;
    FSnapModuleInfoPtr IncomingModule;
    int32 IncomingModuleDoorIndex;
    bool bStartNode;
};

namespace {
    FName GenerateModuleInstanceID(const FGuid& ModuleGuid) {
        return *FString::Printf(TEXT("NODE-SNAPMOD-%s"), *ModuleGuid.ToString());
    }
}

struct FModuleBuildNode {
    FModuleBuildNode() : IncomingDoorIndex(-1), DepthFromLeaf(1), bMainBranch(false) {
        ModuleInstanceID = GenerateModuleInstanceID(FGuid::NewGuid());
    }

    FName ModuleInstanceID;
    FSnapModuleInfoPtr Module;
    int32 IncomingDoorIndex;
    FSnapAttachmentConfiguration AttachmentConfig;
    int32 DepthFromLeaf;
    TArray<FModuleBuildNodePtr> Extensions;
    FModuleBuildNodePtr Parent;
    bool bMainBranch;
};

typedef TSharedPtr<struct FModuleBuildNode> FModuleBuildNodePtr;

struct FSnapLayoutBuildState {
    FSnapLayoutBuildState() : bSafetyBailOut(false), NumTries(0), bFoundBestBuild(false) {
    }

    /**
    Searching a dense tree can lead to billions of possibilities
    If this flag is set, the search bails out early with the best result found so far, to avoid a hang
    */
    bool bSafetyBailOut;
    int32 NumTries;
    bool bFoundBestBuild;
    TArray<FSnapModuleInfoPtr> ModuleInfoList;
};

namespace {
    void CalculateOccupiedBounds(FModuleBuildNodePtr Node, TArray<FBox>& OccupiedBounds) {
        if (!Node.IsValid()) return;
        OccupiedBounds.Add(Node->AttachmentConfig.AttachedModuleWorldBounds);

        for (FModuleBuildNodePtr ChildNode : Node->Extensions) {
            CalculateOccupiedBounds(ChildNode, OccupiedBounds);
        }
    }

    void TraverseTree(FModuleBuildNodePtr RootNode, std::function<void(FModuleBuildNodePtr)> Visit) {
        TArray<FModuleBuildNodePtr> Stack;
        Stack.Push(RootNode);

        while (Stack.Num() > 0) {
            FModuleBuildNodePtr Top = Stack.Pop();
            if (!Top.IsValid()) {
                continue;
            }

            Visit(Top);

            // Add child extensions
            for (FModuleBuildNodePtr Extension : Top->Extensions) {
                Stack.Push(Extension);
            }
        }
    }
}

USnapDungeonBuilder::USnapDungeonBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}


void USnapDungeonBuilder::BuildNonThemedDungeonImpl(UWorld* World, TSharedPtr<FDungeonSceneProvider> SceneProvider) {
    SnapModel = Cast<USnapDungeonModel>(model);
    SnapConfig = Cast<USnapDungeonConfig>(config);

    PropSockets.Reset();

    if (!World) {
        UE_LOG(SnapDungeonBuilderLog, Error, TEXT("Invalid World reference passed to the snap builder"));
        return;
    }

    // Generate module info list
    TArray<FSnapModuleInfoPtr> ModuleInfos;

    {
        TSet<TAssetSubclassOf<AActor>> RegisteredModules;
        RegisteredModules.Append(SnapConfig->Modules);
        RegisteredModules.Append(SnapConfig->StartModules);
        RegisteredModules.Append(SnapConfig->EndModules);
        RegisteredModules.Append(SnapConfig->BranchEndModules);

        for (TAssetSubclassOf<AActor> ModuleAsset : RegisteredModules) {
            FSnapModuleInfoPtr ModuleInfo = GenerateModuleInfo(ModuleAsset, World);
            ModuleInfos.Add(ModuleInfo);
        }
    }

    FModuleGrowthNode StartNode;
    StartNode.IncomingModuleDoorIndex = -1;
    StartNode.bStartNode = true;
    StartNode.ModuleTransform = FTransform::Identity;

    TArray<FBox> OccupiedBounds;

    FSnapLayoutBuildState LayoutBuildState;
    LayoutBuildState.ModuleInfoList = ModuleInfos;

    // Build the main branch
    FModuleBuildNodePtr BuildNode = BuildLayoutRecursive(StartNode, OccupiedBounds, 1, SnapConfig->MainBranchSize, true,
                                                         false, LayoutBuildState);

    // Build the side branches
    {
        TArray<FModuleBuildNodePtr> MainBranchNodes;

        // Grab the nodes in the main branch
        {
            FModuleBuildNodePtr BranchNode = BuildNode;
            while (BranchNode.IsValid()) {
                BranchNode->bMainBranch = true;
                MainBranchNodes.Add(BranchNode);

                // Move forward
                if (BranchNode->Extensions.Num() == 0) {
                    break;
                }

                BranchNode = BranchNode->Extensions[0];
            }
        }


        // Iterate through the nodes in the main branch and start branching out
        for (int i = 0; i < MainBranchNodes.Num(); i++) {
            FModuleBuildNodePtr BranchStartNode = MainBranchNodes[i];
            FModuleBuildNodePtr BranchNextNode = i + 1 < MainBranchNodes.Num() ? MainBranchNodes[i + 1] : nullptr;

            FSnapModuleInfoPtr BranchModule = BranchStartNode->Module;
            int32 IncomingDoorIndex = BranchStartNode->IncomingDoorIndex;
            int32 OutgoingDoorIndex = BranchNextNode.IsValid() ? BranchNextNode->IncomingDoorIndex : -1;
            int32 NumDoors = BranchModule->ConnectionTransforms.Num();
            for (int DoorIndex = 0; DoorIndex < NumDoors; DoorIndex++) {
                if (DoorIndex == IncomingDoorIndex || DoorIndex == OutgoingDoorIndex) {
                    // These doors are already extended
                    continue;
                }

                bool bGrowFromHere = (random.FRand() < SnapConfig->SideBranchProbability);
                if (!bGrowFromHere) {
                    continue;
                }

                // TODO: Optimize me.  it recalculates the the bounds for the whole tree for every main branch node
                OccupiedBounds.Reset();
                CalculateOccupiedBounds(BuildNode, OccupiedBounds);

                FModuleGrowthNode BranchGrowNode;
                BranchGrowNode.IncomingModuleDoorIndex = DoorIndex;
                BranchGrowNode.IncomingModule = BranchStartNode->Module;
                BranchGrowNode.ModuleTransform = BranchStartNode->AttachmentConfig.AttachedModuleTransform;

                LayoutBuildState = FSnapLayoutBuildState();
                LayoutBuildState.ModuleInfoList = ModuleInfos;
                FModuleBuildNodePtr BranchBuildNode = BuildLayoutRecursive(
                    BranchGrowNode, OccupiedBounds, 1, SnapConfig->SideBranchSize, false, false, LayoutBuildState);
                if (BranchBuildNode.IsValid()) {
                    // Make sure we don't end up with an undesirable leaf node
                    if (BranchBuildNode->Extensions.Num() == 0 && BranchBuildNode->Module.IsValid()) {
                        continue;
                    }

                    BranchBuildNode->Parent = BranchStartNode;
                    BranchStartNode->Extensions.Add(BranchBuildNode);
                }
            }

            // Move to the next branch root node from the main branch
            if (BranchStartNode->Extensions.Num() > 0) {
                BranchStartNode = BranchStartNode->Extensions[0];
            }
            else {
                BranchStartNode = nullptr;
            }
        }
    }

    SnapModel->Reset();

    SceneProvider->OnDungeonBuildStart(SnapConfig);
    GenerateConnectionList(BuildNode);

    // Spawn the modules
    TraverseTree(BuildNode, [&](FModuleBuildNodePtr Node) {
        // Spawn a module at this location
        FName InstanceID = Node->ModuleInstanceID;
        FSnapModuleInfoPtr ModuleInfo = Node->Module;
        FDungeonSceneProviderContext Context;
        Context.transform = Node->AttachmentConfig.AttachedModuleTransform;
        Context.NodeId = InstanceID;
        SceneProvider->ExecuteCustomCommand(MakeShareable(
            new SnapSceneProviderCommand_SpawnModule(Dungeon, Context, ModuleInfo->ModuleClass)));

        // Register this in the model
        FSnapModule SnapModule;
        SnapModule.InstanceID = InstanceID;
        SnapModel->Modules.Add(SnapModule);
    });

    //SceneProvider->ExecuteCustomCommand(MakeShareable(new SnapSceneProviderCommand_FixDoorConnections(Dungeon)));

    SceneProvider->OnDungeonBuildStop();
}

// Recursively find all the child actor components that spawn a snap connection actor and grab their transforms
void USnapDungeonBuilder::GetSnapConnectionChildActors(USceneComponent* Component,
                                                       TArray<UChildActorComponent*>& OutConnectionComponents) {
    if (!Component) return;

    if (Component->IsA<UChildActorComponent>()) {
        UChildActorComponent* ChildActorComponent = Cast<UChildActorComponent>(Component);
        UClass* ChildClass = ChildActorComponent->GetChildActorClass();
        if (ChildClass && ChildClass->IsChildOf<ASnapConnection>()) {
            OutConnectionComponents.Add(ChildActorComponent);
        }
        return;
    }

    // Move to all the children
    TArray<USceneComponent*> Children;
    Component->GetChildrenComponents(false, Children);
    for (USceneComponent* Child : Children) {
        GetSnapConnectionChildActors(Child, OutConnectionComponents);
    }
}

// Recursively find all the child actor components that spawn a snap connection actor and grab their transforms
void FindConnectionTransforms(USceneComponent* Component, const FTransform& BaseTransform,
                              TArray<FTransform>& OutTransforms) {
    if (!Component) return;

    FTransform Transform = BaseTransform * Component->GetRelativeTransform();
    if (Component->IsA<UChildActorComponent>()) {
        UChildActorComponent* ChildActorComponent = Cast<UChildActorComponent>(Component);
        UClass* ChildClass = ChildActorComponent->GetChildActorClass();
        if (ChildClass && ChildClass->IsChildOf<ASnapConnection>()) {
            // We found a connection child actor
            OutTransforms.Add(Transform);
        }
        return;
    }

    // Move to all the children
    TArray<USceneComponent*> Children;
    Component->GetChildrenComponents(false, Children);
    for (USceneComponent* Child : Children) {
        FindConnectionTransforms(Child, Transform, OutTransforms);
    }
}

FSnapModuleInfoPtr USnapDungeonBuilder::GenerateModuleInfo(TAssetSubclassOf<AActor> ModuleAsset, UWorld* World) {
    TSubclassOf<AActor> ModuleClass = ModuleAsset.LoadSynchronous();
    if (!ModuleClass) return nullptr;
    AActor* TemporaryTemplate = World->SpawnActor(ModuleClass);

    FSnapModuleInfoPtr ModuleInfo = MakeShareable(new FSnapModuleInfo);
    ModuleInfo->ModuleClass = ModuleClass;
    ModuleInfo->ModuleGuid = FGuid::NewGuid();
    ModuleInfo->Bounds = TemporaryTemplate->GetComponentsBoundingBox();
    ModuleInfo->ModuleAsset = ModuleAsset;

    // Find all the connection actors within this module
    FindConnectionTransforms(TemporaryTemplate->GetRootComponent(), FTransform::Identity,
                             ModuleInfo->ConnectionTransforms);

    TemporaryTemplate->Destroy();

    return ModuleInfo;
}

FTransform USnapDungeonBuilder::FindAttachmentTransform(const FTransform& ParentModuleTransform,
                                                        const FTransform& IncomingDoorTransform,
                                                        const FTransform& AttachmentDoorTransform) {
    FTransform DesiredDoorTransform = FTransform(FQuat::MakeFromEuler(FVector(0, 0, 180))) * IncomingDoorTransform *
        ParentModuleTransform;

    // Calculate the rotation
    FQuat DesiredRotation;
    {
        FVector TargetVector = DesiredDoorTransform.GetRotation().Vector();
        FVector SourceVector = AttachmentDoorTransform.GetRotation().Vector();
        DesiredRotation = FQuat::FindBetween(SourceVector, TargetVector);
    }

    // Calculate the translation
    FVector DesiredOffset;
    {
        FVector TargetOffset = DesiredDoorTransform.GetLocation();
        FVector SourceOffset = AttachmentDoorTransform.GetLocation();
        SourceOffset = DesiredRotation * SourceOffset;
        DesiredOffset = TargetOffset - SourceOffset;
    }

    FTransform ModuleTransform = FTransform(DesiredRotation, DesiredOffset);
    return ModuleTransform;
}

void USnapDungeonBuilder::GenerateConnectionList(FModuleBuildNodePtr RootNode) {
    TraverseTree(RootNode, [&](FModuleBuildNodePtr Node) {
        if (Node->Parent.IsValid()) {
            FSnapModuleConnection Connection;
            Connection.ModuleAInstanceID = Node->ModuleInstanceID;
            Connection.DoorAIndex = Node->AttachmentConfig.AttachedModuleDoorIndex;

            Connection.ModuleBInstanceID = Node->Parent->ModuleInstanceID;
            Connection.DoorBIndex = Node->IncomingDoorIndex;

            SnapModel->Connections.Add(Connection);
        }
    });

}

bool USnapDungeonBuilder::FindAttachmentConfiguration(FSnapModuleInfoPtr TargetModule,
                                                      FSnapModuleInfoPtr IncomingModule,
                                                      const FTransform& IncomingModuleTransform,
                                                      int32 IncomingDoorIndex, const TArray<FBox>& OccupiedBounds,
                                                      FSnapAttachmentConfiguration& OutAttachmentConfig) {
    int32 TargetNumDoors = TargetModule->ConnectionTransforms.Num();
    //if (IncomingDoorIndex >= TargetNumDoors) return false;

    if (IncomingDoorIndex < 0 || !IncomingModule.IsValid()) {
        OutAttachmentConfig.AttachedModule = TargetModule;
        OutAttachmentConfig.AttachedModuleDoorIndex = random.RandRange(0, TargetNumDoors - 1);
        OutAttachmentConfig.AttachedModuleWorldBounds = TargetModule->Bounds;
        OutAttachmentConfig.AttachedModuleTransform = FTransform::Identity;
        return true;
    }

    //if (IncomingDoorIndex >= TargetNumDoors) return false;
    const FTransform& IncomingDoorTransform = IncomingModule->ConnectionTransforms[IncomingDoorIndex];
    bool bFoundValid = false;
    TArray<int32> ShuffledIndices = FMathUtils::GetShuffledIndices(TargetNumDoors, random);
    for (int si = 0; si < ShuffledIndices.Num(); si++) {
        int Index = ShuffledIndices[si];
        FTransform AttachmentDoorTransform = TargetModule->ConnectionTransforms[Index];

        // Align the module with a door that fits the incoming door
        FTransform ModuleTransform = FindAttachmentTransform(IncomingModuleTransform, IncomingDoorTransform,
                                                             AttachmentDoorTransform);

        {
            // Calculate the bounds of the module 
            FBox ModuleWorldBounds = TargetModule->Bounds;
            ModuleWorldBounds = ModuleWorldBounds.TransformBy(ModuleTransform).ExpandBy(
                FVector(-1 * (SnapConfig->CollisionTestContraction + 1)));

            // Check if this module would intersect with any of the existing modules
            bool bIntersects = false;
            for (const FBox& OccupiedBound : OccupiedBounds) {
                if (ModuleWorldBounds.Intersect(OccupiedBound)) {
                    // intersects. Do not spawn a module here
                    bIntersects = true;
                    break;
                }
            }
            if (bIntersects) {
                continue;
            }

            // We found a valid module. Use this
            OutAttachmentConfig.AttachedModule = TargetModule;
            OutAttachmentConfig.AttachedModuleDoorIndex = Index;
            OutAttachmentConfig.AttachedModuleWorldBounds = ModuleWorldBounds;
            OutAttachmentConfig.AttachedModuleTransform = ModuleTransform;
            bFoundValid = true;
            break;
        }
    }

    return bFoundValid;
}

FModuleBuildNodePtr USnapDungeonBuilder::BuildLayoutRecursive(const FModuleGrowthNode& GrowthNode,
                                                              TArray<FBox>& OccupiedBounds,
                                                              int32 DepthFromStart, int32 DesiredDepth,
                                                              bool bMainBranch, bool bForceIgnoreEndModule,
                                                              FSnapLayoutBuildState& RecursiveState) {
    if (RecursiveState.NumTries >= SnapConfig->MaxProcessingPower) {
        return nullptr;
    }
    RecursiveState.NumTries++;

    if (DepthFromStart > DesiredDepth) {
        return nullptr;
    }

    FModuleGrowthNode Top = GrowthNode;

    // Pick a door from this module to extend
    int32 BestValidMainBranchDifference = MAX_int32;
    FModuleBuildNodePtr BestBuildNode;

    int32 SnapModuleListLength = RecursiveState.ModuleInfoList.Num();

    TArray<int32> ShuffledIndices = FMathUtils::GetShuffledIndices(SnapModuleListLength, random);
    for (int si = 0; si < ShuffledIndices.Num(); si++) {
        int Index = ShuffledIndices[si];
        FSnapModuleInfoPtr Module = RecursiveState.ModuleInfoList[Index];

        bool bStartNode = bMainBranch && (DepthFromStart == 1);
        bool bEndNode = (DepthFromStart == DesiredDepth);

        if (bStartNode) {
            // This is a start node. Make sure we use a start module if specified
            if (SnapConfig->StartModules.Num() > 0 && !SnapConfig->StartModules.Contains(Module->ModuleAsset)) {
                // We cannot use this module in the start node
                continue;
            }
        }
        else if (bEndNode) {
            // This is the end node. Make sure we use only the specified modules
            TArray<TAssetSubclassOf<AActor>>& EndModules = bMainBranch
                                                               ? SnapConfig->EndModules
                                                               : SnapConfig->BranchEndModules;
            if (EndModules.Num() > 0 && !EndModules.Contains(Module->ModuleAsset)) {
                // We cannot use this module in the end node
                continue;
            }
        }
        else {
            // This is an intermediate node.  Make sure the module is defined in the list
            if (!SnapConfig->Modules.Contains(Module->ModuleAsset)) {
                // This module was specified in the modules list.  It was instead specified in the start / end list
                continue;
            }
        }

        FSnapAttachmentConfiguration AttachmentConfig;
        if (!FindAttachmentConfiguration(Module, Top.IncomingModule, Top.ModuleTransform, Top.IncomingModuleDoorIndex,
                                         OccupiedBounds, AttachmentConfig)) {
            continue;
        }

        FModuleBuildNodePtr BuildNode = MakeShareable(new FModuleBuildNode);
        BuildNode->AttachmentConfig = AttachmentConfig;
        BuildNode->IncomingDoorIndex = Top.IncomingModuleDoorIndex;
        BuildNode->Module = Module;

        if (DepthFromStart == DesiredDepth) {
            // This has to be the leaf node
            return BuildNode;
        }

        if (!BestBuildNode.IsValid()) {
            BestBuildNode = BuildNode;
        }

        // We found a valid module. Use this
        OccupiedBounds.Add(AttachmentConfig.AttachedModuleWorldBounds);

        int32 AttachmentDoorIndex = AttachmentConfig.AttachedModuleDoorIndex;

        // Extend from this door further
        for (int ExtensionDoorIndex = 0; ExtensionDoorIndex < Module->ConnectionTransforms.Num(); ExtensionDoorIndex++
        ) {
            const FTransform& ExtensionDoorTransform = Module->ConnectionTransforms[ExtensionDoorIndex];
            if (ExtensionDoorIndex == AttachmentDoorIndex && Top.IncomingModuleDoorIndex != -1) {
                // Don't want to extend from the door we came in through
                continue;
            }

            int32 ModuleCountContribution = 1;

            // Grow this branch further
            FModuleGrowthNode NextNode;
            NextNode.IncomingModuleDoorIndex = ExtensionDoorIndex;
            NextNode.ModuleTransform = AttachmentConfig.AttachedModuleTransform;
            NextNode.IncomingModule = Module;
            FModuleBuildNodePtr ExtensionNode = BuildLayoutRecursive(NextNode, OccupiedBounds,
                                                                     DepthFromStart + ModuleCountContribution,
                                                                     DesiredDepth,
                                                                     bMainBranch, false, RecursiveState);

            if (ExtensionNode.IsValid()) {
                int32 BranchLength = DepthFromStart + ExtensionNode->DepthFromLeaf;
                int32 ValidDistanceDifference = FMath::Abs(BranchLength - DesiredDepth);
                if (ValidDistanceDifference < BestValidMainBranchDifference || RecursiveState.bFoundBestBuild) {
                    BestValidMainBranchDifference = ValidDistanceDifference;
                    BuildNode->Extensions.Reset();
                    ExtensionNode->Parent = BuildNode;
                    BuildNode->Extensions.Add(ExtensionNode);
                    BuildNode->DepthFromLeaf = FMath::Max(BuildNode->DepthFromLeaf,
                                                          ExtensionNode->DepthFromLeaf + ModuleCountContribution);

                    BestBuildNode = BuildNode;
                }

                if (BranchLength >= DesiredDepth) {
                    // We found a branch with the desired length
                    RecursiveState.bFoundBestBuild = true;
                }

                if (RecursiveState.bFoundBestBuild) {
                    break;
                }
            }
        }

        // Remove it since we move out 
        OccupiedBounds.Remove(AttachmentConfig.AttachedModuleWorldBounds);

        if (RecursiveState.bFoundBestBuild) {
            break;
        }
    }

    return BestBuildNode;
}

void USnapDungeonBuilder::DestroyNonThemedDungeonImpl(UWorld* World) {
    UDungeonBuilder::DestroyNonThemedDungeonImpl(World);

    SnapModel = Cast<USnapDungeonModel>(model);
    SnapConfig = Cast<USnapDungeonConfig>(config);
}


void USnapDungeonBuilder::DrawDebugData(UWorld* InWorld, bool bPersistant /*= false*/, float lifeTime /*= 0*/) {
    if (!SnapModel) {
    }

}

TSubclassOf<UDungeonModel> USnapDungeonBuilder::GetModelClass() {
    return USnapDungeonModel::StaticClass();
}

TSubclassOf<UDungeonConfig> USnapDungeonBuilder::GetConfigClass() {
    return USnapDungeonConfig::StaticClass();
}

TSubclassOf<UDungeonToolData> USnapDungeonBuilder::GetToolDataClass() {
    return USnapDungeonToolData::StaticClass();
}

TSubclassOf<UDungeonQuery> USnapDungeonBuilder::GetQueryClass() {
    return USnapDungeonQuery::StaticClass();
}

bool USnapDungeonBuilder::ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint,
                                                   const FTransform& Transform, FQuat& OutRotationOffset) {
    return false;
}

bool USnapDungeonBuilder::SupportsProperty(const FName& PropertyName) const {
    if (PropertyName == "Themes") return false;
    if (PropertyName == "MarkerEmitters") return false;
    if (PropertyName == "EventListeners") return false;

    return true;
}

TSharedPtr<class FDungeonSceneProvider> USnapDungeonBuilder::CreateSceneProvider(
    UDungeonConfig* Config, ADungeon* pDungeon, UWorld* World) {
    return MakeShareable(new FPooledDungeonSceneProvider(pDungeon, World));
}

bool USnapDungeonBuilder::CanBuildDungeon(FString& OutMessage) {
    return true;
}

bool USnapDungeonBuilder::PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                                                const FPropSocket& socket) {
    return false;
}

FTransform USnapDungeonBuilder::PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                                      const FPropSocket& socket) {
    return FTransform::Identity;
}
