// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "EnemyPointActions/UPSPointActionMovementHandler.h"
#include "UPSMoveToEnemyPointAction.h"
#include "Navigation/PathFollowingComponent.h"
#include "UPSMovementHandlerDefault.generated.h"

class UUPSEnemyPointActionComponent;
class ACharacter;
class UUPSMoveToEnemyPointAction;
class UUPSAITask_AIRotateToTarget;
class AAIController;
class UGameplayTask;

/**
 * 
 */
UCLASS()
class PATROLACTIONSYSTEM_API AUPSMovementHandlerDefault : public AUPSPointActionMovementHandler
{
	GENERATED_BODY()
public:
	virtual void CharacterStartMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point) override;
	virtual void CharacterAbortMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point) override;

protected:
	UFUNCTION()
	virtual void OnCharacterReachPoint(ACharacter* Character, UUPSMoveToEnemyPointAction* MoveTask, EPathFollowingResult::Type Result);

	UFUNCTION()
	virtual void OnCharacterRotatedToPoint(AAIController* AIC, UUPSAITask_AIRotateToTarget* FinishedTask);

public:
	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	FUPSMoveParams MoveParams;

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	bool bRotateOnPoint = true;
protected:
	UPROPERTY()
	UGameplayTask* ActiveGameplayTask;
};
