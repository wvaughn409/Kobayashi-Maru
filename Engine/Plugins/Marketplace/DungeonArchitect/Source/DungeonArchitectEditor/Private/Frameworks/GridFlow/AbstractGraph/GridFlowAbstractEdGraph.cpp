//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractEdGraph.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractEdGraphSchema.h"

////////////////////////// UEdGraph_FlowExec //////////////////////////

UGridFlowAbstractEdGraph::UGridFlowAbstractEdGraph(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    Schema = UGridFlowAbstractEdGraphSchema::StaticClass();
}
