//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/SnapFlow/Viewport/SDungeonFlowEditorViewport.h"

/** Viewport Client for the preview viewport */
class DUNGEONARCHITECTEDITOR_API FDungeonFlowEditorViewportClient : public FEditorViewportClient,
                                                                    public TSharedFromThis<
                                                                        FDungeonFlowEditorViewportClient> {
public:
    FDungeonFlowEditorViewportClient(FPreviewScene& InPreviewScene,
                                     TWeakPtr<class SEditorViewport> InEditorViewportWidget);

    // FEditorViewportClient interface
    void Tick(float DeltaSeconds) override;
    void ProcessClick(class FSceneView& View, class HHitProxy* HitProxy, FKey Key, EInputEvent Event, uint32 HitX,
                      uint32 HitY) override;
    // End of FEditorViewportClient interface

};
