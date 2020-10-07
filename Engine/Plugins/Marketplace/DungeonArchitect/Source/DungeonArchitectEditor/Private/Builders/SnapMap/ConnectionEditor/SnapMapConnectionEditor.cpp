//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditor.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"
#include "Builders/SnapMap/ConnectionEditor/Preview3D/SSnapMapConnectionPreview3DViewport.h"
#include "Builders/SnapMap/ConnectionEditor/SSnapMapConnectionEdit.h"
#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditorCommands.h"

#include "ContentBrowserModule.h"
#include "Editor.h"
#include "EditorSupportDelegates.h"
#include "FileHelpers.h"
#include "Framework/Commands/GenericCommands.h"
#include "IContentBrowserSingleton.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "SNodePanel.h"
#include "SSingleObjectDetailsPanel.h"
#include "Subsystems/AssetEditorSubsystem.h"
#include "Toolkits/IToolkitHost.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "FSnapMapConnectionEditor"

DEFINE_LOG_CATEGORY_STATIC(SnapMapConnectionEditor, Log, All);

const FName LAThemeEditorAppName = FName(TEXT("LAThemeEditorApp"));

struct FSnapMapConnectionEditorTabs {
    // Tab identifiers
    static const FName Preview3DID;
    static const FName DetailsID;
};


//////////////////////////////////////////////////////////////////////////

const FName FSnapMapConnectionEditorTabs::DetailsID(TEXT("Details"));
const FName FSnapMapConnectionEditorTabs::Preview3DID(TEXT("Preview3D"));

FName FSnapMapConnectionEditor::GetToolkitFName() const {
    return FName("SnapMapConnectionEditor");
}

FText FSnapMapConnectionEditor::GetBaseToolkitName() const {
    return LOCTEXT("LAThemeEditorAppLabel", "Tree Theme Editor");
}

FText FSnapMapConnectionEditor::GetToolkitName() const {
    const bool bDirtyState = DoorBeingEdited->GetOutermost()->IsDirty();

    FFormatNamedArguments Args;
    Args.Add(TEXT("ThemeName"), FText::FromString(DoorBeingEdited->GetName()));
    Args.Add(TEXT("DirtyState"), bDirtyState ? FText::FromString(TEXT("*")) : FText::GetEmpty());
    return FText::Format(LOCTEXT("SnapMapConnectionEditorAppLabel", "{ThemeName}{DirtyState}"), Args);
}

FString FSnapMapConnectionEditor::GetWorldCentricTabPrefix() const {
    return TEXT("TreeArchitectThemeEditor");
}

FString FSnapMapConnectionEditor::GetDocumentationLink() const {
    return TEXT("TreeArchitect/ThemeEditor");
}

void FSnapMapConnectionEditor::NotifyPreChange(FProperty* PropertyAboutToChange) {

}

void FSnapMapConnectionEditor::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent,
                                                FProperty* PropertyThatChanged) {
    RebuildDoor();
}

FLinearColor FSnapMapConnectionEditor::GetWorldCentricTabColorScale() const {
    return FLinearColor::White;
}

//////////////////////////////////////////////////////////////////////////
// FSnapMapConnectionEditor

TSharedRef<SDockTab> FSnapMapConnectionEditor::SpawnTab_Details(const FSpawnTabArgs& Args) {
    PropertyEditor = SNew(SSnapMapConnectionEdit)
		.SnapMapConnectionEditor(SharedThis(this))
		.ObjectToEdit(DoorBeingEdited);

    // Spawn the tab
    return SNew(SDockTab)
        .Label(LOCTEXT("DetailsTab_Title", "Details"))
        [
            PropertyEditor.ToSharedRef()
        ];
}

bool FSnapMapConnectionEditor::IsTickableInEditor() const {
    return true;
}

void FSnapMapConnectionEditor::Tick(float DeltaTime) {
}

bool FSnapMapConnectionEditor::IsTickable() const {
    return true;
}

TStatId FSnapMapConnectionEditor::GetStatId() const {
    return TStatId();
}

