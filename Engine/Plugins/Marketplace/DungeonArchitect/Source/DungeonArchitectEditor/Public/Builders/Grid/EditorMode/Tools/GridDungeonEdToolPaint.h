//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/Grid/EditorMode/Tools/GridDungeonEdTool.h"

class FGridDungeonEdToolPaint : public FGridDungeonEdTool {
public:
    FGridDungeonEdToolPaint(UGridDungeonEdModeHandler* ModeHandler);
    void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI) override;
    bool InputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey InKey,
                  EInputEvent InEvent) override;
    void ApplyBrush(FEditorViewportClient* ViewportClient) override;

    virtual FDungeonEdToolID GetToolType() const override { return ToolID; }
    static FName ToolID;

private:
    UMaterial* OverlayMaterial;
    bool bRemoveMode = false;
    bool bPainting = false;
};
