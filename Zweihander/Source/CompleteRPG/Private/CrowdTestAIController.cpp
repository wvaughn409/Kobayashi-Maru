// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CrowdTestAIController.h"
#include "FlockCrowdFollowingComponent.h"

ACrowdTestAIController::ACrowdTestAIController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UFlockCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{
	bAttachToPawn = false;
}

void ACrowdTestAIController::Tick(float DeltaTime)
{
	/** Do nothing - we dont want to orient to focal point (calling UpdateControlRotation) */
}

class UFlockCrowdFollowingComponent* ACrowdTestAIController::GetFlockCrowdFollowingComponent()
{
	if (MyFlockCrowdFollowingComponent == nullptr)
	{
		MyFlockCrowdFollowingComponent = FindComponentByClass<UFlockCrowdFollowingComponent>();
	}

	return MyFlockCrowdFollowingComponent;
}