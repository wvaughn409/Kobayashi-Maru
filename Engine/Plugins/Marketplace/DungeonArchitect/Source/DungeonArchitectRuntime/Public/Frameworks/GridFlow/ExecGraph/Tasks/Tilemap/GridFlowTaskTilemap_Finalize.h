//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskTilemap_Finalize.generated.h"

struct FGridFlowTilemapCell;
class UGridFlowTilemap;
class UGridFlowAbstractGraph;

UCLASS(Meta = (TilemapTask, Title = "Finalize Tilemap", Tooltip = "Finalize Tilemap", MenuPriority = 2600))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskTilemap_Finalize : public UGridFlowExecTask {
    GENERATED_BODY()
public:
    /**
        Debug: Show tiles that are not reachable due to overlays blocking them

        Variable Name: [N/A]
    */
    UPROPERTY(EditAnywhere, Category = "Debug")
    bool bDebugUnwalkableCells = false;

public:
    void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;

private:
    TArray<FGridFlowTilemapCell*> FilterWalkablePath(const TArray<FGridFlowTilemapCell*>& Cells);
    void UpdateLayoutTilemapMetadata(UGridFlowAbstractGraph* InGraph, UGridFlowTilemap* InTilemap);
};
