//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/LevelEditor/EditorMode/DungeonEdModeHandler.h"
#include "SnapMapEdModeHandler.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SnapMapEdModeHandlerLog, Log, All);

UCLASS()
class USnapMapEdModeHandler : public UDungeonEdModeHandler {
    GENERATED_BODY()

public:
    TSharedPtr<FDungeonEdModeRenderer> CreateRenderer() override;
    virtual void SetActiveTool(TSharedPtr<IDungeonEdTool> NewTool) override;
    TSharedPtr<SWidget> CreateToolkitWidget() override;

protected:
    void OnUpdate(const FSceneView* View, FViewport* Viewport) override;
};
