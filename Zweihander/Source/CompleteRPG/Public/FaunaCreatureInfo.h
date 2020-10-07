// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Object.h"
#include "FoliageType_InstancedStaticMesh.h"
#include "FaunaCreatureInfo.generated.h"

struct FFaunaGridCell;

USTRUCT()
struct FFaunaHabitatFoliageType
{
	GENERATED_USTRUCT_BODY()

	/** Foliage instance blueprint to detect */
	UPROPERTY(EditAnywhere, Category=Habitat)
	TSubclassOf<UFoliageType_InstancedStaticMesh> FoliageType;

	/** Below this density this foliage type cannot support the creature (trees per metre)*/
	UPROPERTY(EditAnywhere, Category=Habitat)
	float MinFoliageDensity;

	/** Foliage type MUST be present for this creature to survive */
	UPROPERTY(EditAnywhere, Category=Habitat)
	bool bRequired;
};

/*
 * 
 */
UCLASS(Blueprintable, Abstract)
class COMPLETERPG_API UFaunaCreatureInfo : public UObject
{
	GENERATED_BODY()
	
public:

	UFaunaCreatureInfo(const FObjectInitializer& ObjectInitialiser);

	virtual bool GenerateSpawnerLocationForCell(UWorld* World, FFaunaGridCell& Cell, FVector& OutSpawnLocation, ULevel*& OutSpawnLevel, float SearchHalfHeight);

#if WITH_EDITORONLY_DATA
	/** Blueprint to spawn for this creature */
	UPROPERTY()
	UBlueprint* CreatureToSpawn_DEPRECATED;
#endif

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=CreatureProperties)
	TSubclassOf<AActor> ClassToSpawn;

	/** Random chance that this creature can spawn at runtime */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=CreatureProperties, meta=(UIMin="0.001", UIMax="1.0"))
	float CreatureSpawnChance;

	/** Radius of the area to spawn the fauna in */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=CreatureProperties, meta=(UIMin="100"))
	float SpawnRadius;

	/** Maximum number of creatures to attempt to spawn on activation */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=CreatureProperties, meta=(UIMin="1"))
	int32 MaxPerSpawn;

	/** Variance on spawn amount */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=CreatureProperties, meta=(UIMin="0"))
	int32 SpawnVariance;
	
	/** Minimum altitude that this creature is found at */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Habitat)
	float MinAltitude;

	/** Maximum altitude that this creature is found at */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Habitat)
	float MaxAltitude;

	/** Max number of instances of this creature that can exist */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=CreatureProperties, meta=(UIMin="1"))
	int32 MaxInstances;

	/** List of foliage data  */
	UPROPERTY(EditAnywhere, Category=Habitat)
	TArray<FFaunaHabitatFoliageType> HabitatFoliage;

	/** Whether or not the creature can spawn in the absence of foliage (it will still
	    prefer foliage if it is available */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Habitat)
	bool bAllowNoFoliage;

	/** Max angle away from horizontal the spawn area should be, system will attempt
	    to move spawn points away from high inclines*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category=Habitat)
	float MaxGroundAngle;

	/** Maximum number of walk iterations to use when trying to resolve a ground
	    angle about MaxGroundAngle
		
		@see MaxGroundAngle
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, Category = Habitat)
	int32 MaxAngleIterations;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, Category = Habitat, meta=(UIMin="0"))
	int32 MaxRuntimeSlopeRetries;

	/** Colour to use when drawing spawners */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Debug)
	FColor CreatureSpawnerDrawColour;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = Debug)
	bool bVisualiseSlopeRejects;

	/** Runtime count of instances for this creature type */
	int32 ActiveInstanceCount;

	virtual void PostLoad() override;

protected:

	/**
	 *  Calculates the IQR for the 2D distance from mean of the transforms provided and gives upper and
	 *  Lower bounds for likely outliers in the set
	 *	@param Distances - Instance distances from mean
	 *	@param LowerBound - lower outlier bound (out)
	 *	@param UpperBound - upper outlier bound (out)
	 */
	void CalculateOutlierBounds(TArray<float> &Distances, float &LowerBound, float &UpperBound);

	/** Alter a provided vector to give a location with a suitable ground normal direction,
	 *	does a lot of tracing, can be expensive - reduce MaxAngleIterations to mitigate.
	 *	@param World World context
	 *	@param Location Location to modify.
	 *	@param HalfHeight Half height to use to trace the world
	 */
	bool GetSuitableInclineLocation(UWorld* World, FVector& Location, float HalfHeight);

};
