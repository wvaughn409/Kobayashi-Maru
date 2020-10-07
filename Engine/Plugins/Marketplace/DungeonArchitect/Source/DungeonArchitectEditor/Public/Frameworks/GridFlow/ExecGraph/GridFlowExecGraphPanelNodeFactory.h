//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "EdGraphUtilities.h"

class DUNGEONARCHITECTEDITOR_API FGridFlowExecGraphPanelNodeFactory : public FGraphPanelNodeFactory {
public:
    TSharedPtr<class SGraphNode> CreateNode(UEdGraphNode* Node) const override;
};
