// Copyright 2019 Chris Garnier. All Rights Reserved.

#include "AssetsCleaner.h"
#include "AssetsCleanerStyle.h"
#include "AssetsCleanerCommands.h"
#include "LevelEditor.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Text/STextBlock.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "Blutility/Public/EditorUtilitySubsystem.h"
#include "Editor/Blutility/Public/IBlutilityModule.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "UMGEditor/Public/WidgetBlueprint.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectBaseUtility.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"


static const FName AssetsCleanerTabName("AssetsCleaner");

#define LOCTEXT_NAMESPACE "FAssetsCleanerModule"

void FAssetsCleanerModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FAssetsCleanerStyle::Initialize();
	FAssetsCleanerStyle::ReloadTextures();

	FAssetsCleanerCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FAssetsCleanerCommands::Get().OpenPluginWindow,
		FExecuteAction::CreateRaw(this, &FAssetsCleanerModule::PluginButtonClicked),
		FCanExecuteAction());
		
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");
	
	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowGlobalTabSpawners", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FAssetsCleanerModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}
	
}

void FAssetsCleanerModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FAssetsCleanerStyle::Shutdown();

	FAssetsCleanerCommands::Unregister();

	//FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(AssetsCleanerTabName);
}

void FAssetsCleanerModule::PluginButtonClicked()
{
	UObject* WidgetObj = LoadObject<UObject>(nullptr, TEXT("/AssetsCleaner/AssetsCleaner.AssetsCleaner"));
	UEditorUtilityWidgetBlueprint* WidgetBP = (UEditorUtilityWidgetBlueprint*)WidgetObj;
	if (!WidgetObj) {
		UE_LOG(LogTemp, Error, TEXT("Error: Cannot find AssetsCleaner EditorUtilityWidget file in the Assets Cleaner plugin folder. Files in the AssetsCleaner plugin folder should not be modified or moved/deleted. If they were modified, please reinstall the plugin."));	
		return;
	}
	if (!WidgetBP) {
		UE_LOG(LogTemp, Error, TEXT("Error: failed to cast Editor Utility Widget."));
		return;
	}

	UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
	EditorUtilitySubsystem->SpawnAndRegisterTab(WidgetBP);
}

void FAssetsCleanerModule::AddMenuExtension(FMenuBuilder& Builder)
{
	FSlateIcon icon = FSlateIcon(FAssetsCleanerStyle::GetStyleSetName(), "Icons.IconSubMenu", "Icons.IconSubMenu");
	Builder.AddSubMenu(LOCTEXT("AssetTool", "Assets Tools"), LOCTEXT("ToolTip", "Assets Tools collection"), FNewMenuDelegate::CreateRaw(this, &FAssetsCleanerModule::BuildSubMenus), false, icon);
}

void FAssetsCleanerModule::BuildSubMenus(class FMenuBuilder& MenuBuilder) {
	MenuBuilder.AddMenuEntry(FAssetsCleanerCommands::Get().OpenPluginWindow);
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FAssetsCleanerModule, AssetsCleaner)