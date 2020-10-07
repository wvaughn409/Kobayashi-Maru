//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/AppModes/VisualizeAppMode.h"

#include "Builders/SnapMap/SnapMapDungeonBuilder.h"
#include "Builders/SnapMap/SnapMapDungeonModel.h"
#include "Core/Dungeon.h"
#include "Core/DungeonFlow/DungeonFlow.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditor.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorCommands.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorTabFactories.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorTabs.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorToolbar.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorUtils.h"
#include "Core/Editors/SnapFlow/DungeonFlowGraphEditorHandlers.h"
#include "Core/Editors/SnapFlow/Viewport/SDungeonFlowEditorViewport.h"
#include "Frameworks/GraphGrammar/Editor/SGrammarRuleGraph.h"
#include "Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraph_DebugGrammar.h"
#include "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"
#include "Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarNode.h"

#include "AdvancedPreviewScene.h"
#include "EdGraph/EdGraph.h"
#include "IDetailsView.h"
#include "LevelEditor.h"
#include "Modules/ModuleManager.h"
#include "PreviewScene.h"
#include "PropertyEditorModule.h"
#include "SAdvancedPreviewDetailsTab.h"

////////////////////// FDungeonFlowEditor_VisualizeAppMode //////////////////////

DEFINE_LOG_CATEGORY_STATIC(LogFlowVisualization, Log, All);

#define LOCTEXT_NAMESPACE "DungeonFlowEditor_VisualizeAppMode"

static const FName LevelEditorName("LevelEditor");

FDungeonFlowEditor_VisualizeAppMode::FDungeonFlowEditor_VisualizeAppMode(
    TSharedPtr<class FDungeonFlowEditor> InFlowEditor)
    : FFlowEdAppModeBase(FDungeonFlowEditor::VisualizationModeID)
      , FlowEditor(InFlowEditor) {
    UDungeonFlow* AssetBeingEdited = InFlowEditor->GetAssetBeingEdited();

    // Initialize the visualization graph editor
    {
        UEdGraph_Grammar* VisualizationGraph = InFlowEditor->GetVisualizationGraph();
        VisualizationGraphEditor.Initialize(VisualizationGraph, false);

        TSharedPtr<FGrammarRuleGraphHandler> GraphHandler = VisualizationGraphEditor
                                                            .GetGraphWidget()->GetGraphHandler();
        if (GraphHandler.IsValid()) {
            GraphHandler->OnNodeDoubleClicked.BindRaw(
                this, &FDungeonFlowEditor_VisualizeAppMode::OnResultNodeDoubleClicked);
        }
    }

    // Create the 3D viewport
    Viewport = SNew(SDungeonFlowEditorViewport)
		.DungeonFlowEditor(InFlowEditor)
		.ObjectToEdit(AssetBeingEdited);
    InitDungeon(Viewport->GetAdvancedPreview()->GetWorld());

    LoadDungeonConfig();

    // Create the visualization details property editor widget
    {
        FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(
            "PropertyEditor");
        const FDetailsViewArgs DetailsViewArgs(false, false, true, FDetailsViewArgs::HideNameArea, true, nullptr);
        TSharedRef<IDetailsView> PropertyEditorRef = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
        PropertyEditor = PropertyEditorRef;
    }

    ViewportSceneSettings = SNew(SAdvancedPreviewDetailsTab, Viewport->GetAdvancedPreview().ToSharedRef());

    TabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_VisualizeDetails(InFlowEditor, PropertyEditor)));
    TabFactories.RegisterFactory(MakeShareable(new FFlowEditorTabFactory_Viewport(InFlowEditor, Viewport)));
    TabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_ViewportSceneSettings(InFlowEditor, ViewportSceneSettings)));
    TabFactories.RegisterFactory(MakeShareable(
        new FFlowEditorTabFactory_VisualizeResultGraph(InFlowEditor, VisualizationGraphEditor.GetGraphWidget())));

    TabLayout = BuildEditorFrameLayout(InFlowEditor);

    InFlowEditor->GetToolbarBuilder()->AddModesToolbar(ToolbarExtender);

    PropertyEditor->SetObject(GetDungeonActor());

    // Tell the level editor we want to be notified when the map changes
    FLevelEditorModule& LevelEditor = FModuleManager::LoadModuleChecked<FLevelEditorModule>(LevelEditorName);
    OnMapChangedDelegateHandle = LevelEditor.OnMapChanged().AddRaw(
        this, &FDungeonFlowEditor_VisualizeAppMode::OnMapChanged);
}

FDungeonFlowEditor_VisualizeAppMode::~FDungeonFlowEditor_VisualizeAppMode() {
    FLevelEditorModule* LevelEditor = FModuleManager::LoadModulePtr<FLevelEditorModule>(LevelEditorName);
    if (LevelEditor) {
        LevelEditor->OnMapChanged().Remove(OnMapChangedDelegateHandle);
    }

    if (Dungeon) {
        Dungeon->DestroyDungeon();
    }

}

