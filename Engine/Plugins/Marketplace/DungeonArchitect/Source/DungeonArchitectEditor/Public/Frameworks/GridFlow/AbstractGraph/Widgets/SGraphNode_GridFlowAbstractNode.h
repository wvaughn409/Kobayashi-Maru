//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "SGraphNode.h"
#include "SNodePanel.h"
#include "Styling/SlateColor.h"
#include "Widgets/DeclarativeSyntaxSupport.h"

class SGraphPin;
class UGridFlowAbstractEdGraphNode;
class SGridFlowItemOverlay;

class SGraphNode_GridFlowAbstractNode : public SGraphNode {
public:
SLATE_BEGIN_ARGS(SGraphNode_GridFlowAbstractNode) {
        }

    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs, UGridFlowAbstractEdGraphNode* InNode);

    struct FLinkItemWidgetInfo {
        TSharedPtr<SGridFlowItemOverlay> ItemWidget;
        FGuid DestinationNodeId;
    };

    // SGraphNode interface
    void UpdateGraphNode() override;
    void CreatePinWidgets() override;
    void AddPin(const TSharedRef<SGraphPin>& PinToAdd) override;
    const FSlateBrush* GetShadowBrush(bool bSelected) const override;
    TArray<FOverlayWidgetInfo> GetOverlayWidgets(bool bSelected, const FVector2D& WidgetSize) const override;
    FVector2D ComputeDesiredSize(float) const override;

    // End of SGraphNode interface

    TArray<TSharedPtr<SGridFlowItemOverlay>> GetNodeItemWidgets() const { return NodeItemWidgets; }
    TArray<FLinkItemWidgetInfo> GetLinkItemWidgets() const { return LinkItemWidgets; }

protected:
    FText GetPreviewCornerText() const;
    FSlateColor GetNodeColor() const;
    FSlateColor GetTextColor() const;
    FLinearColor GetTextShadowColor() const;
    void CreateNodeItemWidgets();
    void CreateLinkItemWidgets();
    void OnItemClicked(const FGuid& InItemId, bool bDoubleClicked);
    bool IsItemSelected(FGuid InItemId) const;

protected:
    TArray<TSharedPtr<SGridFlowItemOverlay>> NodeItemWidgets;
    TArray<FLinkItemWidgetInfo> LinkItemWidgets;
};
