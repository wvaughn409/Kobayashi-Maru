// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTask.h"
#include "UPSAITask_AIRotateToTarget.generated.h"

class AAIController;
class AActor;
class ACharacter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnRotationTaskFinished, AAIController*, AIC, UUPSAITask_AIRotateToTarget*, FinishedTask);

/*Gameplay task need to rotate ai character to other actor or rotator. Work only on characters with character movement component*/

UCLASS()
class PATROLACTIONSYSTEM_API UUPSAITask_AIRotateToTarget : public UGameplayTask
{
	GENERATED_BODY()
public:
	UUPSAITask_AIRotateToTarget(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = "bUseCustomRotationSpeed, CustomRotationSpeed, ErrorTolerance", BlueprintInternalUseOnly = true), Category = "UPSPatrolSystem")
	static UUPSAITask_AIRotateToTarget* RotateAIToTargetActor(AAIController* AIController, AActor* RotationTarget, bool bUseCustomRotationSpeed = false, float CustomRotationSpeed = 0.f, float ErrorTolerance = 1.f);

	UFUNCTION(BlueprintCallable, meta = (AdvancedDisplay = "bUseCustomRotationSpeed, CustomRotationSpeed, ErrorTolerance", BlueprintInternalUseOnly = true), Category = "UPSPatrolSystem")
	static UUPSAITask_AIRotateToTarget* RotateAIToTargetRotation(AAIController* AIController, FRotator TargetRotation, bool bUseCustomRotationSpeed = false, float CustomRotationSpeed = 0.f, float ErrorTolerance = 1.f);
	
	virtual void Activate() override;
	virtual void TickTask(float DeltaTime) override;
	virtual void OnDestroy(bool bInOwnerFinished) override;

private:
	void FinishTask();
	void RestoreVariables();

public:
	UPROPERTY(BlueprintAssignable, Category = "UPSPatrolSystem")
	FOnRotationTaskFinished OnRotationTaskFinished;

private:
	UPROPERTY()
	AAIController* AIC = nullptr;

	UPROPERTY()
	ACharacter* Character;

	UPROPERTY()
	AActor* TargetActor = nullptr;

	FRotator TargetRotation;

	bool bCustomSpeed = false;

	float ErrorTolerance = 1.f;

	float CustomRotationSpeed = 0.f;

	float OriginRotationSpeed = 0.f;

	bool bSetControlRotationFromPawnOrientation = false;
	bool bOrientRotationToMovement = false;
	bool bUseControllerDesiredRotation = false;
	bool bUseControllerRotationYaw = false;

	bool bFinished = false;
};
