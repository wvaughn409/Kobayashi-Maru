// Copyright 2019 Chris Garnier. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FAssetsCleanerModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command (by default it will bring up plugin window) */
	void PluginButtonClicked();
	
private:

	void AddMenuExtension(FMenuBuilder& Builder);

	void BuildSubMenus(class FMenuBuilder& MenuBuilder);


private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
