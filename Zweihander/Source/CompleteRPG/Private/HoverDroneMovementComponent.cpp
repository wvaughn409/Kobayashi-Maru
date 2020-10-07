// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGGameMode.h"
#include "HoverDroneMovementComponent.h"

UHoverDroneMovementComponent::UHoverDroneMovementComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	MaxSpeed = 30000.f;
	
	Acceleration = 5000.f;
	Deceleration = 5000.f;
	MaxPitchRotSpeed = 70.f;
	MaxYawRotSpeed = 110.f;
	RotAcceleration = 150.f;
	RotDeceleration = 150.f;
	
	TurboAccelerationRange = FVector2D(8000.f, 22000.f);
	TurboAccelerationAltitudeRange = FVector2D(0.f, 25000.f);
	TurboDeceleration = 3000.f;
	TurboMaxPitchRotSpeed = 35.f;
	TurboMaxYawRotSpeed = 30.f;
	TurboRotAcceleration = 30.f;
	TurboRotDeceleration = 75.f;

	bMaintainHoverHeight = true;
	MaintainHoverHeightTolerance = 150.f;		// 1.5m
	MaintainHoverHeightPredictionTime = 1.f;
	DesiredHoverHeight = 400.f;
	MinHoverHeight = 150.f;

	MinPitch = -88.f;
	MaxPitch = 88.f;

	ForceFacingInterpInTime = 1.5f;

	MaxSimulationTimestep = 1.f / 60.f;
}


// internal
static void LimitControlAccelOnAxis(float& AxisAccel, float AxisPos, float LimitMin, float LimitMax)
{
	if ( (AxisAccel != 0.f) && (LimitMin < LimitMax) )
	{
		if (AxisAccel < 0.f)
		{
			// invalidate controls if oob on the min
			if (AxisPos < LimitMin)
			{
				AxisAccel = 0.f;
			}
		}
		else
		{
			// invalidate controls if oob on the max
			if (AxisPos > LimitMax)
			{
				AxisAccel = 0.f;
			}
		}
	}
}

void UHoverDroneMovementComponent::ClampControlToWorldBounds(FVector& ControlAcceleration)
{
	if (PawnOwner)
	{
		UWorld* const World = GetWorld();
		ACompleteRPGGameMode* const Game = World ? World->GetAuthGameMode<ACompleteRPGGameMode>() : nullptr;
		if (Game)
		{
			FBox const PlayerBounds = Game->GetPlayerBounds();
			FVector const PlayerLoc = PawnOwner->GetActorLocation();

			LimitControlAccelOnAxis(ControlAcceleration.X, PlayerLoc.X, PlayerBounds.Min.X, PlayerBounds.Max.X);
			LimitControlAccelOnAxis(ControlAcceleration.Y, PlayerLoc.Y, PlayerBounds.Min.Y, PlayerBounds.Max.Y);
			LimitControlAccelOnAxis(ControlAcceleration.Z, PlayerLoc.Z, PlayerBounds.Min.Z, PlayerBounds.Max.Z);
		}
	}
}

