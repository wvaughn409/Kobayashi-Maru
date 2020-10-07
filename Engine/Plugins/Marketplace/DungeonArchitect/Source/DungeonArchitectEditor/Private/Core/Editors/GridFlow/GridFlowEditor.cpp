//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/GridFlow/GridFlowEditor.h"

#include "Builders/GridFlow/GridFlowConfig.h"
#include "Builders/GridFlow/GridFlowQuery.h"
#include "Core/Dungeon.h"
#include "Core/Editors/GridFlow/GridFlowEditorCommands.h"
#include "Core/Editors/GridFlow/GridFlowEditorSettings.h"
#include "Core/Editors/GridFlow/GridFlowTestRunner.h"
#include "Core/Editors/GridFlow/Viewport/SGridFlowPreview3DViewport.h"
#include "Core/Editors/GridFlow/Viewport/SGridFlowPreview3DViewportToolbar.h"
#include "Core/LevelEditor/Customizations/DungeonArchitectStyle.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractEdGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraphHandler.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/AbstractGraph/Nodes/GridFlowAbstractEdGraphNodes.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecEdGraph.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecGraphHandler.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecGraphScript.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskStructs.h"
#include "Frameworks/GridFlow/ExecGraph/Nodes/GridFlowExecEdGraphNodeBase.h"
#include "Frameworks/GridFlow/GridFlowAsset.h"
#include "Frameworks/GridFlow/Processor/GridFlowProcessor.h"
#include "Frameworks/GridFlow/Tilemap/Graph/TilemapGraphInfrastructure.h"
#include "Frameworks/GridFlow/Tilemap/GridFlowTilemap.h"
#include "Frameworks/GridFlow/Tilemap/GridFlowTilemapRenderer.h"

#include "AssetToolsModule.h"
#include "EdGraph/EdGraph.h"
#include "EditorViewportClient.h"
#include "Engine/TextureRenderTarget2D.h"
#include "FileHelpers.h"
#include "Framework/Commands/UICommandList.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Framework/SlateDelegates.h"
#include "GraphEditor.h"
#include "ImageUtils.h"
#include "Modules/ModuleManager.h"
#include "ObjectTools.h"
#include "SEditorViewport.h"
#include "Widgets/Docking/SDockTab.h"

#define LOCTEXT_NAMESPACE "GridFlowEditor"

const FName GridFlowEditorAppName = FName(TEXT("GridFlowEditor"));
DEFINE_LOG_CATEGORY_STATIC(GridFlowEditor, Log, All);

struct FGridFlowEditorTabs {
    // Tab identifiers
    static const FName ExecGraphID;
    static const FName AbstractGraphID;
    static const FName TilemapID;
    static const FName DetailsID;
    static const FName ViewportID;
    static const FName PerformanceID;
};

const FName FGridFlowEditorTabs::ExecGraphID(TEXT("ExecGraph"));
const FName FGridFlowEditorTabs::AbstractGraphID(TEXT("AbstractGraph"));
const FName FGridFlowEditorTabs::TilemapID(TEXT("Tilemap"));
const FName FGridFlowEditorTabs::DetailsID(TEXT("Details"));
const FName FGridFlowEditorTabs::ViewportID(TEXT("Viewport"));
const FName FGridFlowEditorTabs::PerformanceID(TEXT("Performance"));

void FGridFlowEditor::InitEditor(const EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost,
                                 UGridFlowAsset* FlowAsset) {
    GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->CloseOtherEditors(FlowAsset, this);
    AssetBeingEdited = FlowAsset;
    EditorSettings = NewObject<UGridFlowEditorSettings>();

    CreateEditorWidgets();

    BindCommands();
    ExtendMenu();
    ExtendToolbar();

    // Default layout
    const TSharedRef<FTabManager::FLayout> StandaloneDefaultLayout = FTabManager::NewLayout(
            "Standalone_GridFlowEditor_Layout_v0.5.0")
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
                ->SetOrientation(Orient_Vertical)
                ->Split
                (

                    FTabManager::NewSplitter()
                    ->SetSizeCoefficient(0.4f)
                    ->SetOrientation(Orient_Horizontal)
                    ->Split // Exec Graph
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.65f)
                        ->AddTab(FGridFlowEditorTabs::ExecGraphID, ETabState::OpenedTab)
                        ->SetHideTabWell(true)
                    )
                    ->Split // Preview Viewport 3D
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.35f)
                        ->AddTab(FGridFlowEditorTabs::ViewportID, ETabState::OpenedTab)
                        ->SetHideTabWell(true)
                    )
                )
                ->Split
                (
                    FTabManager::NewSplitter()
                    ->SetSizeCoefficient(0.6f)
                    ->SetOrientation(Orient_Horizontal)
                    ->Split // Details Tab
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.15f)
                        ->AddTab(FGridFlowEditorTabs::DetailsID, ETabState::OpenedTab)
                    )
                    ->Split // Layout Graph
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.425f)
                        ->AddTab(FGridFlowEditorTabs::AbstractGraphID, ETabState::OpenedTab)
                        ->SetHideTabWell(true)
                    )
                    ->Split // Tilemap
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.425f)
                        ->AddTab(FGridFlowEditorTabs::TilemapID, ETabState::OpenedTab)
                        ->SetHideTabWell(true)
                    )
                )
            )
        );


    InitAssetEditor(Mode, InitToolkitHost, GridFlowEditorAppName, StandaloneDefaultLayout,
                    /*bCreateDefaultStandaloneMenu=*/ true, /*bCreateDefaultToolbar=*/ true, FlowAsset);

    // Listen for graph changed event
    //OnGraphChangedDelegateHandle = GraphEditor->GetCurrentGraph()->AddOnGraphChangedHandler(FOnGraphChanged::FDelegate::CreateRaw(this, &FGridFlowEditor::OnGraphChanged));
    bGraphStateChanged = false;

    SyncEdGraphNodeStates();
}

