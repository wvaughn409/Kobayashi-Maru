//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/SnapFlow/AppModes/FlowEdAppModeBase.h"
#include "Core/Editors/SnapFlow/DungeonFlowGraphEditorHandlers.h"

#include "GameFramework/Actor.h"
#include "Misc/NotifyHook.h"
#include "WorkflowOrientedApp/WorkflowTabManager.h"
#include "DebugAppMode.generated.h"

class UEdGraph_Grammar;
class UEdGraph_DebugGrammar;
class SDungeonFlowEditorViewport;
class FDungeonFlowEditor;
class SAdvancedPreviewDetailsTab;
class IDetailsView;

namespace SnapMapDiagnostics {
    class FDiagnostics;
    struct FDiagStep;
    struct IPayload;
}

class FDungeonFlowEditor_DebugAppMode
    : public FFlowEdAppModeBase
      , public FGCObject
      , public FNotifyHook {
public:
    FDungeonFlowEditor_DebugAppMode(TSharedPtr<class FDungeonFlowEditor> InFlowEditor);
    virtual ~FDungeonFlowEditor_DebugAppMode();
    void RegisterTabFactories(TSharedPtr<class FTabManager> InTabManager) override;
    void PreDeactivateMode() override;
    void PostActivateMode() override;

    // FGCObject Interface
    void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FGCObject Interface

    // FNotifyHook Interface
    void NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FProperty* PropertyThatChanged) override;
    // End of FNotifyHook Interface

    void BindCommands(TSharedRef<FUICommandList> ToolkitCommands);
    void OnResultNodeDoubleClicked(UEdGraphNode* InNode);
    void HandleDebugRestart();
    void HandleDebugStepForward();

protected:
    TSharedRef<FTabManager::FLayout> BuildEditorFrameLayout(TSharedPtr<class FDungeonFlowEditor> InFlowEditor);

protected:
    TWeakPtr<FDungeonFlowEditor> FlowEditor;
    FWorkflowAllowedTabSet TabFactories;

    FResultGraphEditorHandler DebugGraphEditor;
    TSharedPtr<SDungeonFlowEditorViewport> Viewport;
    TSharedPtr<SAdvancedPreviewDetailsTab> ViewportSceneSettings;
    TSharedPtr<IDetailsView> PropertyEditor;

    class ASnapMapFlowEditorVisualization* VisualizationActor;
};

/////////////////////// ASnapMapFlowEditorVisualization ///////////////////////

UCLASS(HideDropdown)
class ASnapMapFlowEditorVisualization : public AActor {
    GENERATED_BODY()

public:
    ASnapMapFlowEditorVisualization();
    void LoadLevel(const FGuid& InNodeId, const struct FSnapMapModuleDatabaseItem& InModuleInfo,
                   const FTransform& InWorldTransform);
    void UnloadLevel(const FGuid& InNodeId);
    void UpdateConnectionState(const FGuid& InNodeId, const FGuid& InConnectionId, bool bIsDoor);
    void UnloadAllLevels();
    void SetDebugBox(const FBox& InDebugDrawBounds, const FColor& InColor);

    void Tick(float DeltaSeconds) override;
    bool ShouldTickIfViewportsOnly() const override { return true; }

private:
    void DebugDraw();

private:
    UPROPERTY(Transient)
    TMap<FGuid, class ULevelStreamingDynamic*> LoadedLevels;

    UPROPERTY(Transient)
    TMap<FGuid, UPackage*> LoadedPackages;

    UPROPERTY(Transient)
    FBox DebugDrawBounds;

    UPROPERTY(Transient)
    FColor DebugDrawColor;

    int32 InstanceIdCounter;
};