void UHoverDroneMovementComponent::ApplyControlInputToVelocity(float DeltaTime)
{
	FVector ControlAcceleration = GetPendingInputVector().GetClampedToMaxSize(1.f);
	
	bool bMaintainHeight = bMaintainHoverHeight;
	if (ControlAcceleration.Z != 0.f)
	{
		// user is adjusting height, let them and reset the hover height when they are done
		bMaintainHeight = false;
		DesiredHoverHeight = -1.f;
	}
	
	// make sure that if players are out of bounds, we don't let them push farther out of bounds but we do
	// let them push back in
	ClampControlToWorldBounds(ControlAcceleration);
	
	// basic Z thrust exactly counteracts gravity
	float ZThrust = -GetGravityZ();

	if (bMaintainHeight)
	{
		FVector AccumulatedThrust(0.f);
		float HoverThrust = 0.f;

		// look directly beneath us
		if (CurrentAltitude > 0.f)
		{
			float CurrentHeight = CurrentAltitude;
			if (DesiredHoverHeight <= 0)
			{
				DesiredHoverHeight = FMath::Max(CurrentHeight, MinHoverHeight);
			}
			else
			{
				// check height a few secs into the future so we don't have to overshoot to correct
				static float ProjectionTime = 0.6f;
				float ProjectedHeight = CurrentHeight + Velocity.Z * ProjectionTime;

				if (ProjectedHeight < (DesiredHoverHeight - MaintainHoverHeightTolerance))
				{
					// thrust up!
					static FVector2D ThrustMagRange(100.f, 4000.f);
					FVector2D ThrustDistRange((DesiredHoverHeight - MaintainHoverHeightTolerance), 0);
					float RealThrustMag = FMath::GetMappedRangeValueClamped(ThrustDistRange, ThrustMagRange, ProjectedHeight);
					HoverThrust += RealThrustMag;
				}
				else if (ProjectedHeight > (DesiredHoverHeight + MaintainHoverHeightTolerance))
				{
					// turn on some portion of gravity to come down
					static float MaxThrustDistance = 1000.f;
					static FVector2D ThrustMagRange(500.f, 3000.f);
					FVector2D ThrustDistRange((DesiredHoverHeight + MaintainHoverHeightTolerance), (DesiredHoverHeight + MaxThrustDistance));
					float RealThrustMag = FMath::GetMappedRangeValueClamped(ThrustDistRange, ThrustMagRange, ProjectedHeight);
					HoverThrust -= RealThrustMag;
				}
			}
		}

		// look ahead a certain time
		FVector XYVel = Velocity;
		XYVel.Z = 0.f;
		if (XYVel.IsNearlyZero() == false)
		{
			static float AltTestHeightAdjust = 10000.f;
			float const PredictedHeight = MeasureAltitude(PawnOwner->GetActorLocation() + (XYVel * MaintainHoverHeightPredictionTime) + FVector(0, 0, AltTestHeightAdjust)) - 10000.f;
			if (PredictedHeight > -AltTestHeightAdjust)
			{
				// else no ground below us
				if (PredictedHeight < (DesiredHoverHeight - MaintainHoverHeightTolerance))
				{
					// thrust up!
					static FVector2D ThrustMagRange(100.f, 4000.f);
					FVector2D ThrustDistRange((DesiredHoverHeight - MaintainHoverHeightTolerance), 0);
					float RealThrustMag = FMath::GetMappedRangeValueClamped(ThrustDistRange, ThrustMagRange, PredictedHeight);

					// favor going up, even if probe directly below us says we're too high
					HoverThrust = FMath::Max(HoverThrust, RealThrustMag);
				}
				else if (PredictedHeight >(DesiredHoverHeight + MaintainHoverHeightTolerance))
				{
					// don't override an "up" from the direct probe
					if (HoverThrust < 0.f)
					{
						// turn on some portion of gravity to come down
						static float MaxThrustDistance = 1000.f;
						static FVector2D ThrustMagRange(100.f, 980.f);
						FVector2D ThrustDistRange((DesiredHoverHeight + MaintainHoverHeightTolerance), (DesiredHoverHeight + MaxThrustDistance));
						float RealThrustMag = FMath::GetMappedRangeValueClamped(ThrustDistRange, ThrustMagRange, PredictedHeight);

						HoverThrust = FMath::Min(HoverThrust, -RealThrustMag);
					}
				}
			}
		}

		if (bTurbo)
		{
			static float TurboHoverThrustScale = 2.f;
			HoverThrust *= TurboHoverThrustScale;
		}

		ZThrust += HoverThrust;
	}

	float CurrentAccel = 0.f;
	float CurrentDecel = 0.f;
	if (bTurbo)
	{
		CurrentAccel = FMath::GetMappedRangeValueClamped(TurboAccelerationAltitudeRange, TurboAccelerationRange, CurrentAltitude);
		CurrentDecel = TurboDeceleration;
	}
	else
	{
		CurrentAccel = Acceleration;
		CurrentDecel = Deceleration;
	}

	// Apply various accelerations
	static float InvCoeffAirFriction = 3000.f;
	float const AirFrictionScalar = (InvCoeffAirFriction != 0) ? (Velocity.Size() / InvCoeffAirFriction) : 1.f;
	FVector const AntiVelocityDir = -(Velocity.GetSafeNormal());
	Velocity += AntiVelocityDir * CurrentDecel * DeltaTime * AirFrictionScalar;
	Velocity += ControlAcceleration * FMath::Abs(CurrentAccel) * DeltaTime;
	Velocity += FVector(0, 0, GetGravityZ() + ZThrust) * DeltaTime;

	ConsumeInputVector();

	LastControlAcceleration = ControlAcceleration;
}

