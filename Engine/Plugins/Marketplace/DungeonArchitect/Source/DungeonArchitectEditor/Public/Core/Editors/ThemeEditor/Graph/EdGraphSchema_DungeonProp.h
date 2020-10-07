//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "EdGraphSchema_DungeonProp.generated.h"

UCLASS()
class UEdGraphSchema_DungeonProp : public UEdGraphSchema {
    GENERATED_UCLASS_BODY()

    // Begin EdGraphSchema interface
    void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const override;
    const FPinConnectionResponse CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const override;
    class FConnectionDrawingPolicy* CreateConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID,
                                                                  float InZoomFactor, const FSlateRect& InClippingRect,
                                                                  class FSlateWindowElementList& InDrawElements,
                                                                  class UEdGraph* InGraphObj) const override;
    FLinearColor GetPinTypeColor(const FEdGraphPinType& PinType) const override;
    bool ShouldHidePinDefaultValue(UEdGraphPin* Pin) const override;
    bool TryCreateConnection(UEdGraphPin* A, UEdGraphPin* B) const override;
    // End EdGraphSchema interface

    void GetActionList(TArray<TSharedPtr<FEdGraphSchemaAction>>& OutActions, const UEdGraph* Graph,
                       UEdGraph* OwnerOfTemporaries, bool bShowNewMesh = true, bool bShowNewMarker = true,
                       bool bShowMarkerEmitters = true) const;

private:
    bool ContainsCycles(const UEdGraphPin* A, const UEdGraphPin* B, TArray<FString>& OutCyclePath) const;

};
