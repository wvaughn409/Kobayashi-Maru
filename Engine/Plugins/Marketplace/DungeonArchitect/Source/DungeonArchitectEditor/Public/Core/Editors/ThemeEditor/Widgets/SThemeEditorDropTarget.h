//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "SAssetDropTarget.h"

/** The list view mode of the asset view */
class DUNGEONARCHITECTEDITOR_API SThemeEditorDropTarget : public SAssetDropTarget {
public:
    FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override;
    void Tick(const FGeometry& AllottedGeometry, double InCurrentTime, float InDeltaTime) override;

    FVector2D GetPanelCoordDropPosition() const { return PanelCoordDropPosition; }

private:
    FVector2D PanelCoordDropPosition;
};
