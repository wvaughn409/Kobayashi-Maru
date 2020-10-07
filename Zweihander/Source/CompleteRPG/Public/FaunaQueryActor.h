// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "FaunaSpawner.h"
#include "GenericQuadTree.h"
#include "FaunaQueryActor.generated.h"

class ULevel;

/**
 * 
 */
UCLASS()
class COMPLETERPG_API AFaunaQueryActor : public AActor
{
	GENERATED_BODY()
	
public:

	AFaunaQueryActor(const FObjectInitializer& ObjectInitaliser);

	/** Find all spawners that exist within the provided box
	 *	@param Box box to overlap
	 *	@param OutSpawners array to populate with spawners
	 */
	void QueryFaunaSpawners(const FBox2D& Box, TArray<AFaunaSpawner*>& OutSpawners);

	/** Insert a new spawner into the quad tree
	 *	@param Spawner spawner to insert
	 *	@param Bounds bounds of the spawner
	 */
	void InsertSpawner(AFaunaSpawner* Spawner, const FBox2D& Bounds);

	/** UObject Interface */
	virtual void Serialize(FArchive& Ar) override;
	/** End UObject interface */

	/** Gets the allotted query actor for the provided level
	 *	@param Level level to check for the query actor
	 *	@param bCreateIfNotPresent if true we will spawn a query actor in the provided level
	 */
	static AFaunaQueryActor* GetFaunaQueryActorForLevel(ULevel* Level, bool bCreateIfNotPresent);

	/** Quadtree storing spawner instances */
	TQuadTree<AFaunaSpawner*, 4> QuadTree;
};
