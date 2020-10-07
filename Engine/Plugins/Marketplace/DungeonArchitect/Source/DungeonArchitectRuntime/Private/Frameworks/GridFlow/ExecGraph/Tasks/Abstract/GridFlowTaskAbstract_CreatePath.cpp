//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Abstract/GridFlowTaskAbstract_CreatePath.h"

#include "Core/Utils/MathUtils.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"

namespace {
    TArray<FGridFlowAbstractNode*> GetNodesOnPath(const FString& PathName, UGridFlowAbstractGraph* Graph) {
        TArray<FGridFlowAbstractNode*> Nodes;
        if (PathName.Len() > 0) {
            for (FGridFlowAbstractNode& Node : Graph->Nodes) {
                if (Node.State.PathName == PathName) {
                    Nodes.Add(&Node);
                }
            }
        }
        return Nodes;
    }
}

void UGridFlowTaskAbstract_CreatePath::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
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
    if (MinPathSize <= 0) {
        Output.ErrorMessage = "Invalid Path Size";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }

    Output.State = Input.IncomingNodeOutputs[0].State->Clone();
    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    FGridFlowAbstractGraphQuery GraphQuery(Graph);

    int32 NumNodes = Graph->Nodes.Num();

    TArray<FGridFlowAbstractNode*> SourceNodes = GetNodesOnPath(StartFromPath, Graph);
    TArray<FGridFlowAbstractNode*> SinkNodes = GetNodesOnPath(EndOnPath, Graph);


    const FRandomStream& Random = *Input.Random;
    int32 NumSourceNodes = SourceNodes.Num();
    TArray<int32> SourceNodeIndices = FMathUtils::GetShuffledIndices(NumSourceNodes, Random);
    for (int32 SourceNodeIndex : SourceNodeIndices) {
        FGridFlowAbstractNode* HeadNode = SourceNodes[SourceNodeIndex];
        TArray<FGuid> StartNodeIds = Graph->GetConnectedNodes(HeadNode->NodeId);
        TArray<int32> StartNodeIndices = FMathUtils::GetShuffledIndices(StartNodeIds.Num(), Random);
        for (int32 StartNodeIndex : StartNodeIndices) {
            const FGuid& StartNodeId = StartNodeIds[StartNodeIndex];
            FGridFlowAbstractNode* StartNode = GraphQuery.GetNode(StartNodeId);
            if (StartNode && StartNode->State.bActive) {
                // Node is already in use
                continue;
            }

            FStaticGrowthState StaticState;
            StaticState.Graph = Graph;
            StaticState.GraphQuery = &GraphQuery;
            StaticState.HeadNode = HeadNode;
            StaticState.SinkNodes = SinkNodes;
            StaticState.Random = Input.Random;

            FGrowthState State;

            if (GrowPath(StartNode, StaticState, State)) {
                FinalizePath(StaticState, State);
                Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
                return;
            }
        }
    }

    Output.ErrorMessage = "Cannot find path";
    Output.ExecutionResult = EGridFlowTaskExecutionResult::FailRetry;
}

bool UGridFlowTaskAbstract_CreatePath::GrowPath(FGridFlowAbstractNode* CurrentNode,
                                                const FStaticGrowthState& StaticState, FGrowthState& State) {
    if (!CurrentNode) return false;

    State.Visited.Add(CurrentNode->NodeId);
    State.Path.Add(CurrentNode->NodeId);

    if (State.Path.Num() >= MinPathSize) {
        // Check if we are near the skin node, if any
        if (StaticState.SinkNodes.Num() == 0) {
            // No sink nodes defined.
            return true;
        }

        TSet<FGuid> NearbyNodes(StaticState.Graph->GetConnectedNodes(CurrentNode->NodeId));
        TArray<int32> SinkNodeIndices =
            FMathUtils::GetShuffledIndices(StaticState.SinkNodes.Num(), *StaticState.Random);
        for (int32 SinkNodeIndex : SinkNodeIndices) {
            FGridFlowAbstractNode* SinkNode = StaticState.SinkNodes[SinkNodeIndex];
            if (State.Path.Num() == 1 && SinkNode == StaticState.HeadNode) {
                // If the path node size is 1, we don't want to connect back to the head node
                continue;
            }
            if (NearbyNodes.Contains(SinkNode->NodeId)) {
                State.TailNode = SinkNode;
                return true;
            }
        }

        if (State.Path.Num() == MaxPathSize) {
            // no sink nodes nearby and we've reached the max path size
            State.Visited.Remove(CurrentNode->NodeId);
            State.Path.Remove(CurrentNode->NodeId);
            return false;
        }
    }

    const TArray<FGuid> ConnectedNodeIds = StaticState.Graph->GetConnectedNodes(CurrentNode->NodeId);
    const TArray<int32> ConnectedNodeIndices = FMathUtils::GetShuffledIndices(
        ConnectedNodeIds.Num(), *StaticState.Random);
    for (int32 ConnectedNodeIndex : ConnectedNodeIndices) {
        const FGuid& ConnectedNodeId = ConnectedNodeIds[ConnectedNodeIndex];
        if (State.Visited.Contains(ConnectedNodeId)) continue;

        FGridFlowAbstractNode* ConnectedNode = StaticState.GraphQuery->GetNode(ConnectedNodeId);
        if (!ConnectedNode) continue;
        if (ConnectedNode->State.bActive) continue;
        if (GrowPath(ConnectedNode, StaticState, State)) {
            return true;
        }
    }

    // Child branches failed to produce a valid path. find another path
    State.Visited.Remove(CurrentNode->NodeId);
    State.Path.Remove(CurrentNode->NodeId);
    return false;
}

