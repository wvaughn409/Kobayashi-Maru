//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/EditorMode/SnapEdModeHandler.h"

#include "Builders/Snap/EditorMode/SnapEdModeRenderer.h"
#include "Builders/Snap/EditorMode/UI/SSnapEditor.h"

DEFINE_LOG_CATEGORY(SnapEdModeHandlerLog);

TSharedPtr<FDungeonEdModeRenderer> USnapEdModeHandler::CreateRenderer() {
    return MakeShareable(new FSnapEdModeRenderer(this));
}

void USnapEdModeHandler::OnUpdate(const FSceneView* View, FViewport* Viewport) {
    UDungeonEdModeHandler::OnUpdate(View, Viewport);
}

void USnapEdModeHandler::SetActiveTool(TSharedPtr<IDungeonEdTool> NewTool) {
    UDungeonEdModeHandler::SetActiveTool(NewTool);
}

TSharedPtr<SWidget> USnapEdModeHandler::CreateToolkitWidget() {
    return SNew(SSnapEditor);
}
