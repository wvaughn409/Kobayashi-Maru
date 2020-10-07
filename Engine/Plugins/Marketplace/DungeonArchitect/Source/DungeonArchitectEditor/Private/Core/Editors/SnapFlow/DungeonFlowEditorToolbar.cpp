//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/DungeonFlowEditorToolbar.h"

#include "Core/Common/DungeonArchitectCommands.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditor.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorCommands.h"
#include "Core/LevelEditor/Customizations/DungeonArchitectStyle.h"

#include "EditorStyleSet.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SSpacer.h"
#include "WorkflowOrientedApp/SModeWidget.h"

#define LOCTEXT_NAMESPACE "BehaviorTreeApplicationMode"

class SDungeonFlowEditorModeSeparator : public SBorder {
public:
SLATE_BEGIN_ARGS(SDungeonFlowEditorModeSeparator) {
        }

    SLATE_END_ARGS()

    void Construct(const FArguments& InArg) {
        SBorder::Construct(
            SBorder::FArguments()
            .BorderImage(FEditorStyle::GetBrush("BlueprintEditor.PipelineSeparator"))
            .Padding(0.0f)
        );
    }

    // SWidget interface
    FVector2D ComputeDesiredSize(float) const override {
        const float Height = 20.0f;
        const float Thickness = 16.0f;
        return FVector2D(Thickness, Height);
    }

    // End of SWidget interface
};

void FDungeonFlowEditorToolbar::AddModesToolbar(TSharedPtr<FExtender> Extender) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    Extender->AddToolBarExtension(
        "Asset",
        EExtensionHook::After,
        FlowEditorPtr->GetToolkitCommands(),
        FToolBarExtensionDelegate::CreateSP(this, &FDungeonFlowEditorToolbar::FillModesToolbar));
}

void FDungeonFlowEditorToolbar::AddFlowDesignerToolbar(TSharedPtr<FExtender> Extender) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
    ToolbarExtender->AddToolBarExtension("Asset", EExtensionHook::After, FlowEditorPtr->GetToolkitCommands(),
                                         FToolBarExtensionDelegate::CreateSP(
                                             this, &FDungeonFlowEditorToolbar::FillFlowDesignerToolbar));
    FlowEditorPtr->AddToolbarExtender(ToolbarExtender);
}

void FDungeonFlowEditorToolbar::AddFlowDebugToolbar(TSharedPtr<FExtender> Extender) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
    ToolbarExtender->AddToolBarExtension("Asset", EExtensionHook::After, FlowEditorPtr->GetToolkitCommands(),
                                         FToolBarExtensionDelegate::CreateSP(
                                             this, &FDungeonFlowEditorToolbar::FillFlowDebugToolbar));
    FlowEditorPtr->AddToolbarExtender(ToolbarExtender);
}

