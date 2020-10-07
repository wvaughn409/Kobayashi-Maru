// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Volume.h"
#include "ProceduralFaunaBlockingVolume.generated.h"

/** An invisible volume used to block Fauna spawners from being spawned. */
UCLASS()
class AProceduralFaunaBlockingVolume : public AVolume
{
	GENERATED_BODY()

public:
	AProceduralFaunaBlockingVolume(const FObjectInitializer& ObjectInitializer);
};
