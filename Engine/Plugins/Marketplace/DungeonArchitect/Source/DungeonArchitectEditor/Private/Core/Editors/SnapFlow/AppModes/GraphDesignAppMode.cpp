//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/AppModes/GraphDesignAppMode.h"

#include "Core/Dungeon.h"
#include "Core/DungeonFlow/DungeonFlow.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditor.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorCommands.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorTabFactories.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorTabs.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorToolbar.h"
#include "Core/Editors/SnapFlow/DungeonFlowTestRunner.h"
#include "Frameworks/GraphGrammar/Editor/GraphGrammarValidation.h"
#include "Frameworks/GraphGrammar/Editor/SGrammarEditor.h"
#include "Frameworks/GraphGrammar/Editor/SGrammarErrorList.h"
#include "Frameworks/GraphGrammar/Editor/SGrammarRuleGraph.h"
#include "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"

#include "IDetailsView.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "Widgets/Docking/SDockTab.h"

////////////////////// FDungeonFlowEditor_GraphDesignAppMode //////////////////////

#define LOCTEXT_NAMESPACE "DungeonFlowEditor_GraphDesignAppMode"

DEFINE_LOG_CATEGORY_STATIC(DungeonFlowEditorDesign, Log, All);

FDungeonFlowEditor_GraphDesignAppMode::FDungeonFlowEditor_GraphDesignAppMode(
    TSharedPtr<class FDungeonFlowEditor> InFlowEditor)
    : FFlowEdAppModeBase(FDungeonFlowEditor::GraphEditorModeID)
      , FlowEditor(InFlowEditor) {
    Settings = NewObject<UDungeonFlowEditor_GraphDesignAppModeSettings>();

    // Create the details property editor widget
    {
        FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(
            "PropertyEditor");
        const FDetailsViewArgs DetailsViewArgs(false, false, true, FDetailsViewArgs::HideNameArea, true, this);
        TSharedRef<IDetailsView> PropertyEditorRef = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
        PropertyEditor = PropertyEditorRef;
    }

    UDungeonFlow* AssetBeingEdited = InFlowEditor->GetAssetBeingEdited();
    ResultGraph = NewObject<UEdGraph_Grammar>();
    ExecutionGraphEditor.Initialize(ResultGraph, AssetBeingEdited->MissionGrammar, PropertyEditor, Settings);
    ResultGraphEditor.Initialize(ResultGraph);
  
    ExecutionGraphPanel = SNew(SVerticalBox)
        + SVerticalBox::Slot()
          .AutoHeight()
          .HAlign(HAlign_Fill)
          .Padding(0, 0, 0, 0)
        [
            ExecutionGraphEditor.CreateToolWidget()
        ]
        + SVerticalBox::Slot()
        .FillHeight(1.0f)
        [
            ExecutionGraphEditor.GetContent()
        ];


    this->GrammarEditor = SNew(SGrammarEditor, AssetBeingEdited->MissionGrammar)
        .PropertyEditor(PropertyEditor)
        .OnGrammarStateChanged_Raw(this, &FDungeonFlowEditor_GraphDesignAppMode::OnGrammarStateChanged);

    // Create the error list view
    ErrorListView = SNew(SGrammarErrorList)
        .GrammarEditor(GrammarEditor);

    BindCommands(InFlowEditor->GetToolkitCommands());

    bRequestValidation = true;
    FlowEditorTabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_GrammarEditor(InFlowEditor, GrammarEditor)));
    FlowEditorTabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_ExecutionGraph(InFlowEditor, ExecutionGraphPanel)));
    FlowEditorTabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_ResultGraph(InFlowEditor, ResultGraphEditor.GetGraphWidget())));
    FlowEditorTabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_Details(InFlowEditor, PropertyEditor)));
    FlowEditorTabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_ErrorList(InFlowEditor, ErrorListView)));
    FlowEditorTabFactories.RegisterFactory(
        MakeShareable(new FFlowEditorTabFactory_Performance(InFlowEditor, nullptr)));

    TabLayout = BuildEditorFrameLayout(InFlowEditor);

    InFlowEditor->GetToolbarBuilder()->AddModesToolbar(ToolbarExtender);
    InFlowEditor->GetToolbarBuilder()->AddFlowDesignerToolbar(ToolbarExtender);
}

