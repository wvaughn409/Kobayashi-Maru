//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/DungeonFlowEditor.h"

#include "Core/DungeonFlow/DungeonFlow.h"
#include "Core/Editors/SnapFlow/AppModes/DebugAppMode.h"
#include "Core/Editors/SnapFlow/AppModes/GraphDesignAppMode.h"
#include "Core/Editors/SnapFlow/AppModes/VisualizeAppMode.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorCommands.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorToolbar.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorUtils.h"
#include "Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraph_DebugGrammar.h"
#include "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"

#include "Subsystems/AssetEditorSubsystem.h"
#include "Toolkits/AssetEditorManager.h"
#include "WorkflowOrientedApp/WorkflowTabManager.h"

#define LOCTEXT_NAMESPACE "DungeonFlowEditor"

DEFINE_LOG_CATEGORY_STATIC(DungeonFlowEditor, Log, All);

const FName FDungeonFlowEditor::GraphEditorModeID(TEXT("GraphEditorMode"));
const FName FDungeonFlowEditor::VisualizationModeID(TEXT("VisualizationMode"));
const FName FDungeonFlowEditor::DebugModeID(TEXT("DebugMode"));
const FName DungeonFlowEditorAppName = FName(TEXT("DungeonFlowEditorApp"));

FDungeonFlowEditor::~FDungeonFlowEditor() {
    //TODO: Cleanup graph handlers
}

void FDungeonFlowEditor::InitFlowEditor(const EToolkitMode::Type Mode,
                                        const TSharedPtr<class IToolkitHost>& InitToolkitHost,
                                        UDungeonFlow* InDungeonFlow) {
    if (!DocumentManager.IsValid()) {
        DocumentManager = MakeShareable(new FDocumentTracker);
        DocumentManager->Initialize(SharedThis(this));
    }

    FDungeonFlowEditorCommands::Register();

    // Initialize the asset editor
    GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->CloseOtherEditors(InDungeonFlow, this);

    AssetBeingEdited = InDungeonFlow;

    // Create the visualization graph
    VisualizationGraph = NewObject<UEdGraph_Grammar>();
    DebugGraph = NewObject<UEdGraph_DebugGrammar>();
    DebugModeSettings = NewObject<UFlowEditorDebugAppModeSettings>();

    const TSharedRef<FTabManager::FLayout> DummyLayout = FTabManager::NewLayout("NullLayout")->AddArea(
        FTabManager::NewPrimaryArea());

    if (!ToolbarBuilder.IsValid()) {
        ToolbarBuilder = MakeShareable(new FDungeonFlowEditorToolbar(SharedThis(this)));
    }

    // Initialize the asset editor and spawn nothing (dummy layout)
    const bool bCreateDefaultStandaloneMenu = true;
    const bool bCreateDefaultToolbar = true;
    InitAssetEditor(Mode, InitToolkitHost, DungeonFlowEditorAppName, DummyLayout, bCreateDefaultStandaloneMenu,
                    bCreateDefaultToolbar, AssetBeingEdited);

    AddApplicationMode(GraphEditorModeID, MakeShareable(new FDungeonFlowEditor_GraphDesignAppMode(SharedThis(this))));
    AddApplicationMode(VisualizationModeID, MakeShareable(new FDungeonFlowEditor_VisualizeAppMode(SharedThis(this))));
    AddApplicationMode(DebugModeID, MakeShareable(new FDungeonFlowEditor_DebugAppMode(SharedThis(this))));

    SetCurrentMode(GraphEditorModeID);
}


FName FDungeonFlowEditor::GetToolkitFName() const {
    return FName("DungeonFlow");
}

FText FDungeonFlowEditor::GetBaseToolkitName() const {
    return LOCTEXT("DungeonFlowEditorAppLabel", "Dungeon Flow Editor");
}

FText FDungeonFlowEditor::GetToolkitName() const {
    const bool bDirtyState = AssetBeingEdited->GetOutermost()->IsDirty();

    FFormatNamedArguments Args;
    Args.Add(TEXT("DungeonName"), FText::FromString(AssetBeingEdited->GetName()));
    Args.Add(TEXT("DirtyState"), bDirtyState ? FText::FromString(TEXT("*")) : FText::GetEmpty());
    return FText::Format(LOCTEXT("DungeonFlowEditorAppTitle", "{DungeonName}"), Args);
}

FLinearColor FDungeonFlowEditor::GetWorldCentricTabColorScale() const {
    return FLinearColor::White;
}

