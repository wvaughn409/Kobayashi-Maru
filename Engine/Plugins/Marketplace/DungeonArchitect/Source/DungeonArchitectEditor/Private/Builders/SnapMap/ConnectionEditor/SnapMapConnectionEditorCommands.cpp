//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditorCommands.h"


#define LOCTEXT_NAMESPACE "FSnapMapConnectionEditorCommands"

FSnapMapConnectionEditorCommands::FSnapMapConnectionEditorCommands()
    : TCommands<FSnapMapConnectionEditorCommands>("SnapMapConnectionEditor",
                                                  NSLOCTEXT("Contexts", "SnapMapConnectionEditor",
                                                            "SnapMap Door Editor"), NAME_None,
                                                  FEditorStyle::GetStyleSetName()) {
}

void FSnapMapConnectionEditorCommands::RegisterCommands() {
    UI_COMMAND(Rebuild, "Rebuild", "Rebuilds the door", EUserInterfaceActionType::Button, FInputChord());
    UI_COMMAND(ModeDoor, "Door Mesh", "Door Mesh", EUserInterfaceActionType::ToggleButton, FInputChord());
    UI_COMMAND(ModeClosed, "Wall Mesh", "Mesh to block off the wall if no door is preset",
               EUserInterfaceActionType::ToggleButton, FInputChord());
}

#undef LOCTEXT_NAMESPACE