TSharedRef<SDockTab> FSnapMapConnectionEditor::SpawnTab_Preview3D(const FSpawnTabArgs& Args) {
    TSharedRef<SDockTab> SpawnedTab =
        SNew(SDockTab)
		.Label(LOCTEXT("Preview3D", "Preview 3D"))
		.TabColorScale(GetTabColorScale())
        [
            PreviewViewport.ToSharedRef()
        ];

    PreviewViewport->SetParentTab(SpawnedTab);
    return SpawnedTab;
}

void FSnapMapConnectionEditor::SaveAsset_Execute() {
    UE_LOG(SnapMapConnectionEditor, Log, TEXT("Saving snap door asset %s"), *GetEditingObjects()[0]->GetName());

    UpdateOriginalDoorAsset();
    UpdateThumbnail();

    UPackage* Package = DoorBeingEdited->GetOutermost();
    if (!Package) return;

    TArray<UPackage*> PackagesToSave;
    PackagesToSave.Add(Package);

    FEditorFileUtils::PromptForCheckoutAndSave(PackagesToSave, false, false);

    // Update all the components using the asset in the main level to rebuild themselves


}

void FSnapMapConnectionEditor::UpdateOriginalDoorAsset() {
    FEditorDelegates::RefreshEditor.Broadcast();
    FEditorSupportDelegates::RedrawAllViewports.Broadcast();
}

void FSnapMapConnectionEditor::UpdateThumbnail() {
    if (!DoorBeingEdited) return;
    FViewport* PreviewViewportPtr = nullptr;
    if (PreviewViewport.IsValid() && PreviewViewport->GetViewportClient().IsValid()) {
        PreviewViewportPtr = PreviewViewport->GetViewportClient()->Viewport;
    }

    if (PreviewViewportPtr) {
        FAssetData AssetData(DoorBeingEdited);
        TArray<FAssetData> ThemeAssetList;
        ThemeAssetList.Add(AssetData);

        IContentBrowserSingleton& ContentBrowserSingleton = FModuleManager::LoadModuleChecked<FContentBrowserModule
        >("ContentBrowser").Get();
        ContentBrowserSingleton.CaptureThumbnailFromViewport(PreviewViewportPtr, ThemeAssetList);
    }
}

FSnapMapConnectionEditor::~FSnapMapConnectionEditor() {

}

