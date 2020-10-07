//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/DungeonFlowGraphEditorHandlers.h"

#include "Core/Editors/SnapFlow/AppModes/GraphDesignAppMode.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorUtils.h"
#include "Core/LevelEditor/Customizations/DungeonArchitectStyle.h"
#include "Frameworks/GraphGrammar/Editor/SGrammarRuleGraph.h"
#include "Frameworks/GraphGrammar/GraphGrammar.h"
#include "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"
#include "Frameworks/GraphGrammar/Script/GrammarExecutionScript.h"

#include "GraphEditor.h"
#include "SDropTarget.h"
#include "Widgets/Images/SImage.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Text/SInlineEditableTextBlock.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "DungeonFlowGraphEditorHandlers"

DEFINE_LOG_CATEGORY_STATIC(LogDungeonFlowGraphHandler, Log, All);

///////////////////////// FMissionGraphEditorHandler ///////////////////////// 
FExecutionGraphEditorHandler::FExecutionGraphEditorHandler() {
}

FReply FExecutionGraphEditorHandler::OnClick_ExecuteResultGraph() {
    ExecuteResultGraph();
    return FReply::Handled();
}

FReply FExecutionGraphEditorHandler::OnClick_RandomizeSeed() {
    RandomizeSeed();
    return FReply::Handled();
}

void FExecutionGraphEditorHandler::HandleStateChange_RandomizeOnBuild(ECheckBoxState InCheckboxState) {
    if (Settings.IsValid()) {
        Settings->bRandomizeSeed = (InCheckboxState == ECheckBoxState::Checked);
    }
}

ECheckBoxState FExecutionGraphEditorHandler::GetState_RandomizeOnBuild() const {
    if (Settings.IsValid()) {
        return Settings->bRandomizeSeed ? ECheckBoxState::Checked : ECheckBoxState::Unchecked;
    }
    return ECheckBoxState::Undetermined;
}

void FExecutionGraphEditorHandler::ResetResultGraph() {
    if (ResultGraph.IsValid()) {
        FDungeonFlowEditorUtils::CompileGrammarToScript(GrammarRules.Get());

        UGrammarScriptGraph* ResultScriptGraph = NewObject<UGrammarScriptGraph>();
        GraphGrammarProcessor.Initialize(ResultScriptGraph, GrammarRules.Get(), GetSeed());
        FDungeonFlowEditorUtils::BuildEdGraphFromScript(ResultScriptGraph, ResultGraph.Get());

        ResultGraph->NotifyGraphChanged();
    }
}

void FExecutionGraphEditorHandler::ExecuteResultGraph() {
    if (ResultGraph.IsValid()) {
        if (Settings.IsValid() && Settings->bRandomizeSeed) {
            RandomizeSeed();
        }

        FDungeonFlowEditorUtils::CompileGrammarToScript(GrammarRules.Get());

        UGrammarScriptGraph* ResultScriptGraph = NewObject<UGrammarScriptGraph>();
        GraphGrammarProcessor.Initialize(ResultScriptGraph, GrammarRules.Get(), GetSeed());
        GraphGrammarProcessor.Execute(ResultScriptGraph, GrammarRules.Get());

        FDungeonFlowEditorUtils::BuildEdGraphFromScript(ResultScriptGraph, ResultGraph.Get());

        PerformLayout();
        ResultGraph->NotifyGraphChanged();
    }
}

void FExecutionGraphEditorHandler::PerformLayout() {
    ResultGraph->LayoutGraph();
}

int32 FExecutionGraphEditorHandler::GetSeed() const {
    if (!Settings.IsValid()) return 0;
    return Settings->Seed;
}

void FExecutionGraphEditorHandler::SetSeed(int32 InSeed) {
    if (Settings.IsValid()) {
        Settings->Seed = InSeed;
    }
}

void FExecutionGraphEditorHandler::RandomizeSeed() {
    SetSeed(FMath::Rand());
}

FText FExecutionGraphEditorHandler::Seed_GetValue() const {
    if (!Settings.IsValid()) return FText();
    return FText::FromString(FString::FromInt(Settings->Seed));
}

bool FExecutionGraphEditorHandler::Seed_Verify(const FText& NewText, FText& OutErrorMessage) const {
    return FCString::IsNumeric(*NewText.ToString());
}

void FExecutionGraphEditorHandler::Seed_Commit(const FText& InText, ETextCommit::Type CommitInfo) {
    SetSeed(FCString::Atoi(*InText.ToString()));
    ResetResultGraph();
}

