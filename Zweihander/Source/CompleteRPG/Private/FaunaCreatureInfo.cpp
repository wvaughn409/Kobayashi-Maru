// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "FaunaCreatureInfo.h"

#include "ProceduralFaunaComponent.h"
#include "FoliageStatistics.h"
#include "FoliageType_InstancedStaticMesh.h"
#include "ProceduralFaunaBlockingVolume.h"
#include "FaunaSpawner.h"
#include "FaunaSpawnerComponent.h"
#include "FaunaQueryActor.h"
#include "Engine/Blueprint.h"

UFaunaCreatureInfo::UFaunaCreatureInfo(const FObjectInitializer& ObjectInitialiser)
	: Super(ObjectInitialiser)
#if WITH_EDITORONLY_DATA
	, CreatureToSpawn_DEPRECATED(nullptr)
#endif
	, ClassToSpawn(nullptr)
	, CreatureSpawnChance(1.0f)
	, SpawnRadius(1000.0f)
	, MaxPerSpawn(16)
	, SpawnVariance(0)
	, MinAltitude(0.0f)
	, MaxAltitude(300000.0f)
	, MaxInstances(10)
	, bAllowNoFoliage(false)
	, MaxGroundAngle(90.0f)
	, MaxAngleIterations(10)
	, MaxRuntimeSlopeRetries(1)
	, CreatureSpawnerDrawColour(FColor::Green)
	, bVisualiseSlopeRejects(false)
	, ActiveInstanceCount(0)
{
	
}

bool UFaunaCreatureInfo::GenerateSpawnerLocationForCell(UWorld* World, FFaunaGridCell& Cell, FVector& OutSpawnLocation, ULevel*& OutSpawnLevel, float SearchHalfHeight)
{
	FVector Extent(0, 0, SearchHalfHeight);
	// Evaluate the cell for possible spawn points
	const FVector CellMin = Cell.Centre - Cell.HalfExtents - Extent;
	const FVector CellMax = Cell.Centre + Cell.HalfExtents + Extent;
	const FBox CellBox(CellMin, CellMax);
	const FVector AcrossCell2D = (Cell.Centre + Cell.HalfExtents) - (Cell.Centre - Cell.HalfExtents);
	const float Cell2DAreaKM = (AcrossCell2D.X / 1000.0f) * (AcrossCell2D.Y / 1000.0f);

	// Not worth detecting outliers in small sets
	const static int32 OutlierDetectionThreshold = 10;
	TArray<FTransform> FoliageTransforms;
	float MaxDensity = 0.0f;
	bool bFoliageRequired = false;
	bool bLocationSuitable = false;
	FVector SpawnLocation2D(0);

	for(FFaunaHabitatFoliageType& FoliageType : HabitatFoliage)
	{
		if(FoliageType.FoliageType == nullptr)
		{
			continue;
		}

		bFoliageRequired |= FoliageType.bRequired;

		UFoliageType_InstancedStaticMesh* FoliageObject = FoliageType.FoliageType->GetDefaultObject<UFoliageType_InstancedStaticMesh>();
		UFoliageStatistics::FoliageOverlappingBoxTransforms(World, FoliageObject->Mesh, CellBox, FoliageTransforms);

		if(FoliageTransforms.Num() > 0)
		{
			float FoliagePerKM = FoliageTransforms.Num() / Cell2DAreaKM;

			// Check the foliage is dense enough
			if(FoliagePerKM >= FoliageType.MinFoliageDensity)
			{
				// If we find the current densest suitable foliage type then find the
				// average location where we can put the spawn volume.
				if(FoliagePerKM > MaxDensity)
				{
					MaxDensity = FoliagePerKM;

					if(FoliageTransforms.Num() > OutlierDetectionThreshold)
					{
						// If we have enough samples, remove probable outliers

						float LowerBound = 0.0f;
						float UpperBound = 0.0f;

						FVector LocationMean(0, 0, 0);
						for(FTransform& T : FoliageTransforms)
						{
							FVector Location3D = T.GetLocation();
							LocationMean += Location3D;
						}
						LocationMean /= FoliageTransforms.Num();

						// Sort transforms based on distance from mean location
						FoliageTransforms.Sort([LocationMean](const FTransform& A, const FTransform& B)
						{
							float Dist2A = (A.GetLocation() - LocationMean).SizeSquared2D();
							float Dist2B = (B.GetLocation() - LocationMean).SizeSquared2D();

							return Dist2A < Dist2B;
						});

						TArray<float> Distances;
						for(FTransform& T : FoliageTransforms)
						{
							Distances.Add((T.GetLocation() - LocationMean).Size2D());
						}

						CalculateOutlierBounds(Distances, LowerBound, UpperBound);

						// Remove transforms outside the bounds
						for(int32 Idx = Distances.Num() - 1 ; Idx >= 0 ; --Idx)
						{
							float& Dist = Distances[Idx];
							if(Dist < LowerBound || Dist > UpperBound)
							{
								FoliageTransforms.RemoveAt(Idx);
							}
						}
					}

					// Calculate average spawn point
					for(FTransform& T : FoliageTransforms)
					{
						SpawnLocation2D += T.GetLocation();
					}
					SpawnLocation2D /= FoliageTransforms.Num();
				}

				// This foliage type is suitable for this creature
				bLocationSuitable = true;
			}
		}

		if(!bLocationSuitable && FoliageType.bRequired)
		{
			// Required foliage type not suitable - bail
			break;
		}
	}

	if(!bLocationSuitable && !bFoliageRequired && bAllowNoFoliage)
	{
		// Don't actually need foliage, just pick somewhere
		FVector RandomLocation(FMath::FRand() * Cell.HalfExtents.X * 2.0f, FMath::FRand() * Cell.HalfExtents.Y * 2.0f, 0.0f);
		SpawnLocation2D = Cell.Centre - Cell.HalfExtents + RandomLocation;
		
		if(GetSuitableInclineLocation(World, SpawnLocation2D, SearchHalfHeight))
		{
			bLocationSuitable = true;
		}
	}

	// If this area is suitable, add a spawn point.
	if(bLocationSuitable)
	{
		FHitResult Hit;

		FVector Begin = FVector(SpawnLocation2D.X, SpawnLocation2D.Y, SpawnLocation2D.Z) + Extent;
		FVector End = Begin - 2.0f * Extent;

		if(World->LineTraceSingleByChannel(Hit, Begin, End, ECC_WorldStatic, FCollisionQueryParams(NAME_None, FCollisionQueryParams::GetUnknownStatId(), true)))
		{
			if(UPrimitiveComponent* OtherComp = Hit.GetComponent())
			{
				// Check altitude is suitable
				const float HitAltitude = Hit.Location.Z;
				if(HitAltitude >= MinAltitude && HitAltitude <= MaxAltitude)
				{
					OutSpawnLocation = Hit.Location;
					OutSpawnLevel = OtherComp->GetComponentLevel();

					return true;
				}
			}
		}
	}

	return false;
}

