//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraphScript.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"

UGridFlowAbstractScript::UGridFlowAbstractScript() {
    Graph = CreateDefaultSubobject<UGridFlowAbstractGraph>("Graph");
}