// note: only dealing with yaw for now, since that's what we care about
void UHoverDroneMovementComponent::ApplyControlInputToRotation(float DeltaTime)
{
	FRotator Input = RotationInput;
	
	// adjust rot accel and clamps for zoom
	static float AssumedDefaultFOV = 90.f;		// the fov we tweaked for
	const APlayerController* const PC = PawnOwner ? Cast<APlayerController>(PawnOwner->GetController()) : nullptr;
	float const CurrentHFOV = (PC && PC->PlayerCameraManager) ? PC->PlayerCameraManager->GetFOVAngle() : AssumedDefaultFOV;
	float const AdjScalar = CurrentHFOV / AssumedDefaultFOV;
	float const AdjustedMaxYawRotSpeed = (bTurbo ? TurboMaxYawRotSpeed : MaxYawRotSpeed) * AdjScalar;
	float const AdjustedMaxPitchRotSpeed = (bTurbo ? TurboMaxPitchRotSpeed : MaxPitchRotSpeed) * AdjScalar;		// @todo: separate calc with VFOV?
	float const AdjustedRotAccel = (bTurbo ? TurboRotAcceleration : RotAcceleration) * AdjScalar;
	float const AdjustedRotDecel = (bTurbo ? TurboRotDeceleration : RotDeceleration) * AdjScalar;

	if (Input.IsZero())
	{
		// Decelerate towards zero!
		if (RotVelocity.Yaw != 0.f)
		{
			float const YawVelDelta = AdjustedRotDecel * DeltaTime;
			if (RotVelocity.Yaw > 0.f)
			{
				// don't overshoot past zero to the neg
				RotVelocity.Yaw = (RotVelocity.Yaw > YawVelDelta) ? (RotVelocity.Yaw - YawVelDelta) : 0.f;
			}
			else
			{
				// yaw velocity is neg
				// don't overshoot past zero to the pos
				RotVelocity.Yaw = (RotVelocity.Yaw < -YawVelDelta) ? (RotVelocity.Yaw + YawVelDelta) : 0.f;
			}
		}

		if (RotVelocity.Pitch != 0.f)
		{
			float const PitchVelDelta = AdjustedRotDecel * DeltaTime;
			if (RotVelocity.Pitch > 0.f)
			{
				RotVelocity.Pitch = (RotVelocity.Pitch > PitchVelDelta) ? (RotVelocity.Pitch - PitchVelDelta) : 0.f;
			}
			else
			{
				// Pitch velocity is neg
				RotVelocity.Pitch = (RotVelocity.Pitch < -PitchVelDelta) ? (RotVelocity.Pitch + PitchVelDelta) : 0.f;
			}
		}
	}

	// updating rotation to avoid clamping and avoid overshooting badly on long frames!
	// don't let the delta take us out of bounds.
	// note that if we're already out of bounds, we'll stay there

	float const MaxYawVelMag = FMath::Min(1.f, FMath::Abs(Input.Yaw)) * AdjustedMaxYawRotSpeed;
	float const MaxDeltaYawVel = FMath::Max(0.f, MaxYawVelMag - RotVelocity.Yaw);
	float const MinDeltaYawVel = FMath::Min(0.f, -(RotVelocity.Yaw + MaxYawVelMag));
	float const DeltaYaw = FMath::Clamp(Input.Yaw * AdjustedRotAccel * DeltaTime, MinDeltaYawVel, MaxDeltaYawVel);
	RotVelocity.Yaw += DeltaYaw;

	float const MaxPitchVelMag = FMath::Min(1.f, FMath::Abs(Input.Pitch)) * AdjustedMaxPitchRotSpeed;
	float const MaxDeltaPitchVel = FMath::Max(0.f, MaxPitchVelMag - RotVelocity.Pitch);
	float const MinDeltaPitchVel = FMath::Min(0.f, -(RotVelocity.Pitch + MaxPitchVelMag));
	float const DeltaPitch = FMath::Clamp(Input.Pitch * AdjustedRotAccel * DeltaTime, MinDeltaPitchVel, MaxDeltaPitchVel);
	RotVelocity.Pitch += DeltaPitch;
}

void UHoverDroneMovementComponent::AddRotationInput(FRotator NewRotInput)
{
	RotationInput += NewRotInput;
}

void UHoverDroneMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	if (bForceFacingLocation)
	{
 		ForceFacingInterpInPct += DeltaTime / ForceFacingInterpInTime;
 		ForceFacingInterpInPct = FMath::Clamp(ForceFacingInterpInPct, 0.f, 1.f);

		FRotator const OldRot = UpdatedComponent->GetComponentRotation();
		FVector const ToLoc = ForcedFacingLocation - PawnOwner->GetActorLocation();
		FMatrix const NewRotMat = FRotationMatrix::MakeFromXZ(ToLoc, FVector::UpVector);

		FRotator const GoalRot = NewRotMat.Rotator();

		FRotator FinalRot = FMath::Lerp(OldRot, GoalRot, ForceFacingInterpInPct);

		FHitResult Hit(1.f);
		SafeMoveUpdatedComponent(FVector::ZeroVector, FinalRot, false, Hit);

		// calc a rot velocity, which will be useful when force facing gets turned off
		RotVelocity = (UpdatedComponent->GetComponentRotation() - OldRot) * (1.f/DeltaTime);
	}
	else
	{
		float UnsimulatedTime = DeltaTime;
		while (UnsimulatedTime > KINDA_SMALL_NUMBER)
		{
			float const SimTime = ((MaxSimulationTimestep > 0.f) && (UnsimulatedTime > MaxSimulationTimestep))
				? FMath::Min(MaxSimulationTimestep, UnsimulatedTime * 0.5f)
				: UnsimulatedTime;			// all of it

			// simulate!

			AController const* Controller = PawnOwner->GetController();
			if (Controller && Controller->IsLocalPlayerController())
			{
				ApplyControlInputToRotation(SimTime);
			}

			FRotator RotDelta = RotVelocity * SimTime;

			// enforce pitch limits
			float const CurrentPitch = UpdatedComponent->GetComponentRotation().Pitch;
			float const MinDeltaPitch = MinPitch - CurrentPitch;
			float const MaxDeltaPitch = MaxPitch - CurrentPitch;
			float const OldPitch = RotDelta.Pitch;
			RotDelta.Pitch = FMath::Clamp(RotDelta.Pitch, MinDeltaPitch, MaxDeltaPitch);
			if (OldPitch != RotDelta.Pitch)
			{
				// if we got clamped, zero the pitch velocity
				RotVelocity.Pitch = 0.f;
			}

			if (!RotDelta.IsNearlyZero())
			{
				FRotator const NewRot = UpdatedComponent->GetComponentRotation() + RotDelta;

				FHitResult Hit(1.f);
				SafeMoveUpdatedComponent(FVector::ZeroVector, NewRot, false, Hit);
			}

			UnsimulatedTime -= SimTime;
		}
	}

	// cache altitude
	CurrentAltitude = MeasureAltitude(PawnOwner->GetActorLocation());

	// clear out any input, we've handled it (or ignored it)
	RotationInput = FRotator::ZeroRotator;
}

void UHoverDroneMovementComponent::OnTeleported()
{
	Super::OnTeleported();

	if (PawnOwner)
	{
		CurrentAltitude = MeasureAltitude(PawnOwner->GetActorLocation());
	}
}

void UHoverDroneMovementComponent::ForceFacing(FVector Location)
{
	bForceFacingLocation = true;
	ForcedFacingLocation = Location;
	ForceFacingInterpInPct = 0.f;
}

void UHoverDroneMovementComponent::StopForceFacing()
{
	bForceFacingLocation = false;
}

void UHoverDroneMovementComponent::SetMaintainHoverHeight(bool bShouldMaintainHeight)
{
	if (bShouldMaintainHeight != bMaintainHoverHeight)
	{
		bMaintainHoverHeight = bShouldMaintainHeight;
		DesiredHoverHeight = -1.f;		// signal this needs to be reestablished
	}
}
bool UHoverDroneMovementComponent::GetMaintainHoverHeight() const
{
	return bMaintainHoverHeight;
}

void UHoverDroneMovementComponent::ResetDesiredAltitude()
{
	DesiredHoverHeight = -1.f;
}

//#include "DrawDebugHelpers.h"
float UHoverDroneMovementComponent::MeasureAltitude(FVector Location) const
{
	FCollisionQueryParams TraceParams(NAME_None, FCollisionQueryParams::GetUnknownStatId(), true, PawnOwner);
	FHitResult Hit;

	FVector const TraceStart = Location;
	FVector const TraceEnd = TraceStart - FVector::UpVector * 100000.f;
	bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_WorldStatic, TraceParams);
	if (bHit)
	{
//		DrawDebugSphere(PawnOwner->GetWorld(), Hit.ImpactPoint, 30.f, 10, FColor::Yellow, false, 0.5f);
		return (Hit.ImpactPoint - TraceStart).Size();
	}

	return 0.f;
}
