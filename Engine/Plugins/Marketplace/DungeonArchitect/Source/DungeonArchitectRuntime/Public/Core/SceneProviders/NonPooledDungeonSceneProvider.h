//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/SceneProviders/DungeonSceneProvider.h"

DECLARE_LOG_CATEGORY_EXTERN(NonPooledDungeonSceneProvider, Log, All);


/** Pools the actors in the scene and reuses them if possible, while rebuilding */
class DUNGEONARCHITECTRUNTIME_API FNonPooledDungeonSceneProvider : public FDungeonSceneProvider {
public:
    FNonPooledDungeonSceneProvider(ADungeon* pDungeon, UWorld* pWorld) : FDungeonSceneProvider(pDungeon),
                                                                         World(pWorld) {
    }

    virtual ~FNonPooledDungeonSceneProvider() {
    }

    void OnDungeonBuildStart(UDungeonConfig* Config) override;
    void OnDungeonBuildStop() override;
    void AddStaticMesh(UDungeonMesh* Mesh, const FDungeonSceneProviderContext& Context) override;
    void AddLight(UPointLightComponent* LightTemplate, const FDungeonSceneProviderContext& Context) override;
    void AddParticleSystem(UParticleSystem* ParticleTemplate, const FDungeonSceneProviderContext& Context) override;
    void AddActorFromTemplate(UClass* ClassTemplate, const FDungeonSceneProviderContext& Context) override;
    void AddClonedActor(UDungeonActorTemplate* ActorTemplate, const FDungeonSceneProviderContext& Context) override;
    void AddGroupActor(const TArray<FName>& ActorNodeIds, const FDungeonSceneProviderContext& Context) override;
    void ExecuteCustomCommand(TSharedPtr<SceneProviderCommand> SceneCommand) override;

    virtual UWorld* GetDungeonWorld() override;

protected:
    UWorld* World;
};
