// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyPointActions/UPSMoveToEnemyPointAction.h"
#include "GameFramework/Character.h"
#include "EnemyPointActions/UPSEnemyPointActionComponent.h"
#include "AIController.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameplayTasksComponent.h"
#include "PatrolActionSystem.h"



UUPSMoveToEnemyPointAction* UUPSMoveToEnemyPointAction::UPSMoveToLocation(ACharacter* Character, FVector Location, FUPSMoveParams& MoveParams)
{
	UUPSMoveToEnemyPointAction* returnTask = nullptr;

	if (Character != nullptr)
	{
		if (auto aic = Cast<AAIController>(Character->GetController()))
		{
			returnTask = NewAITask<UUPSMoveToEnemyPointAction>(*aic);
			if (returnTask != nullptr)
			{
				returnTask->MoveChracter = Character;
				returnTask->MoveLocation = Location;
				returnTask->MoveParams = MoveParams;
			}
		}
	}
	return returnTask;
}

void UUPSMoveToEnemyPointAction::Activate()
{
	Super::Activate();

	auto pathFollowingComponent = GetAIController()->GetPathFollowingComponent();
	
	// abort active movement to keep only one request running
	if (pathFollowingComponent && pathFollowingComponent->GetStatus() != EPathFollowingStatus::Idle)
	{
		pathFollowingComponent->AbortMove(*this, FPathFollowingResultFlags::ForcedScript | FPathFollowingResultFlags::NewRequest
			, FAIRequestID::CurrentRequest, EPathFollowingVelocityMode::Keep);
	}

	GetAIController()->ReceiveMoveCompleted.AddDynamic(this, &UUPSMoveToEnemyPointAction::OnMoveCompleted);
	FAIMoveRequest moveReq(MoveLocation);
	moveReq.SetUsePathfinding(MoveParams.bUsePathfinding);
	moveReq.SetAllowPartialPath(MoveParams.bAllowPartialPath);
	moveReq.SetProjectGoalLocation(MoveParams.bProjectGoalLocation);
	moveReq.SetNavigationFilter(MoveParams.NavFilter);
	moveReq.SetAcceptanceRadius(MoveParams.AcceptenceRadius);
	moveReq.SetReachTestIncludesAgentRadius(MoveParams.bReachTestIncludesAgentRadius);
	moveReq.SetCanStrafe(MoveParams.bCanStrafe);

	PathRequest = GetAIController()->MoveTo(moveReq);

	if (TaskState != EGameplayTaskState::Active)
	{
		TaskState = EGameplayTaskState::Active;
		
		if (IsFinished() == false)
		{
			TasksComponent->OnGameplayTaskActivated(*this);
		}
	}
}

void UUPSMoveToEnemyPointAction::OnDestroy(bool bInOwnerFinished)
{
	Super::OnDestroy(bInOwnerFinished);

	StopMovement();
}

void UUPSMoveToEnemyPointAction::StopMovement(bool bEndTask /*= false*/)
{
	if (!bMovementFinished)
	{
		GetAIController()->ReceiveMoveCompleted.RemoveAll(this);

		bMovementFinished = true;

		if (auto pathFollowingComponent = GetAIController()->GetPathFollowingComponent())
		{
			pathFollowingComponent->AbortMove(*this, FPathFollowingResultFlags::ForcedScript | FPathFollowingResultFlags::NewRequest
				, PathRequest.MoveId, EPathFollowingVelocityMode::Keep);
		}

		if (bEndTask)
		{
			EndTask();
		}
	}
}

void UUPSMoveToEnemyPointAction::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	if (RequestID == PathRequest.MoveId || !PathRequest.MoveId.IsValid())
	{
		OnMoveToEnemyPointActionFinishedDelegate.Broadcast(MoveChracter, this, Result);
		StopMovement(true);
	}
}
