//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SimpleCity/SimpleCityModel.h"
#include "Core/DungeonBuilder.h"
#include "Core/DungeonModel.h"
#include "Core/Utils/PMRandom.h"
#include "DungeonThemeAsset.h"
#include "SimpleCityBuilder.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SimpleCityBuilderLog, Log, All);

class ADungeon;
class USimpleCityConfig;
class USimpleCityModel;
class USimpleCitySpatialConstraint3x3;

struct FLevelGrowthNode;
/**
*
*/
UCLASS(Experimental)
class DUNGEONARCHITECTRUNTIME_API USimpleCityBuilder : public UDungeonBuilder {
    GENERATED_BODY()

public:
    void BuildDungeonImpl(UWorld* World) override;
    void EmitDungeonMarkers_Implementation() override;
    void DrawDebugData(UWorld* InWorld, bool bPersistant = false, float lifeTime = -1.0f) override;
    bool SupportsBackgroundTask() const override { return false; }
    void MirrorDungeon() override;
    TSubclassOf<UDungeonModel> GetModelClass() override;
    TSubclassOf<UDungeonConfig> GetConfigClass() override;
    TSubclassOf<UDungeonToolData> GetToolDataClass() override;
    TSubclassOf<UDungeonQuery> GetQueryClass() override;
    bool ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint, const FTransform& Transform,
                                  FQuat& OutRotationOffset) override;
    void GetDefaultMarkerNames(TArray<FString>& OutMarkerNames) override;

private:
    void GenerateCityLayout();
    void FaceHouseTowardsRoad(FSimpleCityCell& Cell);

    FQuat GetRandomRotation();
    int GetRandomBlockSize();
    bool CanContainBiggerHouse(int x, int y, int w, int h);
    void InsertBiggerHouse(int x, int y, int w, int h, float Angle, const FString& MarkerName);

    void MakeRoad(int32 x, int32 y);
    void RemoveRoadEdges();

    bool IsStraightRoad(int x, int y);
    void RemoveRoadEdge(int x, int y);
    ESimpleCityCellType GetCellType(int x, int y);


protected:

    void MirrorDungeonWithVolume(ADungeonMirrorVolume* MirrorVolume) override;
    bool PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                               const FPropSocket& socket) override;
    FTransform PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                     const FPropSocket& socket) override;
    bool ProcessSpatialConstraint3x3(USimpleCitySpatialConstraint3x3* SpatialConstraint, const FTransform& Transform,
                                     FQuat& OutRotationOffset);

private:
    USimpleCityModel* CityModel;
    USimpleCityConfig* CityConfig;
};
