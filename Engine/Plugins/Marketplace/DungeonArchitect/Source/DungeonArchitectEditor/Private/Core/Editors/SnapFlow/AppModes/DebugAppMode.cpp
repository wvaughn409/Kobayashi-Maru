//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/AppModes/DebugAppMode.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/SnapMapDungeonConfig.h"
#include "Core/Dungeon.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditor.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorCommands.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorTabFactories.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorTabs.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorToolbar.h"
#include "Core/Editors/SnapFlow/Viewport/SDungeonFlowEditorViewport.h"
#include "Core/Utils/EditorService/IDungeonEditorService.h"
#include "Frameworks/GraphGrammar/Editor/SGrammarRuleGraph.h"
#include "Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraphNode_DebugGrammarNode.h"
#include "Frameworks/GraphGrammar/RuleGraph/Debugging/EdGraph_DebugGrammar.h"
#include "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"
#include "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h"

#include "AdvancedPreviewScene.h"
#include "DrawDebugHelpers.h"
#include "Engine/LevelStreaming.h"
#include "Engine/LevelStreamingDynamic.h"
#include "IDetailsView.h"
#include "Modules/ModuleManager.h"
#include "PreviewScene.h"
#include "PropertyEditorModule.h"
#include "SAdvancedPreviewDetailsTab.h"

////////////////////// FDungeonFlowEditor_DebugAppMode //////////////////////

#define LOCTEXT_NAMESPACE "DungeonFlowEditor_DebugAppMode"

DEFINE_LOG_CATEGORY_STATIC(LogFlowDebugAppMode, Log, All);

FDungeonFlowEditor_DebugAppMode::FDungeonFlowEditor_DebugAppMode(TSharedPtr<class FDungeonFlowEditor> InFlowEditor)
    : FFlowEdAppModeBase(FDungeonFlowEditor::DebugModeID)
      , FlowEditor(InFlowEditor) {
    UDungeonFlow* AssetBeingEdited = InFlowEditor->GetAssetBeingEdited();

    // Initialize the visualization graph editor
    {
        UEdGraph_DebugGrammar* DebugGraph = InFlowEditor->GetDebugGraph();
        DebugGraphEditor.Initialize(DebugGraph, false);

        TSharedPtr<FGrammarRuleGraphHandler> GraphHandler = DebugGraphEditor.GetGraphWidget()->GetGraphHandler();
        if (GraphHandler.IsValid()) {
            GraphHandler->OnNodeDoubleClicked.
                          BindRaw(this, &FDungeonFlowEditor_DebugAppMode::OnResultNodeDoubleClicked);
        }
    }

    // Create the 3D viewport
    Viewport = SNew(SDungeonFlowEditorViewport)
		.DungeonFlowEditor(InFlowEditor)
		.ObjectToEdit(AssetBeingEdited);
    ViewportSceneSettings = SNew(SAdvancedPreviewDetailsTab, Viewport->GetAdvancedPreview().ToSharedRef());

    // Create the visualization actor
    {
        UWorld* World = Viewport->GetAdvancedPreview()->GetWorld();
        VisualizationActor = World->SpawnActor<ASnapMapFlowEditorVisualization>();

        if (VisualizationActor) {
            UEdGraph_DebugGrammar* DebugGraph = InFlowEditor->GetDebugGraph();
            DebugGraph->GetOnVisualizeLoadLevel().BindUObject(VisualizationActor,
                                                              &ASnapMapFlowEditorVisualization::LoadLevel);
            DebugGraph->GetOnVisualizeUnloadLevel().BindUObject(VisualizationActor,
                                                                &ASnapMapFlowEditorVisualization::UnloadLevel);
            DebugGraph->GetOnVisualizeSetConnectionState().BindUObject(VisualizationActor,
                                                                       &ASnapMapFlowEditorVisualization::UpdateConnectionState);
            DebugGraph->GetOnSnapMapDiagVisSetDebugBox().BindUObject(VisualizationActor,
                                                                     &ASnapMapFlowEditorVisualization::SetDebugBox);
        }
    }


    // Create the visualization details property editor widget
    {
        FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>(
            "PropertyEditor");
        const FDetailsViewArgs DetailsViewArgs(false, false, true, FDetailsViewArgs::HideNameArea, true, this);
        TSharedRef<IDetailsView> PropertyEditorRef = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
        PropertyEditor = PropertyEditorRef;
        PropertyEditor->SetObject(InFlowEditor->GetDebugAppModeSettings());
    }

    BindCommands(InFlowEditor->GetToolkitCommands());

    // Register the tab factories
    TabFactories.RegisterFactory(MakeShareable(new FFlowEditorTabFactory_VisualizeDetails(InFlowEditor, PropertyEditor)));
    TabFactories.RegisterFactory(MakeShareable(new FFlowEditorTabFactory_Viewport(InFlowEditor, Viewport)));
    TabFactories.RegisterFactory(MakeShareable(new FFlowEditorTabFactory_ViewportSceneSettings(InFlowEditor, ViewportSceneSettings)));
    TabFactories.RegisterFactory(MakeShareable(new FFlowEditorTabFactory_VisualizeResultGraph(InFlowEditor, DebugGraphEditor.GetGraphWidget())));

    TabLayout = BuildEditorFrameLayout(InFlowEditor);

    InFlowEditor->GetToolbarBuilder()->AddModesToolbar(ToolbarExtender);
    InFlowEditor->GetToolbarBuilder()->AddFlowDebugToolbar(ToolbarExtender);
}