void FGridFlowEditor::RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) {
    WorkspaceMenuCategory = InTabManager->AddLocalWorkspaceMenuCategory(
        LOCTEXT("WorkspaceMenu_DungeonEditor", "Dungeon Editor"));
    auto WorkspaceMenuCategoryRef = WorkspaceMenuCategory.ToSharedRef();

    FAssetEditorToolkit::RegisterTabSpawners(InTabManager);

    InTabManager->RegisterTabSpawner(FGridFlowEditorTabs::ExecGraphID,
                                     FOnSpawnTab::CreateSP(this, &FGridFlowEditor::SpawnTab_ExecGraph))
                .SetDisplayName(LOCTEXT("ExecGraphTabLabel", "Execution Graph"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Viewports"));

    InTabManager->RegisterTabSpawner(FGridFlowEditorTabs::AbstractGraphID,
                                     FOnSpawnTab::CreateSP(this, &FGridFlowEditor::SpawnTab_AbstractGraph))
                .SetDisplayName(LOCTEXT("LayoutGraphTabLabel", "Layout Graph"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

    InTabManager->RegisterTabSpawner(FGridFlowEditorTabs::TilemapID,
                                     FOnSpawnTab::CreateSP(this, &FGridFlowEditor::SpawnTab_Tilemap))
                .SetDisplayName(LOCTEXT("TilemapTabLabel", "Tilemap"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

    InTabManager->RegisterTabSpawner(FGridFlowEditorTabs::DetailsID,
                                     FOnSpawnTab::CreateSP(this, &FGridFlowEditor::SpawnTab_Details))
                .SetDisplayName(LOCTEXT("DetailsTabLabel", "Details"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

    InTabManager->RegisterTabSpawner(FGridFlowEditorTabs::ViewportID,
                                     FOnSpawnTab::CreateSP(this, &FGridFlowEditor::SpawnTab_Viewport))
                .SetDisplayName(LOCTEXT("PreviewTabLabel", "3D Preview"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));

    InTabManager->RegisterTabSpawner(FGridFlowEditorTabs::PerformanceID,
                                     FOnSpawnTab::CreateSP(this, &FGridFlowEditor::SpawnTab_Performance))
                .SetDisplayName(LOCTEXT("PerformanceTabLabel", "Performance Stats"))
                .SetGroup(WorkspaceMenuCategoryRef)
                .SetIcon(FSlateIcon(FEditorStyle::GetStyleSetName(), "LevelEditor.Tabs.Details"));
}

void FGridFlowEditor::UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) {
    FAssetEditorToolkit::UnregisterTabSpawners(InTabManager);

    InTabManager->UnregisterTabSpawner(FGridFlowEditorTabs::ExecGraphID);
    InTabManager->UnregisterTabSpawner(FGridFlowEditorTabs::AbstractGraphID);
    InTabManager->UnregisterTabSpawner(FGridFlowEditorTabs::TilemapID);
    InTabManager->UnregisterTabSpawner(FGridFlowEditorTabs::DetailsID);
    InTabManager->UnregisterTabSpawner(FGridFlowEditorTabs::ViewportID);
    InTabManager->UnregisterTabSpawner(FGridFlowEditorTabs::PerformanceID);
}

FName FGridFlowEditor::GetToolkitFName() const {
    return FName("GridFlowEditor");
}

FText FGridFlowEditor::GetBaseToolkitName() const {
    return LOCTEXT("GridFlowEditorAppLabel", "Grid Flow Editor");
}

FText FGridFlowEditor::GetToolkitName() const {
    return FText::FromString(AssetBeingEdited->GetName());
}

FLinearColor FGridFlowEditor::GetWorldCentricTabColorScale() const {
    return FLinearColor::White;
}

FString FGridFlowEditor::GetWorldCentricTabPrefix() const {
    return TEXT("GridFlowEditor");
}

FString FGridFlowEditor::GetDocumentationLink() const {
    // TODO: Fill me
    return TEXT("#");
}

void FGridFlowEditor::NotifyPreChange(FProperty* PropertyAboutToChange) {

}

void FGridFlowEditor::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent,
                                       FProperty* PropertyThatChanged) {

}

bool FGridFlowEditor::IsTickableInEditor() const {
    return true;
}

void FGridFlowEditor::Tick(float DeltaTime) {
    if (bGraphStateChanged) {
        bGraphStateChanged = false;
        HandleGraphChanged();
    }
}

bool FGridFlowEditor::IsTickable() const {
    return true;
}

TStatId FGridFlowEditor::GetStatId() const {
    return TStatId();
}

void FGridFlowEditor::AddReferencedObjects(FReferenceCollector& Collector) {
    if (AbstractGraph) {
        Collector.AddReferencedObject(AbstractGraph);
    }
    if (TilemapGraph) {
        Collector.AddReferencedObject(TilemapGraph);
    }
    if (EditorSettings) {
        Collector.AddReferencedObject(EditorSettings);
    }
}

UGridFlowAsset* FGridFlowEditor::GetAssetBeingEdited() const {
    return AssetBeingEdited;
}

void FGridFlowEditor::ShowObjectDetails(UObject* ObjectProperties, bool bForceRefresh /*= false*/) {
    if (!ObjectProperties) {
        // No object selected
        ObjectProperties = AssetBeingEdited;
    }

    if (PropertyEditor.IsValid()) {
        PropertyEditor->SetObject(ObjectProperties, bForceRefresh);
    }
}

void FGridFlowEditor::ExtendMenu() {

}

void FGridFlowEditor::ExtendToolbar() {
    TSharedPtr<FExtender> ToolbarExtender(new FExtender);
    ToolbarExtender->AddToolBarExtension(
        "Asset",
        EExtensionHook::Before,
        GetToolkitCommands(),
        FToolBarExtensionDelegate::CreateSP(this, &FGridFlowEditor::FillToolbarCore)
    );
    ToolbarExtender->AddToolBarExtension(
        "Asset",
        EExtensionHook::After,
        GetToolkitCommands(),
        FToolBarExtensionDelegate::CreateSP(this, &FGridFlowEditor::FillToolbarMisc)
    );
    AddToolbarExtender(ToolbarExtender);

}

void FGridFlowEditor::CreateEditorWidgets() {
    CreatePropertyEditorWidget();
    CreateExecGraphEditorWidget();
    CreateAbstractGraphEditorWidget();
    CreateTilemapWidget();
    CreatePreviewViewport();
}


void FGridFlowEditor::CreateExecGraphEditorWidget() {
    // Create the appearance info
    FGraphAppearanceInfo AppearanceInfo;
    AppearanceInfo.CornerText = LOCTEXT("GridFlowExecGraphBranding", "Execution Graph");
    ExecGraphHandler = MakeShareable(new FGridFlowExecGraphHandler);
    ExecGraphHandler->Bind();
    ExecGraphHandler->SetPropertyEditor(PropertyEditor);
    ExecGraphHandler->OnNodeSelectionChanged.BindRaw(this, &FGridFlowEditor::OnExecNodeSelectionChanged);
    ExecGraphHandler->OnNodeDoubleClicked.BindRaw(this, &FGridFlowEditor::OnExecNodeDoubleClicked);

    ExecGraphEditor = SNew(SGraphEditor)
		.AdditionalCommands(ExecGraphHandler->GraphEditorCommands)
		.Appearance(AppearanceInfo)
		.GraphToEdit(AssetBeingEdited->ExecEdGraph)
		.IsEditable(true)
		.ShowGraphStateOverlay(false)
		.GraphEvents(ExecGraphHandler->GraphEvents);

    ExecGraphHandler->SetGraphEditor(ExecGraphEditor);
}

void FGridFlowEditor::CreateAbstractGraphEditorWidget() {
    AbstractGraph = NewObject<UGridFlowAbstractEdGraph>();
    AbstractGraph->OnItemWidgetClicked.BindRaw(this, &FGridFlowEditor::OnItemWidgetClicked);

    // Create the appearance info
    FGraphAppearanceInfo AppearanceInfo;
    AppearanceInfo.CornerText = LOCTEXT("GridFlowAbstractGraphBranding", "Layout Graph");
    AbstractGraphHandler = MakeShareable(new FGridFlowAbstractGraphHandler);
    AbstractGraphHandler->Bind();
    AbstractGraphHandler->SetPropertyEditor(PropertyEditor);

    AbstractGraphEditor = SNew(SGraphEditor)
		.AdditionalCommands(AbstractGraphHandler->GraphEditorCommands)
		.Appearance(AppearanceInfo)
		.GraphToEdit(AbstractGraph)
		.IsEditable(true)
		.ShowGraphStateOverlay(false)
		.GraphEvents(AbstractGraphHandler->GraphEvents);

    AbstractGraphHandler->SetGraphEditor(AbstractGraphEditor);
    AbstractGraphHandler->OnNodeSelectionChanged.BindRaw(this, &FGridFlowEditor::OnAbstractNodeSelectionChanged);
}

void FGridFlowEditor::OnAbstractNodeSelectionChanged(const TSet<UObject*>& InSelectedObjects) {
    TArray<UGridFlowAbstractEdGraphNode*> EdNodes;
    for (UObject* SelectedObject : InSelectedObjects) {
        if (UGridFlowAbstractEdGraphNode* EdNode = Cast<UGridFlowAbstractEdGraphNode>(SelectedObject)) {
            EdNodes.Add(EdNode);
        }
    }

    if (EdNodes.Num() == 1) {
        SelectedAbstractNodeCoord = EdNodes[0]->ScriptNode.State.GridCoord;
        bAbstractNodeSelected = true;
    }
    else {
        bAbstractNodeSelected = false;
        SelectedAbstractNodeCoord = FIntPoint::ZeroValue;
    }

    if (!bIgnoreTilemapPreviewRebuildRequest && PreviewedTilemap.IsValid()) {
        CreateTilemapPreview(PreviewedTilemap.Get());
    }
}

void FGridFlowEditor::CreateTilemapWidget() {
    TilemapGraph = NewObject<UGridFlowTilemapEdGraph>();
    TilemapGraph->Initialize();
    TilemapGraph->OnCellClicked.BindRaw(this, &FGridFlowEditor::OnPreviewTilemapCellClicked);
    TilemapGraph->OnItemWidgetClicked.BindRaw(this, &FGridFlowEditor::OnItemWidgetClicked);

    // Create the appearance info
    FGraphAppearanceInfo AppearanceInfo;
    AppearanceInfo.CornerText = LOCTEXT("GridFlowTilemapGraphBranding", "Tilemap");
    TilemapGraphHandler = MakeShareable(new FGridFlowTilemapGraphHandler);
    TilemapGraphHandler->Bind();
    TilemapGraphHandler->SetPropertyEditor(PropertyEditor);

    TilemapGraphEditor = SNew(SGraphEditor)
		.AdditionalCommands(TilemapGraphHandler->GraphEditorCommands)
		.Appearance(AppearanceInfo)
		.GraphToEdit(TilemapGraph)
		.IsEditable(true)
		.ShowGraphStateOverlay(false)
		.GraphEvents(TilemapGraphHandler->GraphEvents);

    TilemapGraphHandler->SetGraphEditor(TilemapGraphEditor);
}


void FGridFlowEditor::CreatePropertyEditorWidget() {
    FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(
        "PropertyEditor");
    const FDetailsViewArgs DetailsViewArgs(false, false, true, FDetailsViewArgs::HideNameArea, true, this);
    PropertyEditor = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
}

void FGridFlowEditor::CreatePreviewViewport() {
    PreviewViewport =
        SNew(SGridFlowPreview3DViewport)
		.GridFlowAsset(AssetBeingEdited)
		.GridFlowEditor(SharedThis(this));
}

void FGridFlowEditor::CompileExecGraph() {
    if (AssetBeingEdited) {
        FGridFlowExecScriptCompiler::Compile(AssetBeingEdited->ExecEdGraph, AssetBeingEdited->ExecScript);
        AssetBeingEdited->Modify();
    }
}

void FGridFlowEditor::ExecuteGraph() {
    if (!AssetBeingEdited || !AssetBeingEdited->ExecEdGraph) {
        ExecGraphProcessor = nullptr;
        return;
    }

    int32 Seed = 0;
    if (EditorSettings) {
        if (EditorSettings->bRandomizeSeedOnBuild) {
            EditorSettings->Seed = FMath::Rand();
        }
        Seed = EditorSettings->Seed;
    }

    FRandomStream Random(Seed);
    //UE_LOG(GridFlowEditor, Log, TEXT("Seed: %d"), Random.GetInitialSeed());

    CompileExecGraph();
    ExecGraphProcessor = MakeShareable(new FGridFlowProcessor);

    const int32 MaxExecTries = 50; // TODO: Parameterize me
    int32 NumTries = 0;
    while (NumTries < MaxExecTries) {
        FGridFlowProcessorSettings ProcessorSettings;
        ProcessorSettings.SerializedAttributeList = EditorSettings->ParameterOverrides;
        const EGridFlowTaskExecutionResult Result = ExecGraphProcessor->Process(AssetBeingEdited->ExecScript, Random, ProcessorSettings);
        if (Result == EGridFlowTaskExecutionResult::Success || Result == EGridFlowTaskExecutionResult::FailHalt) {
            break;
        }
        NumTries++;
    }

    SyncEdGraphNodeStates();
    AssetBeingEdited->ExecEdGraph->NotifyGraphChanged();

    // Update the preview graph
    {
        FGuid PreviewNodeId;
        if (AssetBeingEdited->ExecScript && AssetBeingEdited->ExecScript->ResultNode) {
            PreviewNodeId = AssetBeingEdited->ExecScript->ResultNode->NodeId;
        }
        UpdatePreviewGraphs(PreviewNodeId);
    }

    RecenterOutputGraphs();

    RebuildDungeon();
}

void FGridFlowEditor::SyncEdGraphNodeStates() {
    if (!AssetBeingEdited) return;

    UEdGraph* EdGraph = AssetBeingEdited->ExecEdGraph;
    if (!EdGraph) return;

    for (UEdGraphNode* EdNode : EdGraph->Nodes) {
        if (UGridFlowExecEdGraphNodeBase* GridFlowEdNode = Cast<UGridFlowExecEdGraphNodeBase>(EdNode)) {
            GridFlowEdNode->ExecutionStage = EGridFlowTaskExecutionStage::NotExecuted;
        }
    }

    if (ExecGraphProcessor.IsValid()) {
        // Update the execution states on the Exec EdGraph 
        for (UEdGraphNode* EdNode : EdGraph->Nodes) {
            if (UGridFlowExecEdGraphNodeBase* GridFlowEdNode = Cast<UGridFlowExecEdGraphNodeBase>(EdNode)) {
                FGridFlowExecutionOutput NodeState;
                if (ExecGraphProcessor->GetNodeState(GridFlowEdNode->NodeGuid, NodeState)) {
                    GridFlowEdNode->ExecutionResult = NodeState.ExecutionResult;
                    GridFlowEdNode->ErrorMessage = NodeState.ErrorMessage;
                    GridFlowEdNode->ExecutionStage = ExecGraphProcessor->GetNodeExecStage(GridFlowEdNode->NodeGuid);
                }
            }
        }
    }
}

void FGridFlowEditor::OnExecNodeSelectionChanged(const TSet<class UObject*>& InSelectedObjects) {
    FGuid PreviewNodeId;
    // Get the selected exec node
    bool bFoundPreviewNode = false;
    for (UObject* NodeObj : InSelectedObjects) {
        if (UGridFlowExecEdGraphNodeBase* ExecNode = Cast<UGridFlowExecEdGraphNodeBase>(NodeObj)) {
            PreviewNodeId = ExecNode->NodeGuid;
            bFoundPreviewNode = true;
            break;
        }
    }

    // If we didn't find a suitable node, show the preview Node
    if (!bFoundPreviewNode) {
        if (AssetBeingEdited->ExecScript && AssetBeingEdited->ExecScript->ResultNode) {
            PreviewNodeId = AssetBeingEdited->ExecScript->ResultNode->NodeId;
        }
    }

    UpdatePreviewGraphs(PreviewNodeId);
}

void FGridFlowEditor::UpdatePreviewGraphs(const FGuid& NodeId) {
    UGridFlowAbstractGraph* AbstractScriptGraph = nullptr;
    UGridFlowTilemap* Tilemap = nullptr;
    if (ExecGraphProcessor.IsValid()) {
        EGridFlowTaskExecutionStage ExecStage = ExecGraphProcessor->GetNodeExecStage(NodeId);
        if (ExecStage == EGridFlowTaskExecutionStage::Executed) {
            FGridFlowExecutionOutput NodeExecOutput;
            if (ExecGraphProcessor->GetNodeState(NodeId, NodeExecOutput)) {
                if (NodeExecOutput.ExecutionResult == EGridFlowTaskExecutionResult::Success) {
                    if (NodeExecOutput.State.IsValid()) {
                        AbstractScriptGraph = NodeExecOutput.State->AbstractGraph;
                        Tilemap = NodeExecOutput.State->Tilemap;
                    }
                }
            }
        }
    }

    CreateAbstractGraphPreview(AbstractScriptGraph);
    CreateTilemapPreview(Tilemap);
}

void FGridFlowEditor::CreateAbstractGraphPreview(UGridFlowAbstractGraph* ScriptGraph) {
    // Clear out the existing abstract graph
    {
        TArray<UEdGraphNode*> OldNodes = AbstractGraph->Nodes;
        for (UEdGraphNode* Node : OldNodes) {
            AbstractGraph->RemoveNode(Node);
        }
    }

    if (!ScriptGraph) {
        return;
    }

    AbstractGraph->ScriptGraph = ScriptGraph;

    TMap<FGuid, UGridFlowAbstractEdGraphNode*> EdNodes;
    for (const FGridFlowAbstractNode& ScriptNode : ScriptGraph->Nodes) {
        FGraphNodeCreator<UGridFlowAbstractEdGraphNode> EdNodeCreator(*AbstractGraph);
        UGridFlowAbstractEdGraphNode* EdNode = EdNodeCreator.CreateNode();
        EdNodeCreator.Finalize();

        EdNode->ScriptNode = ScriptNode;
        EdNode->NodeGuid = ScriptNode.NodeId;
        EdNode->NodePosX = ScriptNode.Location.X;
        EdNode->NodePosY = ScriptNode.Location.Y;

        EdNodes.Add(EdNode->NodeGuid, EdNode);
    }

    // Create the links
    for (const FGridFlowAbstractLink& ScriptLink : ScriptGraph->Links) {
        UGridFlowAbstractEdGraphNode** SourcePtr = EdNodes.Find(ScriptLink.Source);
        UGridFlowAbstractEdGraphNode** DestPtr = EdNodes.Find(ScriptLink.Destination);
        if (!SourcePtr || !DestPtr) {
            UE_LOG(GridFlowEditor, Warning, TEXT("Failed to create link in abstract graph. Invalid state"));
            continue;
        }

        UGridFlowAbstractEdGraphNode* Source = *SourcePtr;
        UGridFlowAbstractEdGraphNode* Dest = *DestPtr;
        if (!Source || !Dest) continue;

        Source->GetOutputPin()->MakeLinkTo(Dest->GetInputPin());
    }

    AbstractGraph->NotifyGraphChanged();
}

void FGridFlowEditor::CreateTilemapPreview(UGridFlowTilemap* InTilemap) {
    PreviewedTilemap = InTilemap;
    if (TilemapGraph && AbstractGraph && AbstractGraph->ScriptGraph.IsValid()) {
        TArray<FGridFlowItem> Items;
        AbstractGraph->ScriptGraph->GetAllItemsCopy(Items);

        FGridFlowTilemapRendererSettings RenderSettings;
        RenderSettings.bUseTextureTileSize = false;
        RenderSettings.TileSize = 10;
        RenderSettings.BackgroundColor = FLinearColor::Black;
        RenderSettings.FuncCellSelected =
            [this](const FIntPoint& InNodeCoord) -> bool {
                return IsTileCellSelected(InNodeCoord);
            };

        TilemapGraph->GeneratePreviewTexture(InTilemap, RenderSettings, Items);
    }
}

void FGridFlowEditor::OnExecNodeDoubleClicked(UEdGraphNode* InNode) {

}

void FGridFlowEditor::SaveAsset_Execute() {
    UPackage* Package = AssetBeingEdited->GetOutermost();
    if (Package) {
        CompileExecGraph();
        UpdateAssetThumbnail();

        TArray<UPackage*> PackagesToSave;
        PackagesToSave.Add(Package);

        FEditorFileUtils::PromptForCheckoutAndSave(PackagesToSave, false, false);
    }
}

TSharedRef<SDockTab> FGridFlowEditor::SpawnTab_ExecGraph(const FSpawnTabArgs& Args) {
    return SNew(SDockTab)
        .Label(LOCTEXT("ExecGraphTab_Title", "Execution Graph"))
        [
            ExecGraphEditor.ToSharedRef()
        ];
}

TSharedRef<SDockTab> FGridFlowEditor::SpawnTab_AbstractGraph(const FSpawnTabArgs& Args) {
    return SNew(SDockTab)
        .Label(LOCTEXT("LayoutGraphTab_Title", "Layout Graph"))
        [
            AbstractGraphEditor.ToSharedRef()
        ];
}

TSharedRef<SDockTab> FGridFlowEditor::SpawnTab_Tilemap(const FSpawnTabArgs& Args) {
    return SNew(SDockTab)
        .Label(LOCTEXT("TilemapTab_Title", "Tilemap"))
        [
            TilemapGraphEditor.ToSharedRef()
        ];
}

TSharedRef<SDockTab> FGridFlowEditor::SpawnTab_Details(const FSpawnTabArgs& Args) {
    // Spawn the tab
    return SNew(SDockTab)
        .Label(LOCTEXT("DetailsTab_Title", "Details"))
        [
            PropertyEditor.ToSharedRef()
        ];
}

TSharedRef<SDockTab> FGridFlowEditor::SpawnTab_Viewport(const FSpawnTabArgs& Args) {
    // Spawn the tab
    return SNew(SDockTab)
        .Label(LOCTEXT("DetailsTab_Title", "Preview 3D"))
        [
            PreviewViewport.ToSharedRef()
        ];
}

TSharedRef<SDockTab> FGridFlowEditor::SpawnTab_Performance(const FSpawnTabArgs& Args) {
    const TSharedRef<SDockTab> DockTab =
        SNew(SDockTab)
        .Label(LOCTEXT("PerformanceTab_Title", "Performance Stats"));

    TSharedRef<SGridFlowTestRunner> TestRunnerWidget =
        SNew(SGridFlowTestRunner, DockTab, Args.GetOwnerWindow(), AssetBeingEdited)
        .OnServiceStarted(this, &FGridFlowEditor::OnTestRunnerServiceStarted);

    DockTab->SetContent(TestRunnerWidget);
    return DockTab;
}

void FGridFlowEditor::OnGraphChanged(const FEdGraphEditAction& Action) {
    bGraphStateChanged = true;
}

void FGridFlowEditor::HandleGraphChanged() {
    // TODO:
}

void FGridFlowEditor::BindCommands() {
    const FGridFlowEditorCommands& Commands = FGridFlowEditorCommands::Get();

    ToolkitCommands->MapAction(
        Commands.Build,
        FExecuteAction::CreateSP(this, &FGridFlowEditor::ExecuteGraph));

    ToolkitCommands->MapAction(
        Commands.Performance,
        FExecuteAction::CreateSP(this, &FGridFlowEditor::HandleShowPerformanceDialog));

    SettingsActionList = MakeShareable(new FUICommandList);
    SettingsActionList->MapAction(
        FGridFlowEditorCommands::Get().ShowEditorSettings,
        FExecuteAction::CreateSP(this, &FGridFlowEditor::HandleShowEditorSettings)
    );
    SettingsActionList->MapAction(
        FGridFlowEditorCommands::Get().ShowPreviewDungeonSettings,
        FExecuteAction::CreateSP(this, &FGridFlowEditor::HandleShowDungeonSettings)
    );

}


void FGridFlowEditor::RecenterOutputGraphs() {
    if (AbstractGraphEditor.IsValid()) {
        AbstractGraphEditor->ZoomToFit(false);
    }
}


void FGridFlowEditor::RebuildDungeon() {
    if (PreviewViewport.IsValid()) {
        ADungeon* Dungeon = PreviewViewport->GetPreviewActor();
        if (Dungeon) {
            UGridFlowConfig* Config = Cast<UGridFlowConfig>(Dungeon->GetConfig());
            if (Config) {
                Config->Seed = EditorSettings ? EditorSettings->Seed : 0;
                Config->ParameterOverrides = EditorSettings->ParameterOverrides;
                Dungeon->BuildDungeon();
            }
        }
    }
}

void FGridFlowEditor::OnPreviewTilemapCellClicked(const FIntPoint& InTileCoords, bool bDoubleClicked) {
    bool bRequestSelection = false;
    FIntPoint RequestedNodeCoord;

    if (PreviewedTilemap.IsValid()) {
        const FGridFlowTilemapCell* CellPtr = PreviewedTilemap->GetSafe(InTileCoords.X, InTileCoords.Y);
        if (CellPtr) {
            const FGridFlowTilemapCell& Cell = *CellPtr;
            if (Cell.bLayoutCell) {
                RequestedNodeCoord = Cell.NodeCoord;
                bRequestSelection = true;
            }
            else {
                bRequestSelection = false;
            }
        }

        bool bRequiresUpdate = true;

        if (!bAbstractNodeSelected && !bRequestSelection) {
            bRequiresUpdate = false;
        }

        if (bAbstractNodeSelected == bRequestSelection && SelectedAbstractNodeCoord == RequestedNodeCoord) {
            bRequiresUpdate = false;
        }

        if (bRequiresUpdate) {
            UGridFlowAbstractEdGraphNode* TargetNode = nullptr;
            for (UEdGraphNode* EdNode : AbstractGraph->Nodes) {
                if (UGridFlowAbstractEdGraphNode* AbstractNode = Cast<UGridFlowAbstractEdGraphNode>(EdNode)) {
                    FIntPoint NodeCoord = AbstractNode->ScriptNode.State.GridCoord;
                    if (NodeCoord == RequestedNodeCoord) {
                        TargetNode = AbstractNode;
                    }
                }
            }


            if (TargetNode) {
                bIgnoreTilemapPreviewRebuildRequest = true;
                AbstractGraphEditor->ClearSelectionSet();
                bIgnoreTilemapPreviewRebuildRequest = false;
                AbstractGraphEditor->SetNodeSelection(TargetNode, true);
            }
            else {
                AbstractGraphEditor->ClearSelectionSet();
            }
        }
    }

    SelectItemWidget(FGuid());

    if (bDoubleClicked) {
        FocusOnTileCoord(InTileCoords);
    }
    //UE_LOG(GridFlowEditor, Log, TEXT(">> Tile Clicked: %s"), *InTileCoords.ToString());
}

void FGridFlowEditor::OnItemWidgetClicked(const FGuid& InItemId, bool bDoubleClicked) {
    SelectItemWidget(InItemId);
    //UE_LOG(GridFlowEditor, Log, TEXT("Item Clicked: %s"), *InItemId.ToString());
}

void FGridFlowEditor::SelectItemWidget(const FGuid& InItemId) {
    AbstractGraph->SelectedItemId = InItemId;
    TilemapGraph->SelectedItemId = InItemId;
}

void FGridFlowEditor::FocusOnTileCoord(const FIntPoint& InTileCoords) {
    if (ADungeon* PreviewDungeon = PreviewViewport->GetPreviewActor()) {
        if (UGridFlowQuery* Query = Cast<UGridFlowQuery>(PreviewDungeon->GetQuery())) {
            // Find the cell height
            float HeightCoord = 0;
            if (PreviewedTilemap.IsValid()) {
                const FGridFlowTilemapCell* CellPtr = PreviewedTilemap->GetSafe(InTileCoords.X, InTileCoords.Y);
                if (CellPtr) {
                    HeightCoord = CellPtr->Height;
                }
            }

            if (UGridFlowConfig* Config = Cast<UGridFlowConfig>(PreviewDungeon->GetConfig())) {
                FVector Coords(InTileCoords.X, InTileCoords.Y, HeightCoord);
                FVector WorldPosition = Query->ConvertTileToWorldCoord(Coords);
                FVector BoxExtent = Config->GridSize * 0.5f;
                FVector BoxCenter = WorldPosition + BoxExtent.Z;
                BoxExtent *= 2;
                FBox FocusBox(BoxCenter - BoxExtent, BoxCenter + BoxExtent);
                PreviewViewport->GetViewportClient()->FocusViewportOnBox(FocusBox, false);
            }
        }
    }
    UE_LOG(GridFlowEditor, Log, TEXT(">> Focus on Tile Coord: %s"), *InTileCoords.ToString());
}

void FGridFlowEditor::UpdateAssetThumbnail() {
    const int32 ThumbSize = 256;

    if (!AssetBeingEdited) {
        // Not asset is currently being edited
        return;
    }

    TArray<FColor> ThumbBitmap;
    {
        UTexture* TilemapTexture = TilemapGraph ? TilemapGraph->GetPreviewTexture() : nullptr;
        if (!TilemapTexture) return;

        UTextureRenderTarget2D* RTT = Cast<UTextureRenderTarget2D>(TilemapTexture);
        if (!RTT) return;

        int32 TexWidth = RTT->GetSurfaceWidth();
        int32 TexHeight = RTT->GetSurfaceHeight();

        TArray<FColor> SrcBitmap;

        FTextureRenderTargetResource* RTTResource = RTT->GameThread_GetRenderTargetResource();

        ENQUEUE_RENDER_COMMAND(UpdateThumbnailRTCommand)(
            [RTTResource](FRHICommandListImmediate& RHICmdList) {
                // Copy (resolve) the rendered thumbnail from the render target to its texture
                RHICmdList.CopyToResolveTarget(
                    RTTResource->GetRenderTargetTexture(), // Source texture
                    RTTResource->TextureRHI, // Dest texture
                    FResolveParams()); // Resolve parameters
            });

        FRenderCommandFence RenderFence;
        RenderFence.BeginFence();
        RenderFence.Wait();

        RTTResource->ReadPixels(SrcBitmap);
        check(SrcBitmap.Num() == TexWidth * TexHeight);

        //float ResizeScale = (float)ThumbSize / FMath::Max(TexWidth, TexHeight);
        //int32 ResizeWidth = FMath::RoundToInt(ResizeScale * TexWidth);
        //int32 ResizeHeight = FMath::RoundToInt(ResizeScale * TexHeight);

        //FImageUtils::ImageResize(TexWidth, TexHeight, SrcBitmap, ThumbSize, ThumbSize, ThumbBitmap, true);
        FImageUtils::CropAndScaleImage(TexWidth, TexHeight, ThumbSize, ThumbSize, SrcBitmap, ThumbBitmap);
    }


    //setup actual thumbnail
    FObjectThumbnail TempThumbnail;
    TempThumbnail.SetImageSize(ThumbSize, ThumbSize);
    TArray<uint8>& ThumbnailByteArray = TempThumbnail.AccessImageData();

    // Copy scaled image into destination thumb
    int32 MemorySize = ThumbSize * ThumbSize * sizeof(FColor);
    ThumbnailByteArray.AddUninitialized(MemorySize);
    FMemory::Memcpy(&(ThumbnailByteArray[0]), &(ThumbBitmap[0]), MemorySize);

    FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

    //check if each asset should receive the new thumb nail
    {
        const FAssetData CurrentAsset = FAssetData(AssetBeingEdited);

        //assign the thumbnail and dirty
        const FString ObjectFullName = CurrentAsset.GetFullName();
        const FString PackageName = CurrentAsset.PackageName.ToString();

        UPackage* AssetPackage = FindObject<UPackage>(nullptr, *PackageName);
        if (ensure(AssetPackage)) {
            FObjectThumbnail* NewThumbnail = ThumbnailTools::CacheThumbnail(
                ObjectFullName, &TempThumbnail, AssetPackage);
            if (ensure(NewThumbnail)) {
                //we need to indicate that the package needs to be re-saved
                AssetPackage->MarkPackageDirty();

                // Let the content browser know that we've changed the thumbnail
                NewThumbnail->MarkAsDirty();

                // Signal that the asset was changed if it is loaded so thumbnail pools will update
                if (CurrentAsset.IsAssetLoaded()) {
                    CurrentAsset.GetAsset()->PostEditChange();
                }

                //Set that thumbnail as a valid custom thumbnail so it'll be saved out
                NewThumbnail->SetCreatedAfterCustomThumbsEnabled();
            }
        }
    }
}

void FGridFlowEditor::HandleShowPerformanceDialog() {
    if (TabManager.IsValid()) {
        TabManager->InvokeTab(FGridFlowEditorTabs::PerformanceID);
    }
}

void FGridFlowEditor::OnTestRunnerServiceStarted() {
    // Compile the Execution graph so we have the latest changes for the test runner
    CompileExecGraph();
}

void FGridFlowEditor::HandleShowEditorSettings() {
    ShowObjectDetails(EditorSettings);
}

void FGridFlowEditor::HandleShowDungeonSettings() {
    if (PreviewViewport.IsValid()) {
        ADungeon* DungeonActor = PreviewViewport->GetPreviewActor();
        ShowObjectDetails(DungeonActor);
    }
}

TSharedRef<SWidget> FGridFlowEditor::HandleShowSettingsDropDownMenu() const {
    FMenuBuilder MenuBuilder(true, SettingsActionList);

    MenuBuilder.BeginSection("DA-Tools", LOCTEXT("DAHeader", "Dungeon Architect"));
    MenuBuilder.AddMenuEntry(FGridFlowEditorCommands::Get().ShowEditorSettings);
    MenuBuilder.AddMenuEntry(FGridFlowEditorCommands::Get().ShowPreviewDungeonSettings);
    MenuBuilder.EndSection();

    return MenuBuilder.MakeWidget();
}

void FGridFlowEditor::FillToolbarCore(FToolBarBuilder& ToolbarBuilder) const {
    ToolbarBuilder.BeginSection("Build");
    {
        ToolbarBuilder.AddToolBarButton(FGridFlowEditorCommands::Get().Build);
    }
    ToolbarBuilder.EndSection();
}

void FGridFlowEditor::FillToolbarMisc(FToolBarBuilder& ToolbarBuilder) const {
    ToolbarBuilder.BeginSection("Settings");
    {
        ToolbarBuilder.AddToolBarButton(FGridFlowEditorCommands::Get().Performance);
        ToolbarBuilder.AddComboButton(FUIAction(),
                                      FOnGetContent::CreateRaw(this, &FGridFlowEditor::HandleShowSettingsDropDownMenu),
                                      LOCTEXT("SettingsLabel", "Settings"),
                                      LOCTEXT("SettingsTooltip", "Show Settings"),
                                      FSlateIcon(FDungeonArchitectStyle::GetStyleSetName(), "GridFlowEditor.Settings"));
    }
    ToolbarBuilder.EndSection();
}

#undef LOCTEXT_NAMESPACE
