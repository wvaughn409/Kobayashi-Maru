// Copyright 2020 DmVergasov All Rights Reserved.

#include "AITasks/UPSAITask_ExecuteEnemyAction.h"
#include "AIController.h"
#include "EnemyActions/UPSEnemyAction.h"
#include "GameFramework/Character.h"


/*Create new enemy action instance from ref and wait finish event*/
UUPSAITask_ExecuteEnemyAction* UUPSAITask_ExecuteEnemyAction::ExecuteEnemyAction(UUPSEnemyAction* EnemyActionToActivate, ACharacter* Character)
{
	UUPSAITask_ExecuteEnemyAction* newTask = nullptr;

	if (EnemyActionToActivate != nullptr && Character != nullptr)
	{
		newTask = NewTask<UUPSAITask_ExecuteEnemyAction>(Character);

		if (newTask != nullptr)
		{
			auto newAction = DuplicateObject<UUPSEnemyAction>(EnemyActionToActivate, Character);
			newTask->EnemyAction = newAction;
			newTask->Character = Character;
		}
	}

	return newTask;
}

void UUPSAITask_ExecuteEnemyAction::Activate()
{
	Super::Activate();

	EnemyAction->bCanBeActivated = true;
	EnemyAction->OnActionFinishedDelegate.AddDynamic(this, &UUPSAITask_ExecuteEnemyAction::OnActionFinished);
	EnemyAction->StartAction(Character);
}

void UUPSAITask_ExecuteEnemyAction::AbortAction()
{
	if (EnemyAction != nullptr)
	{
		EnemyAction->AbortAction();
	}
	else
	{
		FinishEnemyActionTask(EEnemyActionFinishResult::ConditionFailed);
	}
}

void UUPSAITask_ExecuteEnemyAction::OnDestroy(bool bInOwnerFinished)
{
	if (EnemyAction != nullptr)
	{
		EnemyAction->MarkPendingKill();
	}

	Super::OnDestroy(bInOwnerFinished);
}

void UUPSAITask_ExecuteEnemyAction::OnActionFinished(EEnemyActionFinishResult Result)
{
	FinishEnemyActionTask(Result);
}

void UUPSAITask_ExecuteEnemyAction::FinishEnemyActionTask(EEnemyActionFinishResult Result)
{
	OnEnemyActionFinishedDelegate.Broadcast(Result);

	EndTask();
}
