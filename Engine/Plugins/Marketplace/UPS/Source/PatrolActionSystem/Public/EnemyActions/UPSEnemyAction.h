// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "UPSEnemyAction.generated.h"


/*
Allows you to start an action for a character, returns the result of the action. The action will not be considered completed until the UUPSEnemyAction :: FinishAction function is called,
even in case of abortion

To start the action you must use the gameplay task UUPSAITask_ExecuteEnemyAction

If you need to interrupt an action during execution, use the UUPSEnemyAction :: AbortAction function. In this case, EEnemyActionFinishResult will be Aborted

InternalStartAction - called when the action starts
InternalAbortAction - called when the abortion function was called
InternalFinishAction - called when the action has been completed

EnemyActionScripts - Allows you to perform any action at the start, abortion or finish of the action
ActionConditions - Check the ability to start an action, if one of the conditions returns false, then the action will be completed with EEnemyActionFinishResult ConditionFailed
*/

class UUPSEnemyActionComponent;
class UUPSEnemyActionScript;
class ACharacter;
class AAIController;
class UUPSActionCondition;

UENUM(BlueprintType)
enum class EEnemyActionState : uint8
{
	ReadyForActivation,
	Active,
	Aborting
};

UENUM(BlueprintType)
enum class EEnemyActionFinishResult : uint8
{
	Success,
	Aborted,
	ConditionFailed
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnActionFinished, EEnemyActionFinishResult, FinishResult);
UCLASS(Abstract, editinlinenew, Blueprintable, meta = (ShowWorldContextPin))
class PATROLACTIONSYSTEM_API UUPSEnemyAction : public UDataAsset
{
	GENERATED_BODY()

public:
	UUPSEnemyAction();

public:
	UFUNCTION()
	void StartAction(ACharacter* Character);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	void AbortAction();

protected:
	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	void FinishAction();

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "OnActionStarted"), Category = "UPSPatrolSystem")
	void InternalStartAction(ACharacter* InCharacter);

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "OnActionAborted"), Category = "UPSPatrolSystem")
	void InternalAbortAction(ACharacter* InCharacter);

	UFUNCTION(BlueprintNativeEvent, meta = (DisplayName = "OnActionFinished"), Category = "UPSPatrolSystem")
	void InternalFinishAction(ACharacter* InCharacter);

public:
	UPROPERTY(BlueprintAssignable, Category = "UPSPatrolSystem")
	FOnActionFinished OnActionFinishedDelegate;

protected:

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = true), Category = "UPSPatrolSystem")
	ACharacter* Character;

	bool bWasAborted = false;

	UPROPERTY(EditAnywhere, Instanced, Category = "Settings")
	TArray<UUPSEnemyActionScript*> EnemyActionScripts;

	UPROPERTY(EditAnywhere, Instanced, Category = "Settings")
	TArray<UUPSActionCondition*> ActionConditions;

	bool bCanBeActivated = false;

	friend class UUPSAITask_ExecuteEnemyAction;

private:
	EEnemyActionState ActionState = EEnemyActionState::ReadyForActivation;
};
