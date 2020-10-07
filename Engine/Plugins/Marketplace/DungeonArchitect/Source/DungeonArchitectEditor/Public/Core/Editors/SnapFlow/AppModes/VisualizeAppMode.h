//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/SnapFlow/AppModes/FlowEdAppModeBase.h"
#include "Core/Editors/SnapFlow/DungeonFlowGraphEditorHandlers.h"

#include "WorkflowOrientedApp/WorkflowTabManager.h"

class ADungeon;
class FDungeonFlowEditor;
class IDetailsView;
class UEdGraph_Grammar;
class SDungeonFlowEditorViewport;
class SAdvancedPreviewDetailsTab;
class UDungeonFlowEditorCallbackHandler;

//////////////////////// Visualize Mode ////////////////////////
class FDungeonFlowEditor_VisualizeAppMode
    : public FFlowEdAppModeBase
      , public FGCObject {
public:
    FDungeonFlowEditor_VisualizeAppMode(TSharedPtr<class FDungeonFlowEditor> InFlowEditor);
    virtual ~FDungeonFlowEditor_VisualizeAppMode();

    void RegisterTabFactories(TSharedPtr<class FTabManager> InTabManager) override;
    void PreDeactivateMode() override;
    void PostActivateMode() override;

    // FFlowEdAppModeBase Interface
    void OnAssetSave() override;
    // End of FFlowEdAppModeBase Interface

    // FGCObject Interface
    void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FGCObject Interface

protected:
    TSharedRef<FTabManager::FLayout> BuildEditorFrameLayout(TSharedPtr<class FDungeonFlowEditor> InFlowEditor);

    ADungeon* GetDungeonActor() const;
    void LoadDungeonConfig();
    void SaveDungeonConfig();
    void OnDungeonBuilt(ADungeon* Dungeon);
    void OnDungeonDestroyed(ADungeon* Dungeon);
    void OnResultNodeDoubleClicked(UEdGraphNode* InNode);

    void ResetResultGraph();
    void InitDungeon(UWorld* World);
    void OnMapChanged(UWorld* InWorld, EMapChangeType InChangeType);

    void BindCommands(TSharedRef<FUICommandList> ToolkitCommands);
    
protected:
    TWeakPtr<FDungeonFlowEditor> FlowEditor;
    FWorkflowAllowedTabSet TabFactories;
    UDungeonFlowEditorCallbackHandler* CallbackHandler = nullptr;

    FResultGraphEditorHandler VisualizationGraphEditor;
    TSharedPtr<SDungeonFlowEditorViewport> Viewport;
    TSharedPtr<SAdvancedPreviewDetailsTab> ViewportSceneSettings;
    TSharedPtr<IDetailsView> PropertyEditor;

    ADungeon* Dungeon;
    FDelegateHandle OnMapChangedDelegateHandle;
};