TSharedRef<SDockTab> FFlowEditorTabFactory_Performance::SpawnTab(const FWorkflowTabSpawnInfo& Info) const {
    // Spawn the tab
    TSharedRef<SDockTab> NewTab = SNew(SDockTab)
        .TabRole(this->TabRole)
        .Icon(GetTabIcon(Info))
        .Label(ConstructTabName(Info))
        .ShouldAutosize(bShouldAutosize)
    [
        SNullWidget::NullWidget
    ];

    const TSharedPtr<FDungeonFlowEditor> FlowEditor = FlowEditorPtr.Pin();
    if (FlowEditor.IsValid()) {
        UDungeonFlow* FlowAsset = FlowEditor->GetAssetBeingEdited();
        TSharedPtr<SWindow> Window = NewTab->GetParentWindow();
        TSharedPtr<SWidget> Widget = SNew(SSnapFlowTestRunner, NewTab, Window, FlowAsset);
        NewTab->SetContent(Widget.ToSharedRef());
    }

    NewTab->SetTabToolTipWidget(CreateTabToolTipWidget(Info));
    return NewTab;
}

void FDungeonFlowEditor_GraphDesignAppMode::RegisterTabFactories(TSharedPtr<class FTabManager> InTabManager) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    FlowEditorPtr->RegisterToolbarTab(InTabManager.ToSharedRef());

    FlowEditorPtr->PushTabFactories(FlowEditorTabFactories);

    FApplicationMode::RegisterTabFactories(InTabManager);
}

void FDungeonFlowEditor_GraphDesignAppMode::PreDeactivateMode() {
    FApplicationMode::PreDeactivateMode();

    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

}

void FDungeonFlowEditor_GraphDesignAppMode::PostActivateMode() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    FApplicationMode::PostActivateMode();
}

TSharedRef<FTabManager::FLayout> FDungeonFlowEditor_GraphDesignAppMode::BuildEditorFrameLayout(
    TSharedPtr<class FDungeonFlowEditor> InFlowEditor) {
    return FTabManager::NewLayout("Standalone_DungeonFlowEditor_DesignLayout_v0.1.0")
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
                    ->SetSizeCoefficient(0.4f)
                    ->AddTab(FDungeonFlowEditorTabs::GrammarEditorID, ETabState::OpenedTab)
                )
                // Right side of the editor
                ->Split
                (
                    FTabManager::NewSplitter()
                    ->SetOrientation(Orient_Vertical)
                    ->SetSizeCoefficient(0.6f)

                    // Top side 
                    ->Split
                    (
                        FTabManager::NewSplitter()
                        ->SetOrientation(Orient_Vertical)

                        // The Execution Graph
                        ->Split
                        (
                            FTabManager::NewStack()
                            ->SetSizeCoefficient(0.5f)
                            ->AddTab(FDungeonFlowEditorTabs::ExecutionGraphID, ETabState::OpenedTab)
                        )

                        // The result graph
                        ->Split
                        (
                            FTabManager::NewStack()
                            ->SetSizeCoefficient(0.5f)
                            ->AddTab(FDungeonFlowEditorTabs::ResultGraphID, ETabState::OpenedTab)
                        )
                    )

                    // Bottom side
                    ->Split
                    (
                        FTabManager::NewSplitter()
                        ->SetOrientation(Orient_Horizontal)
                        ->SetSizeCoefficient(0.25f)
                        ->Split
                        (
                            FTabManager::NewStack()
                            ->SetSizeCoefficient(0.25f)
                            ->AddTab(FDungeonFlowEditorTabs::DetailsID, ETabState::OpenedTab)
                        )
                        ->Split
                        (
                            FTabManager::NewStack()
                            ->SetSizeCoefficient(0.75f)
                            ->AddTab(FDungeonFlowEditorTabs::ErrorListID, ETabState::OpenedTab)
                        )
                    )
                )
            )
        );
}

