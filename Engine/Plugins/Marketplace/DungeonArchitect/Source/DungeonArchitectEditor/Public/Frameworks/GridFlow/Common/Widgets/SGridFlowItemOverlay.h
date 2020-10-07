//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"
#include "Frameworks/GridFlow/Common/Widgets/SGridFlowItemOverlayDelegates.h"

#include "Widgets/SCompoundWidget.h"

/** Widget for overlaying an execution-order index onto a node */
class SGridFlowItemOverlay : public SCompoundWidget {
public:
SLATE_BEGIN_ARGS(SGridFlowItemOverlay)
            : _Selected(false) {
        }

        SLATE_ATTRIBUTE(bool, Selected)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs, const FGridFlowItem& InItem);
    void OnMouseEnter(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    void OnMouseLeave(const FPointerEvent& MouseEvent) override;
    virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual FReply OnMouseButtonDoubleClick(const FGeometry& InMyGeometry, const FPointerEvent& InMouseEvent) override;

    FSlateColor GetColor() const;
    FSlateColor GetTextColor() const;
    FText GetItemText() const;
    float GetWidgetRadius() const { return WidgetRadius; }
    const FGridFlowItem& GetItem() const { return Item; }
    void SetBaseOffset(const FVector2D& InBaseOffset);
    FVector2D GetBaseOffset() const { return BaseOffset; }
    FGridFlowItemWidgetEvent& GetOnMousePressed() { return OnMousePressed; }
    EVisibility GetSelectionImageVisiblity() const;

private:
    FGridFlowItemWidgetEvent OnMousePressed;
    FGridFlowItem Item;
    float WidgetRadius = 0;
    bool bHovered = false;
    FVector2D BaseOffset;
    TAttribute<bool> Selected;
};
