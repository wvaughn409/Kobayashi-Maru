//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "DungeonArchitectEditorModule.h"

#include "Builders/Grid/Customizations/DAGridSpatialConstraintCustomization.h"
#include "Builders/SimpleCity/Customizations/DASimpleCitySpatialConstraintCustomization.h"
#include "Builders/SnapMap/Asset/Connection/SnapMapConnectionAssetBroker.h"
#include "Builders/SnapMap/Asset/Connection/SnapMapConnectionAssetTypeActions.h"
#include "Builders/SnapMap/Asset/ModuleDatabase/SnapMapModuleDBTypeActions.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/ConnectionEditor/Preview3D/SSnapMapConnectionPreview3DViewportToolbar.h"
#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditorCommands.h"
#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditorCustomization.h"
#include "Core/Assets/GridFlow/GridFlowAssetTypeActions.h"
#include "Core/Assets/SnapFlow/DungeonFlowAssetTypeActions.h"
#include "Core/Assets/Theme/DungeonThemeAssetTypeActions.h"
#include "Core/Common/DungeonArchitectCommands.h"
#include "Core/Common/Utils/DungeonEditorService.h"
#include "Core/Dungeon.h"
#include "Core/Editors/GridFlow/GridFlowEditorCommands.h"
#include "Core/Editors/GridFlow/Viewport/SGridFlowPreview3DViewportToolbar.h"
#include "Core/Editors/LaunchPad/LaunchPad.h"
#include "Core/Editors/LaunchPad/Styles/LaunchPadStyle.h"
#include "Core/Editors/SnapFlow/Viewport/SDungeonFlowEditorViewportToolbar.h"
#include "Core/Editors/ThemeEditor/DungeonArchitectThemeEditor.h"
#include "Core/Editors/ThemeEditor/Widgets/GraphPanelNodeFactory_DungeonProp.h"
#include "Core/Editors/ThemeEditor/Widgets/SDungeonEditorViewportToolbar.h"
#include "Core/LevelEditor/Customizations/DungeonArchitectEditorCustomization.h"
#include "Core/LevelEditor/Customizations/DungeonArchitectGraphNodeCustomization.h"
#include "Core/LevelEditor/Customizations/DungeonArchitectStyle.h"
#include "Core/LevelEditor/EditorMode/DungeonEdMode.h"
#include "Core/LevelEditor/EditorMode/DungeonEdModeHandlerFactory.h"
#include "Core/LevelEditor/Extenders/EditorUIExtender.h"
#include "Core/LevelEditor/HelpSystem/DungeonArchitectHelpSystem.h"
#include "Core/LevelEditor/Placements/DungeonArchitectPlacements.h"
#include "Frameworks/GraphGrammar/ExecutionGraph/EdGraphSchema_FlowExec.h"
#include "Frameworks/GraphGrammar/ExecutionGraph/ExecutionGraphConnectionDrawingPolicy.h"
#include "Frameworks/GraphGrammar/ExecutionGraph/GraphPanelNodeFactory_Execution.h"
#include "Frameworks/GraphGrammar/RuleGraph/EdGraphSchema_Grammar.h"
#include "Frameworks/GraphGrammar/RuleGraph/GrammarGraphConnectionDrawingPolicy.h"
#include "Frameworks/GraphGrammar/RuleGraph/GraphPanelNodeFactory_Grammar.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraphPanelNodeFactory.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecGraphPanelNodeFactory.h"
#include "Frameworks/GridFlow/Tilemap/Graph/TilemapGraphInfrastructure.h"

#include "AssetToolsModule.h"
#include "ComponentAssetBroker.h"
#include "IAssetTools.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"

#define LOCTEXT_NAMESPACE "DungeonArchitectEditorModule"


