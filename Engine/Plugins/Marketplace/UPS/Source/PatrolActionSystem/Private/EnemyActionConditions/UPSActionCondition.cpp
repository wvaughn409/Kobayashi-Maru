// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyActionConditions/UPSActionCondition.h"
#include "GameFramework/Character.h"

bool UUPSActionCondition::CheckCondition(ACharacter* Character)
{
	if (!bInverseCondition)
	{
		return InternalCheckCondition(Character);
	}
	else
	{
		return !InternalCheckCondition(Character);
	}
}

bool UUPSActionCondition::InternalCheckCondition_Implementation(ACharacter* Character)
{
	return false;
}
