// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/BillboardComponent.h"
#include "UPSFormationPointComponent.generated.h"

class ACharacter;

/*
Use to determine character location in formation.
See AUPSFormation_FromFormationPoints
*/

UCLASS(Blueprintable, editinlinenew, meta = (BlueprintSpawnableComponent))
class PATROLACTIONSYSTEM_API UUPSFormationPointComponent : public UBillboardComponent
{
	GENERATED_BODY()

public:
	UUPSFormationPointComponent();

	void SetCharacterOnPoint(ACharacter* Character);
	void RemoveCharacterFromPoint();
	ACharacter* GetCharacterOnPoint() const;

protected:
	UPROPERTY(BlueprintReadOnly, Category = "UPSGroupMovement")
	ACharacter* CharacterOnPoint;
};