void FDungeonFlowEditorToolbar::FillModesToolbar(FToolBarBuilder& ToolbarBuilder) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();


    TAttribute<FName> GetActiveMode(FlowEditorPtr.ToSharedRef(), &FDungeonFlowEditor::GetCurrentMode);
    FOnModeChangeRequested SetActiveMode = FOnModeChangeRequested::CreateSP(
        FlowEditorPtr.ToSharedRef(), &FDungeonFlowEditor::SetCurrentMode);

    // Left side padding
    FlowEditorPtr->AddToolbarWidget(SNew(SSpacer).Size(FVector2D(4.0f, 1.0f)));

    // Design Mode
    FlowEditorPtr->AddToolbarWidget(
        SNew(SModeWidget, FDungeonFlowEditor::GetLocalizedMode(FDungeonFlowEditor::GraphEditorModeID),
             FDungeonFlowEditor::GraphEditorModeID)
		.OnGetActiveMode(GetActiveMode)
		.OnSetActiveMode(SetActiveMode)
		.CanBeSelected(FlowEditorPtr.Get(), &FDungeonFlowEditor::CanAccessGraphEditMode)
		.ToolTipText(LOCTEXT("GraphEditorModeButtonTooltip", "Switch to Graph Grammar Design Mode"))
		.IconImage(FDungeonArchitectStyle::Get().GetBrush("DA.FlowEd.SwitchToDesignMode"))
		.SmallIconImage(FDungeonArchitectStyle::Get().GetBrush("DA.FlowEd.SwitchToDesignMode.Small"))
    );

    FlowEditorPtr->AddToolbarWidget(SNew(SDungeonFlowEditorModeSeparator));

    // Visualization Mode
    FlowEditorPtr->AddToolbarWidget(
        SNew(SModeWidget, FDungeonFlowEditor::GetLocalizedMode(FDungeonFlowEditor::VisualizationModeID),
             FDungeonFlowEditor::VisualizationModeID)
		.OnGetActiveMode(GetActiveMode)
		.OnSetActiveMode(SetActiveMode)
		.CanBeSelected(FlowEditorPtr.Get(), &FDungeonFlowEditor::CanAccessVisualizationMode)
		.ToolTipText(LOCTEXT("VisualizationModeButtonTooltip", "Switch to Visualization mode"))
		.IconImage(FDungeonArchitectStyle::Get().GetBrush("DA.FlowEd.SwitchToVisualizeMode"))
		.SmallIconImage(FDungeonArchitectStyle::Get().GetBrush("DA.FlowEd.SwitchToVisualizeMode.Small"))
    );

    FlowEditorPtr->AddToolbarWidget(SNew(SDungeonFlowEditorModeSeparator));

    // Debug Mode
    FlowEditorPtr->AddToolbarWidget(
        SNew(SModeWidget, FDungeonFlowEditor::GetLocalizedMode(FDungeonFlowEditor::DebugModeID),
             FDungeonFlowEditor::DebugModeID)
		.OnGetActiveMode(GetActiveMode)
		.OnSetActiveMode(SetActiveMode)
		.CanBeSelected(FlowEditorPtr.Get(), &FDungeonFlowEditor::CanAccessDebugMode)
		.ToolTipText(LOCTEXT("VisualizationModeButtonTooltip", "Switch to Debug mode"))
		.IconImage(FDungeonArchitectStyle::Get().GetBrush("DA.FlowEd.SwitchToDebugMode"))
		.SmallIconImage(FDungeonArchitectStyle::Get().GetBrush("DA.FlowEd.SwitchToDebugMode.Small"))
    );

    // Right side padding
    FlowEditorPtr->AddToolbarWidget(SNew(SSpacer).Size(FVector2D(4.0f, 1.0f)));

}

void FDungeonFlowEditorToolbar::FillFlowDesignerToolbar(FToolBarBuilder& ToolbarBuilder) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    if (FlowEditorPtr->GetCurrentMode() == FDungeonFlowEditor::GraphEditorModeID) {
        ToolbarBuilder.BeginSection("Build");
        {
            ToolbarBuilder.AddToolBarButton(FDungeonFlowEditorCommands::Get().BuildGraph);
        }
        ToolbarBuilder.EndSection();
        
        ToolbarBuilder.BeginSection("Flow Control");
        {
            ToolbarBuilder.AddToolBarButton(FDungeonFlowEditorCommands::Get().ValidateGrammarGraph);
            ToolbarBuilder.AddToolBarButton(FDungeonFlowEditorCommands::Get().Performance);
            ToolbarBuilder.AddToolBarButton(FDungeonFlowEditorCommands::Get().Settings);
        }
        ToolbarBuilder.EndSection();
    }
}


void FDungeonFlowEditorToolbar::FillFlowDebugToolbar(FToolBarBuilder& ToolbarBuilder) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    if (FlowEditorPtr->GetCurrentMode() == FDungeonFlowEditor::DebugModeID) {
        ToolbarBuilder.BeginSection("Flow Control");
        {
            ToolbarBuilder.AddToolBarButton(FDungeonFlowEditorCommands::Get().DebugRestart);
            ToolbarBuilder.AddToolBarButton(FDungeonFlowEditorCommands::Get().DebugStepForward);
        }
        ToolbarBuilder.EndSection();
    }
}

#undef LOCTEXT_NAMESPACE