/** The list view mode of the asset view */
class DUNGEONARCHITECTEDITOR_API SFlowExecGraphDropTarget : public SDropTarget {
public:
    FReply OnDrop(const FGeometry& MyGeometry, const FDragDropEvent& DragDropEvent) override {
        PanelCoordDropPosition = MyGeometry.AbsoluteToLocal(DragDropEvent.GetScreenSpacePosition());
        return SDropTarget::OnDrop(MyGeometry, DragDropEvent);
    }

    FVector2D GetPanelCoordDropPosition() const { return PanelCoordDropPosition; }

private:
    FVector2D PanelCoordDropPosition = FVector2D(0, 0);
};

FReply FExecutionGraphEditorHandler::OnNodeTypeDrop(TSharedPtr<FDragDropOperation> Operation) const {
    FVector2D DropPosition = ContentHost.IsValid() ? ContentHost->GetPanelCoordDropPosition() : FVector2D::ZeroVector;
    DropHandler->OnNodeTypeDrop(Operation, DropPosition, ExecutionGraphWidget,
                                GrammarRules->ExecutionGraphScript->EdGraph);
    return FReply::Handled();
}

bool FExecutionGraphEditorHandler::OnNodeTypeAllowDrop(TSharedPtr<FDragDropOperation> Operation) const {
    if (DropHandler.IsValid()) {
        return DropHandler->OnNodeTypeAllowDrop(Operation, ExecutionGraphWidget,
                                                GrammarRules->ExecutionGraphScript->EdGraph);
    }
    return false;
}

bool FExecutionGraphEditorHandler::OnIsNodeTypeDropRecognized(TSharedPtr<FDragDropOperation> Operation) const {
    if (DropHandler.IsValid()) {
        return DropHandler->OnIsNodeTypeDropRecognized(Operation, ExecutionGraphWidget,
                                                       GrammarRules->ExecutionGraphScript->EdGraph);
    }
    return false;
}

TSharedRef<SWidget> FExecutionGraphEditorHandler::CreateToolWidget() {
    return SNew(SBorder)
		.BorderImage(FEditorStyle::GetBrush("ToolPanel.GroupBorder"))
		.Padding(0.f)
		.Padding(FMargin(4, 4, 4, 4))
    [
        SNew(SHorizontalBox)
        + SHorizontalBox::Slot()
        .AutoWidth()
        [
            SNew(SButton)
			.ButtonStyle(&FDungeonArchitectStyle::Get().GetWidgetStyle<FButtonStyle>("FlowEd.Buttons.Play"))
		    .OnClicked_Raw(this, &FExecutionGraphEditorHandler::OnClick_ExecuteResultGraph)
		    .ToolTipText(LOCTEXT("ExecuteToEnd", "Execute to End"))
		    .ContentPadding(2.0f)
        ]
        + SHorizontalBox::Slot()
        .FillWidth(1.0)
        [
            SNullWidget::NullWidget
        ]

        + SHorizontalBox::Slot()
          .AutoWidth()
          .Padding(2.0f)
          .VAlign(VAlign_Center)
        [
            SNew(STextBlock)
            .Text(FText::FromString("Seed:"))
        ]

        + SHorizontalBox::Slot()
          .AutoWidth()
          .Padding(2, 0, 0, 0)
          .VAlign(VAlign_Center)
        [
            SNew(SInlineEditableTextBlock)
			.Text_Raw(this, &FExecutionGraphEditorHandler::Seed_GetValue)
		    .OnVerifyTextChanged_Raw(this, &FExecutionGraphEditorHandler::Seed_Verify)
		    .OnTextCommitted_Raw(this, &FExecutionGraphEditorHandler::Seed_Commit)
        ]

        + SHorizontalBox::Slot()
          .AutoWidth()
          .Padding(2, 0, 0, 0)
          .VAlign(VAlign_Center)
        [
            SNew(SButton)
			.OnClicked_Raw(this, &FExecutionGraphEditorHandler::OnClick_RandomizeSeed)
		    .ButtonStyle(&FEditorStyle::Get().GetWidgetStyle<FButtonStyle>("FlatButton"))
            [
                SNew(SImage)
                .Image(FEditorStyle::Get().GetBrush("PropertyWindow.Button_Refresh"))
            ]
        ]

        +SHorizontalBox::Slot()
        .Padding(2.0f)
        .AutoWidth()
        .VAlign(VAlign_Center)
        [
            SNew(SSeparator)
            .Orientation(Orient_Vertical)
        ]
        
        + SHorizontalBox::Slot()
        .AutoWidth()
        .Padding(2.0f)
        .VAlign(VAlign_Center)
        [
            
            SNew( SCheckBox )
            .Style(FEditorStyle::Get(), "CheckboxLookToggleButtonCheckbox")
            .ToolTipText(LOCTEXT("RandomizeOnBuild", "Automatically randomize the seed on graph rebuilds"))
            .Padding(2.0f)
            .OnCheckStateChanged_Raw(this, &FExecutionGraphEditorHandler::HandleStateChange_RandomizeOnBuild)
            .IsChecked_Raw(this, &FExecutionGraphEditorHandler::GetState_RandomizeOnBuild)
            [
                SNew(SSpacer)
                .Size(FVector2D(10, 10))
            ]
        ]
        
        +SHorizontalBox::Slot()
        .Padding(2.0f)
        .AutoWidth()
        .VAlign(VAlign_Center)
        [
            SNew(STextBlock)
            .Text(FText::FromString("Randomize on build"))
        ]
    ];
}

