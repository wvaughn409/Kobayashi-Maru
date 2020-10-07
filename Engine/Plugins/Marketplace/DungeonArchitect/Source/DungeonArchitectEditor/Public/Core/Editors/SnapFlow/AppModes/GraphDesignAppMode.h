//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/SnapFlow/AppModes/FlowEdAppModeBase.h"
#include "Core/Editors/SnapFlow/DungeonFlowGraphEditorHandlers.h"

#include "Misc/NotifyHook.h"
#include "WorkflowOrientedApp/WorkflowTabManager.h"
#include "GraphDesignAppMode.generated.h"

class SSnapFlowTestRunner;
class SGrammarEditor;
class SGrammarErrorList;
class IDetailsView;
class FUICommandList;
class UEdGraph_Grammar;

UCLASS()
class UDungeonFlowEditor_GraphDesignAppModeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = Settings)
    int32 Seed = 0;
    
    UPROPERTY(EditAnywhere, Category = Settings)
    bool bRandomizeSeed = true;

    /** Automatically zoom's and fits the result graph when clicking build */
    UPROPERTY(EditAnywhere, Category = Settings)
    bool bAutoZoomResultGraph = true;

};


//////////////////////// Graph Design Mode ////////////////////////
class FDungeonFlowEditor_GraphDesignAppMode
    : public FFlowEdAppModeBase
      , public FGCObject
      , public FNotifyHook {
public:
    FDungeonFlowEditor_GraphDesignAppMode(TSharedPtr<class FDungeonFlowEditor> InFlowEditor);
    void RegisterTabFactories(TSharedPtr<class FTabManager> InTabManager) override;
    void PreDeactivateMode() override;
    void PostActivateMode() override;

    void OnGrammarStateChanged();

    // FNotifyHook interface
    void NotifyPreChange(FProperty* PropertyAboutToChange) override;
    void NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FProperty* PropertyThatChanged) override;
    // End of FNotifyHook interface

    // FFlowEdAppModeBase interface
    void Tick(float DeltaTime) override;
    // End of FFlowEdAppModeBase interface

    // FGCObject interface
    void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FGCObject interface

    void BindCommands(TSharedRef<FUICommandList> ToolkitCommands);
    void ValidateGrammar();

    void OnClick_ValidateGrammar();
    void OnClick_ExecuteDesignGraph();
    void OnClick_Settings();
    void OnClick_Performance();

protected:
    void FlashEditorTab(const FName& InTabId) const;
    
    TSharedRef<FTabManager::FLayout> BuildEditorFrameLayout(TSharedPtr<class FDungeonFlowEditor> InFlowEditor);
    
protected:
    TWeakPtr<FDungeonFlowEditor> FlowEditor;

    // Set of spawnable tabs in behavior tree editing mode
    FWorkflowAllowedTabSet FlowEditorTabFactories;

    UEdGraph_Grammar* ResultGraph;
    TSharedPtr<IDetailsView> PropertyEditor;
    TSharedPtr<SGrammarEditor> GrammarEditor;
    TSharedPtr<SGrammarErrorList> ErrorListView;
    TSharedPtr<SWidget> ExecutionGraphPanel;
    FExecutionGraphEditorHandler ExecutionGraphEditor;
    FResultGraphEditorHandler ResultGraphEditor;
    UDungeonFlowEditor_GraphDesignAppModeSettings* Settings = nullptr;

    bool bRequestValidation;
};
