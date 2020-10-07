// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyPointActions/UPSMovementHandlerDefault.h"
#include "GameFramework/Character.h"
#include "EnemyPointActions/UPSEnemyPointActionComponent.h"
#include "EnemyPointActions/UPSMoveToEnemyPointAction.h"
#include "AITasks/UPSAITask_AIRotateToTarget.h"

void AUPSMovementHandlerDefault::CharacterStartMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point)
{
	Super::CharacterStartMovement(Character, Point);

	if (auto moveTask = UUPSMoveToEnemyPointAction::UPSMoveToLocation(Character, Point->GetComponentLocation(), MoveParams))
	{
		moveTask->OnMoveToEnemyPointActionFinishedDelegate.AddDynamic(this, &AUPSMovementHandlerDefault::OnCharacterReachPoint);
		ActiveGameplayTask = moveTask;
		moveTask->Activate();
	}
	else
	{
		FinishMovement(false);
	}
}

void AUPSMovementHandlerDefault::CharacterAbortMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point)
{
	Super::CharacterAbortMovement(Character, Point);

	if (ActiveGameplayTask != nullptr)
	{
		ActiveGameplayTask->EndTask();
		ActiveGameplayTask = nullptr;
	}
}

void AUPSMovementHandlerDefault::OnCharacterReachPoint(ACharacter* Character, UUPSMoveToEnemyPointAction* MoveTask, EPathFollowingResult::Type Result)
{
	bool bNeedAbort = true;

	if (Result == EPathFollowingResult::Success && PointActionComponent->GetCharacterOnPoint() == MovementCharacter)
	{
		if (bRotateOnPoint)
		{
			if (auto rotateTask = UUPSAITask_AIRotateToTarget::RotateAIToTargetRotation(Cast<AAIController>(Character->GetController()), PointActionComponent->GetComponentRotation()))
			{
				bNeedAbort = false;
				rotateTask->OnRotationTaskFinished.AddDynamic(this, &AUPSMovementHandlerDefault::OnCharacterRotatedToPoint);
				ActiveGameplayTask = rotateTask;
				rotateTask->Activate();
			}
		}
		else
		{
			FinishMovement(true);
		}
	}

	if (bNeedAbort)
	{
		FinishMovement(false);
	}
}

void AUPSMovementHandlerDefault::OnCharacterRotatedToPoint(AAIController* AIC, UUPSAITask_AIRotateToTarget* FinishedTask)
{
	ActiveGameplayTask = nullptr;
	FinishMovement(true);
}
