//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/DungeonEventListener.h"
#include "IDungeonFlowEditor.h"

#include "Misc/NotifyHook.h"
#include "Tickable.h"
#include "Toolkits/AssetEditorManager.h"
#include "UObject/GCObject.h"
#include "DungeonFlowEditor.generated.h"

class ADungeon;
class UDungeonFlow;
class UEdGraph_Grammar;
class UEdGraph_DebugGrammar;
class UFlowEditorDebugAppModeSettings;

class FDungeonFlowEditor
    : public IDungeonFlowEditor
      , public FNotifyHook
      , public FTickableGameObject
      , public FGCObject {
public:
    ~FDungeonFlowEditor();
    // IToolkit interface
    virtual void RegisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
    virtual void UnregisterTabSpawners(const TSharedRef<class FTabManager>& InTabManager) override;
    // End of IToolkit interface

    // FAssetEditorToolkit
    virtual FName GetToolkitFName() const override;
    virtual FText GetBaseToolkitName() const override;
    virtual FText GetToolkitName() const override;
    virtual FLinearColor GetWorldCentricTabColorScale() const override;
    virtual FString GetWorldCentricTabPrefix() const override;
    virtual FString GetDocumentationLink() const override;
    virtual void SaveAsset_Execute() override;
    // End of FAssetEditorToolkit

    // FGCObject Interface
    virtual void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FGCObject

    // FNotifyHook interface
    virtual void NotifyPreChange(FProperty* PropertyAboutToChange) override;
    virtual void NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent, FProperty* PropertyThatChanged) override;
    // End of FNotifyHook interface

    // FTickableGameObject Interface
    virtual bool IsTickableInEditor() const override;
    virtual void Tick(float DeltaTime) override;
    virtual bool IsTickable() const override;
    virtual TStatId GetStatId() const override;
    // End of FTickableGameObject Interface

    static FText GetLocalizedMode(FName InMode);
    void RegisterToolbarTab(const TSharedRef<class FTabManager>& TabManager);
    TSharedPtr<class FDungeonFlowEditorToolbar> GetToolbarBuilder() { return ToolbarBuilder; }

    void InitFlowEditor(EToolkitMode::Type Mode, const TSharedPtr<class IToolkitHost>& InitToolkitHost,
                        UDungeonFlow* DungeonFlow);

    UDungeonFlow* GetAssetBeingEdited() const;
    UEdGraph_Grammar* GetVisualizationGraph() const;
    UEdGraph_DebugGrammar* GetDebugGraph() const;
    UFlowEditorDebugAppModeSettings* GetDebugAppModeSettings() const;

    bool CanAccessGraphEditMode() const;
    bool CanAccessVisualizationMode() const;
    bool CanAccessDebugMode() const;

    
private:
    UDungeonFlow* AssetBeingEdited = nullptr;
    UEdGraph_Grammar* VisualizationGraph = nullptr;
    UEdGraph_DebugGrammar* DebugGraph = nullptr;
    UFlowEditorDebugAppModeSettings* DebugModeSettings = nullptr;

    TSharedPtr<class FDungeonFlowEditorToolbar> ToolbarBuilder;
    TSharedPtr<class FDocumentTracker> DocumentManager;

public:
    static const FName GraphEditorModeID;
    static const FName VisualizationModeID;
    static const FName DebugModeID;
};

DECLARE_DELEGATE_OneParam(FDungeonFlowViewportEvent, ADungeon*);

UCLASS()
class UDungeonFlowEditorCallbackHandler : public UDungeonEventListener {
    GENERATED_BODY()
public:
    void OnPostDungeonBuild_Implementation(ADungeon* Dungeon) override;
    void OnDungeonDestroyed_Implementation(ADungeon* Dungeon) override;

public:
    FDungeonFlowViewportEvent OnDungeonBuilt;
    FDungeonFlowViewportEvent OnDungeonDestroyed;

private:
    TWeakPtr<FDungeonFlowEditor> FlowEditor;
};


UCLASS()
class UFlowEditorDebugAppModeSettings : public UObject {
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Layout Settings")
    float SpacingHorizontal = 200;

    UPROPERTY(EditAnywhere, Category = "Layout Settings")
    float SpacingVertical = 110;
};
