//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "ISnapMapConnectionEditor.h"

#include "Misc/NotifyHook.h"
#include "Tickable.h"
#include "Toolkits/AssetEditorManager.h"

class USnapMapConnectionInfo;

class FSnapMapConnectionEditor : public FNotifyHook, public ISnapMapConnectionEditor, public FTickableGameObject {
public:
    ~FSnapMapConnectionEditor();
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

    virtual void InitSnapMapConnectionEditor(EToolkitMode::Type Mode,
                                             const TSharedPtr<class IToolkitHost>& InitToolkitHost,
                                             USnapMapConnectionInfo* TreeTheme);
    USnapMapConnectionInfo* GetDoorBeingEdited() const { return DoorBeingEdited; }

    void OnPropertyChanged(const FPropertyChangedEvent& PropertyChangedEvent);

    void RebuildDoor();

protected:
    void ExtendMenu();
    void BindCommands();

    void HandleRebuildActionExecute();

protected:
    /** Called when "Save" is clicked for this asset */
    void SaveAsset_Execute() override;
    void UpdateOriginalDoorAsset();
    void UpdateThumbnail();

protected:
    USnapMapConnectionInfo* DoorBeingEdited;

    TSharedRef<SDockTab> SpawnTab_Preview3D(const FSpawnTabArgs& Args);
    TSharedRef<SDockTab> SpawnTab_Details(const FSpawnTabArgs& Args);

    /** Preview Viewport widget */
    TSharedPtr<class SSnapMapConnectionPreview3DViewport> PreviewViewport;

    /** Properties widget */
    TSharedPtr<class SSnapMapConnectionEdit> PropertyEditor;

    TWeakObjectPtr<AActor> ConnectionInstanceActor;
};
