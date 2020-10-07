// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "Engine/Level.h"
#include "Engine/LevelBounds.h"
#include "FaunaQueryActor.h"


AFaunaQueryActor::AFaunaQueryActor(const FObjectInitializer& ObjectInitaliser)
	: Super(ObjectInitaliser)
	, QuadTree(FBox2D())
{
	if(ULevel* Level = GetLevel())
	{
		FBox LevelBounds = ALevelBounds::CalculateLevelBounds(Level);

		FVector2D Min2D(LevelBounds.Min);
		FVector2D Max2D(LevelBounds.Max);

		QuadTree = TQuadTree<AFaunaSpawner*, 4>(FBox2D(Min2D, Max2D));
	}
}

void AFaunaQueryActor::InsertSpawner(AFaunaSpawner* Spawner, const FBox2D& Bounds)
{
	QuadTree.Insert(Spawner, Bounds);
}

void AFaunaQueryActor::QueryFaunaSpawners(const FBox2D& Box, TArray<AFaunaSpawner*>& OutSpawners)
{
	QuadTree.GetElements(Box, OutSpawners);
}

AFaunaQueryActor* AFaunaQueryActor::GetFaunaQueryActorForLevel(ULevel* Level, bool bCreateIfNotPresent)
{
	if(!Level)
	{
		return nullptr;
	}

	for(int32 ActorIndex = 0; ActorIndex < Level->Actors.Num(); ++ActorIndex)
	{
		AFaunaQueryActor* QueryActor = Cast<AFaunaQueryActor>(Level->Actors[ActorIndex]);
		if(QueryActor && !QueryActor->IsPendingKill())
		{
			return QueryActor;
		}
	}

	if(bCreateIfNotPresent)
	{
		FActorSpawnParameters SpawnParams;
		SpawnParams.OverrideLevel = Level;

		return Level->GetWorld()->SpawnActor<AFaunaQueryActor>(SpawnParams);
	}

	return nullptr;
}

void AFaunaQueryActor::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
	QuadTree.Serialize(Ar);
}
