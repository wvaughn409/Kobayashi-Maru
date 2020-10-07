//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskAbstract_CreatePath.generated.h"

class UGridFlowAbstractGraph;
class FGridFlowAbstractGraphQuery;
struct FGridFlowAbstractNode;

UCLASS(Meta = (AbstractTask, Title = "Create Path", Tooltip = "Create a path on an existing network", MenuPriority =
    1200))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskAbstract_CreatePath : public UGridFlowExecTask {
    GENERATED_BODY()

    /**
        The minimum path size

        Variable Name: MinPathSize
    */
    UPROPERTY(EditAnywhere, Category = "Create Path")
    int32 MinPathSize = 3;

    /**
        The maximum path size

        Variable Name: MaxPathSize
    */
    UPROPERTY(EditAnywhere, Category = "Create Path")
    int32 MaxPathSize = 5;

    /**
        The name of the path.  This name can be used later to reference this path

        Variable Name: PathName
    */
    UPROPERTY(EditAnywhere, Category = "Create Path")
    FString PathName = "branch";

    /**
        The color of the nodes in this path

        Variable Name: [N/A]
    */
    UPROPERTY(EditAnywhere, Category = "Create Path")
    FLinearColor NodeColor = FLinearColor(1.0f, 0.5f, 0.0f);

    /**
        The name of an existing path that this branch is going to grow out of

        Variable Name: StartFromPath
    */
    UPROPERTY(EditAnywhere, Category = "Create Path")
    FString StartFromPath = "main";

    /**
        The name of an existing path that this branch should connect back to.
        Leave it empty if the path doesn't connect back to anything

        Variable Name: EndOnPath
    */
    UPROPERTY(EditAnywhere, Category = "Create Path")
    FString EndOnPath = "";


public:
    void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;
    bool GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) override;
    bool SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) override;
    bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

private:
    struct FStaticGrowthState {
        UGridFlowAbstractGraph* Graph = nullptr;
        FGridFlowAbstractGraphQuery* GraphQuery = nullptr;
        FGridFlowAbstractNode* HeadNode = nullptr;
        TArray<FGridFlowAbstractNode*> SinkNodes;
        const FRandomStream* Random = nullptr;
    };

    struct FGrowthState {
        TArray<FGuid> Path;
        TSet<FGuid> Visited;
        FGridFlowAbstractNode* TailNode = nullptr;
    };

    bool GrowPath(FGridFlowAbstractNode* CurrentNode, const FStaticGrowthState& StaticState, FGrowthState& State);
    void FinalizePath(const FStaticGrowthState& StaticState, const FGrowthState& State);
};
