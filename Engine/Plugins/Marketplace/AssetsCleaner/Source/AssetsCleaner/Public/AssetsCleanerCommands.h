// Copyright 2019 Chris Garnier. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "AssetsCleanerStyle.h"

class FAssetsCleanerCommands : public TCommands<FAssetsCleanerCommands>
{
public:

	FAssetsCleanerCommands()
		: TCommands<FAssetsCleanerCommands>(TEXT("AssetsCleaner"), NSLOCTEXT("Contexts", "AssetsCleaner", "AssetsCleaner Plugin"), NAME_None, FAssetsCleanerStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > OpenPluginWindow;
};