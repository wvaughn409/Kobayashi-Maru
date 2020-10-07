//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/SceneProviders/InstancedDungeonSceneProvider.h"

#include "Core/Actors/DungeonInstancedMeshActor.h"
#include "Core/Dungeon.h"
#include "Core/SceneProviders/SceneProviderCommand.h"
#include "Core/Utils/DungeonModelHelper.h"

const FName InstancedActorTag("DUNGEON-INSTANCED-ACTOR");

class SceneProviderCommand_InstanceMeshBase : public SceneProviderCommand {
public:
    SceneProviderCommand_InstanceMeshBase(TSharedPtr<InstanceMeshContext> InISMContext,
                                          const FDungeonSceneProviderContext& SceneContext)
        : SceneProviderCommand(InISMContext->Dungeon, SceneContext), ISMContext(InISMContext) {
    }

protected:
    bool IsValid() {
        return (ISMContext.IsValid() && ISMContext->InstancedActor);
    }

protected:
    TSharedPtr<InstanceMeshContext> ISMContext;
};


class SceneProviderCommand_InstanceMesh_FindInstancedActor : public SceneProviderCommand_InstanceMeshBase {
public:
    SceneProviderCommand_InstanceMesh_FindInstancedActor(TSharedPtr<InstanceMeshContext> pContext,
                                                         const FDungeonSceneProviderContext& SceneContext)
        : SceneProviderCommand_InstanceMeshBase(pContext, SceneContext) {
    }

    void ExecuteImpl(UWorld* World) override {
        // Search for an existing actor that holds the instanced static meshes
        const FName DungeonTag = UDungeonModelHelper::GetDungeonIdTag(Dungeon);
        ADungeonInstancedMeshActor* InstancedActor = nullptr;
        for (TObjectIterator<AActor> ActorItr; ActorItr; ++ActorItr) {
            if (!ActorItr->IsValidLowLevel() || ActorItr->IsPendingKill()) continue;
            if (ActorItr->ActorHasTag(DungeonTag) && ActorItr->ActorHasTag(InstancedActorTag)) {
                ADungeonInstancedMeshActor* InstancedActorPtr = Cast<ADungeonInstancedMeshActor>(*ActorItr);
                if (InstancedActorPtr && !InstancedActorPtr->IsPendingKill()) {
                    InstancedActor = InstancedActorPtr;
                    break;
                }
            }
        }

        if (!InstancedActor) {
            FActorSpawnParameters SpawnParams;
            SpawnParams.OverrideLevel = Dungeon ? Dungeon->GetLevel() : nullptr;
            InstancedActor = World->SpawnActor<ADungeonInstancedMeshActor>(SpawnParams);
            InstancedActor->Tags.Add(DungeonTag);
            InstancedActor->Tags.Add(InstancedActorTag);
            MoveToFolder(InstancedActor);
        }


        ISMContext->InstancedActor = InstancedActor;

    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        ExecutionPriority = -MAX_int32;
    }
};


class SceneProviderCommand_InstanceMesh_OnStart : public SceneProviderCommand_InstanceMeshBase {
public:
    SceneProviderCommand_InstanceMesh_OnStart(TSharedPtr<InstanceMeshContext> InISMContext,
                                              const FDungeonSceneProviderContext& SceneContext)
        : SceneProviderCommand_InstanceMeshBase(InISMContext, SceneContext) {
    }

    void ExecuteImpl(UWorld* World) override {
        if (!IsValid()) { return; }
        ISMContext->InstancedActor->OnBuildStart();
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        ExecutionPriority = -MAX_int32 + 1;
    }
};

class SceneProviderCommand_InstanceMesh_OnStop : public SceneProviderCommand_InstanceMeshBase {
public:
    SceneProviderCommand_InstanceMesh_OnStop(TSharedPtr<InstanceMeshContext> InISMContext,
                                             const FDungeonSceneProviderContext& SceneContext)
        : SceneProviderCommand_InstanceMeshBase(InISMContext, SceneContext) {
    }

    void ExecuteImpl(UWorld* World) override {
        if (!IsValid()) { return; }
        ISMContext->InstancedActor->OnBuildStop();
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        ExecutionPriority = MAX_int32;
    }
};

class SceneProviderCommand_InstanceMesh_AddMeshInstance : public SceneProviderCommand_InstanceMeshBase {
public:
    SceneProviderCommand_InstanceMesh_AddMeshInstance(TSharedPtr<InstanceMeshContext> InISMContext,
                                                      const FDungeonSceneProviderContext& SceneContext,
                                                      UDungeonMesh* pMesh, const FTransform& pTransform)
        : SceneProviderCommand_InstanceMeshBase(InISMContext, SceneContext), Mesh(pMesh), Transform(pTransform) {

    }

    void ExecuteImpl(UWorld* World) override {
        if (!IsValid()) { return; }
        ISMContext->InstancedActor->AddMeshInstance(Mesh, Transform);
    }

    void UpdateExecutionPriority(const FVector& BuildPosition) override {
        UpdateExecutionPriorityByDistance(BuildPosition, Transform);
    }

private:
    UDungeonMesh* Mesh;
    FTransform Transform;
};


void FInstancedDungeonSceneProvider::OnDungeonBuildStart(UDungeonConfig* Config) {
    FPooledDungeonSceneProvider::OnDungeonBuildStart(Config);
    Context = MakeShareable(new InstanceMeshContext());
    Context->Dungeon = Dungeon;
}

void FInstancedDungeonSceneProvider::OnDungeonBuildStop() {
    FPooledDungeonSceneProvider::OnDungeonBuildStop();

    FDungeonSceneProviderContext SceneContext;

    // Insert the starting commands
    GameThreadCommands.Insert(
        MakeShareable(new SceneProviderCommand_InstanceMesh_FindInstancedActor(Context, SceneContext)), 0);
    GameThreadCommands.Insert(MakeShareable(new SceneProviderCommand_InstanceMesh_OnStart(Context, SceneContext)), 1);

    // Notify the creation has ended, as the last command
    GameThreadCommands.Add(MakeShareable(new SceneProviderCommand_InstanceMesh_OnStop(Context, SceneContext)));

    Context = nullptr;
}

void FInstancedDungeonSceneProvider::AddStaticMesh(UDungeonMesh* Mesh,
                                                   const FDungeonSceneProviderContext& SceneProviderContext) {
    GameThreadCommands.Add(MakeShareable(
        new SceneProviderCommand_InstanceMesh_AddMeshInstance(Context, SceneProviderContext, Mesh,
                                                              SceneProviderContext.transform)));
}
