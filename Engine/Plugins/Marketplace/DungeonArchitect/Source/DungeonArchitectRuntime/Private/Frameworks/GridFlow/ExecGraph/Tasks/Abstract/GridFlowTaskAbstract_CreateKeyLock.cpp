//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Abstract/GridFlowTaskAbstract_CreateKeyLock.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"
#include "Frameworks/GridFlow/ExecGraph/Tasks/Common/GridFlowTaskUtils.h"

void UGridFlowTaskAbstract_CreateKeyLock::Execute(const FGridFlowExecutionInput& Input,
                                                  FGridFlowExecutionOutput& Output) {
    if (Input.IncomingNodeOutputs.Num() == 0) {
        Output.ErrorMessage = "Missing Input";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }
    if (Input.IncomingNodeOutputs.Num() > 1) {
        Output.ErrorMessage = "Only one input allowed";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }
    if (KeyPath.Len() == 0) {
        Output.ErrorMessage = "No Key Path specified";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }
    if (LockPath.Len() == 0) {
        Output.ErrorMessage = "No Lock Path specified";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }

    Output.State = Input.IncomingNodeOutputs[0].State->Clone();
    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    FGridFlowAbstractGraphQuery GraphQuery(Graph);

    FGuid KeyNodeId, LockNodeId;
    FString ErrorMessage = "Cannot find Key-Lock";

    if (FindKeyLockNodes(GraphQuery, *Input.Random, KeyNodeId, LockNodeId, ErrorMessage)) {
        FGridFlowAbstractNode* KeyNode = GraphQuery.GetNode(KeyNodeId);
        FGridFlowAbstractNode* LockNode = GraphQuery.GetNode(LockNodeId);
        if (KeyNode && LockNode) {
            FGridFlowItem& KeyItem = KeyNode->State.Items.AddDefaulted_GetRef();
            KeyItem.ItemType = EGridFlowItemType::Key;
            KeyItem.MarkerName = KeyMarkerName;
            // TODO: Handle key placement data

            FGridFlowItem& LockItem = LockNode->State.Items.AddDefaulted_GetRef();
            LockItem.ItemType = EGridFlowItemType::Lock;
            LockItem.MarkerName = LockMarkerName;
            // TODO: Handle lock placement data

            // Add a reference
            KeyItem.ReferencedItemIds.Add(LockItem.ItemId);

            Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
            return;
        }
    }

    Output.ErrorMessage = ErrorMessage;
    Output.ExecutionResult = EGridFlowTaskExecutionResult::FailRetry;
}

bool UGridFlowTaskAbstract_CreateKeyLock::FindKeyLockNodes(const FGridFlowAbstractGraphQuery& GraphQuery,
                                                           const FRandomStream& Random,
                                                           FGuid& OutKeyNodeId, FGuid& OutLockNodeId,
                                                           FString& OutErrorMessage) {
    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();

    TMap<FGuid, float> Weights = FGridFlowTaskUtils::CalculateNodeWeights(GraphQuery, 1);
    TArray<FGuid> KeyNodeIds = FGridFlowTaskUtils::FindNodesOnPath(Graph, KeyPath);
    TArray<FGuid> LockNodeIds = FGridFlowTaskUtils::FindNodesOnPath(Graph, LockPath);

    float MinKeyWeight = MAX_flt;
    float MaxKeyWeight = -MAX_flt;
    float MinLockWeight = MAX_flt;
    float MaxLockWeight = -MAX_flt;

    for (const FGuid& KeyNodeId : KeyNodeIds) {
        float* WeightPtr = Weights.Find(KeyNodeId);
        if (WeightPtr) {
            float Weight = *WeightPtr;
            MinKeyWeight = FMath::Min(MinKeyWeight, Weight);
            MaxKeyWeight = FMath::Max(MaxKeyWeight, Weight);
        }
    }

    for (const FGuid& LockNodeId : LockNodeIds) {
        float* WeightPtr = Weights.Find(LockNodeId);
        if (WeightPtr) {
            float Weight = *WeightPtr;
            MinLockWeight = FMath::Min(MinLockWeight, Weight);
            MaxLockWeight = FMath::Max(MaxLockWeight, Weight);
        }
    }

    if (MaxLockWeight < MinKeyWeight || MaxKeyWeight < MinKeyWeight || MaxLockWeight < MinLockWeight) {
        return false;
    }

    MinLockWeight = FMath::Max(MinLockWeight, MinKeyWeight);
    MaxKeyWeight = FMath::Min(MaxKeyWeight, MaxLockWeight);

    KeyNodeIds = FGridFlowTaskUtils::FilterNodes(KeyNodeIds, MinKeyWeight, MaxKeyWeight, Weights);

    if (KeyNodeIds.Num() == 0) {
        return false;
    }

    OutKeyNodeId = KeyNodeIds[Random.RandRange(0, KeyNodeIds.Num() - 1)];
    float KeyWeight = Weights[OutKeyNodeId];

    LockNodeIds = FGridFlowTaskUtils::FilterNodes(LockNodeIds, KeyWeight, MaxLockWeight, Weights);
    if (LockNodeIds.Num() == 0) {
        return false;
    }

    OutLockNodeId = LockNodeIds[Random.RandRange(0, LockNodeIds.Num() - 1)];
    return true;
}


bool UGridFlowTaskAbstract_CreateKeyLock::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_STRING(KeyPath);
    GRIDFLOWATTR_GET_STRING(LockPath);
    GRIDFLOWATTR_GET_STRING(KeyMarkerName);
    GRIDFLOWATTR_GET_STRING(LockMarkerName);

    return false;

}

bool UGridFlowTaskAbstract_CreateKeyLock::SetParameter(const FString& InParameterName,
                                                       const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_STRING(KeyPath);
    GRIDFLOWATTR_SET_STRING(LockPath);
    GRIDFLOWATTR_SET_STRING(KeyMarkerName);
    GRIDFLOWATTR_SET_STRING(LockMarkerName);

    return false;
}

bool UGridFlowTaskAbstract_CreateKeyLock::SetParameterSerialized(const FString& InParameterName,
                                                                 const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_STRING(KeyPath);
    GRIDFLOWATTR_SET_PARSE_STRING(LockPath);
    GRIDFLOWATTR_SET_PARSE_STRING(KeyMarkerName);
    GRIDFLOWATTR_SET_PARSE_STRING(LockMarkerName);

    return false;
}
