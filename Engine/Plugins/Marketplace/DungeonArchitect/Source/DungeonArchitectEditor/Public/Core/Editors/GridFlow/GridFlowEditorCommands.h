//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"

class DUNGEONARCHITECTEDITOR_API FGridFlowEditorCommands : public TCommands<FGridFlowEditorCommands> {
public:
    FGridFlowEditorCommands();

    void RegisterCommands() override;

public:
    TSharedPtr<FUICommandInfo> Build;
    TSharedPtr<FUICommandInfo> Performance;
    TSharedPtr<FUICommandInfo> ShowEditorSettings;
    TSharedPtr<FUICommandInfo> ShowPreviewDungeonSettings;


};
