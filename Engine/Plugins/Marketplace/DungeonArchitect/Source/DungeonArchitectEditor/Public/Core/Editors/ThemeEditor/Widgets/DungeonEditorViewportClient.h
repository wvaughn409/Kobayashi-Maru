//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/ThemeEditor/Widgets/SDungeonEditorViewport.h"
#include "IDungeonArchitectThemeEditor.h"

#include "PreviewScene.h"

class FDungeonPreviewScene;

/** Viewport Client for the preview viewport */
class DUNGEONARCHITECTEDITOR_API FDungeonEditorViewportClient : public FEditorViewportClient,
                                                                public TSharedFromThis<FDungeonEditorViewportClient> {
public:
    FDungeonEditorViewportClient(TWeakPtr<IDungeonArchitectThemeEditor> InDungeonEditor,
                                 TWeakPtr<SDungeonEditorViewport> InDungeonEditorViewport,
                                 FPreviewScene& InPreviewScene, UDungeonThemeAsset* InProp);

    // FEditorViewportClient interface
    void Tick(float DeltaSeconds) override;
    void ProcessClick(class FSceneView& View, class HHitProxy* HitProxy, FKey Key, EInputEvent Event, uint32 HitX,
                      uint32 HitY) override;
    // End of FEditorViewportClient interface
private:
    TWeakPtr<IDungeonArchitectThemeEditor> InDungeonEditor;
    TWeakPtr<SDungeonEditorViewport> InDungeonEditorViewport;
    UDungeonThemeAsset* InProp;
};
