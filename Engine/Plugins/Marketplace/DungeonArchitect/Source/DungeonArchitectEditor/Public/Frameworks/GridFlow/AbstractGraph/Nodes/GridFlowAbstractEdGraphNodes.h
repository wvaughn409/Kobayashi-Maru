//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/AbstractGraph/Nodes/GridFlowAbstractEdGraphNodeBase.h"
#include "GridFlowAbstractEdGraphNodes.generated.h"

class UGridFlowAbstractNode;

UCLASS()
class DUNGEONARCHITECTEDITOR_API UGridFlowAbstractEdGraphNode : public UGridFlowAbstractEdGraphNodeBase {
    GENERATED_BODY()

public:
    FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

public:
    UPROPERTY()
    FGridFlowAbstractNode ScriptNode;
};
