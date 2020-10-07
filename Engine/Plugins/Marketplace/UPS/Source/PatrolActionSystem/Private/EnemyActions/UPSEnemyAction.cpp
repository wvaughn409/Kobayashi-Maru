// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyActions/UPSEnemyAction.h"
#include "EnemyActionScripts/UPSEnemyActionScript.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "EnemyActionConditions/UPSActionCondition.h"

UUPSEnemyAction::UUPSEnemyAction()
{

}

void UUPSEnemyAction::StartAction(ACharacter* InCharacter)
{
	bool bCanStartAction = true;

	for (auto condition : ActionConditions)
	{
		if (condition->CheckCondition(InCharacter) == false)
		{
			bCanStartAction = false;
			break;
		}
	}

	if (ActionState == EEnemyActionState::ReadyForActivation && bCanStartAction && bCanBeActivated)
	{
		if (InCharacter != nullptr)
		{			
			Character = InCharacter;

			ActionState = EEnemyActionState::Active;

			InternalStartAction(Character);

			for (auto actionScript : EnemyActionScripts)
			{
				if (actionScript != nullptr)
				{
					actionScript->OnActionStarted(Character);
				}
			}
		}
		else
		{
			OnActionFinishedDelegate.Broadcast(EEnemyActionFinishResult::ConditionFailed);
		}
	}
	else
	{
		OnActionFinishedDelegate.Broadcast(EEnemyActionFinishResult::ConditionFailed);
	}
}

void UUPSEnemyAction::AbortAction()
{
	if (ActionState == EEnemyActionState::Active)
	{
		bWasAborted = true;

		for (auto actionScript : EnemyActionScripts)
		{
			if (actionScript != nullptr)
			{
				actionScript->OnActionAborted(Character);
			}
		}

		ActionState = EEnemyActionState::Aborting;
		InternalAbortAction(Character);
	}
}


void UUPSEnemyAction::FinishAction()
{
	if (ActionState == EEnemyActionState::Active || ActionState == EEnemyActionState::Aborting)
	{
		InternalFinishAction(Character);
		OnActionFinishedDelegate.Broadcast(bWasAborted ? EEnemyActionFinishResult::Aborted : EEnemyActionFinishResult::Success);
		ActionState = EEnemyActionState::ReadyForActivation;
		bWasAborted = false;

		for (auto actionScript : EnemyActionScripts)
		{
			if (actionScript != nullptr)
			{
				actionScript->OnActionFinished(Character);
			}
		}
	}
}

void UUPSEnemyAction::InternalFinishAction_Implementation(ACharacter* InCharacter)
{

}

void UUPSEnemyAction::InternalAbortAction_Implementation(ACharacter* InCharacter)
{

}

void UUPSEnemyAction::InternalStartAction_Implementation(ACharacter* InCharacter)
{

}

