// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "UPSGroupMovementAIController.generated.h"


/*
 The controller necessary for group movement contains delegates at the beginning of the movement to a point or ector.
*/

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAIStartMovementToLocation, FVector, NewLocation);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAIStartMovementToActor, AActor*, NewActor);

UCLASS(ClassGroup = AI, BlueprintType, Blueprintable)
class PATROLACTIONSYSTEM_API AUPSGroupMovementAIController : public AAIController
{
	GENERATED_BODY()

public:
	AUPSGroupMovementAIController(const FObjectInitializer& ObjectInitializer);

	virtual FPathFollowingRequestResult MoveTo(const FAIMoveRequest& MoveRequest, FNavPathSharedPtr* OutPath = nullptr) override;

public:
	UPROPERTY(BlueprintAssignable, Category = "UPSPatrolSystem")
	FOnAIStartMovementToLocation OnAIStartMovementToLocationDelegate;

	UPROPERTY(BlueprintAssignable, Category = "UPSPatrolSystem")
	FOnAIStartMovementToActor OnAIStartMovementToActorDelegate;
};
