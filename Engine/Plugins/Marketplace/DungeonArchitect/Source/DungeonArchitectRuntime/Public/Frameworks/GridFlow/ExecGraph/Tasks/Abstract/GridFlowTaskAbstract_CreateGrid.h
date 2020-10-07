//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskAbstract_CreateGrid.generated.h"

UCLASS(Meta = (AbstractTask, Title="Create Grid", Tooltip="Create a grid to work with", MenuPriority = 1000))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskAbstract_CreateGrid : public UGridFlowExecTask {
    GENERATED_BODY()

public:
    /** 
        The size of the initial layout grid 

        Variable Name: GridSize
    */
    UPROPERTY(EditAnywhere, Category = "Create Grid")
    FIntPoint GridSize = FIntPoint(6, 5);

    /**
        Controls how far the nodes are. Only for preview purpose 

        Variable Name: [N/A]
    */
    UPROPERTY(EditAnywhere, Category = "Preview")
    int SeparationDistance = 120;

public:
    void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;
    bool GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) override;
    bool SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) override;
    bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

};