FDungeonFlowEditor_DebugAppMode::~FDungeonFlowEditor_DebugAppMode() {
}

void FDungeonFlowEditor_DebugAppMode::RegisterTabFactories(TSharedPtr<class FTabManager> InTabManager) {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    FlowEditorPtr->RegisterToolbarTab(InTabManager.ToSharedRef());

    FlowEditorPtr->PushTabFactories(TabFactories);

    FApplicationMode::RegisterTabFactories(InTabManager);
}

void FDungeonFlowEditor_DebugAppMode::PreDeactivateMode() {
    FApplicationMode::PreDeactivateMode();

    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

}

void FDungeonFlowEditor_DebugAppMode::PostActivateMode() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();

    FApplicationMode::PostActivateMode();
}

void FDungeonFlowEditor_DebugAppMode::AddReferencedObjects(FReferenceCollector& Collector) {
    Collector.AddReferencedObject(VisualizationActor);
}

void FDungeonFlowEditor_DebugAppMode::OnResultNodeDoubleClicked(UEdGraphNode* InNode) {
    if (UEdGraphNode_DebugGrammarNode* DebugNode = Cast<UEdGraphNode_DebugGrammarNode>(InNode)) {
        if (DebugNode->bModuleAssigned) {
            FBox BoundsToFocus = DebugNode->ModuleInfo.ModuleBounds.TransformBy(DebugNode->WorldTransform);
            Viewport->GetViewportClient()->FocusViewportOnBox(BoundsToFocus);
        }
    }
    else if (UEdGraphNode_DebugGrammarDoorNode* DoorNode = Cast<UEdGraphNode_DebugGrammarDoorNode>(InNode)) {
        if (DoorNode->Outgoing) {
            FBox BoundsToFocus = DoorNode->Outgoing->IncomingDoorBounds;
            Viewport->GetViewportClient()->FocusViewportOnBox(BoundsToFocus);
        }
    }
}

void FDungeonFlowEditor_DebugAppMode::HandleDebugRestart() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
    UEdGraph_DebugGrammar* DebugGraph = FlowEditorPtr->GetDebugGraph();
    if (DebugGraph) {
        DebugGraph->Rewind();
    }
}