TSharedRef<SWidget> FExecutionGraphEditorHandler::GetContent() const {
    return ContentHost.ToSharedRef();
}

void FExecutionGraphEditorHandler::Initialize(UEdGraph_Grammar* InResultGraph, UGraphGrammar* InGrammarRules,
                                              TWeakPtr<IDetailsView> InPropertyEditor,
                                              UDungeonFlowEditor_GraphDesignAppModeSettings* InSettings) {
    ResultGraph = InResultGraph;
    GrammarRules = InGrammarRules;
    PropertyEditor = InPropertyEditor;
    Settings = InSettings;

    DropHandler = MakeShareable(new FProductionRuleGraphDropHandler);
    CreateGraphEditor();

    ResetResultGraph();
}

void FExecutionGraphEditorHandler::CreateGraphEditor() {
    if (!GrammarRules.IsValid()) {
        return;
    }

    FGraphAppearanceInfo AppearanceInfo;
    AppearanceInfo.CornerText = FText::FromString("Execution Graph");
    GraphHandler = MakeShareable(new FGrammarRuleGraphHandler);
    GraphHandler->Bind();
    GraphHandler->SetPropertyEditor(PropertyEditor);

    UEdGraph* GraphToEdit = GrammarRules->ExecutionGraphScript ? GrammarRules->ExecutionGraphScript->EdGraph : nullptr;
    ExecutionGraphWidget = SNew(SGraphEditor)
		.AdditionalCommands(GraphHandler->GraphEditorCommands)
		.Appearance(AppearanceInfo)
		.GraphToEdit(GraphToEdit)
		.GraphEvents(GraphHandler->GraphEvents);

    GraphHandler->SetGraphEditor(ExecutionGraphWidget);

    ContentHost = SNew(SFlowExecGraphDropTarget)
		.OnDrop_Raw(this, &FExecutionGraphEditorHandler::OnNodeTypeDrop)
		.OnAllowDrop_Raw(this, &FExecutionGraphEditorHandler::OnNodeTypeAllowDrop)
		.OnIsRecognized_Raw(this, &FExecutionGraphEditorHandler::OnIsNodeTypeDropRecognized)
		.BackgroundColor(FLinearColor(1, 1, 1, 0.125f))
		.BackgroundColorHover(FLinearColor(1, 1, 1, 0.25f))
		.Content()
    [
        ExecutionGraphWidget.ToSharedRef()
    ];

}

//////////////////////////////////////// FResultGraphEditorHandler ////////////////////////////////////////

FResultGraphEditorHandler::FResultGraphEditorHandler() {
}

void FResultGraphEditorHandler::Initialize(UEdGraph_Grammar* InResultGraph, bool bIsEditable) {
    ResultGraph = InResultGraph;
    ResultGraphWidget = SNew(SGrammarRuleGraph, InResultGraph)
		.bFullScreen(true)
		.IsEditable(bIsEditable)
		.Title("Result Graph");
}


TSharedRef<SGrammarRuleGraph> FResultGraphEditorHandler::GetGraphWidget() const {
    return ResultGraphWidget.ToSharedRef();
}

void FResultGraphEditorHandler::ZoomToFit() {
    ResultGraphWidget->ZoomToFit();
}


#undef LOCTEXT_NAMESPACE
