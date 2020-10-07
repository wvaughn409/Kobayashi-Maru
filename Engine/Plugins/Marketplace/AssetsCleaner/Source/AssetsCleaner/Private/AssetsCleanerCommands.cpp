// Copyright 2019 Chris Garnier. All Rights Reserved.

#include "AssetsCleanerCommands.h"

#define LOCTEXT_NAMESPACE "FAssetsCleanerModule"

void FAssetsCleanerCommands::RegisterCommands()
{
	UI_COMMAND(OpenPluginWindow, "Assets Cleaner", "Open the Assets Cleaner tool. Use this to find unused assets in a project and easily manage them.", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
