//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskStructs.h"

struct FRandomStream;
class UGridFlowExecTask;
class UGridFlowExecScript;
class UGridFlowExecScriptGraphNode;
struct FGridFlowProcessorSettings;


struct DUNGEONARCHITECTRUNTIME_API FGridFlowProcessorSettings {
    FGridFlowAttributeList AttributeList;
    TMap<FString, FString> SerializedAttributeList;
};

class DUNGEONARCHITECTRUNTIME_API FGridFlowProcessor {
public:
    EGridFlowTaskExecutionResult Process(UGridFlowExecScript* ExecScript, const FRandomStream& InRandom,
                                         const FGridFlowProcessorSettings& InSettings = FGridFlowProcessorSettings());
    bool GetNodeState(const FGuid& NodeId, FGridFlowExecutionOutput& OutNodeState);
    EGridFlowTaskExecutionStage GetNodeExecStage(const FGuid& NodeId);

private:
    EGridFlowTaskExecutionResult ExecuteNode(UGridFlowExecScriptGraphNode* Node, const FRandomStream& InRandom,
                                             const FGridFlowProcessorSettings& InSettings);
    void SetTaskAttributes(UGridFlowExecTask* Task, const FGridFlowProcessorSettings& InSettings);

private:
    TSet<FGuid> VisitedNodes;
    TMap<FGuid, FGridFlowExecutionOutput> NodeStates;
    TMap<FGuid, EGridFlowTaskExecutionStage> NodeExecStages;
};
