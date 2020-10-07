//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/SceneProviders/PooledDungeonSceneProvider.h"

#include "Core/Actors/DungeonActorTemplate.h"
#include "Core/Dungeon.h"
#include "Core/SceneProviders/SceneProviderCommand.h"
#include "Core/Utils/DungeonModelHelper.h"

#include "EngineUtils.h"

DEFINE_LOG_CATEGORY(PooledDungeonSceneProvider);

void FPooledDungeonSceneProvider::OnDungeonBuildStart(UDungeonConfig* Config) {
    FDungeonSceneProvider::OnDungeonBuildStart(Config);

    NodeActorPool.Reset();
    const FName DungeonTag = UDungeonModelHelper::GetDungeonIdTag(Dungeon);

    // Collect all actors that have a "Dungeon" tag
    for (TActorIterator<AActor> ActorItr(World); ActorItr; ++ActorItr) {
        AActor* Actor = *ActorItr;

        FName NodeId;
        bool bFoundDungeonTag = UDungeonModelHelper::GetNodeId(DungeonTag, Actor, NodeId);
        if (!bFoundDungeonTag) {
            // This actor does not belong to the dungeon
            continue;
        }

        if (Actor->Tags.Contains(SceneProviderCommand::TagComplexActor)) {
            // We don't want to reuse a complex actor.  Instead we will create new ones and these old ones
            TSharedPtr<SceneProviderCommand> Command = MakeShareable(new SceneProviderCommand_DestroyActor(Actor));
            Command->ExecutionPriority = MAX_int32;
            GameThreadCommands.Add(Command);
            continue;
        }

        TArray<AActor*>& ActorList = NodeActorPool.FindOrAdd(NodeId);
        ActorList.Add(Actor);
    }
}

void FPooledDungeonSceneProvider::OnDungeonBuildStop() {
    // Destroy every unused object in the actor pool, since the dungeon building has ended
    TArray<TArray<AActor*>> ActorValues;
    NodeActorPool.GenerateValueArray(ActorValues);
    for (TArray<AActor*> ActorArray : ActorValues) {
        for (AActor* Actor : ActorArray) {
            TSharedPtr<SceneProviderCommand> Command = MakeShareable(new SceneProviderCommand_DestroyActor(Actor));
            GameThreadCommands.Add(Command);
        }
    }

    NodeActorPool.Reset();

    // Sort the game commands based on priority
    ApplyExecutionWeights();
    GameThreadCommands.Sort(SceneProviderCommand::WeightSortPredicate);
}

AActor* FPooledDungeonSceneProvider::ReuseFromPool(const FName& NodeId, const FTransform& InTransform) {
    // Check if we have a free actor of this type in the pool
    if (NodeActorPool.Contains(NodeId)) {
        TArray<AActor*>& ActorList = NodeActorPool[NodeId];
        if (ActorList.Num() > 0) {
            // A free actor is available in the pool. 
            // Try to find an actor that shares the same transform
            for (int i = 0; i < ActorList.Num(); i++) {
                AActor* Actor = ActorList[i];
                if (Actor->GetTransform().Equals(InTransform)) {
                    ActorList.RemoveAtSwap(i);
                    return Actor;
                }
            }

            // We did not find a free actor that has the requested transform
            // Grab the first free actor and remove it from the pool
            int32 Idx = ActorList.Num() - 1;
            AActor* Actor = ActorList[Idx];
            ActorList.RemoveAtSwap(Idx);
            return Actor;
        }
    }

    // No free objects of this type in the pool
    return nullptr;
}

void FPooledDungeonSceneProvider::AddStaticMesh(UDungeonMesh* Mesh, const FDungeonSceneProviderContext& Context) {
    if (Mesh->StaticMesh == nullptr) return;


    TSharedPtr<SceneProviderCommand> Command;

    // Check if we have a free actor of this type in the pool. If so use it.
    if (AActor* Actor = ReuseFromPool(Context.NodeId, Context.transform)) {
        Command = MakeShareable(new SceneProviderCommand_ReuseStaticMesh(Dungeon, Context, Actor, Mesh->StaticMesh));
    }
    else {
        // No free actor exists.  Create a new actor later in the game thread
        Command = MakeShareable(new SceneProviderCommand_CreateMesh(Dungeon, Context, Mesh));
    }
    GameThreadCommands.Add(Command);
}

