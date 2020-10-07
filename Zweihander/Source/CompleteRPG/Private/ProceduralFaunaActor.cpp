// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "ProceduralFaunaActor.h"
#include "ProceduralFaunaComponent.h"
#include "EngineUtils.h"

//////////////////////////////////////////////////////////////////////////

AProceduralFaunaActor::AProceduralFaunaActor(const FObjectInitializer& ObjectInitialiser)
: Super(ObjectInitialiser)
{
	FaunaComponent = ObjectInitialiser.CreateDefaultSubobject<UProceduralFaunaComponent>(this, TEXT("ProceduralFaunaComponent"));
	RootComponent = FaunaComponent;

	PrimaryActorTick.bCanEverTick = true;
}

AProceduralFaunaActor* AProceduralFaunaActor::GetFaunaActorInWorld(UWorld* World)
{
	for(TActorIterator<AProceduralFaunaActor> It(World) ; It ; ++It)
	{
		if(AProceduralFaunaActor* Actor = *It)
		{
			return Actor;
		}
	}
	return nullptr;
}

void AProceduralFaunaActor::SetEnableSpawning(bool bSpawningEnabled, bool bCullActive)
{
	FaunaComponent->bEnableSpawning = bSpawningEnabled;
	
	if(bCullActive)
	{
		FaunaComponent->DestroyActiveInstances();
	}
}

void AProceduralFaunaActor::SetSpawnBounds(const FBox& SpawnBounds)
{
	FaunaComponent->SpawnBounds = SpawnBounds;
}

void AProceduralFaunaActor::SetSpawnBoundsFromVectors(const FVector& Min, const FVector& Max)
{
	FaunaComponent->SpawnBounds = FBox(Min, Max);
}

void AProceduralFaunaActor::ToggleDebugDrawGrid()
{
	bDrawGrid = !bDrawGrid;
}

void AProceduralFaunaActor::ToggleDebugDrawSpawners()
{
	bDrawSpawners = !bDrawSpawners;
}

