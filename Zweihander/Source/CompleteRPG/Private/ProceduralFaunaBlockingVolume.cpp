// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "Components/BrushComponent.h"
#include "ProceduralFaunaBlockingVolume.h"

AProceduralFaunaBlockingVolume::AProceduralFaunaBlockingVolume(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	if (UBrushComponent* MyBrushComponent = GetBrushComponent())
	{
		MyBrushComponent->SetCollisionObjectType(ECC_WorldStatic);
		MyBrushComponent->SetCollisionResponseToAllChannels(ECR_Ignore);
	}
}
