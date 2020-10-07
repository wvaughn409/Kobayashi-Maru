//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Abstract/GridFlowTaskAbstract_CreateMainPath.h"

#include "Core/Utils/MathUtils.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"

void UGridFlowTaskAbstract_CreateMainPath::Execute(const FGridFlowExecutionInput& Input,
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
    if (PathSize <= 0) {
        Output.ErrorMessage = "Invalid Path Size";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }


    Output.State = Input.IncomingNodeOutputs[0].State->Clone();
    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    int32 NumNodes = Graph->Nodes.Num();

    // Check if we have enough free nodes to create the desired path size
    {
        int32 FreeNodes = 0;
        for (const FGridFlowAbstractNode& Node : Graph->Nodes) {
            if (!Node.State.bActive) {
                FreeNodes++;
            }
        }

        if (FreeNodes < PathSize) {
            Output.ErrorMessage = "Not enough free nodes";
            Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
            return;
        }
    }

    check(Input.Random);
    const FRandomStream& Random = *Input.Random;

    TArray<int32> EntranceIndices;
    if (!bOverrideStartNodePosition) {
        EntranceIndices = FMathUtils::GetShuffledIndices(NumNodes, Random);
    }
    else {
        // Find the node index that has override coordinate
        for (int i = 0; i < Graph->Nodes.Num(); i++) {
            const FGridFlowAbstractNode& Node = Graph->Nodes[i];
            if (Node.State.GridCoord == StartNodePosition) {
                EntranceIndices.Add(i);
                break;
            }
        }
    }

    FGridFlowAbstractGraphQuery GraphQuery(Graph);
    for (int32 EntranceIndex : EntranceIndices) {
        FGridFlowAbstractNode& EntranceNode = Graph->Nodes[EntranceIndex];
        if (EntranceNode.State.bActive) {
            continue;
        }
        TSet<FGuid> Visited;
        TArray<FGuid> Path;

        if (GrowPath(GraphQuery, EntranceNode, Random, Path, Visited)) {
            FinalizePath(GraphQuery, Path);
            Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
            return;
        }

    }

    Output.ErrorMessage = "Cannot find path";
    Output.ExecutionResult = EGridFlowTaskExecutionResult::FailRetry;
}

bool UGridFlowTaskAbstract_CreateMainPath::GrowPath(const FGridFlowAbstractGraphQuery& GraphQuery,
                                                    const FGridFlowAbstractNode& CurrentNode,
                                                    const FRandomStream& Random, TArray<FGuid>& OutPath,
                                                    TSet<FGuid>& Visited) {
    Visited.Add(CurrentNode.NodeId);
    OutPath.Add(CurrentNode.NodeId);

    if (OutPath.Num() == PathSize) {
        return true;
    }

    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    TArray<FGuid> ConnectedNodeIds = Graph->GetConnectedNodes(CurrentNode.NodeId);
    TArray<int32> ConnectedNodeIndices = FMathUtils::GetShuffledIndices(ConnectedNodeIds.Num(), Random);
    for (int32 ConnectedNodeIndex : ConnectedNodeIndices) {
        FGuid ConnectedNodeId = ConnectedNodeIds[ConnectedNodeIndex];
        if (Visited.Contains(ConnectedNodeId)) continue;

        FGridFlowAbstractNode* ConnectedNode = GraphQuery.GetNode(ConnectedNodeId);
        if (!ConnectedNode) continue;
        if (ConnectedNode->State.bActive) continue;
        if (GrowPath(GraphQuery, *ConnectedNode, Random, OutPath, Visited)) {
            return true;
        }
    }

    // Child branches failed to produce a valid path. Find another path
    Visited.Remove(CurrentNode.NodeId);
    OutPath.Remove(CurrentNode.NodeId);
    return false;
}

