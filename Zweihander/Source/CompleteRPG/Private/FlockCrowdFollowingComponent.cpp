// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "FlockCrowdFollowingComponent.h"

UFlockCrowdFollowingComponent::UFlockCrowdFollowingComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	bRotateToVelocity = false;
	bUpdateDirectMoveVelocity = false;
	bEnableSeparation = true;
	bEnablePathOffset = true;
	bEnableOptimizeVisibility = false;
	bEnableOptimizeTopology = false;
	AvoidanceQuality = ECrowdAvoidanceQuality::Low;
	SeparationWeight = 200.0f;
	CollisionQueryRange = 600.0f;
	DesiredAngleDelta = 0.0f;
	bUseBlockDetection = false;
}

void UFlockCrowdFollowingComponent::GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const
{
	Super::GetCrowdAgentCollisions(CylinderRadius, CylinderHalfHeight);

	CylinderRadius *= 2.0f;
}

void UFlockCrowdFollowingComponent::ApplyCrowdAgentPosition(const FVector& NewPosition)
{
	AController* Controller = CastChecked<AController>(GetOwner());
	DeltaPosition = NewPosition - Controller->GetPawn()->GetActorLocation();
	DeltaPosition.Z = 0.0f;
}

void UFlockCrowdFollowingComponent::ApplyCrowdAgentVelocity(const FVector& NewVelocity, const FVector& DestPathCorner, bool bTraversingLink, bool bIsNearEndOfPath)
{
	const FVector ClampedVelocity = NewVelocity.GetClampedToMaxSize(SpeedLimit);
	const float DeltaTime = GetWorld()->GetDeltaSeconds();

	AController* Controller = CastChecked<AController>(GetOwner());
	APawn* Pawn = Controller->GetPawn();

	const float ClampedSpeed = ClampedVelocity.Size2D();
	if (ClampedSpeed > 2.0f)
	{
		FRotator DesiredRotation = ClampedVelocity.Rotation();
		FRotator CurrentRotation = Pawn->GetActorRotation();

		const float CurrentYawDelta = FRotator::NormalizeAxis(DesiredRotation.Yaw - CurrentRotation.Yaw);
		if (FMath::Abs(CurrentYawDelta) > 10.0f)
		{
			RotationSpeed = FMath::Min(RotationSpeed + DeltaTime * 40.0f, 80.0f);

			FRotator NewRotation = CurrentRotation;
			NewRotation.Yaw = FMath::FixedTurn(CurrentRotation.Yaw, DesiredRotation.Yaw, RotationSpeed * DeltaTime);

			// we only need to set actor rotation for the moment because turn anims dont have rotational root motion
			// Pawn.SetActorRotation is expensive...
			Pawn->SetActorRotation(NewRotation);
			Controller->SetControlRotation(NewRotation);

			DesiredAngleDelta = FMath::FInterpTo(DesiredAngleDelta, DesiredRotation.Yaw - CurrentRotation.Yaw, DeltaTime, 0.5f);
			YawDelta = FRotator::NormalizeAxis(NewRotation.Yaw - CurrentRotation.Yaw);
		}
		else
		{
			RotationSpeed = FMath::Max(RotationSpeed - DeltaTime * 40.0f, 0.0f);
			DesiredAngleDelta = FMath::FInterpTo(DesiredAngleDelta, DesiredRotation.Yaw - CurrentRotation.Yaw, DeltaTime, 0.5f);
			YawDelta = 0.0f;
		}
	}
	else
	{
		RotationSpeed = 0.0f;
		DesiredAngleDelta = FMath::FInterpTo(DesiredAngleDelta, 0.0f, DeltaTime, 0.5f);
	}

	RequestedVelocity = Pawn->GetActorForwardVector() * ClampedSpeed;

	if (CharacterMovement->CurrentFloor.bBlockingHit)
	{
		FVector LocalNormal = Pawn->GetTransform().Inverse().TransformVector(CharacterMovement->CurrentFloor.HitResult.Normal);
		TerrainRotation.Pitch = -FMath::RadiansToDegrees(FMath::Atan(LocalNormal.X));
		TerrainRotation.Roll = -FMath::RadiansToDegrees(FMath::Atan(LocalNormal.Y));
	}
	else if (CharacterMovement->CachedProjectedNavMeshHitResult.bBlockingHit)
	{
		FVector LocalNormal = Pawn->GetTransform().Inverse().TransformVector(CharacterMovement->CachedProjectedNavMeshHitResult.Normal);
		TerrainRotation.Pitch = -FMath::RadiansToDegrees(FMath::Atan(LocalNormal.X));
		TerrainRotation.Roll = -FMath::RadiansToDegrees(FMath::Atan(LocalNormal.Y));
	}
	else
	{
		TerrainRotation = FRotator::ZeroRotator;
	}
	
	Super::ApplyCrowdAgentVelocity(RequestedVelocity, DestPathCorner, bTraversingLink, bIsNearEndOfPath);
}