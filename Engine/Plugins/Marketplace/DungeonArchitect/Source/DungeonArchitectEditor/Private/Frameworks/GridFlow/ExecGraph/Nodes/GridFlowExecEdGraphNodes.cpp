//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h"

#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"

#include "UObject/Class.h"

#define LOCTEXT_NAMESPACE "GridFlowExecEdGraphNode_Result"

FText UGridFlowExecEdGraphNode_Result::GetNodeTitle(ENodeTitleType::Type TitleType) const {
    return LOCTEXT("ResultTextNodeTitle", "Result");
}

FText UGridFlowExecEdGraphNode_Task::GetNodeTitle(ENodeTitleType::Type TitleType) const {
    if (!TaskTemplate) {
        return LOCTEXT("TaskInvaliNodeTitle", "[INVALID]");
    }

    FString Title = TaskTemplate->GetClass()->GetMetaData("Title");
    return FText::FromString(Title);
}

#undef LOCTEXT_NAMESPACE
