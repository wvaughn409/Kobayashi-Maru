//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/ConnectionEditor/Preview3D/SSnapMapConnectionPreview3DViewport.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/ConnectionEditor/Preview3D/SSnapMapConnectionPreview3DViewportToolbar.h"
#include "Builders/SnapMap/ConnectionEditor/Preview3D/SnapMapConnectionPreview3DViewportClient.h"

#include "AdvancedPreviewScene.h"
#include "Atmosphere/AtmosphericFogComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"
#include "EditorViewportClient.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "SSnapMapConnectionPreview3DViewport"


void SSnapMapConnectionPreview3DViewport::Construct(const FArguments& InArgs) {
    LAThemeEditorPtr = InArgs._SnapMapConnectionEditor;
    DoorAsset = InArgs._DoorAsset;

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
    //ObjectToEdit->PreviewViewportProperties->PropertyChangeListener = SharedThis(this);

    UWorld* World = PreviewScene->GetWorld();

    AtmosphericFog = NewObject<UAtmosphericFogComponent>();
    PreviewScene->AddComponent(AtmosphericFog, FTransform::Identity);

    PreviewScene->DirectionalLight->SetMobility(EComponentMobility::Movable);
    PreviewScene->DirectionalLight->CastShadows = true;
    PreviewScene->DirectionalLight->CastStaticShadows = true;
    PreviewScene->DirectionalLight->CastDynamicShadows = true;
    PreviewScene->SetSkyBrightness(1.0f);

    SpawnPreviewActor();
}


SSnapMapConnectionPreview3DViewport::~SSnapMapConnectionPreview3DViewport() {
    FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);
    if (EditorViewportClient.IsValid()) {
        EditorViewportClient->Viewport = nullptr;
    }
}

void SSnapMapConnectionPreview3DViewport::AddReferencedObjects(FReferenceCollector& Collector) {
    Collector.AddReferencedObject(DoorAsset);
    Collector.AddReferencedObject(AtmosphericFog);
    Collector.AddReferencedObject(PreviewActor);
}


void SSnapMapConnectionPreview3DViewport::OnToggleDebugData() {

}

void SSnapMapConnectionPreview3DViewport::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
                                               const float InDeltaTime) {
    SEditorViewport::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

}

EVisibility SSnapMapConnectionPreview3DViewport::GetToolbarVisibility() const {
    return EVisibility::Visible;
}

TSharedRef<FEditorViewportClient> SSnapMapConnectionPreview3DViewport::MakeEditorViewportClient() {
    EditorViewportClient = MakeShareable(
        new FSnapMapConnectionPreview3DViewportClient(LAThemeEditorPtr, SharedThis(this), *PreviewScene, DoorAsset));

    EditorViewportClient->bSetListenerPosition = false;
    EditorViewportClient->SetRealtime(true); // TODO: Check if real-time is needed
    EditorViewportClient->VisibilityDelegate.BindSP(this, &SSnapMapConnectionPreview3DViewport::IsVisible);

    return EditorViewportClient.ToSharedRef();
}

EVisibility SSnapMapConnectionPreview3DViewport::OnGetViewportContentVisibility() const {
    return EVisibility::Visible;
}

void SSnapMapConnectionPreview3DViewport::BindCommands() {
    SEditorViewport::BindCommands();

    const FSnapMapConnectionEditorViewportCommands& ViewportActions = FSnapMapConnectionEditorViewportCommands::Get();
    CommandList->MapAction(
        ViewportActions.ToggleDebugData,
        FExecuteAction::CreateSP(this, &SSnapMapConnectionPreview3DViewport::OnToggleDebugData));

}

void SSnapMapConnectionPreview3DViewport::OnFocusViewportToSelection() {
    SEditorViewport::OnFocusViewportToSelection();
}

TSharedPtr<SWidget> SSnapMapConnectionPreview3DViewport::MakeViewportToolbar() {
    // Build our toolbar level toolbar
    TSharedRef<SSnapMapConnectionPreview3DViewportToolbar> ToolBar =
        SNew(SSnapMapConnectionPreview3DViewportToolbar)
		.Viewport(SharedThis(this))
		.Visibility(this, &SSnapMapConnectionPreview3DViewport::GetToolbarVisibility)
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

bool SSnapMapConnectionPreview3DViewport::IsVisible() const {
    return ViewportWidget.IsValid() && (!ParentTab.IsValid() || ParentTab.Pin()->IsForeground());
}

void SSnapMapConnectionPreview3DViewport::SpawnPreviewActor() {
    if (PreviewActor) {
        PreviewActor->Destroy();
    }
    UWorld* World = PreviewScene->GetWorld();
    PreviewActor = World->SpawnActor<ASnapMapConnectionActor>(FVector::ZeroVector, FQuat::Identity.Rotator());
}


USnapMapConnectionComponent* SSnapMapConnectionPreview3DViewport::GetConnectionComponent() const {
    return PreviewActor->ConnectionComponent;
}

ASnapMapConnectionActor* SSnapMapConnectionPreview3DViewport::GetConnectionActor() const {
    return PreviewActor;
}

UWorld* SSnapMapConnectionPreview3DViewport::GetWorld() const {
    return PreviewScene->GetWorld();
}

#undef LOCTEXT_NAMESPACE