void FDungeonFlowEditor_GraphDesignAppMode::BindCommands(TSharedRef<FUICommandList> ToolkitCommands) {
    const FDungeonFlowEditorCommands& Commands = FDungeonFlowEditorCommands::Get();

    ToolkitCommands->MapAction(
        Commands.ValidateGrammarGraph,
        FExecuteAction::CreateRaw(this, &FDungeonFlowEditor_GraphDesignAppMode::OnClick_ValidateGrammar));

    ToolkitCommands->MapAction(
        Commands.BuildGraph,
        FExecuteAction::CreateRaw(this, &FDungeonFlowEditor_GraphDesignAppMode::OnClick_ExecuteDesignGraph));

    ToolkitCommands->MapAction(
        Commands.Settings,
        FExecuteAction::CreateRaw(this, &FDungeonFlowEditor_GraphDesignAppMode::OnClick_Settings));
    
    ToolkitCommands->MapAction(
        Commands.Performance,
        FExecuteAction::CreateRaw(this, &FDungeonFlowEditor_GraphDesignAppMode::OnClick_Performance));
}

void FDungeonFlowEditor_GraphDesignAppMode::OnClick_ExecuteDesignGraph() {
    UE_LOG(DungeonFlowEditorDesign, Log, TEXT("Executing graph"));
    ExecutionGraphEditor.ExecuteResultGraph();
    if (Settings && Settings->bAutoZoomResultGraph) {
        ResultGraphEditor.ZoomToFit();
    }
    FlashEditorTab(FDungeonFlowEditorTabs::ResultGraphID);
}

void FDungeonFlowEditor_GraphDesignAppMode::OnClick_Settings() {
    if (PropertyEditor.IsValid()) {
        PropertyEditor->SetObject(Settings);
        FlashEditorTab(FDungeonFlowEditorTabs::DetailsID);
    }
}

void FDungeonFlowEditor_GraphDesignAppMode::OnClick_Performance() {
    
    UE_LOG(DungeonFlowEditorDesign, Log, TEXT("Opening perf stat dialog"));
    
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
    if (FlowEditorPtr.IsValid()) {
        TSharedPtr<FTabManager> TabManager = FlowEditorPtr->GetTabManager();
        if (TabManager.IsValid()) {
            TabManager->InvokeTab(FDungeonFlowEditorTabs::PerformanceID);
        }
    }
}

void FDungeonFlowEditor_GraphDesignAppMode::OnClick_ValidateGrammar() {
    ValidateGrammar();
    FlashEditorTab(FDungeonFlowEditorTabs::ErrorListID);
}

void FDungeonFlowEditor_GraphDesignAppMode::FlashEditorTab(const FName& InTabId) const {
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
    if (FlowEditorPtr.IsValid()) {
        const TSharedPtr<FTabManager> TabManager = FlowEditorPtr->GetTabManager();
        if (TabManager.IsValid()) {
            TSharedPtr<SDockTab> Tab = TabManager->FindExistingLiveTab(InTabId);
            if (Tab.IsValid()) {
                Tab->FlashTab();
            }
        }
    }
}

void FDungeonFlowEditor_GraphDesignAppMode::ValidateGrammar() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
    UDungeonFlow* AssetBeingEdited = FlowEditorPtr->GetAssetBeingEdited();

    if (AssetBeingEdited) {
        FGrammarValidationResult ValidationResult = FGrammarValidator::Validate(AssetBeingEdited->MissionGrammar);
        if (!ValidationResult.ContainsErrors() && !ValidationResult.ContainsWarnings()) {
            // Add a success entry
            ValidationResult.Entries.Add(
                MakeShareable(
                    new FGrammarValidationEntry(EGrammarLogType::Success, FText::GetEmpty(),
                                                nullptr)));
        }
        ErrorListView->UpdateList(ValidationResult.Entries);
    }
}


void FDungeonFlowEditor_GraphDesignAppMode::AddReferencedObjects(FReferenceCollector& Collector) {
    if (ResultGraph) {
        Collector.AddReferencedObject(ResultGraph);
    }
    if (Settings != nullptr) {
        Collector.AddReferencedObject(Settings);
    }
}

void FDungeonFlowEditor_GraphDesignAppMode::Tick(float DeltaTime) {
    if (bRequestValidation) {
        bRequestValidation = false;
        ValidateGrammar();
    }
}

void FDungeonFlowEditor_GraphDesignAppMode::OnGrammarStateChanged() {
    bRequestValidation = true;
}

void FDungeonFlowEditor_GraphDesignAppMode::NotifyPreChange(FProperty* PropertyAboutToChange) {

}

void FDungeonFlowEditor_GraphDesignAppMode::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent,
                                                             FProperty* PropertyThatChanged) {
    OnGrammarStateChanged();
}

#undef  LOCTEXT_NAMESPACE

