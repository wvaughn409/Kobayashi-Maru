//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/LevelEditor/EditorMode/IDungeonEdTool.h"

class USnapMapEdToolData;
class USnapMapEdModeHandler;
class FSnapMapEdModeRenderer;

class FSnapMapEdTool : public IDungeonEdTool, public FGCObject {
public:
    FSnapMapEdTool(USnapMapEdModeHandler* ModeHandler);

    virtual ~FSnapMapEdTool() {
    }

    void Initialize() override;
    void Update(const FSceneView* View, FViewport* Viewport) override;
    void Destroy() override;

    void ApplyBrush(FEditorViewportClient* ViewportClient) override {
    }

    bool InputKey(FEditorViewportClient* InViewportClient, FViewport* InViewport, FKey InKey,
                  EInputEvent InEvent) override { return false; }

    void OnUndo() override;
    void OnRedo() override;
    UObject* GetToolModel() const override;
    void AddReferencedObjects(FReferenceCollector& Collector) override;

    TSharedPtr<FSnapMapEdModeRenderer> GetSnapMapRenderer();
    FName GetToolFamily() const override;

    static FName ToolFamily;

protected:
    USnapMapEdModeHandler* ModeHandler;

};
