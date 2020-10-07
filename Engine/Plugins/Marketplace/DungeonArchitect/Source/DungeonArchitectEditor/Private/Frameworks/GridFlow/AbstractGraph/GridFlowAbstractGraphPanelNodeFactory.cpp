//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraphPanelNodeFactory.h"

#include "Frameworks/GridFlow/AbstractGraph/Nodes/GridFlowAbstractEdGraphNodes.h"
#include "Frameworks/GridFlow/AbstractGraph/Widgets/SGraphNode_GridFlowAbstractNode.h"

TSharedPtr<class SGraphNode> FGridFlowAbstractGraphPanelNodeFactory::CreateNode(UEdGraphNode* Node) const {
    if (UGridFlowAbstractEdGraphNode* AbstractNode = Cast<UGridFlowAbstractEdGraphNode>(Node)) {
        TSharedPtr<SGraphNode_GridFlowAbstractNode> SNode = SNew(SGraphNode_GridFlowAbstractNode, AbstractNode);
        return SNode;
    }

    return nullptr;
}
