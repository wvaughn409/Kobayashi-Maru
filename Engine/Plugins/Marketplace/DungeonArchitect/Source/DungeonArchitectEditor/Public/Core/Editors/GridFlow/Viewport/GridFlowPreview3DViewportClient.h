//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/GridFlow/Viewport/SGridFlowPreview3DViewport.h"

#include "PreviewScene.h"

class UGridFlowAsset;

class DUNGEONARCHITECTEDITOR_API FGridFlowPreview3DViewportClient : public FEditorViewportClient,
                                                                    public TSharedFromThis<
                                                                        FGridFlowPreview3DViewportClient> {
public:
    FGridFlowPreview3DViewportClient(FPreviewScene& InPreviewScene, const TWeakPtr<SEditorViewport>& InEditorViewport,
                                     TWeakObjectPtr<UGridFlowAsset> InGridFlowAsset);

    // FEditorViewportClient interface
    void Tick(float DeltaSeconds) override;
    // End of FEditorViewportClient interface

private:
    TWeakObjectPtr<UGridFlowAsset> GridFlowAsset;
};
