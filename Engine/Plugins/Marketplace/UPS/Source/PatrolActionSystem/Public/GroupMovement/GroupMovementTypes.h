// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "GroupMovementTypes.generated.h"

class ACharacter;
class AUPSGroupMovementFormation;
class AUPSGroupMovementAIController;
class AUPSGroupMemberMovementPoint;


USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FMovementGroupMemberInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	AUPSGroupMemberMovementPoint* GroupMemberMovementPointActor;

	//relative to group leader
	UPROPERTY()
	FVector GroupMemberLocation;
};

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FFormationPointsGenerationSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f), Category = "UPSGroupMovement")
	float Length = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f), Category = "UPSGroupMovement")
	float Width = 1000.f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 10.f), Category = "UPSGroupMovement")
	float DistanceBetweenPoints = 120.f;
};

USTRUCT()
struct PATROLACTIONSYSTEM_API FDelayedGroupMovement
{
	GENERATED_BODY()
		
public:
	FDelayedGroupMovement();

	FDelayedGroupMovement(AActor* TargetActor, FTimerHandle TimerHandle);

	FDelayedGroupMovement(FVector TargetLocation, FTimerHandle TimerHandle);

	UPROPERTY()
	AActor* MovementTargetActor = nullptr;

	FVector MovementTargetLocation;

	FTimerHandle CachedTimerHandle;
};