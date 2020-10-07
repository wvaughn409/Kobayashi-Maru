//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/AbstractGraph/Nodes/GridFlowAbstractEdGraphNodes.h"


#define LOCTEXT_NAMESPACE "GridFlowAbstractEdGraphNode"


FText UGridFlowAbstractEdGraphNode::GetNodeTitle(ENodeTitleType::Type TitleType) const {
    if (!ScriptNode.State.bActive) {
        return FText();
    }

    switch (ScriptNode.State.RoomType) {
    case EGridFlowAbstractNodeRoomType::Room:
        return LOCTEXT("RoomTypeText_Room", "R");

    case EGridFlowAbstractNodeRoomType::Corridor:
        return LOCTEXT("RoomTypeText_Room", "Co");

    case EGridFlowAbstractNodeRoomType::Cave:
        return LOCTEXT("RoomTypeText_Room", "Ca");

    case EGridFlowAbstractNodeRoomType::Unknown:
    default:
        return FText();
    }
}


#undef LOCTEXT_NAMESPACE
