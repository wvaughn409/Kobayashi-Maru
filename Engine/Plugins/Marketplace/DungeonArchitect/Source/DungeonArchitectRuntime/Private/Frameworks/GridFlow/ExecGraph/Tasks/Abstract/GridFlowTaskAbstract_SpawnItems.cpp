//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Abstract/GridFlowTaskAbstract_SpawnItems.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"
#include "Frameworks/GridFlow/ExecGraph/Tasks/Common/GridFlowTaskUtils.h"

void UGridFlowTaskAbstract_SpawnItems::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
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

    Output.State = Input.IncomingNodeOutputs[0].State->Clone();
    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    FGridFlowAbstractGraphQuery GraphQuery(Graph);

    struct FNodeInfo {
        FNodeInfo() {
        }

        FNodeInfo(const FGuid& InNodeId, float InWeight)
            : NodeId(InNodeId)
              , Weight(InWeight) {
        }

        FGuid NodeId;
        float Weight = 0;
    };

    TMap<FString, TArray<FNodeInfo>> NodesByPath;
    {
        TMap<FGuid, float> Weights = FGridFlowTaskUtils::CalculateNodeWeights(GraphQuery, 1);
        for (auto& WeightEntry : Weights) {
            FGuid NodeId = WeightEntry.Key;
            float Weight = WeightEntry.Value;
            FGridFlowAbstractNode* Node = GraphQuery.GetNode(NodeId);
            FString NodePath = Node->State.PathName;
            if (Node && Paths.Contains(NodePath)) {
                TArray<FNodeInfo>& PathNodeRef = NodesByPath.FindOrAdd(NodePath);
                PathNodeRef.Add(FNodeInfo(NodeId, Weight));
            }
        }

        // Sort the path list
        for (auto& Entry : NodesByPath) {
            TArray<FNodeInfo>& PathNodeRef = Entry.Value;
            PathNodeRef.Sort([&](const FNodeInfo& A, const FNodeInfo& B) -> bool {
                return A.Weight < B.Weight;
            });
        }
    }

    // Normalize the Weights
    for (auto& Entry : NodesByPath) {
        FString PathName = Entry.Key;
        TArray<FNodeInfo>& PathNodes = Entry.Value;

        if (PathName.Len() == 0) continue;

        float MinWeight = MAX_flt;
        float MaxWeight = -MAX_flt;
        for (const FNodeInfo& PathNodeInfo : PathNodes) {
            MinWeight = FMath::Min(MinWeight, PathNodeInfo.Weight);
            MaxWeight = FMath::Max(MaxWeight, PathNodeInfo.Weight);
        }

        for (FNodeInfo& PathNodeInfo : PathNodes) {
            if (FMath::Abs(MaxWeight - MinWeight) > 1e-6f) {
                PathNodeInfo.Weight = (PathNodeInfo.Weight - MinWeight) / (MaxWeight - MinWeight);
            }
            else {
                PathNodeInfo.Weight = 1.0f;
            }
        }
    }

    for (const FString& PathName : Paths) {
        if (!NodesByPath.Contains(PathName)) continue;
        TArray<FNodeInfo>& PathNodes = NodesByPath[PathName];

        for (const FNodeInfo& PathNodeInfo : PathNodes) {
            if (PathNodeInfo.Weight < MinSpawnDifficulty) continue;
            int32 SpawnCount = GetSpawnCount(PathNodeInfo.Weight, *Input.Random);
            for (int i = 0; i < SpawnCount; i++) {
                FGridFlowAbstractNode* PathNode = GraphQuery.GetNode(PathNodeInfo.NodeId);
                if (PathNode) {
                    FGridFlowItem& Item = PathNode->State.Items.AddDefaulted_GetRef();
                    Item.ItemType = ItemType;
                    Item.MarkerName = MarkerName;
                    Item.CustomInfo = CustomItemInfo;

                    // TODO: Handle placement configuration / validation
                }
            }
        }
    }

    // Emit debug info
    if (bDebugShowDifficulty) {
        for (const FString& PathName : Paths) {
            if (!NodesByPath.Contains(PathName)) continue;
            TArray<FNodeInfo>& PathNodes = NodesByPath[PathName];
            for (const FNodeInfo& PathNodeInfo : PathNodes) {
                FGridFlowAbstractNode* PathNode = GraphQuery.GetNode(PathNodeInfo.NodeId);
                if (PathNode) {
                    FGridFlowItem& DebugItem = PathNode->State.Items.AddDefaulted_GetRef();
                    DebugItem.ItemType = EGridFlowItemType::Custom;
                    DebugItem.CustomInfo.PreviewText = FString::Printf(TEXT("%0.1f"), PathNodeInfo.Weight);
                    DebugItem.CustomInfo.PreviewBackgroundColor = FLinearColor::Black;
                    DebugItem.CustomInfo.PreviewTextColor = FLinearColor::White;
                    DebugItem.CustomInfo.FontScale = 0.75f;
                }
            }
        }
    }

    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}

