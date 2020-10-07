// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGPC.h"
#include "HoverDronePawn.h"
#include "HoverDroneMovementComponent.h"
#include "GameFramework/PlayerInput.h"
#include "Curves/CurveVector.h"

AHoverDronePawn::AHoverDronePawn(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer.SetDefaultSubobjectClass<UHoverDroneMovementComponent>(ADefaultPawn::MovementComponentName))
{
	SetCanBeDamaged(false);
	bAddDefaultMovementBindings = false;

	MaxAccelToGravRatio = 0.2f;
	DroneTiltInterpSpeed_Accel = 1.f;
	DroneTiltInterpSpeed_Decel = 2.f;

	FOVInterpSpeed = 7.f;
	MaxFOV = 160.f;
	MinFOV = 5.f;

	ZoomRate = 30.f;

	FoliageOverlapComponent = ObjectInitializer.CreateDefaultSubobject<UCapsuleComponent>(this, TEXT("FoliageOverlapCapsule0"));
	FoliageOverlapComponent->SetCapsuleSize(859.f, 3136.f);
	FoliageOverlapComponent->SetRelativeLocation(FVector(0.f, 0.f, -710.f));
	FoliageOverlapComponent->SetupAttachment(GetCollisionComponent());

	bAutoFocus = true;
	CameraApertureFStop = 4.f;
	AutoFocusDistance = 1000.f;
	AutoFocusInterpSpeed = 12.f;

	FoliageOverlapComponent->SetGenerateOverlapEvents(false);
}

void AHoverDronePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("HoverDrone_MoveForward", this, &AHoverDronePawn::MoveForward);
	PlayerInputComponent->BindAxis("HoverDrone_MoveRight", this, &AHoverDronePawn::MoveRight);
	PlayerInputComponent->BindAxis("HoverDrone_SlideUp_World", this, &AHoverDronePawn::MoveUp);
	PlayerInputComponent->BindAxis("HoverDrone_Turn", this, &AHoverDronePawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("HoverDrone_LookUp", this, &AHoverDronePawn::AddControllerPitchInput);
	
	PlayerInputComponent->BindAxis("HoverDrone_FOV_ZoomIn", this, &AHoverDronePawn::ZoomIn);

	PlayerInputComponent->BindAction("HoverDrone_ToggleFixedHeight", IE_Pressed, this, &AHoverDronePawn::ToggleFixedHeight);
	PlayerInputComponent->BindAction("HoverDrone_Lookat", IE_Pressed, this, &AHoverDronePawn::BeginLookat);
	PlayerInputComponent->BindAction("HoverDrone_Lookat", IE_Released, this, &AHoverDronePawn::EndLookat);

	PlayerInputComponent->BindAction("TurboHover", IE_Pressed, this, &AHoverDronePawn::StartTurboHover);
	PlayerInputComponent->BindAction("TurboHover", IE_Released, this, &AHoverDronePawn::StopTurboHover);
}

void AHoverDronePawn::MoveForward(float Val)
{
	if (Val != 0.f)
	{
		UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
		if (HoverMoveComponent && HoverMoveComponent->IsTurbo())
		{
			// in turbo, floor it forward or backward
			Val = (Val > 0.f) ? 1.f : -1.f;
		}

		if (Controller)
		{
			FRotator const ControlSpaceRot = Controller->GetControlRotation();

			FVector WorldDir = FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::X);
			WorldDir.Z = 0.f;		// constrain right/forward movement to XY plane
			if (WorldDir.IsZero() == false)
			{
				// normalize so sliding speed isn't pitch-dependent
				WorldDir.Normalize();

				// apply function to Val for finer analog control
				float MassagedVal = FMath::Square(Val);
				MassagedVal = (Val < 0) ? -MassagedVal : MassagedVal;		// ensure correct sign

				// transform to world space and add it
				AddMovementInput(WorldDir, MassagedVal);
			}
		}

		NotifyProcessedInput();
	}
}

void AHoverDronePawn::MoveRight(float Val)
{
	if (Val != 0.f)
	{
		UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
		if (HoverMoveComponent && HoverMoveComponent->IsTurbo())
		{
			// in turbo, treat strafe as a toned-down turn
			AddControllerYawInput(Val);
		}
		else if (Controller)
		{
			FRotator const ControlSpaceRot = Controller->GetControlRotation();

			// transform to world space and add it
			FVector WorldDir = FRotationMatrix(ControlSpaceRot).GetScaledAxis(EAxis::Y);
			WorldDir.Z = 0.f;		// constrain right/forward movement to XY plane
			if (WorldDir.IsZero() == false)
			{
				// normalize so sliding speed isn't pitch-dependent
				WorldDir.Normalize();

				// apply function to Val for finer analog control
				float MassagedVal = FMath::Square(Val);
				MassagedVal = (Val < 0) ? -MassagedVal : MassagedVal;		// ensure correct sign

				// transform to world space and add it
				AddMovementInput(WorldDir, MassagedVal);
			}
		}

		NotifyProcessedInput();
	}
}

