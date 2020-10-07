//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskTilemap_Optimize.generated.h"

UCLASS(Meta = (TilemapTask, Title = "Optimize Tilemap", Tooltip = "Optimize Tilemap", MenuPriority = 2500))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskTilemap_Optimize : public UGridFlowExecTask {
    GENERATED_BODY()

public:
    /**
        If the distance of a tile from the nearest layout tile is
        greater than the specified amount, it is discarded

        Variable Name: DiscardDistanceFromLayout
    */
    UPROPERTY(EditAnywhere, Category = "Optimize")
    int32 DiscardDistanceFromLayout = 3;

public:
    void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;
    bool GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) override;
    bool SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) override;
    bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

private:
    void DiscardDistantTiles(UGridFlowTilemap* Tilemap);
};
