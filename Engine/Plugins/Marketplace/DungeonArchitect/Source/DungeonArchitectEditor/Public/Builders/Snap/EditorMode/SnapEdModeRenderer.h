//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/LevelEditor/EditorMode/DungeonEdModeRenderer.h"

class USnapModel;
class USnapEdModeHandler;

class DUNGEONARCHITECTEDITOR_API FSnapEdModeRenderer : public FDungeonEdModeRenderer {
public:
    FSnapEdModeRenderer(USnapEdModeHandler* pModeHandler);
    void Render(const FSceneView* View, FViewport* Viewport, FPrimitiveDrawInterface* PDI,
                TSharedPtr<IDungeonEdTool> ActiveTool) override;
    void Destroy() override;

private:
    USnapEdModeHandler* ModeHandler;
};
