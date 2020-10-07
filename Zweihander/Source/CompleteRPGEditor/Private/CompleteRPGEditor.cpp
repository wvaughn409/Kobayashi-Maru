// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPGEditor.h"
#include "UnrealEd.h"
#include "PropertyEditorModule.h"

// Customisations
#include "ProceduralFaunaComponent.h"
#include "ProceduralFaunaSpawnerDetails.h"
#include "Private/ProceduralFaunaComponentVisualizer.h"

DEFINE_LOG_CATEGORY(LogGDC);

IMPLEMENT_GAME_MODULE( FCompleteRPGEditorModule, CompleteRPGEditor);

void FCompleteRPGEditorModule::StartupModule()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyModule.RegisterCustomClassLayout(UProceduralFaunaComponent::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FProceduralFaunaComponentDetails::MakeInstance));

	// Component visualisers
	if(GUnrealEd)
	{
		GUnrealEd->RegisterComponentVisualizer(UProceduralFaunaComponent::StaticClass()->GetFName(), MakeShareable(new FProceduralFaunaComponentVisualizer));
	}
}
