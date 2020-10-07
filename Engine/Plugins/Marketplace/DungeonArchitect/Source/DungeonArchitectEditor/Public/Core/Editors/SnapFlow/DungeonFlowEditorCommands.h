//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"

class DUNGEONARCHITECTEDITOR_API FDungeonFlowEditorCommands : public TCommands<FDungeonFlowEditorCommands> {
public:
    FDungeonFlowEditorCommands();

    void RegisterCommands() override;

public:
    TSharedPtr<FUICommandInfo> BuildGraph;
    TSharedPtr<FUICommandInfo> ValidateGrammarGraph;
    TSharedPtr<FUICommandInfo> Performance;
    TSharedPtr<FUICommandInfo> Settings;
    
    TSharedPtr<FUICommandInfo> DebugStepForward;
    TSharedPtr<FUICommandInfo> DebugRestart;
};
