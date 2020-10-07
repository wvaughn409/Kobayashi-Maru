//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/EditorMode/SnapEdModeRenderer.h"

#include "Builders/Snap/EditorMode/SnapEdModeHandler.h"

FSnapEdModeRenderer::FSnapEdModeRenderer(USnapEdModeHandler* pModeHandler)
    : ModeHandler(pModeHandler) {
}

void FSnapEdModeRenderer::Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI,
                                 TSharedPtr<IDungeonEdTool> ActiveTool) {

}

void FSnapEdModeRenderer::Destroy() {
}
