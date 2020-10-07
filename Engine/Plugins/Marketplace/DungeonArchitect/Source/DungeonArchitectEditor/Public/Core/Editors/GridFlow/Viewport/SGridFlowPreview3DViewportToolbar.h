//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "SViewportToolBar.h"

/**
* A level viewport toolbar widget that is placed in a viewport
*/
class DUNGEONARCHITECTEDITOR_API SGridFlowPreview3DViewportToolbar : public SViewportToolBar {
public:
SLATE_BEGIN_ARGS(SGridFlowPreview3DViewportToolbar) {
        }

        SLATE_ARGUMENT(TSharedPtr<class SGridFlowPreview3DViewport>, Viewport)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

    TSharedRef<SWidget> GeneratePropertiesMenu() const;
    TSharedRef<SWidget> GenerateCameraMenu() const;
    TSharedPtr<FExtender> GetViewMenuExtender();

private:
    /** The viewport that we are in */
    TWeakPtr<class SGridFlowPreview3DViewport> Viewport;

};


/**
* Class containing commands for level viewport actions
*/
class DUNGEONARCHITECTEDITOR_API FGridFlowEditorViewportCommands : public TCommands<FGridFlowEditorViewportCommands> {
public:

    FGridFlowEditorViewportCommands()
        : TCommands<FGridFlowEditorViewportCommands>
        (
            TEXT("GridFlowEditorContext"), // Context name for fast lookup
            NSLOCTEXT("Contexts", "GridFlowViewport", "Preview 3D"), // Localized context name for displaying
            NAME_None, //TEXT("EditorViewport"), // Parent context name.  
            FEditorStyle::GetStyleSetName() // Icon Style Set
        ) {
    }

    TSharedPtr<FUICommandInfo> ToggleDebugData;
    TSharedPtr<FUICommandInfo> DisplayDungeonProperties;

public:
    /** Registers our commands with the binding system */
    void RegisterCommands() override;

};
