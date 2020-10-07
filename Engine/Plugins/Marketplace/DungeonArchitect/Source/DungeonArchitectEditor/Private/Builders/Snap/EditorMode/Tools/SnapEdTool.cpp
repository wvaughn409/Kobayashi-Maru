//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/EditorMode/Tools/SnapEdTool.h"

#include "Builders/Snap/EditorMode/SnapEdModeHandler.h"
#include "Builders/Snap/EditorMode/SnapEdModeRenderer.h"

FName FSnapEdTool::ToolFamily = "Snap";

FSnapEdTool::FSnapEdTool(USnapEdModeHandler* InModeHandler) : ModeHandler(InModeHandler) {
}

void FSnapEdTool::Initialize() {
}

void FSnapEdTool::Update(const FSceneView* View, FViewport* Viewport) {

}

void FSnapEdTool::Destroy() {
}

void FSnapEdTool::OnUndo() {
}

void FSnapEdTool::OnRedo() {
}

void FSnapEdTool::AddReferencedObjects(FReferenceCollector& Collector) {
}

UObject* FSnapEdTool::GetToolModel() const {
    return nullptr;
}

TSharedPtr<FSnapEdModeRenderer> FSnapEdTool::GetSnapRenderer() {
    if (!ModeHandler) {
        return nullptr;
    }
    return StaticCastSharedPtr<FSnapEdModeRenderer>(ModeHandler->GetRenderer());
}

FName FSnapEdTool::GetToolFamily() const {
    return ToolFamily;
}
