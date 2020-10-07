// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "ProceduralFaunaActor.generated.h"

class UProceduralFaunaComponent;

/**
 * 
 */
UCLASS()
class COMPLETERPG_API AProceduralFaunaActor : public AActor
{
	GENERATED_BODY()
	
public:

	AProceduralFaunaActor(const FObjectInitializer& ObjectInitialiser);

	static AProceduralFaunaActor* GetFaunaActorInWorld(UWorld* World);

	UFUNCTION(BlueprintCallable, Category = Fauna)
	void SetEnableSpawning(bool bSpawningEnabled, bool bCullActive);

	UFUNCTION(BlueprintCallable, Category = Fauna)
	void SetSpawnBounds(const FBox& SpawnBounds);

	UFUNCTION(BlueprintCallable, Category = Fauna)
	void SetSpawnBoundsFromVectors(const FVector& Min, const FVector& Max);

	UFUNCTION(BlueprintCallable, Category = FaunaDebug)
	void ToggleDebugDrawGrid();

	UFUNCTION(BlueprintCallable, Category = FaunaDebug)
	void ToggleDebugDrawSpawners();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = DebugVisualisation)
	bool bDrawGrid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = DebugVisualisation)
	bool bDrawSpawners;

	UPROPERTY(Category = Fauna, VisibleAnywhere, BlueprintReadOnly)
	UProceduralFaunaComponent* FaunaComponent;
};
