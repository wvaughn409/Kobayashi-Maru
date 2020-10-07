// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPGEditor.h"
#include "UnrealEd.h"
#include "PropertyEditing.h"
#include "ProceduralFaunaSpawnerDetails.h"
#include "ProceduralFaunaComponent.h"
#include "FaunaCreatureInfo.h"

#define LOCTEXT_NAMESPACE "ProceduralFauna"

TSharedRef<IDetailCustomization> FProceduralFaunaComponentDetails::MakeInstance()
{
	return MakeShareable(new FProceduralFaunaComponentDetails());
}

void FProceduralFaunaComponentDetails::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	DetailBuilder.GetObjectsBeingCustomized(SelectedObjects);

	IDetailCategoryBuilder& SettingsCategory = DetailBuilder.EditCategory(TEXT("FaunaSettings"));

	FDetailWidgetRow& GenerateRow = SettingsCategory.AddCustomRow(LOCTEXT("GenerateButtonRow", "Generate"));
	GenerateRow.ValueContent()
	[
		SNew(SButton)
		.OnClicked(this, &FProceduralFaunaComponentDetails::OnGenerateClicked)
		[
			SNew(STextBlock)
			.Font(IDetailLayoutBuilder::GetDetailFont())
			.Text(LOCTEXT("GenerateButtonText", "Generate"))
		]
	];

	FDetailWidgetRow& InstanceRow = SettingsCategory.AddCustomRow(LOCTEXT("InstancesRow", "Instances"));
	InstanceRow.NameContent()
	[
		SNew(STextBlock)
		.Font(IDetailLayoutBuilder::GetDetailFont())
		.Text(LOCTEXT("InstanceNameContent", "Overall Max Instances"))
	];

	InstanceRow.ValueContent()
	[
		SNew(STextBlock)
		.Font(IDetailLayoutBuilder::GetDetailFont())
		.Text(this, &FProceduralFaunaComponentDetails::GetInstancesText)
	];
}

FReply FProceduralFaunaComponentDetails::OnGenerateClicked()
{
	if(SelectedObjects.Num() == 0)
	{
		return FReply::Unhandled();
	}

	UObject* Object = SelectedObjects[0].Get();
	if(UProceduralFaunaComponent* Component = Cast<UProceduralFaunaComponent>(Object))
	{
		Component->DestroySpawnedActors();
		Component->CreateGrid();
		Component->GenerateSpawnSites();

		return FReply::Handled();
	}

	return FReply::Unhandled();
}

FText FProceduralFaunaComponentDetails::GetInstancesText() const
{
	FFormatOrderedArguments Args;
	Args.Add(FFormatArgumentValue(GetOverallMaxInstances()));
	return FText::Format(LOCTEXT("InstanceText", "{0}"), Args);
}

int32 FProceduralFaunaComponentDetails::GetOverallMaxInstances() const
{
	if(SelectedObjects.Num() == 0)
	{
		return 0;
	}

	int32 NumInstances = 0;

	UObject* Object = SelectedObjects[0].Get();
	if(UProceduralFaunaComponent* Component = Cast<UProceduralFaunaComponent>(Object))
	{

		for(UClass* Class : Component->Creatures)
		{
			if(Class)
			{
				if(UFaunaCreatureInfo* Default = Cast<UFaunaCreatureInfo>(Class->GetDefaultObject()))
				{
					NumInstances += Default->MaxInstances;
				}
			}
		}
	}
	return NumInstances;
}

#undef LOCTEXT_NAMESPACE
