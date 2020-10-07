//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/SceneProviders/DungeonSceneProviderContext.h"
#include "Core/SceneProviders/SceneProviderCommand.h"

#include "Components/PointLightComponent.h"

DECLARE_LOG_CATEGORY_EXTERN(DungeonSceneProvider, Log, All);

class UDungeonActorTemplate;

class DUNGEONARCHITECTRUNTIME_API FDungeonSceneProvider {
public:
    FDungeonSceneProvider() : Dungeon(nullptr), BuildPriorityLocation(FVector::ZeroVector),
                              CurrentGTCommandExecutionIndex(0) {
    }

    FDungeonSceneProvider(ADungeon* pDungeon);

    virtual ~FDungeonSceneProvider() {
    }

    virtual void OnDungeonBuildStart(UDungeonConfig* Config);

    virtual void OnDungeonBuildStop() {
    }

    virtual void AddStaticMesh(UDungeonMesh* Mesh, const FDungeonSceneProviderContext& Context);
    virtual void AddLight(UPointLightComponent* LightTemplate, const FDungeonSceneProviderContext& Context);
    virtual void AddParticleSystem(UParticleSystem* ParticleTemplate, const FDungeonSceneProviderContext& Context);
    virtual void AddActorFromTemplate(UClass* ClassTemplate, const FDungeonSceneProviderContext& Context);
    virtual void AddClonedActor(UDungeonActorTemplate* ActorTemplate, const FDungeonSceneProviderContext& Context);
    virtual void AddGroupActor(const TArray<FName>& ActorNodeIds, const FDungeonSceneProviderContext& Context);
    virtual void ProcessUnsupportedObject(UObject* Object, const FDungeonSceneProviderContext& Context);
    virtual void ExecuteCustomCommand(TSharedPtr<SceneProviderCommand> SceneCommand);

    virtual UWorld* GetDungeonWorld() = 0;

    // Run all the queued commands. This will be called from the game thread. The commands might have been inserted from the background thread
    void RunGameThreadCommands(float MaxBuildTimePerFrameMs);
    bool IsRunningGameThreadCommands() const;
    void SetBuildPriorityLocation(const FVector& Location);

    void ApplyExecutionWeights();

protected:
    ADungeon* Dungeon;

    UDungeonConfig* LastBuildConfig;

    // The location to start building from and spreading out from here, while building asynchronously
    FVector BuildPriorityLocation;

    // Commands to be run in the game thread. Push a command here if we cannot perform a specific tasks in the background thread
    TArray<TSharedPtr<SceneProviderCommand>> GameThreadCommands;

private:
    int32 CurrentGTCommandExecutionIndex;
};

class DUNGEONARCHITECTRUNTIME_API FDefaultDungeonSceneProvider : public FDungeonSceneProvider {
public:
    FDefaultDungeonSceneProvider(ADungeon* pDungeon, UWorld* pWorld) : FDungeonSceneProvider(pDungeon), World(pWorld) {
    }

    UWorld* GetDungeonWorld() override;

private:
    UWorld* World;
};

/** Ignores all requests to create objects on the scene */
class DUNGEONARCHITECTRUNTIME_API FNullDungeonSceneProvider : public FDefaultDungeonSceneProvider {
public:
    FNullDungeonSceneProvider(ADungeon* pDungeon, UWorld* World) : FDefaultDungeonSceneProvider(pDungeon, World) {
    }

    void AddStaticMesh(UDungeonMesh* Mesh, const FDungeonSceneProviderContext& Context) override {
    }

    void AddLight(UPointLightComponent* LightTemplate, const FDungeonSceneProviderContext& Context) override {
    }

    void AddParticleSystem(UParticleSystem* ParticleTemplate, const FDungeonSceneProviderContext& Context) override {
    }

    void AddActorFromTemplate(UClass* ClassTemplate, const FDungeonSceneProviderContext& Context) override {
    }
};
