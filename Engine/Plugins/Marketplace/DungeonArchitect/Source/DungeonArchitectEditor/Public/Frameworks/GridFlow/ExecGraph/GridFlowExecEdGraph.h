//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraph.h"
#include "GridFlowExecEdGraph.generated.h"

class UGridFlowExecScript;
class UGridFlowExecTask;
class UGridFlowExecEdGraphNode_Task;
class UGridFlowExecEdGraphNode_Result;
class UGridFlowExecScriptGraph;

UCLASS()
class DUNGEONARCHITECTEDITOR_API UGridFlowExecEdGraph : public UEdGraph {
    GENERATED_UCLASS_BODY()

public:
    UGridFlowExecEdGraphNode_Task* AddNewNode(UGridFlowExecTask* InTask);

    //// Begin UEdGraph Interface
    void NotifyGraphChanged() override;
    //// End UEdGraph Interface

public:
    UPROPERTY()
    UGridFlowExecEdGraphNode_Result* ResultNode;
};


class DUNGEONARCHITECTEDITOR_API FGridFlowExecScriptCompiler {
public:
    static void Compile(UEdGraph* EdGraph, UGridFlowExecScript* Script);
};