void FDungeonFlowEditor_VisualizeAppMode::RegisterTabFactories(TSharedPtr<class FTabManager> InTabManager) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    FlowEditorPtr->RegisterToolbarTab(InTabManager.ToSharedRef());

    FlowEditorPtr->PushTabFactories(TabFactories);

    FApplicationMode::RegisterTabFactories(InTabManager);
}

void FDungeonFlowEditor_VisualizeAppMode::PostActivateMode() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    FApplicationMode::PostActivateMode();
}

void FDungeonFlowEditor_VisualizeAppMode::PreDeactivateMode() {
    FApplicationMode::PreDeactivateMode();

}

TSharedRef<FTabManager::FLayout> FDungeonFlowEditor_VisualizeAppMode::BuildEditorFrameLayout(
    TSharedPtr<class FDungeonFlowEditor> InFlowEditor) {

    return FTabManager::NewLayout("Standalone_DungeonFlowEditor_VisualizeLayout_v0.1.8")
        ->AddArea
        (
            FTabManager::NewPrimaryArea()
            ->SetOrientation(Orient_Vertical)
            // Toolbar
            ->Split
            (
                FTabManager::NewStack()
                ->SetSizeCoefficient(0.1f)
                ->SetHideTabWell(true)
                ->AddTab(InFlowEditor->GetToolbarTabId(), ETabState::OpenedTab)
            )
            // Body of the editor
            ->Split
            (
                FTabManager::NewSplitter()
                ->SetOrientation(Orient_Horizontal)
                // Left side of the editor
                ->Split
                (
                    FTabManager::NewStack()
                    ->SetSizeCoefficient(0.2f)
                    ->AddTab(FDungeonFlowEditorTabs::VisualizeDetailsID, ETabState::OpenedTab)
                    ->AddTab(FDungeonFlowEditorTabs::ViewportSceneSettingsID, ETabState::OpenedTab)
                    ->SetForegroundTab(FDungeonFlowEditorTabs::VisualizeDetailsID)
                )
                // Right side of the editor
                ->Split
                (
                    FTabManager::NewSplitter()
                    ->SetOrientation(Orient_Vertical)
                    ->Split
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.4f)
                        ->AddTab(FDungeonFlowEditorTabs::VisualizeResultGraphID, ETabState::OpenedTab)
                        ->SetHideTabWell(true)
                    )
                    ->Split
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.6f)
                        ->AddTab(FDungeonFlowEditorTabs::ViewportID, ETabState::OpenedTab)
                        ->SetHideTabWell(true)
                    )
                )
            )
        );
}

void FDungeonFlowEditor_VisualizeAppMode::AddReferencedObjects(FReferenceCollector& Collector) {
    Collector.AddReferencedObject(CallbackHandler);
    Collector.AddReferencedObject(Dungeon);
}

void FDungeonFlowEditor_VisualizeAppMode::OnAssetSave() {
    SaveDungeonConfig();
}

ADungeon* FDungeonFlowEditor_VisualizeAppMode::GetDungeonActor() const {
    return Dungeon;
}

void FDungeonFlowEditor_VisualizeAppMode::LoadDungeonConfig() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
    UDungeonFlow* AssetBeingEdited = FlowEditorPtr->GetAssetBeingEdited();

    if (AssetBeingEdited->PreviewDungeonConfigCopy && Viewport.IsValid()) {
        if (Dungeon) {
            UEngine::CopyPropertiesForUnrelatedObjects(
                AssetBeingEdited->PreviewDungeonConfigCopy,
                Dungeon->GetConfig());
        }
    }
}

void FDungeonFlowEditor_VisualizeAppMode::SaveDungeonConfig() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
    UDungeonFlow* AssetBeingEdited = FlowEditorPtr->GetAssetBeingEdited();

    if (Viewport.IsValid() && Dungeon) {
        UObject* ConfigToSave = Dungeon->GetConfig();
        if (ConfigToSave) {
            if (!AssetBeingEdited->PreviewDungeonConfigCopy || AssetBeingEdited->PreviewDungeonConfigCopy->GetClass() !=
                ConfigToSave->GetClass()) {
                // Recreate the cached copy with the correct class
                AssetBeingEdited->PreviewDungeonConfigCopy = NewObject<UObject>(
                    AssetBeingEdited, ConfigToSave->GetClass());
            }

            if (AssetBeingEdited->PreviewDungeonConfigCopy) {
                UEngine::CopyPropertiesForUnrelatedObjects(ConfigToSave, AssetBeingEdited->PreviewDungeonConfigCopy);
            }
        }
    }
}

