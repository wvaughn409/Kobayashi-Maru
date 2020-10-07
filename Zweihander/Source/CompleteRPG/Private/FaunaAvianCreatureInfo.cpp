// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "FaunaAvianCreatureInfo.h"
#include "ProceduralFaunaComponent.h"

UFaunaAvianCreatureInfo::UFaunaAvianCreatureInfo(const FObjectInitializer& ObjectInitialiser)
	: Super(ObjectInitialiser)
	, MinHeightAboveTerrain(100.0f)
	, MaxHeightAboveTerrain(10000.0f)
	, GroupVerticalVariance(1000.0f)
{
	
}

bool UFaunaAvianCreatureInfo::GenerateSpawnerLocationForCell(UWorld* World, FFaunaGridCell& Cell, FVector& OutSpawnLocation, ULevel*& OutSpawnLevel, float SearchHalfHeight)
{
	FVector Extent(0.0f, 0.0f, SearchHalfHeight);
	FVector RandomLocation(FMath::FRand() * Cell.HalfExtents.X * 2.0f, FMath::FRand() * Cell.HalfExtents.Y * 2.0f, 0.0f);
	RandomLocation = Cell.Centre - Cell.HalfExtents + RandomLocation;

	FHitResult Hit;

	FVector Begin = FVector(RandomLocation.X, RandomLocation.Y, RandomLocation.Z) + Extent;
	FVector End = Begin - 2.0f * Extent;

	if(World->LineTraceSingleByChannel(Hit, Begin, End, ECC_WorldStatic, FCollisionQueryParams(NAME_None, FCollisionQueryParams::GetUnknownStatId(),true)))
	{
		if(UPrimitiveComponent* OtherComp = Hit.GetComponent())
		{
			OutSpawnLocation = Hit.Location;
			OutSpawnLevel = OtherComp->GetComponentLevel();

			float SpawnerHeight = MinHeightAboveTerrain + FMath::FRand() * (MaxHeightAboveTerrain - MinHeightAboveTerrain);
			OutSpawnLocation.Z += SpawnerHeight;

			return true;
		}
	}

	return false;
}
