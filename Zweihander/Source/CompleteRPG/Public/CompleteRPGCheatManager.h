// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GameFramework/CheatManager.h"
#include "CompleteRPGCheatManager.generated.h"

UCLASS(config=Game, Within=CompleteRPGPC, minimalapi)
class UCompleteRPGCheatManager : public UCheatManager
{
	GENERATED_UCLASS_BODY()

public:

	/** Jump to editor bookmark with the given number. */
	UFUNCTION(exec)
	void BM(int32 BookMarkIndex);

	UFUNCTION(exec)
	void HoverDrone(bool bUseHoverDrone);

	/** For debug use */
	UFUNCTION(exec)
	void FoliageNearMe(float Radius = 1000.f);

	UFUNCTION(exec)
	void PlayAttractCine();

	UFUNCTION(exec)
	void EndAttractCine();

	UFUNCTION(exec)
	void PlayKiteCine();

	UFUNCTION(exec)
	void EndKiteCine();

	UFUNCTION(exec)
	void PlayAttractLoop();

	/** Useful during dev */
	UFUNCTION(exec)
	void DisableAttractLoop();

};