void AHoverDronePawn::MoveUp(float Val)
{
	// apply function to Val for finer analog control
	static float Exp = 3.f;
	float MassagedVal = FMath::Pow(FMath::Abs(Val), Exp);
	MassagedVal = (Val < 0) ? -MassagedVal : MassagedVal;		// ensure correct sign

	if (MassagedVal != 0.f)
	{
		AddMovementInput(FVector::UpVector, MassagedVal);

		NotifyProcessedInput();
	}
}

void AHoverDronePawn::AddControllerYawInput(float Val)
{
	Super::AddControllerYawInput(Val);

	if (Val != 0.f)
	{
		NotifyProcessedInput();
	}
}

void AHoverDronePawn::AddControllerPitchInput(float Val)
{
	Super::AddControllerPitchInput(Val);

	if (Val != 0.f)
	{
		NotifyProcessedInput();
	}
}

void AHoverDronePawn::ZoomIn(float Val)
{
	// adjust goal fov.  interpolation in CalcCamera will make actual value chase this value.
	GoalFOV -= ZoomRate * GetWorld()->GetDeltaSeconds() * Val;
	GoalFOV = FMath::Clamp(GoalFOV, MinFOV, MaxFOV);

	if (Val != 0.f)
	{
		NotifyProcessedInput();
	}
}

FRotator AHoverDronePawn::GetViewRotation() const
{
	// pawn rotation dictates camera rotation
	float const Pitch = GetActorRotation().Pitch;
	float const Yaw = GetActorRotation().Yaw;
	return FRotator(Pitch, Yaw, 0.f);
}

void AHoverDronePawn::CalcCamera(float DeltaTime, FMinimalViewInfo& OutResult)
{
	// start with first person
	GetActorEyesViewPoint(OutResult.Location, OutResult.Rotation);

	// now apply a tilt to simulate motion
	{
		UHoverDroneMovementComponent const* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
		if (HoverMoveComponent)
		{
			FMatrix const OldCamToWorld = FRotationMatrix(OutResult.Rotation);
			FMatrix const UntiltedDroneToWorld = FRotationMatrix::MakeFromZX(FVector::UpVector, OldCamToWorld.GetUnitAxis(EAxis::X));

			FMatrix const OldCamToDrone = OldCamToWorld * UntiltedDroneToWorld.Inverse();

			FVector const TiltedUpVector = (HoverMoveComponent->LastControlAcceleration * MaxAccelToGravRatio + FVector::UpVector).GetSafeNormal();
			FMatrix TiltedDroneToWorld = FRotationMatrix::MakeFromZX(TiltedUpVector, UntiltedDroneToWorld.GetUnitAxis(EAxis::X));

			// interpolate drone tilt to smooth it out
			// only interpolating pitch and roll though!
			FRotator GoalTiltedDroneRot = TiltedDroneToWorld.Rotator();
			GoalTiltedDroneRot.Yaw = 0.f;
			float const InterpSpeed = GoalTiltedDroneRot.IsZero() ? DroneTiltInterpSpeed_Decel : DroneTiltInterpSpeed_Accel;
			FRotator InterpedTiltedDroneRot = FMath::RInterpTo(LastTiltedDroneRot, GoalTiltedDroneRot, DeltaTime, InterpSpeed);
			LastTiltedDroneRot = InterpedTiltedDroneRot;
			InterpedTiltedDroneRot.Yaw = OutResult.Rotation.Yaw; // keep original Yaw
			TiltedDroneToWorld = FRotationMatrix(InterpedTiltedDroneRot);

			FMatrix const NewCamToWorld = OldCamToDrone * TiltedDroneToWorld;

			OutResult.Rotation = NewCamToWorld.Rotator();
		}
	}

	// and also apply FOV settings for zoom
	CurrentFOV = FMath::FInterpTo(CurrentFOV, GoalFOV, DeltaTime, FOVInterpSpeed);
	CurrentFOV = FMath::Clamp(CurrentFOV, MinFOV, MaxFOV);
	OutResult.FOV = CurrentFOV;

	UpdateAutoFocus(OutResult, DeltaTime);

	// Update fringe based on FOV
	UpdateSceneFringe(OutResult);
}

