// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/GroupMovementTypes.h"
#include "GameFramework/Character.h"
#include "GroupMovement/UPSGroupMemberMovementPoint.h"

FDelayedGroupMovement::FDelayedGroupMovement()
{

}

FDelayedGroupMovement::FDelayedGroupMovement(AActor* TargetActor, FTimerHandle TimerHandle) :
	MovementTargetActor(TargetActor),
	CachedTimerHandle(TimerHandle)
{

}

FDelayedGroupMovement::FDelayedGroupMovement(FVector TargetLocation, FTimerHandle TimerHandle) :
	MovementTargetLocation(TargetLocation),
	CachedTimerHandle(TimerHandle)
{

}
