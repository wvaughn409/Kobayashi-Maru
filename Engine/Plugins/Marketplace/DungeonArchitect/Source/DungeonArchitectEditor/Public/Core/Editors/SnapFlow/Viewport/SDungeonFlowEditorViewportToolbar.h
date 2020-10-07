//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "SViewportToolBar.h"

/**
* A level viewport toolbar widget that is placed in a viewport
*/
class DUNGEONARCHITECTEDITOR_API SDungeonFlowEditorViewportToolBar : public SViewportToolBar {
public:
SLATE_BEGIN_ARGS(SDungeonFlowEditorViewportToolBar) {
        }

        SLATE_ARGUMENT(TSharedPtr<class SDungeonFlowEditorViewport>, Viewport)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

    TSharedRef<SWidget> GeneratePropertiesMenu() const;
    TSharedRef<SWidget> GenerateActionsMenu() const;
    TSharedRef<SWidget> GenerateCameraMenu() const;
    TSharedPtr<FExtender> GetViewMenuExtender();

private:
    /** The viewport that we are in */
    TWeakPtr<class SDungeonFlowEditorViewport> Viewport;

};


/**
* Class containing commands for level viewport actions
*/
class DUNGEONARCHITECTEDITOR_API
    FDungeonFlowEditorViewportCommands : public TCommands<FDungeonFlowEditorViewportCommands> {
public:

    FDungeonFlowEditorViewportCommands()
        : TCommands<FDungeonFlowEditorViewportCommands>
        (
            TEXT("DungeonFlowEditorViewport"), // Context name for fast lookup
            NSLOCTEXT("Contexts", "DungeonFlowViewport", "Dungeon Flow Viewport"),
            // Localized context name for displaying
            NAME_None, //TEXT("EditorViewport"), // Parent context name.  
            FEditorStyle::GetStyleSetName() // Icon Style Set
        ) {
    }

    //TSharedPtr< FUICommandInfo > ShowPropertyDungeon;

public:
    /** Registers our commands with the binding system */
    void RegisterCommands() override;

};