void UGridFlowTaskAbstract_CreatePath::FinalizePath(const FStaticGrowthState& StaticState, const FGrowthState& State) {
    const TArray<FGuid>& Path = State.Path;

    if (Path.Num() == 0) return;
    for (int i = 0; i < Path.Num(); i++) {
        FGuid NodeId = Path[i];
        FGridFlowAbstractNode* PathNode = StaticState.GraphQuery->GetNode(NodeId);
        if (!PathNode) continue;
        PathNode->State.bActive = true;
        PathNode->State.Color = NodeColor;
        PathNode->State.PathName = PathName;

        // Link the path nodes
        if (i > 0) {
            FGuid PrevNodeId = Path[i - 1];
            FGridFlowAbstractLink* Link = StaticState.Graph->GetLink(PrevNodeId, NodeId, true);
            if (Link) {
                Link->State.Type = EGridFlowAbstractLinkType::Connected;
                Link->Source = PrevNodeId;
                Link->Destination = NodeId;
            }
        }
    }

    // Setup the start / end links
    FGridFlowAbstractLink* HeadLink = StaticState.Graph->GetLink(StaticState.HeadNode->NodeId, Path[0], true);
    if (HeadLink) {
        HeadLink->State.Type = EGridFlowAbstractLinkType::Connected;
        HeadLink->Source = StaticState.HeadNode->NodeId;
        HeadLink->Destination = Path[0];
    }

    // Find the end node, if any so that it can merge back to the specified branch (specified in variable EndOnPath)
    if (State.TailNode) {
        FGridFlowAbstractLink* TailLink = StaticState
                                          .Graph->GetLink(Path[Path.Num() - 1], State.TailNode->NodeId, true);
        if (TailLink) {
            TailLink->State.Type = EGridFlowAbstractLinkType::Connected;
            TailLink->Source = Path[Path.Num() - 1];
            TailLink->Destination = State.TailNode->NodeId;
        }
    }
}


bool UGridFlowTaskAbstract_CreatePath::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_INT(MinPathSize);
    GRIDFLOWATTR_GET_INT(MaxPathSize);
    GRIDFLOWATTR_GET_STRING(PathName);
    GRIDFLOWATTR_GET_STRING(StartFromPath);
    GRIDFLOWATTR_GET_STRING(EndOnPath);

    return false;
}

bool UGridFlowTaskAbstract_CreatePath::SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_INT(MinPathSize);
    GRIDFLOWATTR_SET_INT(MaxPathSize);
    GRIDFLOWATTR_SET_STRING(PathName);
    GRIDFLOWATTR_SET_STRING(StartFromPath);
    GRIDFLOWATTR_SET_STRING(EndOnPath);

    return false;
}

bool UGridFlowTaskAbstract_CreatePath::SetParameterSerialized(const FString& InParameterName,
                                                              const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_INT(MinPathSize);
    GRIDFLOWATTR_SET_PARSE_INT(MaxPathSize);
    GRIDFLOWATTR_SET_PARSE_STRING(PathName);
    GRIDFLOWATTR_SET_PARSE_STRING(StartFromPath);
    GRIDFLOWATTR_SET_PARSE_STRING(EndOnPath);

    return false;
}
