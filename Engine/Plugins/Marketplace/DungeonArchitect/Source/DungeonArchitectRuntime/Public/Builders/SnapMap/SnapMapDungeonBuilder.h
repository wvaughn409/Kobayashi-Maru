//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/SnapMapDungeonConfig.h"
#include "Core/DungeonBuilder.h"
#include "Core/DungeonModel.h"
#include "DungeonThemeAsset.h"
#include "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h"
#include "SnapMapDungeonBuilder.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SnapMapDungeonBuilderLog, Log, All);

class ADungeon;
class USnapMapDungeonConfig;
class USnapMapConnectionComponent;
class USnapMapDungeonModel;
class FDungeonSceneProvider;
class ULevelStreamingDynamic;
class USnapMapStreamingChunk;
class ASnapMapConnectionActor;
class USnapMapStreamingChunkActorData;
class ANavMeshBoundsVolume;

namespace SnapMapDiagnostics {
    class FDiagnostics;
}

namespace SnapMapGraph {
    typedef TSharedPtr<struct FModuleNode> FModuleNodePtr;
    typedef TSharedPtr<struct FModuleDoor> FModuleDoorPtr;
}


/**
* The snap map builder
*/
UCLASS()
class DUNGEONARCHITECTRUNTIME_API USnapMapDungeonBuilder : public UDungeonBuilder {
    GENERATED_UCLASS_BODY()

public:
    virtual void BuildNonThemedDungeonImpl(UWorld* World, TSharedPtr<FDungeonSceneProvider> SceneProvider) override;
    virtual void DestroyNonThemedDungeonImpl(UWorld* World) override;

    virtual void DrawDebugData(UWorld* InWorld, bool bPersistent = false, float LifeTime = -1.0f) override;
    virtual bool SupportsBackgroundTask() const override { return false; }
    virtual TSubclassOf<UDungeonModel> GetModelClass() override;
    virtual TSubclassOf<UDungeonConfig> GetConfigClass() override;
    virtual TSubclassOf<UDungeonToolData> GetToolDataClass() override;
    virtual TSubclassOf<UDungeonQuery> GetQueryClass() override;
    virtual bool ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint, const FTransform& Transform,
                                  FQuat& OutRotationOffset) override;
    virtual bool SupportsProperty(const FName& PropertyName) const override;
    virtual bool SupportsTheming() const override { return false; }
    virtual TSharedPtr<class FDungeonSceneProvider> CreateSceneProvider(UDungeonConfig* Config, ADungeon* pDungeon,
                                                                UWorld* World) override;
    virtual bool CanBuildDungeon(FString& OutMessage) override;
    virtual bool SupportsLevelStreaming() const override { return true; }

    static void GetSnapMapConnectionActors(ULevel* ModuleLevel, TArray<ASnapMapConnectionActor*>& OutConnectionActors);
    void SetDiagnostics(TSharedPtr<SnapMapDiagnostics::FDiagnostics> InDiagnostics);

    UFUNCTION(BlueprintCallable, Category = Dungeon)
    void BuildPreviewSnapLayout();

protected:
    virtual bool PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                               const FPropSocket& socket) override;
    virtual FTransform PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                     const FPropSocket& socket) override;

    void SerializeModuleGraph(SnapMapGraph::FModuleNodePtr InRootNode);

    void GenerateLevelStreamingModel(UWorld* World, SnapMapGraph::FModuleNodePtr RootNode);
    UDungeonStreamingChunk* GenerateLevelStreamingChunkRecursive(UWorld* World, UObject* ChunkOwner,
                                                                 SnapMapGraph::FModuleNodePtr Node,
                                                                 UDungeonStreamingChunk* IncomingChunk,
                                                                 TArray<UDungeonStreamingChunk*>& OutChunks,
                                                                 TSet<SnapMapGraph::FModuleNodePtr>& Visited);
    void ClearStreamingLevels(UWorld* World, bool bForceRemoveAllStreamingLevels);

    void OnChunkVisible(USnapMapStreamingChunk* Chunk);
    void OnChunkHidden(USnapMapStreamingChunk* Chunk);
    void OnChunkLoaded(USnapMapStreamingChunk* Chunk);

    void UpdateChunkDoorStates(USnapMapStreamingChunk* Chunk, ULevel* PersistentLevel);
    void DestroyChunkDoorActors(USnapMapStreamingChunk* Chunk);

    SnapMapGraph::FModuleNodePtr GenerateModuleNodeGraph(int32 InSeed);
    
protected:
    USnapMapDungeonModel* SnapMapModel;
    USnapMapDungeonConfig* SnapMapConfig;

    // Optional diagnostics for the dungeon flow editor. Will not be used in standalone builds
    TSharedPtr<SnapMapDiagnostics::FDiagnostics> Diagnostics;
};


DECLARE_DELEGATE_OneParam(FSnapChunkEvent, USnapMapStreamingChunk*);

UCLASS()
class DUNGEONARCHITECTRUNTIME_API USnapMapStreamingChunk : public UDungeonStreamingChunk {
    GENERATED_UCLASS_BODY()

public:
    FSnapChunkEvent OnChunkLoaded;
    FSnapChunkEvent OnChunkUnloaded;
    FSnapChunkEvent OnChunkVisible;
    FSnapChunkEvent OnChunkHidden;

    UPROPERTY()
    FTransform ModuleTransform;

public:
    //// UDungeonStreamingChunk Interface ////
    void HandleChunkVisible() override;
    void HandleChunkLoaded() override;
    void HandleChunkUnloaded() override;
    void HandleChunkHidden() override;
    void DestroyChunk(UWorld* InWorld) override;
    //// End of UDungeonStreamingChunk Interface ////

private:
    UPROPERTY()
    USnapMapStreamingChunkActorData* SerializedData;

};
