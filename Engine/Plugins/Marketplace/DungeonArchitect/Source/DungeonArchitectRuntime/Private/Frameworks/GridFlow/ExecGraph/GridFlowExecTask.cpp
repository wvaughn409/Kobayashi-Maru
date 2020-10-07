//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/Tilemap/GridFlowTilemap.h"

void UGridFlowExecTask::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
    Output.ErrorMessage = "Not Implemented";
    Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
}

FGridFlowExecutionNodeState::FGridFlowExecutionNodeState()
    : AbstractGraph(nullptr)
      , Tilemap(nullptr) {
}

FGridFlowExecutionNodeStatePtr FGridFlowExecutionNodeState::Clone(bool bCloneLayoutGraph, bool bCloneTilemap) {
    TSharedPtr<FGridFlowExecutionNodeState> Copy = MakeShareable(new FGridFlowExecutionNodeState);
    if (bCloneLayoutGraph && AbstractGraph) {
        Copy->AbstractGraph = NewObject<UGridFlowAbstractGraph>(AbstractGraph->GetOuter(), NAME_None, RF_NoFlags,
                                                                AbstractGraph);
    }
    if (bCloneTilemap && Tilemap) {
        Copy->Tilemap = NewObject<UGridFlowTilemap>(Tilemap->GetOuter(), NAME_None, RF_NoFlags, Tilemap);
    }
    return Copy;
}

void FGridFlowExecutionNodeState::AddReferencedObjects(FReferenceCollector& Collector) {
    if (AbstractGraph) {
        Collector.AddReferencedObject(AbstractGraph);
    }

    if (Tilemap) {
        Collector.AddReferencedObject(Tilemap);
    }
}
