//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/DungeonBuilder.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"

#include "Components/ActorComponent.h"
#include "GridFlowBuilder.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(GridFlowBuilderLog, Log, All);

class ADungeon;
class ADungeonVolume;
class UGridFlowConfig;
class UGridFlowQuery;
class UGridFlowModel;

class UGridFlowTilemap;
struct FGridFlowTilemapEdge;

UCLASS(EarlyAccessPreview)
class DUNGEONARCHITECTRUNTIME_API UGridFlowBuilder : public UDungeonBuilder {
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
    bool PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                               const FPropSocket& socket) override;
    FTransform PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                     const FPropSocket& socket) override;
    virtual void ProcessThemeItemUserData(TSharedPtr<IDungeonMarkerUserData> UserData, AActor* SpawnedActor) override;


protected:
    bool ExecuteGraph();
    void EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, const FQuat& Rotation,
                      TSharedPtr<class IDungeonMarkerUserData> InUserData = nullptr);
    void EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, float Angle,
                      TSharedPtr<class IDungeonMarkerUserData> InUserData = nullptr);

    void EmitEdgeMarker(const FGridFlowTilemapEdge& Edge, const FVector& TileCoord,
                        const FVector& GridSize, UGridFlowTilemap* Tilemap);
private:
    UGridFlowModel* GridFlowModel = nullptr;
    UGridFlowConfig* GridFlowConfig = nullptr;
    UGridFlowQuery* GridFlowQuery = nullptr;
    FGridFlowAttributeList AttributeList;
};


class DUNGEONARCHITECTRUNTIME_API FGridFlowBuilderMarkerUserData : public IDungeonMarkerUserData {
public:
    FIntPoint TileCoord = FIntPoint::ZeroValue;
    bool bIsItem = false;
    FGridFlowItem Item;
};


UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class DUNGEONARCHITECTRUNTIME_API UDungeonGridFlowItemMetadataComponent : public UActorComponent {
    GENERATED_BODY()

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dungeon")
    FGridFlowItem Item;
};

