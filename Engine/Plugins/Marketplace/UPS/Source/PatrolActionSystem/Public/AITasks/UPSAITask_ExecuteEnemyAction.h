// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnemyActions/UPSEnemyAction.h"
#include "Tasks/AITask.h"
#include "UPSAITask_ExecuteEnemyAction.generated.h"

class AAIController;
class UUPSEnemyActionComponent;
class ACharacter;

/*
	The gameplay is the task required to run EnemyAction's.
		 The delegate for the end of the task is OnEnemyActionFinishedDelegate, which returns the result of the task

		 Success - the action was completed by itself
		 Aborted - the action was completed by abortion
		 ConditionFailed - conditions for activating the action were not met
*/

UCLASS()
class PATROLACTIONSYSTEM_API UUPSAITask_ExecuteEnemyAction : public UGameplayTask
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = true), Category = "UPSPatrolSystem")
	static UUPSAITask_ExecuteEnemyAction* ExecuteEnemyAction(UUPSEnemyAction* EnemyActionToActivate, ACharacter* Character);

	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	void AbortAction();

protected:
	virtual void OnDestroy(bool bInOwnerFinished) override;

private:
	UFUNCTION()
	void OnActionFinished(EEnemyActionFinishResult Result);

	void FinishEnemyActionTask(EEnemyActionFinishResult Result);

public:
	UPROPERTY(BlueprintAssignable, Category = "UPSPatrolSystem")
	FOnActionFinished OnEnemyActionFinishedDelegate;

protected:
	UPROPERTY()
	UUPSEnemyAction* EnemyAction;

	UPROPERTY()
	ACharacter* Character;
};