class FDungeonArchitectEditorModule : public IDungeonArchitectEditorModule {
public:
    /** IModuleInterface implementation */
    void StartupModule() override {
        FDungeonEditorThumbnailPool::Create();

        RegisterCommands();
        InitializeStyles();

        UIExtender.Extend();
        HelpSystem.Initialize();

        // Add a category for the dungeon architect assets
        {
            IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
            DungeonAssetCategoryBit = AssetTools.RegisterAdvancedAssetCategory(
                FName(TEXT("Dungeon Architect")), LOCTEXT("DungeonArchitectAssetCategory", "Dungeon Architect"));
        }

        // Register the details customization
        {
            FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(
                "PropertyEditor");
            PropertyEditorModule.RegisterCustomClassLayout(
                "Dungeon", FOnGetDetailCustomizationInstance::CreateStatic(
                    &FDungeonArchitectEditorCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("DungeonVolume",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FDungeonArchitectVolumeCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("EdGraphNode_DungeonActorBase",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FDungeonArchitectVisualGraphNodeCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("EdGraphNode_ExecRuleNode",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FDAExecRuleNodeCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("DungeonEditorViewportProperties",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FDungeonEditorViewportPropertiesCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("DungeonDebug",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FDungeonDebugCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("SnapMapConnectionInfo",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FSnapMapConnectionMeshInfoCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("SnapMapConnectionActor",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FSnapMapConnectionActorCustomization::MakeInstance));
            PropertyEditorModule.RegisterCustomClassLayout("SnapMapModuleDatabase",
                                                           FOnGetDetailCustomizationInstance::CreateStatic(
                                                               &FSnapModuleDatabaseCustomization::MakeInstance));

            PropertyEditorModule.RegisterCustomPropertyTypeLayout("GridSpatialConstraint3x3Data",
                                                                  FOnGetPropertyTypeCustomizationInstance::CreateStatic(
                                                                      &FDAGridConstraintCustomization3x3::MakeInstance));
            PropertyEditorModule.RegisterCustomPropertyTypeLayout("GridSpatialConstraint2x2Data",
                                                                  FOnGetPropertyTypeCustomizationInstance::CreateStatic(
                                                                      &FDAGridConstraintCustomization2x2::MakeInstance));
            PropertyEditorModule.RegisterCustomPropertyTypeLayout("GridSpatialConstraintEdgeData",
                                                                  FOnGetPropertyTypeCustomizationInstance::CreateStatic(
                                                                      &FDAGridConstraintCustomizationEdge::MakeInstance));

            PropertyEditorModule.RegisterCustomPropertyTypeLayout("SimpleCitySpatialConstraint3x3Data",
                                                                  FOnGetPropertyTypeCustomizationInstance::CreateStatic(
                                                                      &FDASimpleCityConstraintCustomization3x3::MakeInstance));

            PropertyEditorModule.NotifyCustomizationModuleChanged();
        }

        // Register the editor mode handlers for the dungeon builders
        FDungeonEdModeHandlerFactory::Register();

        // Register asset types
        IAssetTools& AssetTools = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
        RegisterAssetTypeAction(AssetTools, MakeShareable(new FDungeonThemeAssetTypeActions));
        RegisterAssetTypeAction(AssetTools, MakeShareable(new FDungeonFlowAssetTypeActions));
        RegisterAssetTypeAction(AssetTools, MakeShareable(new FGridFlowFlowAssetTypeActions));
        RegisterAssetTypeAction(AssetTools, MakeShareable(new FSnapMapConnectionAssetTypeActions));
        RegisterAssetTypeAction(AssetTools, MakeShareable(new FSnapMapModuleDBTypeActions));

        // Register custom graph nodes
        RegisterVisualNodeFactory(MakeShareable(new FGraphPanelNodeFactory_DungeonProp));
        RegisterVisualNodeFactory(MakeShareable(new FGraphPanelNodeFactory_Grammar));
        RegisterVisualNodeFactory(MakeShareable(new FGraphPanelNodeFactory_Execution));
        RegisterVisualNodeFactory(MakeShareable(new FGridFlowExecGraphPanelNodeFactory));
        RegisterVisualNodeFactory(MakeShareable(new FGridFlowAbstractGraphPanelNodeFactory));
        RegisterVisualNodeFactory(MakeShareable(new FGridFlowTilemapGraphPanelNodeFactory));
        //SGraphNode_DungeonPropMesh

        // Register the asset brokers (used for asset to component mapping)
        SnapMapConnectionAssetBroker = MakeShareable(new FSnapMapConnectionAssetBroker);
        FComponentAssetBrokerage::RegisterBroker(SnapMapConnectionAssetBroker,
                                                 USnapMapConnectionComponent::StaticClass(), true, true);

        // Register the dungeon draw editor mode
        FEditorModeRegistry::Get().RegisterMode<FEdModeDungeon>(
            FEdModeDungeon::EM_Dungeon,
            NSLOCTEXT("EditorModes", "DungeonDrawMode", "Draw Dungeon"),
            FSlateIcon(FDungeonArchitectStyle::GetStyleSetName(), "DungeonArchitect.TabIcon",
                       "DungeonArchitect.TabIcon.Small"),
            true, 400
        );


        // Track dungeon actor property change events to handle advanced dungeon details
        DungeonPropertyChangeListener = MakeShareable(new FDungeonPropertyChangeListener);
        DungeonPropertyChangeListener->Initialize();

        UEdGraphSchema_Grammar::GrammarGraphSupport = new FEditorGrammarGraphSupport();
        UEdGraphSchema_FlowExec::ExecGraphSupport = new FEditorFlowExecGraphSupport();

        // Create and editor service, so the runtime module can access it
        IDungeonEditorService::Set(MakeShareable(new FDungeonEditorService));

        DungeonItemPlacements.Initialize();
        ProtoToolsMeshPlacements.Initialize();
        ProtoToolsMaterialPlacements.Initialize();
        FLaunchPadSystem::Register();
    }

    void ShutdownModule() override {
        FLaunchPadSystem::Unregister();
        ProtoToolsMeshPlacements.Release();
        DungeonItemPlacements.Release();
        ProtoToolsMaterialPlacements.Release();
        UIExtender.Release();
        HelpSystem.Release();

        // Unregister all the asset types that we registered
        if (FModuleManager::Get().IsModuleLoaded("AssetTools")) {
            IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
            for (int32 Index = 0; Index < CreatedAssetTypeActions.Num(); ++Index) {
                AssetTools.UnregisterAssetTypeActions(CreatedAssetTypeActions[Index].ToSharedRef());
            }
        }
        CreatedAssetTypeActions.Empty();

        // Unregister all the visual node factories
        for (TSharedPtr<FGraphPanelNodeFactory> VisualNodeFactory : CreatedVisualNodeFactories) {
            FEdGraphUtilities::UnregisterVisualNodeFactory(VisualNodeFactory);
        }
        CreatedVisualNodeFactories.Empty();

        FEditorModeRegistry::Get().UnregisterMode(FEdModeDungeon::EM_Dungeon);

        delete UEdGraphSchema_Grammar::GrammarGraphSupport;
        UEdGraphSchema_Grammar::GrammarGraphSupport = nullptr;


        if (UObjectInitialized()) {
            // Unregister the component brokers
            if (SnapMapConnectionAssetBroker.IsValid()) {
                FComponentAssetBrokerage::UnregisterBroker(SnapMapConnectionAssetBroker);
            }
        }

        UnregisterCommands();
        ShutdownStyles();
    }

    /** Creates a new dungeon editor */
    TSharedRef<IDungeonArchitectThemeEditor> CreateDungeonEditor(UDungeonThemeAsset* DungeonTheme,
                                                                 const EToolkitMode::Type Mode,
                                                                 const TSharedPtr<IToolkitHost>&
                                                                 InitToolkitHost) override {
        TSharedRef<FDungeonArchitectThemeEditor> NewDungeonEditor(new FDungeonArchitectThemeEditor());
        NewDungeonEditor->InitDungeonEditor(Mode, InitToolkitHost, DungeonTheme);
        return NewDungeonEditor;
    }

    EAssetTypeCategories::Type GetDungeonAssetCategoryBit() const override {
        return DungeonAssetCategoryBit;
    }

public:
    TSharedPtr<FDungeonPropertyChangeListener> DungeonPropertyChangeListener;

private:

    void RegisterCommands() {
        FDungeonArchitectCommands::Register();
        FDungeonEditorViewportCommands::Register();
        FDungeonFlowEditorViewportCommands::Register();
        FSnapMapConnectionEditorCommands::Register();
        FSnapMapConnectionEditorViewportCommands::Register();
        FGridFlowEditorCommands::Register();
        FGridFlowEditorViewportCommands::Register();
        FDALevelToolbarCommands::Register();
    }

    void UnregisterCommands() {
        FDungeonArchitectCommands::Unregister();
        FDungeonEditorViewportCommands::Unregister();
        FDungeonFlowEditorViewportCommands::Unregister();
        FSnapMapConnectionEditorCommands::Unregister();
        FSnapMapConnectionEditorViewportCommands::Unregister();
        FGridFlowEditorCommands::Unregister();
        FGridFlowEditorViewportCommands::Unregister();
        FDALevelToolbarCommands::Unregister();
    }

    void InitializeStyles() {
        FDungeonArchitectStyle::Initialize();
        FDALaunchPadStyle::Initialize();
    }

    void ShutdownStyles() {
        FDungeonArchitectStyle::Shutdown();
        FDALaunchPadStyle::Shutdown();
    }

    void RegisterAssetTypeAction(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Action) {
        AssetTools.RegisterAssetTypeActions(Action);
        CreatedAssetTypeActions.Add(Action);
    }

    void RegisterVisualNodeFactory(TSharedRef<FGraphPanelNodeFactory> VisualNodeFactory) {
        FEdGraphUtilities::RegisterVisualNodeFactory(VisualNodeFactory);
        CreatedVisualNodeFactories.Add(VisualNodeFactory);
    }


private:
    /** All created asset type actions.  Cached here so that we can unregister them during shutdown. */
    TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;
    TArray<TSharedPtr<FGraphPanelNodeFactory>> CreatedVisualNodeFactories;

    EAssetTypeCategories::Type DungeonAssetCategoryBit;
    TSharedPtr<IComponentAssetBroker> SnapMapConnectionAssetBroker;

    FDungeonItemsPlacements DungeonItemPlacements;
    FDAProtoToolsMeshPlacements ProtoToolsMeshPlacements;
    FDAProtoToolsMaterialPlacements ProtoToolsMaterialPlacements;
    FEditorUIExtender UIExtender;
    FDungeonArchitectHelpSystem HelpSystem;
};

IMPLEMENT_MODULE(FDungeonArchitectEditorModule, DungeonArchitectEditor)


#undef LOCTEXT_NAMESPACE
