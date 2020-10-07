// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GroupMovement/UPSGroupMovementFormation.h"
#include "UPSFormation_FromOriginLocations.generated.h"

class ACharacter;

/*
	Use current world character location as location in formation
*/

UCLASS()
class PATROLACTIONSYSTEM_API AUPSFormation_FromOriginLocations : public AUPSGroupMovementFormation
{
	GENERATED_BODY()
public:
	virtual FVector GetLocationInFormationForCharacter(ACharacter* Character) override;
};