void FDungeonFlowEditor_DebugAppMode::HandleDebugStepForward() {
    check(FlowEditor.IsValid());
    TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
    UEdGraph_DebugGrammar* DebugGraph = FlowEditorPtr->GetDebugGraph();
    if (DebugGraph) {
        DebugGraph->ExecuteStep();
    }
}

void FDungeonFlowEditor_DebugAppMode::NotifyPostChange(const FPropertyChangedEvent& PropertyChangedEvent,
                                                       FProperty* PropertyThatChanged) {
    FName PropertyName = PropertyThatChanged ? PropertyThatChanged->GetFName() : NAME_None;

    bool bLayoutSettingsChanged = (PropertyName == GET_MEMBER_NAME_CHECKED(
            UFlowEditorDebugAppModeSettings, SpacingHorizontal))
        || (PropertyName == GET_MEMBER_NAME_CHECKED(UFlowEditorDebugAppModeSettings, SpacingVertical));


    if (bLayoutSettingsChanged && FlowEditor.IsValid()) {
        TSharedPtr<FDungeonFlowEditor> FlowEditorPtr = FlowEditor.Pin();
        UFlowEditorDebugAppModeSettings* Settings = FlowEditorPtr->GetDebugAppModeSettings();

        UEdGraph_DebugGrammar* DebugGraph = FlowEditorPtr->GetDebugGraph();
        DebugGraph->LayoutGraph(Settings->SpacingHorizontal, Settings->SpacingVertical);
        DebugGraph->NotifyGraphChanged();
    }
}

void FDungeonFlowEditor_DebugAppMode::BindCommands(TSharedRef<FUICommandList> ToolkitCommands) {
    const FDungeonFlowEditorCommands& Commands = FDungeonFlowEditorCommands::Get();

    ToolkitCommands->MapAction(
        Commands.DebugRestart,
        FExecuteAction::CreateRaw(this, &FDungeonFlowEditor_DebugAppMode::HandleDebugRestart));

    ToolkitCommands->MapAction(
        Commands.DebugStepForward,
        FExecuteAction::CreateRaw(this, &FDungeonFlowEditor_DebugAppMode::HandleDebugStepForward));
}

TSharedRef<FTabManager::FLayout> FDungeonFlowEditor_DebugAppMode::BuildEditorFrameLayout(
    TSharedPtr<class FDungeonFlowEditor> InFlowEditor) {

    return FTabManager::NewLayout("Standalone_DungeonFlowEditor_DebugLayout_v0.0.8")
        ->AddArea
        (
            FTabManager::NewPrimaryArea()
            ->SetOrientation(Orient_Vertical)
            // Toolbar
            ->Split
            (
                FTabManager::NewStack()
                ->SetSizeCoefficient(0.1f)
                ->SetHideTabWell(true)
                ->AddTab(InFlowEditor->GetToolbarTabId(), ETabState::OpenedTab)
            )
            // Body of the editor
            ->Split
            (
                FTabManager::NewSplitter()
                ->SetOrientation(Orient_Vertical)

                // Upper half of the editor
                ->Split
                (
                    FTabManager::NewStack()
                    ->AddTab(FDungeonFlowEditorTabs::VisualizeResultGraphID, ETabState::OpenedTab)
                    ->SetHideTabWell(true)
                    ->SetSizeCoefficient(1)
                )

                // Lower half of the editor
                ->Split
                (
                    FTabManager::NewSplitter()
                    ->SetOrientation(Orient_Horizontal)
                    ->SetSizeCoefficient(1)
                    ->Split
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.15f)
                        ->AddTab(FDungeonFlowEditorTabs::VisualizeDetailsID, ETabState::OpenedTab)
                        ->AddTab(FDungeonFlowEditorTabs::ViewportSceneSettingsID, ETabState::OpenedTab)
                        ->SetForegroundTab(FDungeonFlowEditorTabs::VisualizeDetailsID)
                    )
                    ->Split
                    (
                        FTabManager::NewStack()
                        ->SetSizeCoefficient(0.85f)
                        ->AddTab(FDungeonFlowEditorTabs::ViewportID, ETabState::OpenedTab)
                        ->SetHideTabWell(true)
                    )
                )
            )
        );
}

