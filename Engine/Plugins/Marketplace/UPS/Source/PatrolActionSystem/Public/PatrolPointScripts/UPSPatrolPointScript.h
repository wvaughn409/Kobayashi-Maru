// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPSPatrolPointScript.generated.h"

class ACharacter;
class AUPSPatrolPoint;

/*
This class need to realize some behavior when character started, reached or aborted movement to point
To create instance of this object use UUPSFunctionLIbrary::CreatePatrolScriptIntance function. 
You can see realization example in BTTask_UPS_MoveToPatrolPoint
*/

UCLASS(Abstract, EditInLineNew, Blueprintable, meta = (ShowWorldContextPin))
class PATROLACTIONSYSTEM_API UUPSPatrolPointScript : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "UPSPatrolPointScript")
	virtual void StartMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolPointScript")
	virtual void AbortMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolPointScript")
	virtual void ReachPoint(ACharacter* Character, AUPSPatrolPoint* Point);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "StartMovementToPoint"), Category = "UPSPatrolPointScript")
	void K2_StartMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "AbortMovementToPoint"), Category = "UPSPatrolPointScript")
	void K2_AbortMovementToPoint(ACharacter* Character, AUPSPatrolPoint* Point);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "ReachPoint"), Category = "UPSPatrolPointScript")
	void K2_ReachPoint(ACharacter* Character, AUPSPatrolPoint* Point);
};
