//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"

UGridFlowAbstractGraph* UGridFlowAbstractGraph::Clone(UObject* Owner) {
    UGridFlowAbstractGraph* NewGraph = NewObject<UGridFlowAbstractGraph>(Owner);
    NewGraph->Nodes = Nodes;
    NewGraph->Links = Links;
    return NewGraph;
}

void UGridFlowAbstractGraph::Clear() {
    Nodes.Reset();
    Links.Reset();
}

void UGridFlowAbstractGraph::RemoveNode(const FGuid& NodeId) {
    BreakAllLinks(NodeId);
    Nodes.RemoveAllSwap([NodeId](const FGridFlowAbstractNode& Node) { return Node.NodeId == NodeId; });
}

void UGridFlowAbstractGraph::RemoveLink(const FGuid& LinkId) {
    Links.RemoveAllSwap([LinkId](const FGridFlowAbstractLink& Link) { return Link.LinkId == LinkId; });
}

FGridFlowAbstractNode* UGridFlowAbstractGraph::CreateNode() {
    FGridFlowAbstractNode& NewNode = Nodes.AddDefaulted_GetRef();
    NewNode.NodeId = FGuid::NewGuid();
    return &NewNode;
}

FGridFlowAbstractNode* UGridFlowAbstractGraph::GetNode(const FGuid& NodeId) {
    return Nodes.FindByPredicate([NodeId](const FGridFlowAbstractNode& Node) { return Node.NodeId == NodeId; });
}

FGridFlowAbstractNodeState* UGridFlowAbstractGraph::GetNodeState(const FGuid& NodeId) {
    FGridFlowAbstractNode* Node = GetNode(NodeId);
    return Node ? &Node->State : nullptr;
}

FGridFlowAbstractLink* UGridFlowAbstractGraph::GetLink(const FGuid& SourceNodeId, const FGuid& DestNodeId) {
    return GetLink(SourceNodeId, DestNodeId, false);
}

FGridFlowAbstractLink* UGridFlowAbstractGraph::GetLink(const FGuid& SourceNodeId, const FGuid& DestNodeId,
                                                       bool bIgnoreDirection) {
    for (FGridFlowAbstractLink& Link : Links) {
        if (Link.Source == SourceNodeId && Link.Destination == DestNodeId) {
            return &Link;
        }
        if (bIgnoreDirection) {
            if (Link.Source == DestNodeId && Link.Destination == SourceNodeId) {
                return &Link;
            }
        }
    }
    return nullptr;
}

FGridFlowAbstractLink* UGridFlowAbstractGraph::FindLink(const FGuid& LinkId) {
    for (FGridFlowAbstractLink& Link : Links) {
        if (Link.LinkId == LinkId) {
            return &Link;
        }
    }
    return nullptr;
}

FGridFlowAbstractLink* UGridFlowAbstractGraph::CreateLink(const FGuid& SourceNodeId, const FGuid& DestNodeId) {
    // Make sure we don't already have this link 
    for (FGridFlowAbstractLink& ExistingLink : Links) {
        if (ExistingLink.Source == SourceNodeId && ExistingLink.Destination == DestNodeId) {
            return &ExistingLink;
        }
    }

    // Create a new link
    FGridFlowAbstractLink& Link = Links.AddDefaulted_GetRef();
    Link.LinkId = FGuid::NewGuid();
    Link.Source = SourceNodeId;
    Link.Destination = DestNodeId;
    return &Link;
}

void UGridFlowAbstractGraph::BreakLink(const FGuid& SourceNodeId, const FGuid& DestNodeId) {
    Links.RemoveAllSwap(
        [SourceNodeId, DestNodeId](const FGridFlowAbstractLink& Link) {
            return Link.Source == SourceNodeId && Link.Destination == DestNodeId;
        });
}

void UGridFlowAbstractGraph::BreakAllOutgoingLinks(const FGuid& NodeId) {
    Links.RemoveAllSwap(
        [NodeId](const FGridFlowAbstractLink& Link) {
            return Link.Source == NodeId;
        });
}

void UGridFlowAbstractGraph::BreakAllIncomingLinks(const FGuid& NodeId) {
    Links.RemoveAllSwap(
        [NodeId](const FGridFlowAbstractLink& Link) {
            return Link.Destination == NodeId;
        });
}

