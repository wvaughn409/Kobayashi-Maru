//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Misc/NotifyHook.h"
#include "Tickable.h"
#include "Toolkits/AssetEditorToolkit.h"

struct FEdGraphEditAction;
class UGridFlowAsset;
class UGridFlowAbstractGraph;
class UGridFlowAbstractEdGraph;
class UGridFlowTilemapEdGraph;
class UGridFlowExecEdGraphNodeBase;
class UGridFlowTilemap;
struct FGridFlowTilemapCell;
class SGraphEditor;
class SGridFlowTilemap;
class SGridFlowPreview3DViewport;
class UGridFlowAbstractEdGraphNode;
class FToolBarBuilder;
class UGridFlowEditorSettings;

/*-----------------------------------------------------------------------------
FDungeonArchitectThemeEditor
-----------------------------------------------------------------------------*/
class FGridFlowEditor
    : public FAssetEditorToolkit
      , public FNotifyHook
      , public FTickableGameObject
      , public FGCObject {
public:
    // IToolkit interface
    void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
    void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
    // End of IToolkit interface

    // FAssetEditorToolkit

    FName GetToolkitFName() const override;
    FText GetBaseToolkitName() const override;
    FText GetToolkitName() const override;
    FLinearColor GetWorldCentricTabColorScale() const override;
    FString GetWorldCentricTabPrefix() const override;
    FString GetDocumentationLink() const override;
    // End of FAssetEditorToolkit

    // FNotifyHook interface
    void NotifyPreChange(FProperty* PropertyAboutToChange) override;
    void NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FProperty* PropertyThatChanged) override;
    // End of FNotifyHook interface

    // FTickableGameObject Interface
    bool IsTickableInEditor() const override;
    void Tick(float DeltaTime) override;
    bool IsTickable() const override;
    TStatId GetStatId() const override;
    // End of FTickableGameObject Interface


    // FTickableGameObject Interface
    void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FTickableGameObject Interface

    void InitEditor(EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost,
                    UGridFlowAsset* PropData);
    UGridFlowAsset* GetAssetBeingEdited() const;

    void ShowObjectDetails(UObject* ObjectProperties, bool bForceRefresh = false);

protected:
    void ExtendMenu();
    void ExtendToolbar();

    void CreateEditorWidgets();
    void CreateExecGraphEditorWidget();
    void CreateAbstractGraphEditorWidget();
    void OnAbstractNodeSelectionChanged(const TSet<class UObject*>& InSelectedObjects);
    void CreatePropertyEditorWidget();
    void CreateTilemapWidget();
    void CreatePreviewViewport();
    void CompileExecGraph();
    void ExecuteGraph();

    void SyncEdGraphNodeStates();

    void OnExecNodeDoubleClicked(UEdGraphNode* InNode);
    void OnExecNodeSelectionChanged(const TSet<class UObject*>& InSelectedObjects);
    void UpdatePreviewGraphs(const FGuid& NodeId);
    void CreateAbstractGraphPreview(UGridFlowAbstractGraph* InAbstractGraph);
    void CreateTilemapPreview(UGridFlowTilemap* InTilemap);

    /** Called when "Save" is clicked for this asset */
    void SaveAsset_Execute() override;
    TSharedRef<SDockTab> SpawnTab_ExecGraph(const FSpawnTabArgs& Args);
    TSharedRef<SDockTab> SpawnTab_AbstractGraph(const FSpawnTabArgs& Args);
    TSharedRef<SDockTab> SpawnTab_Tilemap(const FSpawnTabArgs& Args);
    TSharedRef<SDockTab> SpawnTab_Details(const FSpawnTabArgs& Args);
    TSharedRef<SDockTab> SpawnTab_Viewport(const FSpawnTabArgs& Args);
    TSharedRef<SDockTab> SpawnTab_Performance(const FSpawnTabArgs& Args);
    void OnGraphChanged(const FEdGraphEditAction& Action);
    void HandleGraphChanged();
    void BindCommands();
    void RecenterOutputGraphs();
    void RebuildDungeon();
    void OnPreviewTilemapCellClicked(const FIntPoint& InTileCoords, bool bDoubleClicked);
    void OnItemWidgetClicked(const FGuid& InItemId, bool bDoubleClicked);
    void SelectItemWidget(const FGuid& InItemId);
    void FocusOnTileCoord(const FIntPoint& InTileCoords);
    void UpdateAssetThumbnail();

    TSharedRef<SWidget> HandleShowSettingsDropDownMenu() const;
    void FillToolbarCore(FToolBarBuilder& ToolbarBuilder) const;
    void FillToolbarMisc(FToolBarBuilder& ToolbarBuilder) const;
    void HandleShowEditorSettings();
    void HandleShowDungeonSettings();
    void HandleShowPerformanceDialog();

    void OnTestRunnerServiceStarted();

    FORCEINLINE bool IsTileCellSelected(const FIntPoint& InNodeCoord) {
        return bAbstractNodeSelected ? (InNodeCoord == SelectedAbstractNodeCoord) : false;
    }

protected:
    TSharedPtr<SGraphEditor> ExecGraphEditor;
    TSharedPtr<SGraphEditor> AbstractGraphEditor;
    TSharedPtr<SGraphEditor> TilemapGraphEditor;
    TSharedPtr<IDetailsView> PropertyEditor;
    TSharedPtr<SGridFlowPreview3DViewport> PreviewViewport;

    TSharedPtr<class FGridFlowExecGraphHandler> ExecGraphHandler;
    TSharedPtr<class FGridFlowAbstractGraphHandler> AbstractGraphHandler;
    TSharedPtr<class FGridFlowTilemapGraphHandler> TilemapGraphHandler;
    TSharedPtr<class FGridFlowProcessor> ExecGraphProcessor;

    bool bAbstractNodeSelected = false;
    FIntPoint SelectedAbstractNodeCoord;
    TWeakObjectPtr<UGridFlowTilemap> PreviewedTilemap;

    UGridFlowAsset* AssetBeingEdited = nullptr;
    UGridFlowAbstractEdGraph* AbstractGraph = nullptr;
    UGridFlowTilemapEdGraph* TilemapGraph = nullptr;

    bool bGraphStateChanged = false;
    bool bIgnoreTilemapPreviewRebuildRequest = false;


    TSharedPtr<class FUICommandList> SettingsActionList;
    UGridFlowEditorSettings* EditorSettings;
};
