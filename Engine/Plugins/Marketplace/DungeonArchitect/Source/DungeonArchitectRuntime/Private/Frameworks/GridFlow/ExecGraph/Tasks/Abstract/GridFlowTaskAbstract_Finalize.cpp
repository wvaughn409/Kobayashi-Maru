//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Abstract/GridFlowTaskAbstract_Finalize.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractLink.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"
#include "Frameworks/GridFlow/ExecGraph/Tasks/Common/GridFlowTaskUtils.h"

void UGridFlowTaskAbstract_Finalize::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
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

    TMap<FGuid, FItemInfo> ItemMap;
    for (FGridFlowAbstractNode& Node : Graph->Nodes) {
        for (FGridFlowItem& Item : Node.State.Items) {
            FItemInfo& ItemInfo = ItemMap.FindOrAdd(Item.ItemId);
            ItemInfo.ItemId = Item.ItemId;
            ItemInfo.HostNode = &Node;
        }
    }
    for (FGridFlowAbstractLink& Link : Graph->Links) {
        for (FGridFlowItem& Item : Link.State.Items) {
            FItemInfo& ItemInfo = ItemMap.FindOrAdd(Item.ItemId);
            ItemInfo.ItemId = Item.ItemId;
            ItemInfo.HostLink = &Link;
        }
    }


    for (auto& Entry : ItemMap) {
        const FGuid ItemId = Entry.Key;
        const FItemInfo ItemInfo = Entry.Value;
        FGridFlowItem ItemCopy;
        {
            FGridFlowItem* Item = ItemInfo.GetItem();
            if (!Item) continue;
            ItemCopy = *Item;
        }
        if (ItemCopy.ItemType == EGridFlowItemType::Key) {
            FItemInfo KeyInfo = ItemInfo;
            for (const FGuid& LockItemId : ItemCopy.ReferencedItemIds) {
                FItemInfo* LockInfoPtr = ItemMap.Find(LockItemId);
                if (LockInfoPtr) {
                    FItemInfo LockInfo = *LockInfoPtr;
                    if (!ResolveKeyLocks(GraphQuery, KeyInfo, LockInfo)) {
                        Output.ErrorMessage = "Cannot resolve key-locks";
                        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailRetry;
                    }
                }
            }
        }
    }

    TMap<FGuid, float> Weights = FGridFlowTaskUtils::CalculateNodeWeights(GraphQuery, 10);

    // Make the links one directional if the difference in the source/dest nodes is too much
    for (FGridFlowAbstractLink& Link : Graph->Links) {
        if (Link.State.Type == EGridFlowAbstractLinkType::Unconnected) continue;
        FGridFlowAbstractNode* Source = GraphQuery.GetNode(Link.Source);
        FGridFlowAbstractNode* Destination = GraphQuery.GetNode(Link.Destination);
        if (!Source || !Destination) continue;
        if (!Source->State.bActive || !Destination->State.bActive) continue;

        float WeightDiff = Weights[Link.Source] - Weights[Link.Destination] + 1;
        if (WeightDiff > OneWayDoorPromotionWeight) {
            Link.State.Type = EGridFlowAbstractLinkType::OneWay;
        }
    }

    // Remove unconnected links
    TArray<FGridFlowAbstractLink> LinksCopy = Graph->Links;
    for (const FGridFlowAbstractLink& LinkCopy : LinksCopy) {
        if (LinkCopy.State.Type == EGridFlowAbstractLinkType::Unconnected) {
            Graph->Links.Remove(LinkCopy);
        }
    }

    AssignRoomTypes(GraphQuery, *Input.Random);
    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}

