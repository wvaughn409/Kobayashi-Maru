//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

class FDungeonFlowEditor;
class FExtender;
class FToolBarBuilder;

class FDungeonFlowEditorToolbar : public TSharedFromThis<FDungeonFlowEditorToolbar> {
public:
    FDungeonFlowEditorToolbar(TSharedPtr<FDungeonFlowEditor> InFlowEditor)
        : FlowEditor(InFlowEditor) {
    }

    void AddModesToolbar(TSharedPtr<FExtender> Extender);
    void AddFlowDesignerToolbar(TSharedPtr<FExtender> Extender);
    void AddFlowDebugToolbar(TSharedPtr<FExtender> Extender);

private:
    void FillModesToolbar(FToolBarBuilder& ToolbarBuilder);
    void FillFlowDesignerToolbar(FToolBarBuilder& ToolbarBuilder);
    void FillFlowDebugToolbar(FToolBarBuilder& ToolbarBuilder);

protected:
    /** Pointer back to the blueprint editor tool that owns us */
    TWeakPtr<FDungeonFlowEditor> FlowEditor;
};
