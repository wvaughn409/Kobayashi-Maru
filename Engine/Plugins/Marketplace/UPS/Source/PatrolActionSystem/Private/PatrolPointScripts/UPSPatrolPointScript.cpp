// Copyright 2020 DmVergasov All Rights Reserved.

#include "PatrolPointScripts/UPSPatrolPointScript.h"
#include "GameFramework/Character.h"
#include "Actors/UPSPatrolPoint.h"

void UUPSPatrolPointScript::StartMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point)
{
	K2_StartMovementToPoint(Character, Point);
}

void UUPSPatrolPointScript::AbortMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point)
{
	K2_AbortMovementToPoint(Character, Point);
}

void UUPSPatrolPointScript::ReachPoint(ACharacter* Character, AUPSPatrolPoint* Point)
{
	K2_ReachPoint(Character, Point);
}
