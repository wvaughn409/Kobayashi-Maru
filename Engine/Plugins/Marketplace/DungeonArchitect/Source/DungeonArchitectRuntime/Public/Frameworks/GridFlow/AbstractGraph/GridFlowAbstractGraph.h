//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractLink.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "GridFlowAbstractGraph.generated.h"

UCLASS()
class DUNGEONARCHITECTRUNTIME_API UGridFlowAbstractGraph : public UObject {
    GENERATED_BODY()

public:
    UPROPERTY()
    TArray<FGridFlowAbstractNode> Nodes;

    UPROPERTY()
    TArray<FGridFlowAbstractLink> Links;

    UPROPERTY()
    FIntPoint GridSize;

public:
    UGridFlowAbstractGraph* Clone(UObject* Owner);

    void Clear();
    void RemoveNode(const FGuid& NodeId);
    void RemoveLink(const FGuid& LinkId);

    FGridFlowAbstractNode* CreateNode();
    FGridFlowAbstractLink* CreateLink(const FGuid& SourceNodeId, const FGuid& DestNodeId);

    FGridFlowAbstractNode* GetNode(const FGuid& NodeId);
    FGridFlowAbstractNodeState* GetNodeState(const FGuid& NodeId);
    FGridFlowAbstractLink* GetLink(const FGuid& SourceNodeId, const FGuid& DestNodeId);
    FGridFlowAbstractLink* GetLink(const FGuid& SourceNodeId, const FGuid& DestNodeId, bool bIgnoreDirection);

    FGridFlowAbstractLink* FindLink(const FGuid& LinkId);

    void BreakLink(const FGuid& SourceNodeId, const FGuid& DestNodeId);
    void BreakAllOutgoingLinks(const FGuid& NodeId);
    void BreakAllIncomingLinks(const FGuid& NodeId);
    void BreakAllLinks(const FGuid& NodeId);

    TArray<FGuid> GetOutgoingNodes(const FGuid& NodeId);
    TArray<FGuid> GetIncomingNodes(const FGuid& NodeId);
    TArray<FGuid> GetOutgoingLinks(const FGuid& NodeId);
    TArray<FGuid> GetIncomingLinks(const FGuid& NodeId);
    TArray<FGuid> GetConnectedNodes(const FGuid& NodeId);

    void GetAllItems(TArray<struct FGridFlowItem*>& OutItems);
    void GetAllItemsCopy(TArray<FGridFlowItem>& OutItems);
};


class DUNGEONARCHITECTRUNTIME_API FGridFlowAbstractGraphQuery {
public:
    FGridFlowAbstractGraphQuery(UGridFlowAbstractGraph* InGraph);
    FGridFlowAbstractNode* GetNode(const FGuid& NodeId) const;
    FGridFlowAbstractNodeState* GetNodeState(const FGuid& NodeId) const;
    UGridFlowAbstractGraph* GetGraph() const { return Graph.Get(); }

private:
    TMap<FGuid, FGridFlowAbstractNode*> NodeMap;
    TMap<FGuid, FGridFlowAbstractLink*> LinkMap;
    TWeakObjectPtr<UGridFlowAbstractGraph> Graph;
};

bool DUNGEONARCHITECTRUNTIME_API operator==(const FGridFlowAbstractLink& A, const FGridFlowAbstractLink& B);
bool DUNGEONARCHITECTRUNTIME_API operator==(const FGridFlowAbstractNode& A, const FGridFlowAbstractNode& B);
