#pragma once
#include "CoreMinimal.h"
#include "IPatrolActionSystemEditorModule.h"
#include "Runtime/SlateCore/Public/Styling/SlateStyleRegistry.h"

#define LOCTEXT_NAMESPACE "PatrolActionSystemEditor"

class FToolBarBuilder;
class FMenuBuilder;

class FPatrolActionSystemEditorModule : public IPatrolActionSystemEditorModule
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool AllowAutomaticGraphicsSwitching() override;
	virtual bool AllowMultipleGPUs() override;

	/** This function will be bound to Command. */
	void PluginButtonClicked();

	static uint32 GameAssetCategory;

private:
	void Initialize( TSharedPtr<class SWindow> InRootWindow, bool bIsNewProjectWindow );
	void AddGraphicsSwitcher( class FToolBarBuilder& ToolBarBuilder );

	void AddToolbarExtension(FToolBarBuilder& Builder);
	void AddMenuExtension(FMenuBuilder& Builder);

private:
	//void RegisterAssetTypeAction(class IAssetTools& AssetTools, TSharedRef<class IAssetTypeActions> Action);
	TSharedPtr< class FExtender > NotificationBarExtender;
	bool bAllowAutomaticGraphicsSwitching;
	bool bAllowMultiGPUs;
	TSharedPtr<class FUICommandList> PluginCommands;
};

#undef LOCTEXT_NAMESPACE
