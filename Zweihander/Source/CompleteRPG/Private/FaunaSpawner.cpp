// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "FaunaSpawner.h"
#include "FaunaSpawnerComponent.h"
#include "DrawDebugHelpers.h"
#include "ProceduralFaunaActor.h"
#include "ProceduralFaunaComponent.h"

AFaunaSpawner::AFaunaSpawner(const FObjectInitializer& ObjectInitialiser)
	: Super(ObjectInitialiser)
{
	SpawnerComponent = ObjectInitialiser.CreateDefaultSubobject<UFaunaSpawnerComponent>(this, TEXT("FaunaSpawnerComponent"));
	RootComponent = SpawnerComponent;
}

void AFaunaSpawner::PostLoad()
{
	Super::PostLoad();
	AProceduralFaunaActor* FaunaActor = AProceduralFaunaActor::GetFaunaActorInWorld(GetWorld());

	// Register this spawner with the master component
	if(FaunaActor)
	{
		FaunaActor->FaunaComponent->OnLoadSpawner(this);
	}
}

