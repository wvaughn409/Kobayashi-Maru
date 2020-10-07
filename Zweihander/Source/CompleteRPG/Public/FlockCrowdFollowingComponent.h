// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Navigation/CrowdFollowingComponent.h"
#include "FlockCrowdFollowingComponent.generated.h"

UCLASS(BlueprintType)
class UFlockCrowdFollowingComponent : public UCrowdFollowingComponent
{
	GENERATED_UCLASS_BODY()

	/** UCrowdFollowingComponent interface */
	virtual void ApplyCrowdAgentVelocity(const FVector& NewVelocity, const FVector& DestPathCorner, bool bTraversingLink, bool bIsNearEndOfPath) override;
	virtual void ApplyCrowdAgentPosition(const FVector& NewPosition) override;
	virtual void GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const override;

	UPROPERTY(Transient)
	float RotationSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Path Following")
	float DesiredAngleDelta;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Path Following")
	FVector RequestedVelocity;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Path Following")
	float YawDelta;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Path Following")
	FRotator TerrainRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Path Following")
	float SpeedLimit;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Path Following")
	FVector DeltaPosition;
};