void UGridFlowTaskAbstract_Finalize::AssignRoomTypes(const FGridFlowAbstractGraphQuery& GraphQuery,
                                                     const FRandomStream& Random) {
    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    for (FGridFlowAbstractNode& Node : Graph->Nodes) {
        Node.State.RoomType = GetNodeRoomType(GraphQuery, &Node);
    }

    // Make another pass and force assign rooms where a link requires a door
    for (const FGridFlowAbstractLink& Link : Graph->Links) {
        bool bContainsLock = FGridFlowTaskUtils::ContainsItem(Link.State.Items, EGridFlowItemType::Lock);
        if (bContainsLock || Link.State.Type == EGridFlowAbstractLinkType::OneWay) {
            // We need atleast one room type that supports doors (rooms and corridors)
            FGridFlowAbstractNode* NodeA = GraphQuery.GetNode(Link.Source);
            FGridFlowAbstractNode* NodeB = GraphQuery.GetNode(Link.Destination);
            if (!NodeA || !NodeB) continue;

            bool bContainsDoorA = (NodeA->State.RoomType == EGridFlowAbstractNodeRoomType::Room || NodeA->State.RoomType
                == EGridFlowAbstractNodeRoomType::Corridor);
            bool bContainsDoorB = (NodeB->State.RoomType == EGridFlowAbstractNodeRoomType::Room || NodeB->State.RoomType
                == EGridFlowAbstractNodeRoomType::Corridor);
            if (!bContainsDoorA && !bContainsDoorB) {
                // Promote one of them to a room
                FGridFlowAbstractNode* NodeToPromote = (Random.FRand() < 0.5f) ? NodeA : NodeB;
                NodeToPromote->State.RoomType = EGridFlowAbstractNodeRoomType::Room;
            }
        }
    }
}

EGridFlowAbstractNodeRoomType UGridFlowTaskAbstract_Finalize::GetNodeRoomType(
    const FGridFlowAbstractGraphQuery& GraphQuery, FGridFlowAbstractNode* Node) {
    int32 NumEnemies = 0;
    int32 NumKeys = 0;
    int32 NumBonus = 0;
    int32 NumEntrance = 0;
    int32 NumExit = 0;

    for (const FGridFlowItem& Item : Node->State.Items) {
        if (Item.ItemType == EGridFlowItemType::Enemy) NumEnemies++;
        else if (Item.ItemType == EGridFlowItemType::Key) NumKeys++;
        else if (Item.ItemType == EGridFlowItemType::Treasure) NumBonus++;
        else if (Item.ItemType == EGridFlowItemType::Entrance) NumEntrance++;
        else if (Item.ItemType == EGridFlowItemType::Exit) NumExit++;
    }

    if (NumEntrance > 0 || NumExit > 0 || NumKeys > 0 || NumBonus > 0) {
        return EGridFlowAbstractNodeRoomType::Room;
    }

    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    TArray<FGuid> IncomingLinks = Graph->GetIncomingLinks(Node->NodeId);
    TArray<FGuid> OutgoingLinks = Graph->GetOutgoingLinks(Node->NodeId);

    // Promote to corridor, if the constraints are satisfied
    if (bGenerateCorridors && IncomingLinks.Num() == 1 && OutgoingLinks.Num() == 1 && NumEnemies == 0) {
        FGridFlowAbstractLink* IncomingLink = Graph->FindLink(IncomingLinks[0]);
        FGridFlowAbstractLink* OutgoingLink = Graph->FindLink(OutgoingLinks[0]);
        if (IncomingLink && OutgoingLink) {
            // make sure the incoming and outgoing are in the same line
            FGridFlowAbstractNode* IncomingNode = GraphQuery.GetNode(IncomingLink->Source);
            FGridFlowAbstractNode* OutgoingNode = GraphQuery.GetNode(OutgoingLink->Destination);
            if (IncomingNode && OutgoingNode) {
                FVector2D CoordIn = IncomingNode->State.GridCoord;
                FVector2D CoordOut = OutgoingNode->State.GridCoord;

                bool bSameLine = (CoordIn.X == CoordOut.X || CoordIn.Y == CoordOut.Y);
                if (bSameLine) {
                    return EGridFlowAbstractNodeRoomType::Corridor;
                }
            }
        }
    }

    if (bGenerateCaves) {
        return NumEnemies <= MaxEnemiesPerCaveNode
                   ? EGridFlowAbstractNodeRoomType::Cave
                   : EGridFlowAbstractNodeRoomType::Room;
    }

    return EGridFlowAbstractNodeRoomType::Room;
}