void UGridFlowAbstractGraph::BreakAllLinks(const FGuid& NodeId) {
    Links.RemoveAllSwap(
        [NodeId](const FGridFlowAbstractLink& Link) {
            return Link.Source == NodeId || Link.Destination == NodeId;
        });
}

TArray<FGuid> UGridFlowAbstractGraph::GetOutgoingNodes(const FGuid& NodeId) {
    TArray<FGuid> Result;
    for (FGridFlowAbstractLink& Link : Links) {
        if (Link.Source == NodeId) {
            Result.Add(Link.Destination);
        }
    }
    return Result;
}

TArray<FGuid> UGridFlowAbstractGraph::GetIncomingNodes(const FGuid& NodeId) {
    TArray<FGuid> Result;
    for (FGridFlowAbstractLink& Link : Links) {
        if (Link.Destination == NodeId) {
            Result.Add(Link.Source);
        }
    }
    return Result;
}

TArray<FGuid> UGridFlowAbstractGraph::GetOutgoingLinks(const FGuid& NodeId) {
    TArray<FGuid> Result;
    for (FGridFlowAbstractLink& Link : Links) {
        if (Link.Source == NodeId) {
            Result.Add(Link.LinkId);
        }
    }
    return Result;
}

TArray<FGuid> UGridFlowAbstractGraph::GetIncomingLinks(const FGuid& NodeId) {
    TArray<FGuid> Result;
    for (FGridFlowAbstractLink& Link : Links) {
        if (Link.Destination == NodeId) {
            Result.Add(Link.LinkId);
        }
    }
    return Result;
}

TArray<FGuid> UGridFlowAbstractGraph::GetConnectedNodes(const FGuid& NodeId) {
    TArray<FGuid> Result;

    for (FGridFlowAbstractLink& Link : Links) {
        if (Link.Destination == NodeId) {
            Result.Add(Link.Source);
        }
        else if (Link.Source == NodeId) {
            Result.Add(Link.Destination);
        }
    }

    return Result;
}

void UGridFlowAbstractGraph::GetAllItems(TArray<FGridFlowItem*>& OutItems) {
    OutItems.Reset();
    for (FGridFlowAbstractNode& Node : Nodes) {
        for (FGridFlowItem& Item : Node.State.Items) {
            OutItems.Add(&Item);
        }
    }
    for (FGridFlowAbstractLink& Link : Links) {
        for (FGridFlowItem& Item : Link.State.Items) {
            OutItems.Add(&Item);
        }
    }
}

void UGridFlowAbstractGraph::GetAllItemsCopy(TArray<FGridFlowItem>& OutItems) {
    OutItems.Reset();
    for (FGridFlowAbstractNode& Node : Nodes) {
        for (FGridFlowItem& Item : Node.State.Items) {
            OutItems.Add(Item);
        }
    }
    for (FGridFlowAbstractLink& Link : Links) {
        for (FGridFlowItem& Item : Link.State.Items) {
            OutItems.Add(Item);
        }
    }
}

FGridFlowAbstractGraphQuery::FGridFlowAbstractGraphQuery(UGridFlowAbstractGraph* InGraph) {
    Graph = InGraph;
    for (FGridFlowAbstractNode& Node : InGraph->Nodes) {
        NodeMap.Add(Node.NodeId, &Node);
    }
    for (FGridFlowAbstractLink& Link : InGraph->Links) {
        LinkMap.Add(Link.LinkId, &Link);
    }
}

FGridFlowAbstractNode* FGridFlowAbstractGraphQuery::GetNode(const FGuid& NodeId) const {
    FGridFlowAbstractNode* const* SearchResult = NodeMap.Find(NodeId);
    return SearchResult ? *SearchResult : nullptr;
}

FGridFlowAbstractNodeState* FGridFlowAbstractGraphQuery::GetNodeState(const FGuid& NodeId) const {
    FGridFlowAbstractNode* const* SearchResult = NodeMap.Find(NodeId);
    if (!SearchResult) return nullptr;
    FGridFlowAbstractNode* Node = *SearchResult;
    return &Node->State;
}

bool DUNGEONARCHITECTRUNTIME_API operator==(const FGridFlowAbstractLink& A, const FGridFlowAbstractLink& B) {
    return A.LinkId == B.LinkId;
}

bool DUNGEONARCHITECTRUNTIME_API operator==(const FGridFlowAbstractNode& A, const FGridFlowAbstractNode& B) {
    return A.NodeId == B.NodeId;
}