void FPooledDungeonSceneProvider::AddLight(UPointLightComponent* LightTemplate,
                                           const FDungeonSceneProviderContext& Context) {
    // Check if we have a free actor of this type in the pool. If so use it.
    TSharedPtr<SceneProviderCommand> Command;
    if (AActor* Actor = ReuseFromPool(Context.NodeId, Context.transform)) {
        Command = MakeShareable(new SceneProviderCommand_ReuseLight(Dungeon, Context, Actor, LightTemplate));
    }
    else {
        // No free actor exists.  Create a new actor later in the game thread
        Command = MakeShareable(new SceneProviderCommand_AddLight(Dungeon, Context, LightTemplate));
    }
    GameThreadCommands.Add(Command);
}

void FPooledDungeonSceneProvider::AddParticleSystem(UParticleSystem* ParticleTemplate,
                                                    const FDungeonSceneProviderContext& Context) {
    // Check if we have a free actor of this type in the pool. If so use it.
    TSharedPtr<SceneProviderCommand> Command;
    if (AActor* Actor = ReuseFromPool(Context.NodeId, Context.transform)) {
        Command = MakeShareable(
            new SceneProviderCommand_ReuseParticleSystem(Dungeon, Context, Actor, ParticleTemplate));
    }
    else {
        // No free actor exists.  Create a new actor later in the game thread
        Command = MakeShareable(new SceneProviderCommand_AddParticleSystem(Dungeon, Context, ParticleTemplate));
    }
    GameThreadCommands.Add(Command);
}

void FPooledDungeonSceneProvider::AddActorFromTemplate(UClass* ClassTemplate,
                                                       const FDungeonSceneProviderContext& Context) {
    // Check if we have a free actor of this type in the pool. If so use it.
    TSharedPtr<SceneProviderCommand> Command;
    if (AActor* Actor = ReuseFromPool(Context.NodeId, Context.transform)) {
        Command = MakeShareable(new SceneProviderCommand_ReuseActorTemplate(Dungeon, Context, Actor, ClassTemplate));
    }
    else {
        Command = MakeShareable(new SceneProviderCommand_AddActor(Dungeon, Context, ClassTemplate));
    }
    GameThreadCommands.Add(Command);
}

void FPooledDungeonSceneProvider::AddClonedActor(UDungeonActorTemplate* ActorTemplate,
                                                 const FDungeonSceneProviderContext& Context) {
    // Check if we have a free actor of this type in the pool. If so use it.
    TSharedPtr<SceneProviderCommand> Command;
    if (AActor* Actor = ReuseFromPool(Context.NodeId, Context.transform)) {
        Command = MakeShareable(new SceneProviderCommand_ReuseClonedActor(Dungeon, Context, Actor, ActorTemplate));
    }
    else {
        Command = MakeShareable(new SceneProviderCommand_CloneActor(Dungeon, Context, ActorTemplate));
    }
    GameThreadCommands.Add(Command);
}

void FPooledDungeonSceneProvider::AddGroupActor(const TArray<FName>& ActorNodeIds,
                                                const FDungeonSceneProviderContext& Context) {
    // Check if we have a free actor of this type in the pool. If so use it.
    AActor* Actor = ReuseFromPool(Context.NodeId, Context.transform);
    if (!Actor) {
        TSharedPtr<SceneProviderCommand> Command = MakeShareable(
            new SceneProviderCommand_CreateGroupActor(Dungeon, Context, ActorNodeIds));
        GameThreadCommands.Add(Command);
    }
}

void FPooledDungeonSceneProvider::ExecuteCustomCommand(TSharedPtr<SceneProviderCommand> SceneCommand) {
    GameThreadCommands.Add(SceneCommand);
}

UWorld* FPooledDungeonSceneProvider::GetDungeonWorld() {
    return World;
}