bool UGridFlowTaskAbstract_Finalize::ResolveKeyLocks(const FGridFlowAbstractGraphQuery& GraphQuery,
                                                     struct FItemInfo& KeyInfo, struct FItemInfo& LockInfo) {
    FGridFlowAbstractNode* LockNode = LockInfo.HostNode;
    if (!LockNode) return false;

    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    TArray<FGridFlowAbstractLink*> IncomingLinks;
    TArray<FGridFlowAbstractLink*> OutgoingLinks;
    {
        for (FGridFlowAbstractLink& Link : Graph->Links) {
            if (Link.Destination == LockNode->NodeId && Link.State.Type != EGridFlowAbstractLinkType::Unconnected) {
                IncomingLinks.Add(&Link);
            }
            if (Link.Source == LockNode->NodeId && Link.State.Type != EGridFlowAbstractLinkType::Unconnected) {
                OutgoingLinks.Add(&Link);
            }
        }
    }

    bool bCanLockIncoming = true;
    bool bCanLockOutgoing = true;
    if (IncomingLinks.Num() == 0) {
        bCanLockIncoming = false;
    }
    if (OutgoingLinks.Num() == 0) {
        bCanLockOutgoing = false;
    }

    {
        void* KeyParent = KeyInfo.GetParentObject();
        void* LockParent = LockInfo.GetParentObject();
        if (KeyParent == LockParent && LockParent) {
            bCanLockIncoming = false;
        }
    }

    if (!bCanLockIncoming && !bCanLockOutgoing) {
        return false;
    }

    FGridFlowItem LockItemCopy = *LockInfo.GetItem();
    LockNode->State.Items.Remove(LockItemCopy);
    {
        FGridFlowItem* KeyItem = KeyInfo.GetItem();
        KeyItem->ReferencedItemIds.Remove(LockInfo.ItemId);
    }

    TArray<FGridFlowAbstractLink*> LinksToLock;
    if (bCanLockIncoming && bCanLockOutgoing) {
        // We can lock either the incoming or outgoing.  Choose the one that requires less links to be locked
        if (IncomingLinks.Num() == OutgoingLinks.Num()) {
            LinksToLock = IncomingLinks;
        }
        else {
            LinksToLock = (OutgoingLinks.Num() < IncomingLinks.Num()) ? OutgoingLinks : IncomingLinks;
        }
    }
    else {
        LinksToLock = bCanLockOutgoing ? OutgoingLinks : IncomingLinks;
    }

    // Add a lock on the links
    for (FGridFlowAbstractLink* Link : LinksToLock) {
        FGridFlowItem LockItem = LockItemCopy;
        LockItem.ItemId = FGuid::NewGuid();
        Link->State.Items.Add(LockItem);

        FGridFlowItem* KeyItem = KeyInfo.GetItem();
        KeyItem->ReferencedItemIds.Add(LockItem.ItemId);
    }

    return true;
}

FGridFlowItem* UGridFlowTaskAbstract_Finalize::FItemInfo::GetItem() const {
    return FGridFlowTaskUtils::FindItem(ItemId, HostNode ? HostNode->State.Items : HostLink->State.Items);
}

void* UGridFlowTaskAbstract_Finalize::FItemInfo::GetParentObject() const {
    if (HostNode) return HostNode;
    return HostLink;
}


bool UGridFlowTaskAbstract_Finalize::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_BOOL(bGenerateCorridors);
    GRIDFLOWATTR_GET_BOOL(bGenerateCaves);
    GRIDFLOWATTR_GET_INT(MaxEnemiesPerCaveNode);
    GRIDFLOWATTR_GET_FLOAT(OneWayDoorPromotionWeight);

    return false;
}

bool UGridFlowTaskAbstract_Finalize::SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_BOOL(bGenerateCorridors);
    GRIDFLOWATTR_SET_BOOL(bGenerateCaves);
    GRIDFLOWATTR_SET_INT(MaxEnemiesPerCaveNode);
    GRIDFLOWATTR_SET_FLOAT(OneWayDoorPromotionWeight);

    return false;
}

bool UGridFlowTaskAbstract_Finalize::SetParameterSerialized(const FString& InParameterName,
                                                            const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_BOOL(bGenerateCorridors);
    GRIDFLOWATTR_SET_PARSE_BOOL(bGenerateCaves);
    GRIDFLOWATTR_SET_PARSE_INT(MaxEnemiesPerCaveNode);
    GRIDFLOWATTR_SET_PARSE_FLOAT(OneWayDoorPromotionWeight);

    return false;
}
