//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

/**
* Holds the UI commands for the landscape theme editor
*/
class FSnapMapConnectionEditorCommands
    : public TCommands<FSnapMapConnectionEditorCommands> {
public:

    /**
    * Default constructor.
    */
    FSnapMapConnectionEditorCommands();

public:

    // TCommands interface

    void RegisterCommands() override;

public:

    /** Toggles the red channel */
    TSharedPtr<FUICommandInfo> Rebuild;
    TSharedPtr<FUICommandInfo> ModeDoor;
    TSharedPtr<FUICommandInfo> ModeClosed;

};
