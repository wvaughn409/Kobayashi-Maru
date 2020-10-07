//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Abstract/GridFlowTaskAbstract_CreateGrid.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"

void UGridFlowTaskAbstract_CreateGrid::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
    if (Input.IncomingNodeOutputs.Num() != 0) {
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        Output.ErrorMessage = "Input not allowed";
        return;
    }

    // Create a new state, since this will our first node
    Output.State = MakeShareable(new FGridFlowExecutionNodeState);
    Output.State->AbstractGraph = NewObject<UGridFlowAbstractGraph>();
    Output.State->AbstractGraph->GridSize = GridSize;

    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    TMap<FIntPoint, FGuid> Nodes;
    for (int y = 0; y < GridSize.Y; y++) {
        for (int x = 0; x < GridSize.X; x++) {
            FGridFlowAbstractNode* Node = Graph->CreateNode();
            Node->Location = FVector2D(x, y) * SeparationDistance;
            Node->State.GridCoord = FIntPoint(x, y);
            Nodes.Add(FIntPoint(x, y), Node->NodeId);

            if (x > 0) {
                FGuid PrevNodeX = Nodes[FIntPoint(x - 1, y)];
                Graph->CreateLink(PrevNodeX, Node->NodeId);
            }

            if (y > 0) {
                FGuid PrevNodeY = Nodes[FIntPoint(x, y - 1)];
                Graph->CreateLink(PrevNodeY, Node->NodeId);
            }
        }
    }

    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}

bool UGridFlowTaskAbstract_CreateGrid::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_SIZE(GridSize);

    return false;
}

bool UGridFlowTaskAbstract_CreateGrid::SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_SIZEI(GridSize)

    return false;
}

bool UGridFlowTaskAbstract_CreateGrid::SetParameterSerialized(const FString& InParameterName,
                                                              const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_SIZEI(GridSize)

    return false;
}
