// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "AIController.h"
#include "CrowdTestAIController.generated.h"

UCLASS(BlueprintType, Blueprintable)
class ACrowdTestAIController : public AAIController
{
	GENERATED_UCLASS_BODY()

	// AActor interface
	virtual void Tick(float DeltaTime) override;
	// End of AActor interface

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player Tracking")
	float PlayerLookLeftRight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player Tracking")
	float PlayerLookUpDown;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Player Tracking")
	bool bPlayerVisible;

	// Returns the crowd flocking component associated with this controller
	class UFlockCrowdFollowingComponent* GetFlockCrowdFollowingComponent();

protected:
	UPROPERTY(Transient)
	class UFlockCrowdFollowingComponent* MyFlockCrowdFollowingComponent;
};