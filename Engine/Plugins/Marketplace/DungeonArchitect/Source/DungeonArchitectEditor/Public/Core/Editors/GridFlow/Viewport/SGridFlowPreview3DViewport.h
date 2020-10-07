//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/GridFlow/GridFlowEditor.h"

#include "PreviewScene.h"
#include "SEditorViewport.h"

class ADungeon;
class UGridFlowAsset;
class FGridFlowEditor;
class ASkyLight;

/**
* StaticMesh Editor Preview viewport widget
*/
class DUNGEONARCHITECTEDITOR_API SGridFlowPreview3DViewport : public SEditorViewport, public FGCObject {
public:
SLATE_BEGIN_ARGS(SGridFlowPreview3DViewport) {
        }

        SLATE_ARGUMENT(TWeakObjectPtr<UGridFlowAsset>, GridFlowAsset)
        SLATE_ARGUMENT(TWeakPtr<FGridFlowEditor>, GridFlowEditor)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
    ~SGridFlowPreview3DViewport();

    // FGCObject interface
    void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FGCObject interface

    /** Set the parent tab of the viewport for determining visibility */
    void SetParentTab(TSharedRef<SDockTab> InParentTab) { ParentTab = InParentTab; }

    // SWidget Interface
    virtual void Tick(const FGeometry& AllottedGeometry, double InCurrentTime, float InDeltaTime) override;
    // End of SWidget Interface

    EVisibility GetToolbarVisibility() const;

    void SpawnPreviewActor();

    virtual UWorld* GetWorld() const override;
    ADungeon* GetPreviewActor() const { return PreviewActor; }

protected:
    /** SEditorViewport interface */
    TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
    EVisibility OnGetViewportContentVisibility() const override;
    void BindCommands() override;

    void OnFocusViewportToSelection() override;
    TSharedPtr<SWidget> MakeViewportToolbar() override;

    void OnToggleDebugData();
    void OnDisplayDungeonProperties();

private:
    /** Determines the visibility of the viewport. */
    virtual bool IsVisible() const override;


private:

    /** The parent tab where this viewport resides */
    TWeakPtr<SDockTab> ParentTab;

    /** Level viewport client */
    TSharedPtr<class FGridFlowPreview3DViewportClient> EditorViewportClient;

    /** The scene for this viewport. */
    TSharedPtr<FPreviewScene> PreviewScene;

    ADungeon* PreviewActor;

    TWeakObjectPtr<UGridFlowAsset> GridFlowAsset;
    TWeakPtr<FGridFlowEditor> GridFlowEditor;
};
