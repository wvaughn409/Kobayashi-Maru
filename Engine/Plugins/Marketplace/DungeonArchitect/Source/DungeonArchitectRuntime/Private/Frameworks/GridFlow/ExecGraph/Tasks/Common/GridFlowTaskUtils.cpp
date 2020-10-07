//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Common/GridFlowTaskUtils.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"

#include "Containers/Queue.h"

TMap<FGuid, float> FGridFlowTaskUtils::CalculateNodeWeights(const FGridFlowAbstractGraphQuery& GraphQuery,
                                                            float LockedWeight) {
    struct FNodeWeightInfo {
        FNodeWeightInfo() {
        }

        FNodeWeightInfo(const FGuid& InNodeId, float InWeight)
            : NodeId(InNodeId)
              , Weight(InWeight) {
        }

        FGuid NodeId;
        float Weight = 0;
    };

    TMap<FGuid, float> Weights;
    FGuid StartNode;
    if (FindNodeWithItemType(GraphQuery, EGridFlowItemType::Entrance, StartNode)) {
        TSet<FGuid> Visited;
        TQueue<FNodeWeightInfo> Queue;
        Queue.Enqueue(FNodeWeightInfo(StartNode, 0));
        Visited.Add(StartNode);

        while (!Queue.IsEmpty()) {
            FNodeWeightInfo Front;
            Queue.Dequeue(Front);
            Visited.Add(Front.NodeId);

            {
                float* WeightPtr = Weights.Find(Front.NodeId);
                if (WeightPtr) {
                    *WeightPtr = FMath::Min(*WeightPtr, Front.Weight);
                }
                else {
                    Weights.Add(Front.NodeId, Front.Weight);
                }
            }

            // Traverse the children
            UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
            for (const FGridFlowAbstractLink& OutgoingLink : Graph->Links) {
                if (OutgoingLink.Source == Front.NodeId) {
                    if (OutgoingLink.State.Type == EGridFlowAbstractLinkType::Unconnected) {
                        continue;
                    }
                    FGridFlowAbstractNode* OutgoingNode = GraphQuery.GetNode(OutgoingLink.Destination);
                    if (!OutgoingNode || !OutgoingNode->State.bActive) {
                        continue;
                    }

                    bool bTraversedChild = true;
                    if (Visited.Contains(OutgoingNode->NodeId)) {
                        // The child node has already been traversed.  Do not traverse if the child's weight
                        // is less than the current weight
                        float CurrentWeight = Front.Weight;
                        float ChildWeight = Weights[OutgoingNode->NodeId];
                        if (CurrentWeight > ChildWeight) {
                            bTraversedChild = false;
                        }
                    }

                    if (bTraversedChild) {
                        float NodeWeight = 1;
                        if (ContainsItem(OutgoingLink.State.Items, EGridFlowItemType::Lock)) {
                            NodeWeight = LockedWeight;
                        }

                        Queue.Enqueue(FNodeWeightInfo(OutgoingNode->NodeId, Front.Weight + NodeWeight));
                    }
                }
            }
        }
    }

    return Weights;
}

bool FGridFlowTaskUtils::FindNodeWithItemType(const FGridFlowAbstractGraphQuery& GraphQuery, EGridFlowItemType ItemType,
                                              FGuid& OutNodeId) {
    for (FGridFlowAbstractNode& Node : GraphQuery.GetGraph()->Nodes) {
        for (const FGridFlowItem& Item : Node.State.Items) {
            if (Item.ItemType == ItemType) {
                OutNodeId = Node.NodeId;
                return true;
            }
        }
    }
    return false;
}

bool FGridFlowTaskUtils::ContainsItem(const TArray<FGridFlowItem>& Items, EGridFlowItemType ItemType) {
    for (const FGridFlowItem& Item : Items) {
        if (Item.ItemType == ItemType) {
            return true;
        }
    }
    return false;
}

FGridFlowItem* FGridFlowTaskUtils::FindItem(const FGuid& ItemId, TArray<FGridFlowItem>& Items) {
    for (FGridFlowItem& Item : Items) {
        if (Item.ItemId == ItemId) {
            return &Item;
        }
    }
    return nullptr;
}

TArray<FGuid> FGridFlowTaskUtils::FindNodesOnPath(UGridFlowAbstractGraph* InGraph, const FString& PathName) {
    TArray<FGuid> PathNodes;
    for (const FGridFlowAbstractNode& Node : InGraph->Nodes) {
        if (Node.State.PathName == PathName) {
            PathNodes.Add(Node.NodeId);
        }
    }
    return PathNodes;
}

TArray<FGuid> FGridFlowTaskUtils::FilterNodes(const TArray<FGuid>& NodeIds, float MinWeight, float MaxWeight,
                                              const TMap<FGuid, float>& Weights) {
    TArray<FGuid> ValidNodes;

    for (const FGuid& NodeId : NodeIds) {
        const float* WeightPtr = Weights.Find(NodeId);
        if (WeightPtr) {
            float Weight = *WeightPtr;
            if (Weight >= MinWeight && Weight <= MaxWeight) {
                ValidNodes.Add(NodeId);
            }
        }
    }

    return ValidNodes;
}
