//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/GridFlow/Viewport/SGridFlowPreview3DViewport.h"

#include "Builders/GridFlow/GridFlowBuilder.h"
#include "Builders/GridFlow/GridFlowConfig.h"
#include "Core/Dungeon.h"
#include "Core/Editors/GridFlow/Viewport/GridFlowPreview3DViewportClient.h"
#include "Core/Editors/GridFlow/Viewport/SGridFlowPreview3DViewportToolbar.h"

#include "Atmosphere/AtmosphericFogComponent.h"
#include "Components/DirectionalLightComponent.h"
#include "Components/SkyLightComponent.h"
#include "EditorViewportClient.h"
#include "Engine/TextureCube.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "SGridFlowPreview3DViewport"
DEFINE_LOG_CATEGORY_STATIC(LogGridFlowPreviewViewport, Log, All);

void SGridFlowPreview3DViewport::Construct(const FArguments& InArgs) {
    GridFlowAsset = InArgs._GridFlowAsset;
    GridFlowEditor = InArgs._GridFlowEditor;

    PreviewScene = MakeShareable(new FPreviewScene);
    SEditorViewport::Construct(SEditorViewport::FArguments());
    //ObjectToEdit->PreviewViewportProperties->PropertyChangeListener = SharedThis(this);

    UWorld* World = PreviewScene->GetWorld();

    PreviewScene->DirectionalLight->SetMobility(EComponentMobility::Movable);
    PreviewScene->DirectionalLight->CastShadows = true;
    PreviewScene->DirectionalLight->CastStaticShadows = true;
    PreviewScene->DirectionalLight->CastDynamicShadows = true;
    PreviewScene->DirectionalLight->SetIntensity(1.0f);

    UTextureCube* Cubemap = Cast<UTextureCube>(
        StaticLoadObject(UTextureCube::StaticClass(), nullptr, TEXT("/Engine/MapTemplates/daylight")));
    PreviewScene->SetSkyCubemap(Cubemap);
    PreviewScene->SetSkyBrightness(0.5f);
    PreviewScene->UpdateCaptureContents();

    SpawnPreviewActor();

    BindCommands();
}


SGridFlowPreview3DViewport::~SGridFlowPreview3DViewport() {
    FCoreUObjectDelegates::OnObjectPropertyChanged.RemoveAll(this);
    if (EditorViewportClient.IsValid()) {
        EditorViewportClient->Viewport = nullptr;
    }
}

void SGridFlowPreview3DViewport::AddReferencedObjects(FReferenceCollector& Collector) {
    Collector.AddReferencedObject(PreviewActor);
}


void SGridFlowPreview3DViewport::OnToggleDebugData() {
    UE_LOG(LogGridFlowPreviewViewport, Log, TEXT("Toggle debug data"));
}

void SGridFlowPreview3DViewport::OnDisplayDungeonProperties() {
    if (GridFlowEditor.IsValid() && PreviewActor) {
        TSharedPtr<FGridFlowEditor> GridFlowEditorPtr = GridFlowEditor.Pin();
        GridFlowEditorPtr->ShowObjectDetails(PreviewActor);
    }
}

void SGridFlowPreview3DViewport::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
                                      const float InDeltaTime) {
    SEditorViewport::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

}

EVisibility SGridFlowPreview3DViewport::GetToolbarVisibility() const {
    return EVisibility::Visible;
}

TSharedRef<FEditorViewportClient> SGridFlowPreview3DViewport::MakeEditorViewportClient() {
    EditorViewportClient = MakeShareable(
        new FGridFlowPreview3DViewportClient(*PreviewScene, SharedThis(this), GridFlowAsset));

    //EditorViewportClient->bSetListenerPosition = false;
    EditorViewportClient->SetRealtime(true);
    EditorViewportClient->VisibilityDelegate.BindSP(this, &SGridFlowPreview3DViewport::IsVisible);

    return EditorViewportClient.ToSharedRef();
}

EVisibility SGridFlowPreview3DViewport::OnGetViewportContentVisibility() const {
    return EVisibility::Visible;
}

void SGridFlowPreview3DViewport::BindCommands() {
    SEditorViewport::BindCommands();

    const FGridFlowEditorViewportCommands& ViewportActions = FGridFlowEditorViewportCommands::Get();
    CommandList->MapAction(
        ViewportActions.ToggleDebugData,
        FExecuteAction::CreateSP(this, &SGridFlowPreview3DViewport::OnToggleDebugData));

    CommandList->MapAction(
        ViewportActions.DisplayDungeonProperties,
        FExecuteAction::CreateSP(this, &SGridFlowPreview3DViewport::OnDisplayDungeonProperties));

}

void SGridFlowPreview3DViewport::OnFocusViewportToSelection() {
    SEditorViewport::OnFocusViewportToSelection();
}

TSharedPtr<SWidget> SGridFlowPreview3DViewport::MakeViewportToolbar() {
    // Build our toolbar level toolbar
    TSharedRef<SGridFlowPreview3DViewportToolbar> ToolBar =
        SNew(SGridFlowPreview3DViewportToolbar)
		.Viewport(SharedThis(this))
		.Visibility(this, &SGridFlowPreview3DViewport::GetToolbarVisibility)
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

bool SGridFlowPreview3DViewport::IsVisible() const {
    return ViewportWidget.IsValid() && (!ParentTab.IsValid() || ParentTab.Pin()->IsForeground());
}

void SGridFlowPreview3DViewport::SpawnPreviewActor() {
    if (PreviewActor) {
        PreviewActor->DestroyDungeon();
        PreviewActor->Destroy();
    }

    UWorld* World = PreviewScene->GetWorld();
    PreviewActor = World->SpawnActor<ADungeon>(FVector::ZeroVector, FQuat::Identity.Rotator());
    if (PreviewActor) {
        PreviewActor->SetBuilderClass(UGridFlowBuilder::StaticClass());
        UGridFlowConfig* GridFlowConfig = Cast<UGridFlowConfig>(PreviewActor->GetConfig());
        if (GridFlowConfig) {
            // Setup the grid flow graph asset to the currently edited asset
            GridFlowConfig->GridFlow = GridFlowAsset.Get();
            GridFlowConfig->MaxBuildTimePerFrameMs = 30;
        }

        // Setup the default theme file
        UDungeonThemeAsset* Theme = Cast<UDungeonThemeAsset>(StaticLoadObject(
            UDungeonThemeAsset::StaticClass(), nullptr,
            TEXT("/DungeonArchitect/Core/Builders/GridFlowContent/Theme/T_DefaultGridFlow")));
        if (Theme) {
            PreviewActor->Themes.Reset();
            PreviewActor->Themes.Add(Theme);
        }
    }
}


UWorld* SGridFlowPreview3DViewport::GetWorld() const {
    return PreviewScene->GetWorld();
}

#undef LOCTEXT_NAMESPACE
