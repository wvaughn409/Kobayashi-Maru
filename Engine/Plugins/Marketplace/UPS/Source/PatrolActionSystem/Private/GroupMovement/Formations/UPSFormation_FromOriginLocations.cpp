// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/Formations/UPSFormation_FromOriginLocations.h"
#include "GameFramework/Character.h"

FVector AUPSFormation_FromOriginLocations::GetLocationInFormationForCharacter(ACharacter* Character)
{
	if (LeaderCharacter != nullptr && CharactersInFormation.Contains(Character))
	{
		return LeaderCharacter->GetActorTransform().InverseTransformPosition(Character->GetActorLocation());
	}

	return FVector::ZeroVector;
}
