//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/Processor/GridFlowProcessor.h"

#include "Frameworks/GridFlow/ExecGraph/GridFlowExecGraphScript.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"

DEFINE_LOG_CATEGORY_STATIC(LogGridFlowProcessor, Log, All);

EGridFlowTaskExecutionResult FGridFlowProcessor::Process(UGridFlowExecScript* ExecScript, const FRandomStream& InRandom,
                                                         const FGridFlowProcessorSettings& InSettings) {
    NodeStates.Reset();
    VisitedNodes.Reset();
    NodeExecStages.Reset();

    return ExecuteNode(ExecScript->ResultNode, InRandom, InSettings);
}

bool FGridFlowProcessor::GetNodeState(const FGuid& NodeId, FGridFlowExecutionOutput& OutNodeState) {
    FGridFlowExecutionOutput* SearchResult = NodeStates.Find(NodeId);
    if (!SearchResult) {
        return false;
    }

    OutNodeState = *SearchResult;
    return true;
}

EGridFlowTaskExecutionStage FGridFlowProcessor::GetNodeExecStage(const FGuid& NodeId) {
    EGridFlowTaskExecutionStage* SearchResult = NodeExecStages.Find(NodeId);
    return SearchResult ? *SearchResult : EGridFlowTaskExecutionStage::NotExecuted;
}

EGridFlowTaskExecutionResult FGridFlowProcessor::ExecuteNode(UGridFlowExecScriptGraphNode* Node,
                                                             const FRandomStream& InRandom,
                                                             const FGridFlowProcessorSettings& InSettings) {
    check(!VisitedNodes.Contains(Node->NodeId));
    check(!NodeStates.Contains(Node->NodeId));

    {
        EGridFlowTaskExecutionStage& ExecStage = NodeExecStages.FindOrAdd(Node->NodeId);
        ExecStage = EGridFlowTaskExecutionStage::WaitingToExecute;
    }

    VisitedNodes.Add(Node->NodeId);

    // Prepare the execution input 
    FGridFlowExecutionInput NodeInput;
    NodeInput.Random = &InRandom;

    {
        for (UGridFlowExecScriptGraphNode* IncomingNode : Node->IncomingNodes) {
            if (!VisitedNodes.Contains(IncomingNode->NodeId)) {
                ExecuteNode(IncomingNode, InRandom, InSettings);
            }
            FGridFlowExecutionOutput* IncomingNodeOutput = NodeStates.Find(IncomingNode->NodeId);
            if (IncomingNodeOutput) {
                NodeInput.IncomingNodeOutputs.Add(*IncomingNodeOutput);
            }
        }
    }

    // Make sure all the incoming nodes succeeded
    bool bIncomingFailRetry = false;
    bool bIncomingFailHalt = false;
    for (const FGridFlowExecutionOutput& IncomingNodeOutput : NodeInput.IncomingNodeOutputs) {
        if (IncomingNodeOutput.ExecutionResult == EGridFlowTaskExecutionResult::FailRetry) {
            bIncomingFailRetry = true;
        }
        else if (IncomingNodeOutput.ExecutionResult == EGridFlowTaskExecutionResult::FailHalt) {
            bIncomingFailHalt = true;
        }
    }

    // Execute the node task
    FGridFlowExecutionOutput NodeOutput;

    if (bIncomingFailHalt) {
        NodeOutput.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        NodeOutput.State = nullptr;
    }
    else if (bIncomingFailRetry) {
        NodeOutput.ExecutionResult = EGridFlowTaskExecutionResult::FailRetry;
        NodeOutput.State = nullptr;
    }
    else {
        if (UGridFlowExecScriptTaskNode* TaskNode = Cast<UGridFlowExecScriptTaskNode>(Node)) {
            // Duplicate the task so we can apply attribute overrides to it without affect the source asset
            UGridFlowExecTask* Task = NewObject<UGridFlowExecTask>(GetTransientPackage(), TaskNode->Task->GetClass(),
                                                                   NAME_None, RF_NoFlags, TaskNode->Task);
            SetTaskAttributes(Task, InSettings);
            Task->Execute(NodeInput, NodeOutput);
        }
        else if (UGridFlowExecScriptResultNode* ResultNode = Cast<UGridFlowExecScriptResultNode>(Node)) {
            if (NodeInput.IncomingNodeOutputs.Num() == 0) {
                NodeOutput.ErrorMessage = "Missing Input";
                NodeOutput.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
                NodeOutput.State = nullptr;
            }
            else if (NodeInput.IncomingNodeOutputs.Num() > 1) {
                NodeOutput.ErrorMessage = "Only one input allowed";
                NodeOutput.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
                NodeOutput.State = nullptr;
            }
            else {
                FGridFlowExecutionOutput IncomingState = NodeInput.IncomingNodeOutputs[0];
                NodeOutput.ExecutionResult = IncomingState.ExecutionResult;
                if (IncomingState.State.IsValid()) {
                    NodeOutput.State = IncomingState.State->Clone();
                }
            }
        }

        EGridFlowTaskExecutionStage& ExecStage = NodeExecStages.FindOrAdd(Node->NodeId);
        ExecStage = EGridFlowTaskExecutionStage::Executed;
    }

    NodeStates.Add(Node->NodeId, NodeOutput);

    return NodeOutput.ExecutionResult;
}

void FGridFlowProcessor::SetTaskAttributes(UGridFlowExecTask* Task, const FGridFlowProcessorSettings& InSettings) {
    if (Task->NodeVariableName.Len() > 0) {
        // Override the attributes
        const TMap<FString, FGridFlowAttribute>* SearchResult = InSettings
                                                                .AttributeList.AttributesByNode.Find(
                                                                    Task->NodeVariableName);
        if (SearchResult) {
            const TMap<FString, FGridFlowAttribute>& NodeAttributes = *SearchResult;
            for (auto& Entry : NodeAttributes) {
                FString ParamName = Entry.Key;
                const FGridFlowAttribute& ParamAttrib = Entry.Value;
                if (!Task->SetParameter(ParamName, ParamAttrib)) {
                    UE_LOG(LogGridFlowProcessor, Error, TEXT("Failed to set Parameter: %s.%s"), *Task->NodeVariableName,
                           *ParamName);
                }
            }
        }

        // Override the serialized attributes
        FString NodePrefix = Task->NodeVariableName + ".";
        for (const auto& Entry : InSettings.SerializedAttributeList) {
            const FString& FullPath = Entry.Key;
            const FString& Value = Entry.Value;
            if (FullPath.StartsWith(NodePrefix)) {
                FString VariableName = FullPath.Mid(NodePrefix.Len());
                if (!Task->SetParameterSerialized(VariableName, Value)) {
                    UE_LOG(LogGridFlowProcessor, Error, TEXT("Failed to set Parameter: %s"), *FullPath);
                }
            }
        }
    }
}
