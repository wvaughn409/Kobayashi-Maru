// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "FaunaSpawnerComponent.h"
#include "FaunaCreatureInfo.h"
#include "Engine/Blueprint.h"
#include "FlockManager.h"
#include "EngineUtils.h"
#include "FaunaAvianCreatureInfo.h"
#include "DrawDebugHelpers.h"

namespace FaunaSpawnerComponentConstants
{
	const int32 MaxCreaturesSpawnedPerTick = 2;
	const float SpawnTraceExtent = 1000.0f;
}

int32 UFaunaSpawnerComponent::Spawn(int32 SpawnLimit)
{
	int32 NumSpawned = 0;

	if(UWorld* World = GetWorld())
	{
		UFaunaCreatureInfo* CreatureObj = CreatureInfo->GetDefaultObject<UFaunaCreatureInfo>();

		if(State == EFaunaSpawnerState::Dormant)
		{
			// Check spawn chance
			State = (FMath::FRand() <= CreatureObj->CreatureSpawnChance) ? EFaunaSpawnerState::Spawning : EFaunaSpawnerState::NotSpawning;

			if(State == EFaunaSpawnerState::Spawning)
			{
				// set initial target instances
				TargetInstanceCount = CreatureObj->MaxPerSpawn - FMath::RoundToInt(CreatureObj->SpawnVariance * FMath::FRand());
				TargetInstanceCount = FMath::Min(SpawnLimit, TargetInstanceCount);
			}
		}

		if(State == EFaunaSpawnerState::Spawning)
		{
			int32 NumToSpawn = FMath::Min(TargetInstanceCount - ActiveInstances.Num(), FaunaSpawnerComponentConstants::MaxCreaturesSpawnedPerTick);
			int32 BaseInstanceIndex = ActiveInstances.Num();

			for(int32 Idx = 0 ; Idx < NumToSpawn ; ++Idx)
			{
				UFaunaAvianCreatureInfo* AvianInfo = Cast<UFaunaAvianCreatureInfo>(CreatureObj);
				if(AvianInfo)
				{
					float Angle = FMath::FRand() * PI * 2.0f;
					float Radius = FMath::FRand() * CreatureObj->SpawnRadius;
					FVector Location(FMath::Sin(Angle), FMath::Cos(Angle), 0.0f);
					Location *= Radius;
					Location += GetComponentLocation();

					Location.Z += FMath::FRand() * AvianInfo->GroupVerticalVariance;

					FActorSpawnParameters SpawnParams;
					SpawnParams.OverrideLevel = World->PersistentLevel;
					FRotator Rot(0, FMath::FRand() * 360.0f, 0);
					AActor* Actor = World->SpawnActor(CreatureObj->ClassToSpawn, &Location, &Rot, SpawnParams);

					if(Actor)
					{
						++NumSpawned;
						ActiveInstances.Add(Actor);
					}
				}
				else
				{
					int32 Attempts = 0;
					bool bFoundValidArea = false;
					FVector SpawnLocation(0);

					while(!bFoundValidArea && Attempts <= CreatureObj->MaxRuntimeSlopeRetries)
					{
						++Attempts;

						float RandomAngle = FMath::FRand() * PI * 2.0f;
						float Radius = FMath::FRand() * CreatureObj->SpawnRadius;
						FVector Location(FMath::Sin(RandomAngle), FMath::Cos(RandomAngle), 0.0f);
						Location *= Radius;
						Location += GetComponentLocation();

						FHitResult Hit;
						FVector Begin = Location + FVector(0, 0, FaunaSpawnerComponentConstants::SpawnTraceExtent);
						FVector End = Location - FVector(0, 0, FaunaSpawnerComponentConstants::SpawnTraceExtent);

						if(World->LineTraceSingleByChannel(Hit, Begin, End, ECC_WorldStatic, FCollisionQueryParams(NAME_None, FCollisionQueryParams::GetUnknownStatId())))
						{
							float NormalDot = FVector::DotProduct(Hit.Normal, FVector(0, 0, 1));
							float Angle = FMath::Abs(FMath::Acos(NormalDot));

							if(Angle < FMath::DegreesToRadians(CreatureObj->MaxGroundAngle))
							{
								bFoundValidArea = true;
								SpawnLocation = Hit.Location;
								break;
							}
							else if(CreatureObj->bVisualiseSlopeRejects)
							{
								// Draw out a box where the hit failed, including an up vector(cyan), the hit normal(green) and the angle limit(red)
								DrawDebugBox(World, Hit.Location, FVector(50, 50, 50), FQuat::Identity, FColor::Red, true);
								DrawDebugLine(World, Hit.Location, Hit.Location + Hit.Normal * 200.0f, FColor::Green, true);
								DrawDebugLine(World, Hit.Location, Hit.Location + FVector(0, 0, 200.0f), FColor::Cyan, true);

								FQuat LimitRotation(FVector::CrossProduct(Hit.Normal, FVector(0, 0, 1)), -FMath::DegreesToRadians(CreatureObj->MaxGroundAngle));
								FVector LimitVector = LimitRotation.RotateVector(FVector(0, 0, 1));
								DrawDebugLine(World, Hit.Location, Hit.Location + LimitVector * 200.0f, FColor::Red, true);
							}
						}
					}

					if(bFoundValidArea)
					{
						FActorSpawnParameters SpawnParams;
						SpawnParams.OverrideLevel = World->PersistentLevel;
						SpawnLocation.Z += 100.0f;
						FRotator Rot(0, FMath::FRand() * 360.0f, 0);
						AActor* Actor = World->SpawnActor(CreatureObj->ClassToSpawn, &SpawnLocation, &Rot, SpawnParams);

						if(Actor)
						{
							++NumSpawned;
							ActiveInstances.Add(Actor);
						}
					}
				}
			}
			if(ActiveInstances.Num() >= TargetInstanceCount)
			{
				State = EFaunaSpawnerState::Populated;
			}
		}
	}

	return NumSpawned;
}

bool UFaunaSpawnerComponent::CanSpawn()
{
	return State != EFaunaSpawnerState::Populated && State != EFaunaSpawnerState::NotSpawning;
}

bool UFaunaSpawnerComponent::IsSpawnerActive()
{
	return ActiveInstances.Num() > 0 || State == EFaunaSpawnerState::NotSpawning;
}

void UFaunaSpawnerComponent::DeactivateSpawner()
{
	// Should only really deactivate when we dont have any instances any more
	check(ActiveInstances.Num() == 0);
	State = EFaunaSpawnerState::Dormant;
}