void FSnapMapConnectionEditor::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) {
    WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(
        LOCTEXT("WorkspaceMenu_SnapMapConnectionEditor", "SnapMap Door Editor"));
    auto WorkspaceMenuCategoryRef = WorkspaceMenuCategory.ToSharedRef();

    FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

    InTabManager->RegisterTabSpawner(FSnapMapConnectionEditorTabs::DetailsID,
                                     FOnSpawnTab::CreateSP(this, &FSnapMapConnectionEditor::SpawnTab_Details))
                .SetDisplayName(LOCTEXT("DetailsTabLabel", "Details"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

    InTabManager->RegisterTabSpawner(FSnapMapConnectionEditorTabs::Preview3DID,
                                     FOnSpawnTab::CreateSP(this, &FSnapMapConnectionEditor::SpawnTab_Preview3D))
                .SetDisplayName(LOCTEXT("Preview3DTab", "Preview 3D"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Viewports"));
}

void FSnapMapConnectionEditor::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) {
    FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

    InTabManager->UnregisterTabSpawner(FSnapMapConnectionEditorTabs::Preview3DID);
    InTabManager->UnregisterTabSpawner(FSnapMapConnectionEditorTabs::DetailsID);
}

void FSnapMapConnectionEditor::ExtendMenu() {
    struct Local {
        static void FillToolbar(FToolBarBuilder& ToolbarBuilder) {
            ToolbarBuilder.BeginSection("Tree");
            {
                ToolbarBuilder.AddToolBarButton(FSnapMapConnectionEditorCommands::Get().Rebuild);
            }
            ToolbarBuilder.EndSection();
        }
    };

    TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
    ToolbarExtender->AddToolBarExtension(
        "Asset",
        EExtensionHook::After,
        GetToolkitCommands(),
        FToolBarExtensionDelegate::CreateStatic(&Local::FillToolbar)
    );
    AddToolbarExtender(ToolbarExtender);
}


void FSnapMapConnectionEditor::BindCommands() {

    const FSnapMapConnectionEditorCommands& Commands = FSnapMapConnectionEditorCommands::Get();

    ToolkitCommands->MapAction(
        Commands.Rebuild,
        FExecuteAction::CreateSP(this, &FSnapMapConnectionEditor::HandleRebuildActionExecute));
}

void FSnapMapConnectionEditor::HandleRebuildActionExecute() {
    RebuildDoor();
}

void FSnapMapConnectionEditor::RebuildDoor() {
    // Destroy the old connection instance actor
    if (ConnectionInstanceActor.IsValid()) {
        ConnectionInstanceActor->Destroy();
        ConnectionInstanceActor = nullptr;
    }
    ASnapMapConnectionActor* ConnectionActor = PreviewViewport->GetConnectionActor();
    USnapMapConnectionComponent* ConnectionComponent = ConnectionActor->ConnectionComponent;
    ConnectionComponent->ConnectionInfo = DoorBeingEdited;
    ConnectionComponent->ConnectionState = DoorBeingEdited->bEditorPreviewDoor
                                               ? ESnapMapConnectionState::Door
                                               : ESnapMapConnectionState::Wall;
    ConnectionInstanceActor = ConnectionActor->BuildConnectionInstance();
}

void FSnapMapConnectionEditor::InitSnapMapConnectionEditor(const EToolkitMode::Type Mode,
                                                           const TSharedPtr<class IToolkitHost>& InitToolkitHost,
                                                           USnapMapConnectionInfo* DoorAsset) {

    // Initialize the asset editor and spawn nothing (dummy layout)
    GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->CloseOtherEditors(DoorAsset, this);

    DoorBeingEdited = DoorAsset;

    FSnapMapConnectionEditorCommands::Register();
    BindCommands();
    ExtendMenu();

    PreviewViewport = SNew(SSnapMapConnectionPreview3DViewport)
		.SnapMapConnectionEditor(SharedThis(this))
		.DoorAsset(DoorBeingEdited);


    // Default layout
    const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout(
            "Standalone_TreeArchitectEditor_Layout_v1")
        ->AddArea
        (
            FTabManager::NewPrimaryArea()
            ->SetOrientation(Orient_Vertical)
            ->Split
            (
                FTabManager::NewStack()
                ->SetSizeCoefficient(0.1f)
                ->SetHideTabWell(true)
                ->AddTab(GetToolbarTabId(), ETabState::OpenedTab)
            )
            ->Split
            (
                FTabManager::NewSplitter()
                ->SetOrientation(Orient_Horizontal)
                ->SetSizeCoefficient(1.0f)
                ->Split
                (

                    FTabManager::NewStack()
                    ->SetSizeCoefficient(0.5f)
                    ->AddTab(FSnapMapConnectionEditorTabs::DetailsID, ETabState::OpenedTab)
                )

                ->Split
                (
                    FTabManager::NewStack()
                    ->SetSizeCoefficient(0.5f)
                    ->SetHideTabWell(true)
                    ->AddTab(FSnapMapConnectionEditorTabs::Preview3DID, ETabState::OpenedTab)
                )
            )
        );

    // Initialize the asset editor and spawn nothing (dummy layout)
    InitAssetEditor(Mode, InitToolkitHost, LAThemeEditorAppName, StandaloneDefaultLayout,
                    /*bCreateDefaultStandaloneMenu=*/ true, /*bCreateDefaultToolbar=*/ true, DoorAsset);

    RebuildDoor();
}

void FSnapMapConnectionEditor::OnPropertyChanged(const FPropertyChangedEvent& PropertyChangedEvent) {
    RebuildDoor();
}

#undef LOCTEXT_NAMESPACE
