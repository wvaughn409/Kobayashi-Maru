#include "PatrolActionSystemEditor.h"
#include "IPatrolActionSystemEditorModule.h"
#include "Runtime/Core/Public/Features/IModularFeatures.h"
#include "Runtime/SlateCore/Public/Rendering/SlateRenderer.h"
#include "Editor/MainFrame/Public/Interfaces/IMainFrameModule.h"
#include "ISettingsModule.h"
#include "LevelEditor.h"
#include "Modules/ModuleManager.h"

#include "Utils/PatrolActionSystemEditorStyle.h"
#include "Utils/PatrolActionSystemEditorCommands.h"
#include "Misc/MessageDialog.h"
#include "Framework/MultiBox/MultiBoxBuilder.h"
#include "EditorUtilitySubsystem.h"
#include "Utils/UPSSettings.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "UObject/SoftObjectPtr.h"
#include "Blueprint/UserWidget.h"
#include "EditorUtilityWidget.h"

#define LOCTEXT_NAMESPACE "PatrolActionSystemEditor"

static const FName PatrolActionSystemEditorTabName("Open Patrol Builder");

uint32 FPatrolActionSystemEditorModule::GameAssetCategory;

IMPLEMENT_MODULE(FPatrolActionSystemEditorModule, PatrolActionSystemEditor)

void FPatrolActionSystemEditorModule::StartupModule()
{

	FPatrolActionSystemEditorStyle::Initialize();
	FPatrolActionSystemEditorStyle::ReloadTextures();

	FPatrolActionSystemEditorCommands::Register();

	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FPatrolActionSystemEditorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FPatrolActionSystemEditorModule::PluginButtonClicked),
		FCanExecuteAction());

	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	{
		TSharedPtr<FExtender> MenuExtender = MakeShareable(new FExtender());
		MenuExtender->AddMenuExtension("WindowLayout", EExtensionHook::After, PluginCommands, FMenuExtensionDelegate::CreateRaw(this, &FPatrolActionSystemEditorModule::AddMenuExtension));

		LevelEditorModule.GetMenuExtensibilityManager()->AddExtender(MenuExtender);
	}

	{
		TSharedPtr<FExtender> ToolbarExtender = MakeShareable(new FExtender);
		ToolbarExtender->AddToolBarExtension("Settings", EExtensionHook::After, PluginCommands, FToolBarExtensionDelegate::CreateRaw(this, &FPatrolActionSystemEditorModule::AddToolbarExtension));

		LevelEditorModule.GetToolBarExtensibilityManager()->AddExtender(ToolbarExtender);
	}
}

void FPatrolActionSystemEditorModule::Initialize( TSharedPtr<SWindow> InRootWindow, bool bIsNewProjectWindow )
{

}

void FPatrolActionSystemEditorModule::AddGraphicsSwitcher( FToolBarBuilder& ToolBarBuilder )
{

}

void FPatrolActionSystemEditorModule::ShutdownModule()
{
	FPatrolActionSystemEditorStyle::Shutdown();

	FPatrolActionSystemEditorCommands::Unregister();
}

void FPatrolActionSystemEditorModule::PluginButtonClicked()
{
	const FString BlueprintRef = "EditorUtilityWidgetBlueprint'/UPS/UtilityWidgets/UWBP_PatrolPathCreator.UWBP_PatrolPathCreator'";
	FSoftObjectPath BlueprintPath = FSoftObjectPath(BlueprintRef);
	UWidgetBlueprint* Blueprint = Cast<UWidgetBlueprint>(BlueprintPath.TryLoad());

	if (!Blueprint || Blueprint->IsPendingKillOrUnreachable())
	{
		return;
	}

	if (!Blueprint->GeneratedClass->IsChildOf(UEditorUtilityWidget::StaticClass()))
	{
		return;
	}

	//Because UEditorUtilityWidgetBlueprint don't have export module name
	if (UEditorUtilityWidgetBlueprint* EditorWidget = static_cast <UEditorUtilityWidgetBlueprint*> (Blueprint))
	{
		UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
		EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);
	}
}

void FPatrolActionSystemEditorModule::AddMenuExtension(FMenuBuilder& Builder)
{
	Builder.AddMenuEntry(FPatrolActionSystemEditorCommands::Get().PluginAction);
}

void FPatrolActionSystemEditorModule::AddToolbarExtension(FToolBarBuilder& Builder)
{
	Builder.AddToolBarButton(FPatrolActionSystemEditorCommands::Get().PluginAction);
}

bool FPatrolActionSystemEditorModule::AllowAutomaticGraphicsSwitching()
{
	return bAllowAutomaticGraphicsSwitching;
}

bool FPatrolActionSystemEditorModule::AllowMultipleGPUs()
{
	return bAllowMultiGPUs;
}

//void FPatrolActionSystemEditorModule::RegisterAssetTypeAction(class IAssetTools& AssetTools, TSharedRef<class IAssetTypeActions> Action)
//{
//	AssetTools.RegisterAssetTypeActions(Action);
//}

#undef LOCTEXT_NAMESPACE
