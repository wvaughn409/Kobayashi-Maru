// Copyright 2020 DmVergasov All Rights Reserved.

#include "AI/UPSGroupMovementAIController.h"

AUPSGroupMovementAIController::AUPSGroupMovementAIController(const FObjectInitializer& ObjectInitializer) : Super (ObjectInitializer)
{

}

FPathFollowingRequestResult AUPSGroupMovementAIController::MoveTo(const FAIMoveRequest& MoveRequest, FNavPathSharedPtr* OutPath /*= nullptr*/)
{
	//call delegates on movement to actor and location
	if (MoveRequest.GetGoalActor() != nullptr)
	{
		OnAIStartMovementToActorDelegate.Broadcast(MoveRequest.GetGoalActor());
	}
	else
	{
		OnAIStartMovementToLocationDelegate.Broadcast(MoveRequest.GetGoalLocation());
	}

	return 	Super::MoveTo(MoveRequest, OutPath);
}