void FDungeonFlowEditor_VisualizeAppMode::OnDungeonBuilt(ADungeon* InDungeon) {
    if (InDungeon && InDungeon == Dungeon && FlowEditor.IsValid()) {
        TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
        bool bBuildSuccessful = false;
        ADungeon* PreviewDungeon = GetDungeonActor();
        if (PreviewDungeon) {
            USnapMapDungeonModel* SnapModel = Cast<USnapMapDungeonModel>(PreviewDungeon->GetModel());
            if (SnapModel) {

                // Recreate the visualization result graph
                {
                    UEdGraph_Grammar* VisualizationGraph = FlowEditorPtr->GetVisualizationGraph();
                    FDungeonFlowEditorUtils::BuildEdGraphFromScript(SnapModel->MissionGraph, VisualizationGraph);

                    // Layout the nodes
                    VisualizationGraph->LayoutGraph();
                    VisualizationGraph->NotifyGraphChanged();
                    VisualizationGraphEditor.ZoomToFit();
                }

                // Recreate the debug result graph
                {
                    UEdGraph_DebugGrammar* DebugGraph = FlowEditorPtr->GetDebugGraph();
                    FDungeonFlowEditorUtils::BuildDebugEdGraphFromScript(SnapModel->MissionGraph, DebugGraph);

                    // Layout the nodes
                    UFlowEditorDebugAppModeSettings* DebugGraphSettings = FlowEditorPtr->GetDebugAppModeSettings();
                    DebugGraph->LayoutGraph(DebugGraphSettings->SpacingHorizontal, DebugGraphSettings->SpacingVertical);
                    DebugGraph->NotifyGraphChanged();
                }
                bBuildSuccessful = true;
            }
        }

        if (!bBuildSuccessful) {
            ResetResultGraph();
        }
    }
}

void FDungeonFlowEditor_VisualizeAppMode::OnDungeonDestroyed(ADungeon* InDungeon) {
    if (InDungeon && InDungeon == Dungeon) {
        ResetResultGraph();
    }
}

void FDungeonFlowEditor_VisualizeAppMode::OnResultNodeDoubleClicked(UEdGraphNode* InNode) {
    UEdGraphNode_GrammarNode* GrammarEdNode = Cast<UEdGraphNode_GrammarNode>(InNode);
    if (GrammarEdNode) {
        ADungeon* DungeonActor = GetDungeonActor();
        if (DungeonActor) {
            USnapMapDungeonModel* SnapModel = Cast<USnapMapDungeonModel>(DungeonActor->GetModel());
            FSnapMapModuleInstanceSerializedData ModuleData;
            if (SnapModel && SnapModel->SearchModuleInstance(GrammarEdNode->NodeId, ModuleData)) {
                FBox WorldModuleBounds = ModuleData.ModuleBounds.TransformBy(ModuleData.WorldTransform);
                Viewport->GetViewportClient()->FocusViewportOnBox(WorldModuleBounds);
                UE_LOG(LogFlowVisualization, Log, TEXT("Visualization Result Node double clicked: %s"),
                       *WorldModuleBounds.ToString());
            }
        }
    }
}

namespace {

    void ClearEdGraph(UEdGraph* EdGraph) {
        TArray<class UEdGraphNode*> OldNodes = EdGraph->Nodes;
        for (UEdGraphNode* Node : OldNodes) {
            EdGraph->RemoveNode(Node);
        }

        EdGraph->NotifyGraphChanged();
    }
}

void FDungeonFlowEditor_VisualizeAppMode::ResetResultGraph() {
    if (FlowEditor.IsValid()) {
        TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

        ClearEdGraph(FlowEditorPtr->GetVisualizationGraph());

        UEdGraph_DebugGrammar* DebugGraph = FlowEditorPtr->GetDebugGraph();
        ClearEdGraph(DebugGraph);
        DebugGraph->ResetDebugState();
    }
}

void FDungeonFlowEditor_VisualizeAppMode::InitDungeon(UWorld* World) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    Dungeon = World->SpawnActor<ADungeon>();
    if (Dungeon) {
        Dungeon->BuilderClass = USnapMapDungeonBuilder::StaticClass();
        Dungeon->CreateBuilderInstance();
        Dungeon->bDrawDebugData = true;

        UDungeonFlow* AssetBeingEdited = FlowEditorPtr->GetAssetBeingEdited();
        USnapMapDungeonConfig* Config = Cast<USnapMapDungeonConfig>(Dungeon->GetConfig());
        if (Config) {
            // Set this editor's asset as the dungeon flow object
            Config->DungeonFlowGraph = AssetBeingEdited;
        }

        UEdGraph_DebugGrammar* DebugGraph = FlowEditorPtr->GetDebugGraph();
        USnapMapDungeonBuilder* Builder = Cast<USnapMapDungeonBuilder>(Dungeon->GetBuilder());
        if (DebugGraph && Builder) {
            Builder->SetDiagnostics(DebugGraph->GetDiagnostics());
        }

        // Hook into the viewport's dungeon actor events
        CallbackHandler = NewObject<UDungeonFlowEditorCallbackHandler>();
        CallbackHandler->OnDungeonBuilt.BindRaw(this, &FDungeonFlowEditor_VisualizeAppMode::OnDungeonBuilt);
        CallbackHandler->OnDungeonDestroyed.BindRaw(this, &FDungeonFlowEditor_VisualizeAppMode::OnDungeonDestroyed);
        Dungeon->EventListeners.Add(CallbackHandler);
    }
}

void FDungeonFlowEditor_VisualizeAppMode::OnMapChanged(UWorld* InWorld, EMapChangeType InChangeType) {

}

void FDungeonFlowEditor_VisualizeAppMode::BindCommands(TSharedRef<FUICommandList> ToolkitCommands) {

}


#undef  LOCTEXT_NAMESPACE