int32 UGridFlowTaskAbstract_SpawnItems::GetSpawnCount(float Weight, const FRandomStream& Random) {
    float Probability = FMath::Clamp(SpawnProbability, 0.0f, 1.0f);
    if (Random.FRand() > Probability) {
        return 0;
    }

    int32 SpawnCount = 0;
    if (SpawnMethod == EridFlowTask_SpawnItemsMethod::RandomRange) {
        SpawnCount = Random.RandRange(MinCount, MaxCount);
    }
    else if (SpawnMethod == EridFlowTask_SpawnItemsMethod::LinearDifficulty) {
        float Variance = Random.FRandRange(-SpawnDistributionVariance, SpawnDistributionVariance);
        float AdjustedWeight = FMath::Clamp(Weight + Variance, 0.0f, 1.0f);
        float SpawnCountF = MinCount + (MaxCount - MinCount) * Weight;
        SpawnCount = FMath::RoundToInt(SpawnCountF);
    }

    return SpawnCount;
}

bool UGridFlowTaskAbstract_SpawnItems::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_STRINGARRAY(Paths);
    GRIDFLOWATTR_GET_STRING(MarkerName);
    GRIDFLOWATTR_GET_INT(MinCount);
    GRIDFLOWATTR_GET_INT(MaxCount);
    GRIDFLOWATTR_GET_FLOAT(SpawnDistributionVariance);
    GRIDFLOWATTR_GET_FLOAT(MinSpawnDifficulty);
    GRIDFLOWATTR_GET_FLOAT(SpawnProbability);

    return false;
}

bool UGridFlowTaskAbstract_SpawnItems::SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_STRINGARRAY(Paths);
    GRIDFLOWATTR_SET_STRING(MarkerName);
    GRIDFLOWATTR_SET_INT(MinCount);
    GRIDFLOWATTR_SET_INT(MaxCount);
    GRIDFLOWATTR_SET_FLOAT(SpawnDistributionVariance);
    GRIDFLOWATTR_SET_FLOAT(MinSpawnDifficulty);
    GRIDFLOWATTR_SET_FLOAT(SpawnProbability);

    return false;
}

bool UGridFlowTaskAbstract_SpawnItems::SetParameterSerialized(const FString& InParameterName,
                                                              const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_STRINGARRAY(Paths);
    GRIDFLOWATTR_SET_PARSE_STRING(MarkerName);
    GRIDFLOWATTR_SET_PARSE_INT(MinCount);
    GRIDFLOWATTR_SET_PARSE_INT(MaxCount);
    GRIDFLOWATTR_SET_PARSE_FLOAT(SpawnDistributionVariance);
    GRIDFLOWATTR_SET_PARSE_FLOAT(MinSpawnDifficulty);
    GRIDFLOWATTR_SET_PARSE_FLOAT(SpawnProbability);

    return false;
}
