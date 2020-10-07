//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "SEditorViewport.h"

class ADungeon;
class UDungeonFlow;
class FDungeonFlowEditor;

class DUNGEONARCHITECTEDITOR_API SDungeonFlowEditorViewport : public SEditorViewport, public FGCObject {
public:
SLATE_BEGIN_ARGS(SDungeonFlowEditorViewport) {
        }

        SLATE_ARGUMENT(TWeakPtr<FDungeonFlowEditor>, DungeonFlowEditor)
        SLATE_ARGUMENT(UDungeonFlow*, ObjectToEdit)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
    ~SDungeonFlowEditorViewport();

    // FGCObject interface
    void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FGCObject interface

    /** Set the parent tab of the viewport for determining visibility */
    void SetParentTab(TSharedRef<SDockTab> InParentTab) { ParentTab = InParentTab; }

    // SWidget Interface
    virtual void Tick(const FGeometry& AllottedGeometry, double InCurrentTime, float InDeltaTime) override;
    // End of SWidget Interface

    EVisibility GetToolbarVisibility() const;
    TSharedPtr<class FAdvancedPreviewScene> GetAdvancedPreview() const { return PreviewScene; }

protected:
    /** SEditorViewport interface */
    TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
    EVisibility OnGetViewportContentVisibility() const override;
    void BindCommands() override;
    void OnFocusViewportToSelection() override;
    TSharedPtr<SWidget> MakeViewportToolbar() override;

private:
    /** Determines the visibility of the viewport. */
    virtual bool IsVisible() const override;

private:
    TWeakPtr<FDungeonFlowEditor> DungeonFlowEditorPtr;
    UDungeonFlow* ObjectToEdit;

    /** The parent tab where this viewport resides */
    TWeakPtr<SDockTab> ParentTab;

    /** Level viewport client */
    TSharedPtr<class FDungeonFlowEditorViewportClient> EditorViewportClient;

    /** The scene for this viewport. */
    TSharedPtr<class FAdvancedPreviewScene> PreviewScene;
};