FString FDungeonFlowEditor::GetWorldCentricTabPrefix() const {
    return TEXT("DungeonFlowEditor");
}

FString FDungeonFlowEditor::GetDocumentationLink() const {
    // TODO: Fix me
    return TEXT("Dungeon/DungeonFlowEditor");
}

void FDungeonFlowEditor::SaveAsset_Execute() {
    if (AssetBeingEdited && AssetBeingEdited->MissionGrammar) {
        FDungeonFlowEditorUtils::CompileGrammarToScript(AssetBeingEdited->MissionGrammar);
    }

    TSharedPtr<FFlowEdAppModeBase> AppMode = StaticCastSharedPtr<FFlowEdAppModeBase>(GetCurrentModePtr());
    if (AppMode.IsValid()) {
        AppMode->OnAssetSave();
    }

    IDungeonFlowEditor::SaveAsset_Execute();
}

void FDungeonFlowEditor::AddReferencedObjects(FReferenceCollector& Collector) {
    Collector.AddReferencedObject(VisualizationGraph);
    Collector.AddReferencedObject(DebugGraph);
    Collector.AddReferencedObject(DebugModeSettings);
}

void FDungeonFlowEditor::NotifyPreChange(FProperty* PropertyAboutToChange) {

}

void FDungeonFlowEditor::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent,
                                          FProperty* PropertyThatChanged) {
}

bool FDungeonFlowEditor::IsTickableInEditor() const {
    return true;
}

void FDungeonFlowEditor::Tick(float DeltaTime) {
    TSharedPtr<FFlowEdAppModeBase> AppMode = StaticCastSharedPtr<FFlowEdAppModeBase>(GetCurrentModePtr());
    if (AppMode.IsValid()) {
        AppMode->Tick(DeltaTime);
    }
}

bool FDungeonFlowEditor::IsTickable() const {
    return true;
}

TStatId FDungeonFlowEditor::GetStatId() const {
    return TStatId();
}

FText FDungeonFlowEditor::GetLocalizedMode(FName InMode) {
    static TMap<FName, FText> LocModes;

    if (LocModes.Num() == 0) {
        LocModes.Add(GraphEditorModeID, LOCTEXT("GraphEditorMode", "Design"));
        LocModes.Add(VisualizationModeID, LOCTEXT("VisualizationMode", "Visualize"));
        LocModes.Add(DebugModeID, LOCTEXT("DebugMode", "Debug"));
    }

    check(InMode != NAME_None);
    const FText* OutDesc = LocModes.Find(InMode);
    check(OutDesc);
    return *OutDesc;
}

void FDungeonFlowEditor::RegisterToolbarTab(const TSharedRef<class FTabManager>& InTabManager) {
    FAssetEditorToolkit::RegisterTabSpawners(InTabManager);
}

UDungeonFlow* FDungeonFlowEditor::GetAssetBeingEdited() const {
    return AssetBeingEdited;
}

UEdGraph_Grammar* FDungeonFlowEditor::GetVisualizationGraph() const {
    return VisualizationGraph;
}

UEdGraph_DebugGrammar* FDungeonFlowEditor::GetDebugGraph() const {
    return DebugGraph;
}

UFlowEditorDebugAppModeSettings* FDungeonFlowEditor::GetDebugAppModeSettings() const {
    return DebugModeSettings;
}

bool FDungeonFlowEditor::CanAccessGraphEditMode() const {
    return true;
}

bool FDungeonFlowEditor::CanAccessVisualizationMode() const {
    return true;
}


bool FDungeonFlowEditor::CanAccessDebugMode() const {
    return VisualizationGraph && VisualizationGraph->Nodes.Num() > 0;
}

void FDungeonFlowEditor::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) {
    FWorkflowCentricApplication::RegisterTabSpawners(InTabManager);
}

void FDungeonFlowEditor::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) {
    FWorkflowCentricApplication::UnregisterTabSpawners(InTabManager);
}


////////////////////////////// UDungeonFlowEditorCallbackHandler ////////////////////////////// 

void UDungeonFlowEditorCallbackHandler::OnPostDungeonBuild_Implementation(ADungeon* Dungeon) {
    OnDungeonBuilt.ExecuteIfBound(Dungeon);
}

void UDungeonFlowEditorCallbackHandler::OnDungeonDestroyed_Implementation(ADungeon* Dungeon) {
    OnDungeonDestroyed.ExecuteIfBound(Dungeon);
}

#undef LOCTEXT_NAMESPACE
