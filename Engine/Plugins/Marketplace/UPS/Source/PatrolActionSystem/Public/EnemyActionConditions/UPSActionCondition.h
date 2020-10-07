// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPSActionCondition.generated.h"

class ACharacter;

/*
Checks the condition necessary to run EnemyAction.
  bInverseCondition - inverts the result of the condition
*/

UCLASS(Abstract, DefaultToInstanced, editinlinenew, Blueprintable, meta = (ShowWorldContextPin))
class PATROLACTIONSYSTEM_API UUPSActionCondition : public UObject
{
	GENERATED_BODY()
public:
	bool CheckCondition(ACharacter* Character);

protected:
	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "CheckCondition"), Category = "UPSPatrolSystem")
	bool InternalCheckCondition(ACharacter* Character);

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UPSPatrolSystem")
	bool bInverseCondition = false;
};
