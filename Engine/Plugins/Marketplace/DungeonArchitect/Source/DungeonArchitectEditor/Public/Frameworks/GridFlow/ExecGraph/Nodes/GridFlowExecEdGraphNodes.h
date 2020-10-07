//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/Nodes/GridFlowExecEdGraphNodeBase.h"
#include "GridFlowExecEdGraphNodes.generated.h"

class UGridFlowExecTask;

UCLASS()
class DUNGEONARCHITECTEDITOR_API UGridFlowExecEdGraphNode_Task : public UGridFlowExecEdGraphNodeBase {
    GENERATED_BODY()

public:
    FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

public:
    UPROPERTY()
    UGridFlowExecTask* TaskTemplate;
};

UCLASS()
class DUNGEONARCHITECTEDITOR_API UGridFlowExecEdGraphNode_Result : public UGridFlowExecEdGraphNodeBase {
    GENERATED_BODY()

public:
    FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
};
