// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Object.h"
#include "FaunaCreatureInfo.h"
#include "FaunaAvianCreatureInfo.generated.h"

/*
 * 
 */
UCLASS(Blueprintable, Abstract)
class COMPLETERPG_API UFaunaAvianCreatureInfo : public UFaunaCreatureInfo
{
	GENERATED_BODY()
	
public:

	UFaunaAvianCreatureInfo(const FObjectInitializer& ObjectInitialiser);

	virtual bool GenerateSpawnerLocationForCell(UWorld* World, FFaunaGridCell& Cell, FVector& OutSpawnLocation, ULevel*& OutSpawnLevel, float SearchHalfHeight);

	/** Min height that the creature should spawn above the terrain below, respects the creature's min altitude
	    specified elsewhere, so if the chosen height above the terrain is lower than the allowed altitude
		it will be increased up to but not exceeding MaxHeightAboveTerrain */
	UPROPERTY(EditAnywhere, Category=AvianProperties)
	float MinHeightAboveTerrain;

	/** Max height that the creature should spawn above the terrain below, respects the creature's max altitude
	    specified elsewhere, so if the chosen height above the terrain is greater than the allowed altitude
		it will be lowered down to but not below MinHeightAboveTerrain */
	UPROPERTY(EditAnywhere, Category = AvianProperties)
	float MaxHeightAboveTerrain;

	/** Variance in heights for avian creatures spawned as a group */
	UPROPERTY(EditAnywhere, Category = AvianProperties)
	float GroupVerticalVariance;
};
