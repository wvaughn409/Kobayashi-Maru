// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "FaunaSpawner.generated.h"

class UFaunaSpawnerComponent;

/**
 * 
 */
UCLASS(NotPlaceable)
class COMPLETERPG_API AFaunaSpawner : public AActor
{
	GENERATED_BODY()
	
public:

	AFaunaSpawner(const FObjectInitializer& ObjectInitialiser);

	virtual void PostLoad() override;

	UPROPERTY()
	UFaunaSpawnerComponent* SpawnerComponent;
};
