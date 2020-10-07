// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "PatrolActionSystemEditorStyle.h"

class FPatrolActionSystemEditorCommands : public TCommands<FPatrolActionSystemEditorCommands>
{
public:

	FPatrolActionSystemEditorCommands()
		: TCommands<FPatrolActionSystemEditorCommands>(TEXT("PatrolActionSystemEditor"), NSLOCTEXT("Contexts", "PatrolActionSystemEditor", "PatrolActionSystemEditor Plugin"), NAME_None, FPatrolActionSystemEditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
