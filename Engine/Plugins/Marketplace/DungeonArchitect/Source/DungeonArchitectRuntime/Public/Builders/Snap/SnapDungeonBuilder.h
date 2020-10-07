//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/Snap/SnapDungeonModel.h"
#include "Core/DungeonBuilder.h"
#include "Core/DungeonModel.h"
#include "Core/Utils/PMRandom.h"
#include "DungeonThemeAsset.h"

#include "Components/ChildActorComponent.h"
#include "SnapDungeonBuilder.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SnapDungeonBuilderLog, Log, All);

class ADungeon;
class USnapDungeonConfig;
class USnapDungeonModel;
class FDungeonSceneProvider;


/*
  Contains all the necessary information about the module to build a layout (without actually needing to spawn a module)
  This helps in layout building as we are just dealing with data and not actual module spawned instances
  This is generated for each registered module class before the layout generation process starts
*/
struct FSnapModuleInfo {
    FSnapModuleInfo() : ModuleClass(nullptr) {
    }

    /** The actor class that represents this module */
    TSubclassOf<AActor> ModuleClass;

    /** The asset reference of the module blueprint */
    TAssetSubclassOf<AActor> ModuleAsset;

    /** A unique ID assigned to this actor module (unique to the class). Will be different on each build */
    FGuid ModuleGuid;

    /** The bounds of the actor */
    FBox Bounds;

    /** The local transforms of each SnapConnection child actor in the module actor */
    TArray<FTransform> ConnectionTransforms;

};

typedef TSharedPtr<FSnapModuleInfo> FSnapModuleInfoPtr;

typedef TSharedPtr<struct FModuleBuildNode> FModuleBuildNodePtr;

/**
* The snap builder
*/
UCLASS(Experimental)
class DUNGEONARCHITECTRUNTIME_API USnapDungeonBuilder : public UDungeonBuilder {
    GENERATED_UCLASS_BODY()

public:
    void BuildNonThemedDungeonImpl(UWorld* World, TSharedPtr<FDungeonSceneProvider> SceneProvider) override;
    void DestroyNonThemedDungeonImpl(UWorld* World) override;

    void DrawDebugData(UWorld* InWorld, bool bPersistant = false, float lifeTime = -1.0f) override;
    bool SupportsBackgroundTask() const override { return false; }
    TSubclassOf<UDungeonModel> GetModelClass() override;
    TSubclassOf<UDungeonConfig> GetConfigClass() override;
    TSubclassOf<UDungeonToolData> GetToolDataClass() override;
    TSubclassOf<UDungeonQuery> GetQueryClass() override;
    bool ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint, const FTransform& Transform,
                                  FQuat& OutRotationOffset) override;
    bool SupportsProperty(const FName& PropertyName) const override;
    bool SupportsTheming() const override { return false; }
    TSharedPtr<class FDungeonSceneProvider> CreateSceneProvider(UDungeonConfig* Config, ADungeon* pDungeon,
                                                                UWorld* World) override;
    bool CanBuildDungeon(FString& OutMessage) override;

    static void GetSnapConnectionChildActors(USceneComponent* Component,
                                             TArray<UChildActorComponent*>& OutConnectionComponents);

protected:
    bool PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                               const FPropSocket& socket) override;
    FTransform PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                     const FPropSocket& socket) override;

    static FSnapModuleInfoPtr GenerateModuleInfo(TAssetSubclassOf<AActor> ModuleAsset, UWorld* World);

    FTransform FindAttachmentTransform(const FTransform& ParentModuleTransform, const FTransform& IncomingDoorTransform,
                                       const FTransform& AttachmentDoorTransform);
    void GenerateConnectionList(FModuleBuildNodePtr RootNode);

    bool FindAttachmentConfiguration(FSnapModuleInfoPtr TargetModule, FSnapModuleInfoPtr IncomingModule,
                                     const FTransform& IncomingModuleTransform,
                                     int32 IncomingDoorIndex, const TArray<FBox>& OccupiedBounds,
                                     struct FSnapAttachmentConfiguration& OutAttachmentConfig);

    FModuleBuildNodePtr BuildLayoutRecursive(const struct FModuleGrowthNode& GrowthNode, TArray<FBox>& OccupiedBounds,
                                             int32 DepthFromStart, int32 DesiredDepth,
                                             bool bMainBranch, bool bForceIgnoreEndModule,
                                             struct FSnapLayoutBuildState& RecursiveState);

    template <typename T>
    T* GetRandomObject(TArray<T*> Array, T* Ignore) {
        while (Array.Num() > 0) {
            int32 Len = Array.Num();
            T* Element = Array[random.RandRange(0, Len - 1)];
            if (Element != Ignore) {
                return Element;
            }
            Array.Remove(Element);
        }
        return nullptr;
    }

protected:
    USnapDungeonModel* SnapModel;
    USnapDungeonConfig* SnapConfig;
};
