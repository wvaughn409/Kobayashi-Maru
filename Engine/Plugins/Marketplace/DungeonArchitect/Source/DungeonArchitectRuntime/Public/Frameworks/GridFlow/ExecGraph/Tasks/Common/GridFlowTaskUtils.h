//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"

class UGridFlowAbstractGraph;
class FGridFlowAbstractGraphQuery;
struct FGridFlowAbstractNode;

class DUNGEONARCHITECTRUNTIME_API FGridFlowTaskUtils {
public:
    static TMap<FGuid, float> CalculateNodeWeights(const FGridFlowAbstractGraphQuery& GraphQuery, float LockedWeight);
    static bool FindNodeWithItemType(const FGridFlowAbstractGraphQuery& GraphQuery, EGridFlowItemType ItemType,
                                     FGuid& OutNodeId);
    static bool ContainsItem(const TArray<FGridFlowItem>& Items, EGridFlowItemType ItemType);
    static FGridFlowItem* FindItem(const FGuid& ItemId, TArray<FGridFlowItem>& Items);
    static TArray<FGuid> FindNodesOnPath(UGridFlowAbstractGraph* InGraph, const FString& PathName);
    static TArray<FGuid> FilterNodes(const TArray<FGuid>& NodeIds, float MinWeight, float MaxWeight,
                                     const TMap<FGuid, float>& Weights);
};
