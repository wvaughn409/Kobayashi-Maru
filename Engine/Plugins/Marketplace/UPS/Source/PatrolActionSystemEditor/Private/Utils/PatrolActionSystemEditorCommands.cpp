// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "Utils/PatrolActionSystemEditorCommands.h"

#define LOCTEXT_NAMESPACE "FPatrolActionSystemEditorModule"

void FPatrolActionSystemEditorCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "Patrol Builder", "Open Patrol Builder", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
