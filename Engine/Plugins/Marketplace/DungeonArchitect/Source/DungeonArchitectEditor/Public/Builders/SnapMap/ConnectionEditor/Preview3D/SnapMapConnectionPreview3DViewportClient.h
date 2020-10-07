//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/ConnectionEditor/Preview3D/SSnapMapConnectionPreview3DViewport.h"
#include "ISnapMapConnectionEditor.h"

#include "PreviewScene.h"

//FSnapMapConnectionPreview3DViewportClient

/** Viewport Client for the preview viewport */
class DUNGEONARCHITECTEDITOR_API FSnapMapConnectionPreview3DViewportClient : public FEditorViewportClient,
                                                                             public TSharedFromThis<
                                                                                 FSnapMapConnectionPreview3DViewportClient
                                                                             > {
public:
    FSnapMapConnectionPreview3DViewportClient(TWeakPtr<ISnapMapConnectionEditor> InLAThemeEditor,
                                              TWeakPtr<SSnapMapConnectionPreview3DViewport> InLAThemeEditorViewport,
                                              FPreviewScene& InPreviewScene, USnapMapConnectionInfo* InProp);

    // FEditorViewportClient interface
    void Tick(float DeltaSeconds) override;
    // End of FEditorViewportClient interface
private:
    TWeakPtr<ISnapMapConnectionEditor> InLAThemeEditor;
    TWeakPtr<SSnapMapConnectionPreview3DViewport> InLAThemeEditorViewport;
    USnapMapConnectionInfo* InProp;
};