/////////////////////// ASnapMapFlowEditorVisualization ///////////////////////

ASnapMapFlowEditorVisualization::ASnapMapFlowEditorVisualization() {
    USceneComponent* SceneRoot = CreateDefaultSubobject<USceneComponent>("SceneRoot");
    RootComponent = SceneRoot;
    bIsEditorOnlyActor = true;
    PrimaryActorTick.bStartWithTickEnabled = true;
    PrimaryActorTick.bCanEverTick = true;
    InstanceIdCounter = 0;
}

void ASnapMapFlowEditorVisualization::LoadLevel(const FGuid& InNodeId, const FSnapMapModuleDatabaseItem& InModuleInfo,
                                                const FTransform& InWorldTransform) {
    UnloadLevel(InNodeId);

    UWorld* World = GetWorld();
    bool bSuccess = false;
    UPackage* LevelPackage = nullptr;
    ULevelStreamingDynamic* LevelStreaming = FLevelStreamLoader::LoadLevelInstanceBySoftObjectPtr(
        World, InModuleInfo.Level, ++InstanceIdCounter,
        InWorldTransform.GetLocation(), FRotator(InWorldTransform.GetRotation()), bSuccess, LevelPackage);

    if (LevelPackage != nullptr) {
        LoadedPackages.Add(InNodeId, LevelPackage);
    }

    if (bSuccess && LevelStreaming) {
        LevelStreaming->bShouldBlockOnLoad = true;
        LevelStreaming->bShouldBlockOnUnload = true;
        LevelStreaming->SetShouldBeLoaded(true);
        LevelStreaming->SetShouldBeVisible(true);
        LoadedLevels.Add(InNodeId, LevelStreaming);
        World->FlushLevelStreaming(EFlushLevelStreamingType::Full);

        ULevel* LoadedLevel = LevelStreaming->GetLoadedLevel();
        if (LoadedLevel) {
            TArray<AActor*> LevelActorList = LoadedLevel->Actors;
            for (AActor* LevelActor : LevelActorList) {
                if (ASnapMapConnectionActor* Connection = Cast<ASnapMapConnectionActor>(LevelActor)) {
                    Connection->ConnectionComponent->ConnectionState = ESnapMapConnectionState::Wall;
                    if (Connection->SpawnedInstance.IsValid()) {
                        Connection->SpawnedInstance->Destroy();
                    }
                    Connection->SpawnedInstance = Connection->BuildConnectionInstance(LoadedLevel);
                }
            }
        }
    }
}

void ASnapMapFlowEditorVisualization::UpdateConnectionState(const FGuid& InNodeId, const FGuid& InConnectionId,
                                                            bool bIsDoor) {
    ULevelStreamingDynamic** SearchResult = LoadedLevels.Find(InNodeId);
    if (SearchResult) {
        ULevelStreamingDynamic* LevelStreaming = *SearchResult;
        if (LevelStreaming) {
            ULevel* LoadedLevel = LevelStreaming->GetLoadedLevel();
            if (LoadedLevel) {
                TArray<AActor*> LevelActorList = LoadedLevel->Actors;
                for (AActor* LevelActor : LevelActorList) {
                    if (ASnapMapConnectionActor* Connection = Cast<ASnapMapConnectionActor>(LevelActor)) {
                        if (Connection->GetConnectionId() == InConnectionId) {
                            Connection->ConnectionComponent->ConnectionState = bIsDoor
                                                                                   ? ESnapMapConnectionState::Door
                                                                                   : ESnapMapConnectionState::Wall;

                            if (Connection->SpawnedInstance.IsValid()) {
                                Connection->SpawnedInstance->Destroy();
                            }
                            Connection->SpawnedInstance = Connection->BuildConnectionInstance(LoadedLevel);
                        }
                    }
                }
            }
        }
    }

    UPackage** PackageSearchResult = LoadedPackages.Find(InNodeId);
    if (PackageSearchResult) {
        UPackage* Package = *PackageSearchResult;
        if (Package) {
            Package->SetDirtyFlag(false);
        }
    }
}

