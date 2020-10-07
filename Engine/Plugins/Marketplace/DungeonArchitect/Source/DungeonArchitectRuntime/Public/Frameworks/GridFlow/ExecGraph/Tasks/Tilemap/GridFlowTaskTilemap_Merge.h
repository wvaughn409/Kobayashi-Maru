//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskTilemap_Merge.generated.h"

UCLASS(Meta = (TilemapTask, Title = "Merge Tilemaps", Tooltip = "Merge Tilemaps", MenuPriority = 2400))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskTilemap_Merge : public UGridFlowExecTask {
    GENERATED_BODY()
public:


public:
    virtual void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;
};
