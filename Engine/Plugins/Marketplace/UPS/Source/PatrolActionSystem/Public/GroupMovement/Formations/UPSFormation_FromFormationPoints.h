// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GroupMovement/UPSGroupMovementFormation.h"
#include "UPSFormation_FromFormationPoints.generated.h"

class ACharacter;
class UUPSFormationPointComponent;

/*
	Get one of UUPSFormationPointComponent component from this actor and use as character location in formation
*/
UCLASS(Abstract)
class PATROLACTIONSYSTEM_API AUPSFormation_FromFormationPoints : public AUPSGroupMovementFormation
{
	GENERATED_BODY()
public:
	/*AUPSGroupMovementFormation Start*/
	virtual void InitFormation(ACharacter* InLeaderCharacter) override;
	virtual FVector GetLocationInFormationForCharacter(ACharacter* Character) override;
	virtual void RemoveCharacterFromGroup(ACharacter* Character) override;
	/*AUPSGroupMovementFormation End*/

protected:
	FVector GetFreeFormationPoint(ACharacter* Character);

protected:
	UPROPERTY()
	TArray <UUPSFormationPointComponent*> FormationPointComponents;
};
