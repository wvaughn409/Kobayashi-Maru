//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/Viewport/SDungeonFlowEditorViewport.h"

#include "Core/Editors/SnapFlow/Viewport/DungeonFlowEditorViewportClient.h"
#include "Core/Editors/SnapFlow/Viewport/SDungeonFlowEditorViewportToolbar.h"

#include "AdvancedPreviewScene.h"
#include "Atmosphere/AtmosphericFogComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/LightComponent.h"
#include "Components/LightComponentBase.h"
#include "EditorViewportClient.h"
#include "EngineUtils.h"
#include "Framework/Application/SlateApplication.h"
#include "PreviewScene.h"
#include "Widgets/Docking/SDockTab.h"

void SDungeonFlowEditorViewport::Construct(const FArguments& InArgs) {
    DungeonFlowEditorPtr = InArgs._DungeonFlowEditor;
    ObjectToEdit = InArgs._ObjectToEdit;

    {
        FAdvancedPreviewScene::ConstructionValues CVS;
        CVS.bCreatePhysicsScene = false;
        CVS.LightBrightness = 3;
        CVS.SkyBrightness = 1;
        PreviewScene = MakeShareable(new FAdvancedPreviewScene(CVS));
        PreviewScene->SetFloorVisibility(false);

        // Make sure the floor is not visible even if enabled from the properties tab
        PreviewScene->SetFloorOffset(-100000);
    }
    SEditorViewport::Construct(SEditorViewport::FArguments());

    UWorld* World = PreviewScene->GetWorld();

    PreviewScene->DirectionalLight->SetMobility(EComponentMobility::Movable);
    PreviewScene->DirectionalLight->CastShadows = true;
    PreviewScene->DirectionalLight->CastStaticShadows = true;
    PreviewScene->DirectionalLight->CastDynamicShadows = true;
    PreviewScene->DirectionalLight->SetIntensity(3);
    PreviewScene->SetSkyBrightness(1.0f);
}

SDungeonFlowEditorViewport::~SDungeonFlowEditorViewport() {
    FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);
    if (EditorViewportClient.IsValid()) {
        EditorViewportClient->Viewport = nullptr;
    }
}

void SDungeonFlowEditorViewport::AddReferencedObjects(FReferenceCollector& Collector) {
    Collector.AddReferencedObject(ObjectToEdit);
}


void SDungeonFlowEditorViewport::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
                                      const float InDeltaTime) {
    SEditorViewport::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

}

EVisibility SDungeonFlowEditorViewport::GetToolbarVisibility() const {
    return EVisibility::Visible;
}

TSharedRef<FEditorViewportClient> SDungeonFlowEditorViewport::MakeEditorViewportClient() {
    EditorViewportClient = MakeShareable(new FDungeonFlowEditorViewportClient(*PreviewScene, SharedThis(this)));

    EditorViewportClient->bSetListenerPosition = false;
    EditorViewportClient->SetRealtime(true); // TODO: Check if real-time is needed
    EditorViewportClient->VisibilityDelegate.BindSP(this, &SDungeonFlowEditorViewport::IsVisible);

    return EditorViewportClient.ToSharedRef();
}

EVisibility SDungeonFlowEditorViewport::OnGetViewportContentVisibility() const {
    return EVisibility::Visible;
}

void SDungeonFlowEditorViewport::BindCommands() {
    SEditorViewport::BindCommands();

    //const FDungeonFlowEditorViewportCommands& ViewportActions = FDungeonFlowEditorViewportCommands::Get();
}

void SDungeonFlowEditorViewport::OnFocusViewportToSelection() {
    SEditorViewport::OnFocusViewportToSelection();
}

TSharedPtr<SWidget> SDungeonFlowEditorViewport::MakeViewportToolbar() {
    // Build our toolbar level toolbar
    TSharedRef<SViewportToolBar> ToolBar =
        SNew(SDungeonFlowEditorViewportToolBar)
		.Viewport(SharedThis(this))
		.Visibility(this, &SDungeonFlowEditorViewport::GetToolbarVisibility)
		.IsEnabled(FSlateApplication::Get().GetNormalExecutionAttribute());

    return
        SNew(SVerticalBox)
        .Visibility(EVisibility::SelfHitTestInvisible)
        + SVerticalBox::Slot()
          .AutoHeight()
          .VAlign(VAlign_Top)
        [
            ToolBar
        ];
}

bool SDungeonFlowEditorViewport::IsVisible() const {
    return ViewportWidget.IsValid() && (!ParentTab.IsValid() || ParentTab.Pin()->IsForeground());
}
