//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"
#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditor.h"

#include "SEditorViewport.h"

class USnapMapConnectionInfo;
class ASnapMapConnectionActor;
class USnapMapConnectionComponent;
class FAdvancedPreviewScene;

/**
* StaticMesh Editor Preview viewport widget
*/
class DUNGEONARCHITECTEDITOR_API SSnapMapConnectionPreview3DViewport : public SEditorViewport, public FGCObject {
public:
SLATE_BEGIN_ARGS(SSnapMapConnectionPreview3DViewport) {
        }

        SLATE_ARGUMENT(TWeakPtr<FSnapMapConnectionEditor>, SnapMapConnectionEditor)
        SLATE_ARGUMENT(USnapMapConnectionInfo*, DoorAsset)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);
    ~SSnapMapConnectionPreview3DViewport();

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

    USnapMapConnectionComponent* GetConnectionComponent() const;
    ASnapMapConnectionActor* GetConnectionActor() const;

    virtual UWorld* GetWorld() const override;
protected:
    /** SEditorViewport interface */
    TSharedRef<FEditorViewportClient> MakeEditorViewportClient() override;
    EVisibility OnGetViewportContentVisibility() const override;
    void BindCommands() override;
    void OnFocusViewportToSelection() override;
    TSharedPtr<SWidget> MakeViewportToolbar() override;

    void OnToggleDebugData();

private:
    /** Determines the visibility of the viewport. */
    virtual bool IsVisible() const override;


private:
    TWeakPtr<FSnapMapConnectionEditor> LAThemeEditorPtr;
    USnapMapConnectionInfo* DoorAsset;

    /** The parent tab where this viewport resides */
    TWeakPtr<SDockTab> ParentTab;

    /** Level viewport client */
    TSharedPtr<class FSnapMapConnectionPreview3DViewportClient> EditorViewportClient;

    /** The scene for this viewport. */
    TSharedPtr<FAdvancedPreviewScene> PreviewScene;

    ASnapMapConnectionActor* PreviewActor;

    UAtmosphericFogComponent* AtmosphericFog;

};