void UFaunaCreatureInfo::CalculateOutlierBounds(TArray<float> &Distances, float &LowerBound, float &UpperBound)
{
	// Get IQR for distances
	int32 Num = Distances.Num();
	int32 MedianIdx = Num / 2;
	float Q1Value = 0.0f;
	float Q3Value = 0.0f;

	if(Num % 2 == 0)
	{
		// Even
		int32 Q1Idx = MedianIdx / 2;
		int32 Q3Idx = MedianIdx + Q1Idx;

		Q1Value = (Distances[Q1Idx] + Distances[Q1Idx - 1]) / 2.0f;
		Q3Value = (Distances[Q3Idx] + Distances[Q3Idx - 1]) / 2.0f;
	}
	else
	{
		// Odd
		int32 Q1Idx = MedianIdx / 2;
		int32 Q3Idx = Num - Q1Idx;
		if(MedianIdx % 2 == 0)
		{
			Q1Value = (Distances[Q1Idx] + Distances[Q1Idx - 1]) / 2.0f;
			Q3Value = (Distances[Q3Idx] + Distances[Q3Idx - 1]) / 2.0f;
		}
		else
		{
			--Q3Idx;
			Q1Value = Distances[Q1Idx];
			Q3Value = Distances[Q3Idx];
		}
	}
	const float IQR = Q3Value - Q1Value;
	const float IQRLimit = IQR * 1.5f;
	LowerBound = Q1Value - IQRLimit;
	UpperBound = Q3Value + IQRLimit;
}

bool UFaunaCreatureInfo::GetSuitableInclineLocation(UWorld* World, FVector& Location, float HalfHeight)
{
	bool bLocationSuitable = false;

	int32 Iterations = 0;
	FHitResult Hit;
	FVector Extent(0, 0, HalfHeight);
	FVector LocationCopy(Location);
	FVector FirstHitLoc;
	FVector LastHit;

	while(World->LineTraceSingleByChannel(Hit, LocationCopy + Extent, LocationCopy - Extent, ECC_WorldStatic, FCollisionQueryParams(NAME_None, FCollisionQueryParams::GetUnknownStatId(), true))
		  && !bLocationSuitable
		  && Iterations < MaxAngleIterations)
	{
		if(Iterations == 0)
		{
			FirstHitLoc = Hit.Location;
			LastHit = Hit.Location;
		}
		else
		{
			LastHit = Hit.Location;
		}

		FVector Normal = Hit.Normal;
		float TheDot = FVector::DotProduct(Normal, FVector(0, 0, 1));
		float Angle = FMath::Abs(FMath::Acos(TheDot));

		if(Angle <= FMath::DegreesToRadians(MaxGroundAngle))
		{
			bLocationSuitable = true;
			Location = LocationCopy;
			break;
		}
		else
		{
			// Too steep
			Normal.Y = 0;
			Normal.Normalize();
			LocationCopy += Normal * SpawnRadius * 2.0f;
		}

		++Iterations;
	}

	return bLocationSuitable;
}

void UFaunaCreatureInfo::PostLoad()
{
	Super::PostLoad();
#if WITH_EDITOR	
	if(CreatureToSpawn_DEPRECATED)
	{
		ClassToSpawn = *CreatureToSpawn_DEPRECATED->GeneratedClass;
	}
#endif
}