void AHoverDronePawn::UpdateAutoFocus(FMinimalViewInfo& OutPOV, float DeltaTime)
{
	if (bAutoFocus)
	{
		// trace to get depth at center of screen
		FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(UpdateAutoFocus), true, this);
		FHitResult Hit;

		static float TraceDist = 1000000.f;
		FVector const TraceStart = OutPOV.Location;
		FVector const TraceEnd = TraceStart + OutPOV.Rotation.Vector() * TraceDist;
		bool const bHit = GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_WorldStatic, TraceParams);
		float MeasuredDistance = bHit ? (TraceStart - Hit.ImpactPoint).Size() : TraceDist;

		// make sure it's sane
		static float MinFocusDistance = 40.f;
		MeasuredDistance = FMath::Max(MeasuredDistance, MinFocusDistance);

		AutoFocusDistance = FMath::FInterpTo(AutoFocusDistance, MeasuredDistance, DeltaTime, AutoFocusInterpSpeed);

		OutPOV.PostProcessBlendWeight = 1.f;
		OutPOV.PostProcessSettings.bOverride_DepthOfFieldFstop = true;
		OutPOV.PostProcessSettings.DepthOfFieldFstop = CameraApertureFStop;

		OutPOV.PostProcessSettings.bOverride_DepthOfFieldFocalDistance = true;
		OutPOV.PostProcessSettings.DepthOfFieldFocalDistance = AutoFocusDistance;
	}
	else
	{
		OutPOV.PostProcessSettings.bOverride_DepthOfFieldFstop = false;
		OutPOV.PostProcessSettings.bOverride_DepthOfFieldFocalDistance = false;
	}
}

void AHoverDronePawn::UpdateSceneFringe(FMinimalViewInfo& OutPOV)
{
	if(ScreenFringeFOVCurve != nullptr)
	{
		// Evaluate curve to get intensity and saturation values for current FOV
		const FVector FringeParams = ScreenFringeFOVCurve->GetVectorValue(CurrentFOV);

		OutPOV.PostProcessSettings.bOverride_SceneFringeIntensity = true;
		OutPOV.PostProcessSettings.SceneFringeIntensity = FMath::Clamp(FringeParams.X, 0.f, 5.f);
	}
	else
	{
		OutPOV.PostProcessSettings.bOverride_SceneFringeIntensity = false;
	}
}

void AHoverDronePawn::PossessedBy(AController* NewController)
{
	// copy camera settings for a smooth transition
	ACompleteRPGPC* const PC = Cast<ACompleteRPGPC>(NewController);
	if (PC)
	{
		if (PC->PlayerCameraManager)
		{
			CurrentFOV = PC->PlayerCameraManager->GetFOVAngle();
			GoalFOV = CurrentFOV;
		}
	}
}

void AHoverDronePawn::BeginLookat()
{
	// do a trace to see what we're looking at and save it
	APlayerController* const PC = Cast<APlayerController>(Controller);
	if (PC && PC->PlayerCameraManager)
	{
		FVector CamLoc;
		FRotator CamRot;
		GetActorEyesViewPoint(CamLoc, CamRot);

		FCollisionQueryParams TraceParams(NAME_None, FCollisionQueryParams::GetUnknownStatId(), true, this);
		FHitResult Hit;

		FVector TraceStart = CamLoc;
		FVector TraceEnd = TraceStart + CamRot.Vector() * 100000.f;
		bool bHit = GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_WorldStatic, TraceParams);
		if (bHit)
		{
			UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
			if (HoverMoveComponent)
			{
				HoverMoveComponent->ForceFacing(Hit.ImpactPoint);
			}
		}
	}
	NotifyProcessedInput();
}

void AHoverDronePawn::EndLookat()
{
	UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
	if (HoverMoveComponent)
	{
		HoverMoveComponent->StopForceFacing();
	}
	NotifyProcessedInput();
}

void AHoverDronePawn::ToggleFixedHeight()
{
	UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
	if (HoverMoveComponent)
	{
		HoverMoveComponent->SetMaintainHoverHeight( !HoverMoveComponent->GetMaintainHoverHeight() );
	}

	NotifyProcessedInput();
}

float AHoverDronePawn::GetAltitude() const
{
	UHoverDroneMovementComponent const* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
	if (HoverMoveComponent)
	{
		return HoverMoveComponent->GetAltitude();
	}

	return 0.f;
}

bool AHoverDronePawn::IsMaintainingConstantAltitude() const
{
	UHoverDroneMovementComponent const* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
	if (HoverMoveComponent)
	{
		return HoverMoveComponent->GetMaintainHoverHeight();
	}

	return false;
}


void AHoverDronePawn::StartTurboHover()
{
	UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
	if (HoverMoveComponent)
	{
		HoverMoveComponent->SetTurbo(true);
	}

	NotifyProcessedInput();
}

void AHoverDronePawn::StopTurboHover()
{
	UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(GetMovementComponent());
	if (HoverMoveComponent)
	{
		HoverMoveComponent->SetTurbo(false);
	}

	NotifyProcessedInput();
}

void AHoverDronePawn::NotifyProcessedInput()
{
	ACompleteRPGPC* const PC = Cast<ACompleteRPGPC>(GetController());
	if (PC)
	{
		PC->bProcessedInputThisTick = true;
	}
}



