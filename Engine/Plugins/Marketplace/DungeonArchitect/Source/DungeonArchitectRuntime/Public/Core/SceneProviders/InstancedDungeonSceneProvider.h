//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/SceneProviders/PooledDungeonSceneProvider.h"

class ADungeonInstancedMeshActor;

struct InstanceMeshContext : public FGCObject {
    InstanceMeshContext() : InstancedActor(nullptr), Dungeon(nullptr) {
    }

    ADungeonInstancedMeshActor* InstancedActor;
    ADungeon* Dungeon;

    void AddReferencedObjects(FReferenceCollector& Collector) override {
        Collector.AddReferencedObject(Dungeon);
        Collector.AddReferencedObject(InstancedActor);
    }
};


/** Pools the actors in the scene and reuses them if possible, while rebuilding */
class DUNGEONARCHITECTRUNTIME_API FInstancedDungeonSceneProvider : public FPooledDungeonSceneProvider {
public:
    FInstancedDungeonSceneProvider(ADungeon* pDungeon, UWorld* pWorld) : FPooledDungeonSceneProvider(pDungeon, pWorld) {
    }

    virtual ~FInstancedDungeonSceneProvider() {
    }

    void OnDungeonBuildStart(UDungeonConfig* Config) override;
    void OnDungeonBuildStop() override;
    void AddStaticMesh(UDungeonMesh* Mesh, const FDungeonSceneProviderContext& SceneProviderContext) override;

private:
    TSharedPtr<InstanceMeshContext> Context;

};
