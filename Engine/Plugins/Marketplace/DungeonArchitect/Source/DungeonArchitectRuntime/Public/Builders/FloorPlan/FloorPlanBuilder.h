//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/FloorPlan/FloorPlanModel.h"
#include "Core/DungeonBuilder.h"
#include "FloorPlanBuilder.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(FloorPlanBuilderLog, Log, All);

class ADungeon;
class ADungeonVolume;
class UFloorPlanConfig;

/**
*
*/
UCLASS(Experimental)
class DUNGEONARCHITECTRUNTIME_API UFloorPlanBuilder : public UDungeonBuilder {
    GENERATED_BODY()

public:
    void BuildDungeonImpl(UWorld* World) override;
    void EmitDungeonMarkers_Implementation() override;
    void DrawDebugData(UWorld* InWorld, bool bPersistant = false, float lifeTime = -1.0f) override;
    bool SupportsBackgroundTask() const override { return false; }
    TSubclassOf<UDungeonModel> GetModelClass() override;
    TSubclassOf<UDungeonConfig> GetConfigClass() override;
    TSubclassOf<UDungeonToolData> GetToolDataClass() override;
    TSubclassOf<UDungeonQuery> GetQueryClass() override;
    bool ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint, const FTransform& Transform,
                                  FQuat& OutRotationOffset) override;
    void GetDefaultMarkerNames(TArray<FString>& OutMarkerNames) override;

protected:
    bool PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                               const FPropSocket& socket) override;
    FTransform PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                     const FPropSocket& socket) override;

private:
    void BuildLayout();
    void SplitChunk(FloorChunkPtr Chunk, FloorChunkPtr OutLeft, FloorChunkPtr OutRight, FloorChunkPtr OutHallway);
    void SplitChunk(FloorChunkPtr Chunk, FloorChunkPtr OutLeft, FloorChunkPtr OutRight);
    void EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, const FQuat& Rotation);
    void EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, float Angle);
    void EmitSeparatorMarkers(const FString& WallMarkerName, const FString& SepratorMarkerName,
                              const FVector& GridSize);
    bool VolumeEncompassesPoint(ADungeonVolume* Volume, const FIntVector& GridPoint);
    void GetVolumeCells(ADungeonVolume* Volume, int32 z, TArray<FIntVector>& OutCells);
    void CreateDoors(int z);

private:
    UFloorPlanModel* floorPlanModel;
    UFloorPlanConfig* floorPlanConfig;
    FloorChunkDBPtr ChunkDB;
    FloorDoorManager DoorManager;
    FRandomStream Random;

    TSet<FloorChunkId> Visited;
};
