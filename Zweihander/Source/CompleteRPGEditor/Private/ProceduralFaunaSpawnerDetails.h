// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IDetailCustomization.h"

class FProceduralFaunaComponentDetails : public IDetailCustomization
{
public:
	virtual ~FProceduralFaunaComponentDetails(){};

	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails( IDetailLayoutBuilder& DetailBuilder );

private:
	FReply OnGenerateClicked();

	FText GetInstancesText() const;

	int32 GetOverallMaxInstances() const;

	TArray<TWeakObjectPtr<UObject>> SelectedObjects;
};