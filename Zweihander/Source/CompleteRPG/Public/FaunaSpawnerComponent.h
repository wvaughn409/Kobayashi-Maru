// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Components/SceneComponent.h"
#include "FaunaSpawnerComponent.generated.h"

class UFaunaCreatureInfo;

UENUM()
enum class EFaunaSpawnerState : uint8
{
	Dormant,

	Spawning,

	NotSpawning,

	Populated,
};

/**
 * Component responsible for spawning fauna based upon defined creature info
 */
UCLASS()
class COMPLETERPG_API UFaunaSpawnerComponent : public USceneComponent
{
	GENERATED_BODY()

public:

	/** Spawns fauna as described by CreatureInfo
	 *	@param SpawnLimit Maximum number to spawn, overrides creature settings
	 */
	int32 Spawn(int32 SpawnLimit);

	/** Whether this spawner is able to spawn
	 */
	bool CanSpawn();

	/** Does this spawner have active instances
	 */
	bool IsSpawnerActive();

	/** Deactivates spawning */
	void DeactivateSpawner();

	/** Data describing the fauna to spawn */
	UPROPERTY()
	TSubclassOf<UFaunaCreatureInfo> CreatureInfo;

	/** State to enable spawning - enabled/disabled by random CreatureSpawnChance */
	UPROPERTY(Transient)
	EFaunaSpawnerState State;

	/** Number of instances we want to spawn in total */
	UPROPERTY(Transient)
	int32 TargetInstanceCount;

	/** Currently active instances, filled when we spawn fauna */
	UPROPERTY(Transient)
	TArray<AActor*> ActiveInstances;

};