void ASnapMapFlowEditorVisualization::UnloadLevel(const FGuid& InNodeId) {
    UWorld* World = GetWorld();
    ULevelStreamingDynamic** SearchResult = LoadedLevels.Find(InNodeId);
    if (SearchResult) {
        ULevelStreamingDynamic* OldLevelStreaming = *SearchResult;
        if (OldLevelStreaming) {
            OldLevelStreaming->SetIsRequestingUnloadAndRemoval(true);
            OldLevelStreaming->SetShouldBeLoaded(false);
            OldLevelStreaming->SetShouldBeVisible(false);

            World->UpdateLevelStreaming();
            World->FlushLevelStreaming(EFlushLevelStreamingType::Full);
            World->RemoveStreamingLevel(OldLevelStreaming);
        }
        LoadedLevels.Remove(InNodeId);
    }
    UPackage** PackageSearchResult = LoadedPackages.Find(InNodeId);
    if (PackageSearchResult) {
        TSharedPtr<IDungeonEditorService> EditorService = IDungeonEditorService::Get();
        if (EditorService.IsValid()) {
            UPackage* Package = *PackageSearchResult;
            Package->SetDirtyFlag(false);
            if (!EditorService->UnloadPackages({Package})) {
                UE_LOG(LogFlowDebugAppMode, Error, TEXT("Failed to unload streaming level packages"));
            }
        }
        LoadedPackages.Remove(InNodeId);
    }
}

void ASnapMapFlowEditorVisualization::UnloadAllLevels() {
    TArray<ULevelStreaming*> LevelsToRemove;
    for (auto& Entry : LoadedLevels) {
        ULevelStreamingDynamic* LoadedLevel = Entry.Value;
        if (LoadedLevel) {
            LoadedLevel->SetIsRequestingUnloadAndRemoval(true);
        }

        LevelsToRemove.Add(LoadedLevel);
    }

    UWorld* World = GetWorld();
    World->UpdateLevelStreaming();
    World->FlushLevelStreaming(EFlushLevelStreamingType::Full);
    World->RemoveStreamingLevels(LevelsToRemove);

    LoadedLevels.Reset();

    TArray<UPackage*> PackagesToUnload;
    LoadedPackages.GenerateValueArray(PackagesToUnload);
    for (UPackage* Package : PackagesToUnload) {
        Package->SetDirtyFlag(false);
    }
    TSharedPtr<IDungeonEditorService> EditorService = IDungeonEditorService::Get();
    if (EditorService.IsValid()) {
        if (!EditorService->UnloadPackages(PackagesToUnload)) {
            UE_LOG(LogFlowDebugAppMode, Error, TEXT("Failed to unload streaming level packages"));
        }
    }
    LoadedPackages.Reset();

    if (GEngine) {
        GEngine->ForceGarbageCollection(true);
    }
}

void ASnapMapFlowEditorVisualization::SetDebugBox(const FBox& InDebugDrawBounds, const FColor& InColor) {
    DebugDrawBounds = InDebugDrawBounds;
    DebugDrawColor = InColor;
}

void ASnapMapFlowEditorVisualization::Tick(float DeltaSeconds) {
    DebugDraw();
}

void ASnapMapFlowEditorVisualization::DebugDraw() {
    if (DebugDrawBounds.IsValid) {
        DrawDebugBox(GetWorld(), DebugDrawBounds.GetCenter(), DebugDrawBounds.GetExtent(), DebugDrawColor, false, -1, 0,
                     50);
    }
}

#undef  LOCTEXT_NAMESPACE