void UGridFlowTaskAbstract_CreateMainPath::FinalizePath(const FGridFlowAbstractGraphQuery& GraphQuery,
                                                        const TArray<FGuid>& Path) {
    if (Path.Num() == 0) {
        return;
    }

    for (int i = 0; i < Path.Num(); i++) {
        FGridFlowAbstractNode* Node = GraphQuery.GetNode(Path[i]);
        if (!Node) continue;

        if (i == 0) {
            Node->State.bDisablePerturb = bFullSizeStartRoom;
        }
        else if (i == Path.Num() - 1) {
            Node->State.bDisablePerturb = bFullSizeGoalRoom;
        }

        Node->State.bActive = true;
        Node->State.Color = NodeColor;
        FString NodePathName = PathName;
        if (i == 0 && StartNodePathName.Len() > 0) NodePathName = StartNodePathName;
        if (i == Path.Num() - 1 && GoalNodePathName.Len() > 0) NodePathName = GoalNodePathName;
        Node->State.PathName = NodePathName;

        // Link the nodes
        if (i > 0) {
            UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
            FGridFlowAbstractLink* Link = Graph->GetLink(Path[i - 1], Path[i], true);
            Link->State.Type = EGridFlowAbstractLinkType::Connected;
            Link->Source = Path[i - 1];
            Link->Destination = Path[i];
        }
    }

    // Add an entry item to the first node
    {
        FGridFlowAbstractNode* EntranceNode = GraphQuery.GetNode(Path[0]);
        FGridFlowItem& Item = EntranceNode->State.Items.AddDefaulted_GetRef();
        Item.ItemType = EGridFlowItemType::Entrance;
        Item.MarkerName = StartMarkerName;
    }

    // Add a goal item to the last node
    {
        FGridFlowAbstractNode* GoalNode = GraphQuery.GetNode(Path[Path.Num() - 1]);
        FGridFlowItem& Item = GoalNode->State.Items.AddDefaulted_GetRef();
        Item.ItemType = EGridFlowItemType::Exit;
        Item.MarkerName = GoalMarkerName;
    }
}


bool UGridFlowTaskAbstract_CreateMainPath::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_INT(PathSize);
    GRIDFLOWATTR_GET_STRING(PathName);
    GRIDFLOWATTR_GET_STRING(StartMarkerName);
    GRIDFLOWATTR_GET_STRING(GoalMarkerName);
    GRIDFLOWATTR_GET_STRING(StartNodePathName);
    GRIDFLOWATTR_GET_STRING(GoalNodePathName);
    GRIDFLOWATTR_GET_BOOL(bOverrideStartNodePosition);
    GRIDFLOWATTR_GET_SIZE(StartNodePosition);
    GRIDFLOWATTR_GET_BOOL(bFullSizeStartRoom);
    GRIDFLOWATTR_GET_BOOL(bFullSizeGoalRoom);

    return false;
}

bool UGridFlowTaskAbstract_CreateMainPath::SetParameter(const FString& InParameterName,
                                                        const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_INT(PathSize);
    GRIDFLOWATTR_SET_STRING(PathName);
    GRIDFLOWATTR_SET_STRING(StartMarkerName);
    GRIDFLOWATTR_SET_STRING(GoalMarkerName);
    GRIDFLOWATTR_SET_STRING(StartNodePathName);
    GRIDFLOWATTR_SET_STRING(GoalNodePathName);
    GRIDFLOWATTR_SET_BOOL(bOverrideStartNodePosition);
    GRIDFLOWATTR_SET_SIZEI(StartNodePosition);
    GRIDFLOWATTR_SET_BOOL(bFullSizeStartRoom);
    GRIDFLOWATTR_SET_BOOL(bFullSizeGoalRoom);

    return false;
}

bool UGridFlowTaskAbstract_CreateMainPath::SetParameterSerialized(const FString& InParameterName,
                                                                  const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_INT(PathSize);
    GRIDFLOWATTR_SET_PARSE_STRING(PathName);
    GRIDFLOWATTR_SET_PARSE_STRING(StartMarkerName);
    GRIDFLOWATTR_SET_PARSE_STRING(GoalMarkerName);
    GRIDFLOWATTR_SET_PARSE_STRING(StartNodePathName);
    GRIDFLOWATTR_SET_PARSE_STRING(GoalNodePathName);
    GRIDFLOWATTR_SET_PARSE_BOOL(bOverrideStartNodePosition);
    GRIDFLOWATTR_SET_PARSE_SIZEI(StartNodePosition);
    GRIDFLOWATTR_SET_PARSE_BOOL(bFullSizeStartRoom);
    GRIDFLOWATTR_SET_PARSE_BOOL(bFullSizeGoalRoom);

    return false;
}
