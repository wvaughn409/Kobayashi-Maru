// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGCharacter.h"
#include "CompleteRPGPC.h"
#include "CompleteRPGProjectile.h"
#include "Animation/AnimInstance.h"
#include "Navigation/CrowdManager.h"

//////////////////////////////////////////////////////////////////////////
// ACompleteRPGCharacter

ACompleteRPGCharacter::ACompleteRPGCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this, TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(0, 0, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Default offset from the character location for projectiles to spawn
	GunOffset = FVector(100.0f, 30.0f, 10.0f);

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = ObjectInitializer.CreateDefaultSubobject<USkeletalMeshComponent>(this, TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->SetRelativeLocation(FVector(0.f, 0.f, -150.f));
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;

	Acceleration = 500.0f;
	TimeToMaxAcceleration = 2.0f;
	TurnSpeed = 50.f;
	MaxSpeed = 400000.f;
	CurrentVelocity = FVector::ZeroVector;
	LiftAcceleration = 400.0f;
	SpeedForMaxLiftAcceleration = 5000.0f;

	FoliageOverlapComponent = ObjectInitializer.CreateDefaultSubobject<UCapsuleComponent>(this, TEXT("FoliageOverlapCapsule0"));
	FoliageOverlapComponent->SetCapsuleSize(859.f, 3136.f);
	FoliageOverlapComponent->SetRelativeLocation(FVector(0.f, 0.f, -710.f));
	FoliageOverlapComponent->SetupAttachment(GetCapsuleComponent());
	FoliageOverlapComponent->SetGenerateOverlapEvents(false);

	CachedWalkSpeed = GetCharacterMovement()->MaxWalkSpeed;
	SprintSpeed = 1000.f;

	// Note: The ProjectileClass and the skeletal mesh/anim blueprints for Mesh1P are set in the
	// derived blueprint asset named MyCharacter (to avoid direct content references in C++)
}

//////////////////////////////////////////////////////////////////////////
// Input

void ACompleteRPGCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACompleteRPGCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACompleteRPGCharacter::StopJumping);
	
	PlayerInputComponent->BindAxis("MoveForward", this, &ACompleteRPGCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACompleteRPGCharacter::MoveRight);
	
	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &ACompleteRPGCharacter::Turn);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACompleteRPGCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &ACompleteRPGCharacter::LookUp);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACompleteRPGCharacter::LookUpAtRate);

	PlayerInputComponent->BindAction("Fly", IE_Pressed, this, &ACompleteRPGCharacter::OnFlyPressed);

	PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ACompleteRPGCharacter::OnSprintPressed);
	PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ACompleteRPGCharacter::OnSprintReleased);

}

void ACompleteRPGCharacter::Jump()
{
	Super::Jump();
	NotifyProcessedInput();
}

void ACompleteRPGCharacter::StopJumping()
{
	Super::StopJumping();
	NotifyProcessedInput();
}

void ACompleteRPGCharacter::Tick(float DeltaSeconds)
{
	if( GetCharacterMovement()->IsFlying() )
	{
		if (!FMath::IsNearlyEqual(InputComponent->GetAxisValue("MoveForward"), 0.0f) || !FMath::IsNearlyEqual(InputComponent->GetAxisValue("MoveRight"), 0.0f))
		{
			AccelerationTime = FMath::Min(AccelerationTime + DeltaSeconds, TimeToMaxAcceleration);
		}
		else
		{
			AccelerationTime = FMath::Max(AccelerationTime - DeltaSeconds, 0.0f);
		}

		FVector LastPosition = GetActorLocation();
		FVector WorldMove = CurrentVelocity;

		// Move plan forwards (with sweep so we stop when we collide with things)
		FHitResult HitResult;
		AddActorWorldOffset(WorldMove, true, &HitResult);

		float HitMultiplier = 1.0f;
		if(HitResult.bBlockingHit)
		{
			const int32 MaxIterations = 10;
			int32 Iteration = 0;

			while(HitResult.bBlockingHit && Iteration < MaxIterations)
			{
				// remove remaining velocity in direction of normal & re-apply move
				FVector PositionAtEnd = HitResult.TraceStart + ((HitResult.TraceEnd - HitResult.TraceStart) * HitResult.Time);
				FVector RemainingWorldMove = (HitResult.TraceEnd - HitResult.TraceStart) * (1.0f - HitResult.Time);
				FVector ProjectedMove = (HitResult.ImpactNormal * FVector::DotProduct(RemainingWorldMove, -HitResult.ImpactNormal) + KINDA_SMALL_NUMBER);
				WorldMove = (HitResult.TraceEnd + ProjectedMove) - PositionAtEnd;
				
				if(WorldMove.SizeSquared() < SMALL_NUMBER)
				{
					break;
				}

				AddActorWorldOffset(WorldMove, true, &HitResult);

				Iteration++;
			}

			HitMultiplier = 0.5f;
		}

		CurrentVelocity = (GetActorLocation() - LastPosition) * HitMultiplier;

		// Calculate change in rotation this frame
		FRotator DeltaRotation(0, 0, 0);
		DeltaRotation.Pitch = CurrentPitchSpeed * DeltaSeconds;
		DeltaRotation.Yaw = CurrentYawSpeed * DeltaSeconds;
		DeltaRotation.Roll = CurrentRollSpeed * DeltaSeconds;

		// Rotate plane
		AddActorLocalRotation(DeltaRotation);
	}

	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void ACompleteRPGCharacter::Turn( float Value )
{
	if( GetCharacterMovement()->IsFlying() )
	{
		// Target yaw speed is based on input
		float TargetYawSpeed = (Value * TurnSpeed);

		// Smoothly interpolate to target yaw speed
		CurrentYawSpeed = FMath::FInterpTo(CurrentYawSpeed, TargetYawSpeed, GetWorld()->GetDeltaSeconds(), 2.f);

		// Is there any left/right input?
		const bool bIsTurning = FMath::Abs(Value) > 0.2f;

		// If turning, yaw value is used to influence roll
		// If not turning, roll to reverse current roll value
		float TargetRollSpeed = bIsTurning ? (CurrentYawSpeed * 0.25f) : (FirstPersonCameraComponent->GetComponentToWorld().GetRotation().Rotator().Roll * -2.f);

		// Smoothly interpolate roll speed
		CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
	}
	else
	{
		// add movement in that direction
		AddControllerYawInput(Value);
	}

	if (Value != 0.f)
	{
		NotifyProcessedInput();
	}
}

void ACompleteRPGCharacter::LookUp( float Value )
{
	if(GetCharacterMovement()->IsFlying())
	{
		// Target pitch speed is based in input
		float TargetPitchSpeed = (Value * TurnSpeed * -1.f);

		// When steering, we decrease pitch slightly
		TargetPitchSpeed += (FMath::Abs(CurrentYawSpeed) * -0.2f);

		// Smoothly interpolate to target pitch speed
		CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
	}
	else
	{
		// add movement in that direction
		AddControllerPitchInput(Value);
	}

	if (Value != 0.f)
	{
		NotifyProcessedInput();
	}
}

void ACompleteRPGCharacter::MoveForward(float Value)
{
	if( GetCharacterMovement()->IsFlying() )
	{
		float AccelerationScale = 1.0f;
		if (TimeToMaxAcceleration > 0.0f)
		{
			AccelerationScale = AccelerationTime / TimeToMaxAcceleration;
		}

		// Is there no input?
		bool bHasInput = !FMath::IsNearlyEqual(Value, 0.f);
		// If input is not held down, reduce speed
		FVector LocalVelocity = FirstPersonCameraComponent->GetComponentTransform().Inverse().TransformVector(CurrentVelocity);
		FVector CurrentLocalInputAcceleration = bHasInput ? (Value * Acceleration * AccelerationScale * FVector(1.0f, 0.0f, 0.0f)) : (-0.5f * Acceleration * LocalVelocity.GetSafeNormal()).GetClampedToMaxSize(CurrentVelocity.Size());

		// add some lift depending on how fast we are going
		if(bHasInput)
		{
			CurrentLocalInputAcceleration += FVector(0.0f, 0.0f, LiftAcceleration) * (FMath::Min(LocalVelocity.Size2D(), SpeedForMaxLiftAcceleration) / SpeedForMaxLiftAcceleration) * FMath::Max(0.0f, FVector::DotProduct(CurrentVelocity.GetSafeNormal(), GetActorForwardVector()));
		}

		// calc new velocity
		CurrentVelocity += (GetWorld()->GetDeltaSeconds() * FirstPersonCameraComponent->GetComponentTransform().TransformVector(CurrentLocalInputAcceleration));
		CurrentVelocity = CurrentVelocity.GetClampedToMaxSize(MaxSpeed);
	}
	else if(Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}

	if (Value != 0.f)
	{
		NotifyProcessedInput();
	}
}

void ACompleteRPGCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		if( GetCharacterMovement()->IsFlying() )
		{
			float AccelerationScale = 1.0f;
			if (TimeToMaxAcceleration > 0.0f)
			{
				AccelerationScale = AccelerationTime / TimeToMaxAcceleration;
			}

			// Is there no input?
			bool bHasInput = !FMath::IsNearlyEqual(Value, 0.f);
			// If input is not held down, reduce speed
			FVector CurrentLocalInputAcceleration = bHasInput ? (Value * Acceleration * AccelerationScale * FVector(0.0f, 1.0f, 0.0f)) : FVector::ZeroVector;
			// calc new velocity
			CurrentVelocity += (GetWorld()->GetDeltaSeconds() * FirstPersonCameraComponent->GetComponentTransform().TransformVector(CurrentLocalInputAcceleration));
			CurrentVelocity = CurrentVelocity.GetClampedToMaxSize(MaxSpeed);
		}
		else
		{
			// add movement in that direction
			AddMovementInput(GetActorRightVector(), Value);
		}

		NotifyProcessedInput();
	}
}

void ACompleteRPGCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());

	if (Rate != 0.f)
	{
		NotifyProcessedInput();
	}
}

void ACompleteRPGCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());

	if (Rate != 0.f)
	{
		NotifyProcessedInput();
	}
}

void ACompleteRPGCharacter::OnFlyPressed()
{
	if( GetCharacterMovement()->IsFlying() )
	{
		GetCharacterMovement()->SetMovementMode( MOVE_Falling );
		FRotator CameraRotation = FirstPersonCameraComponent->GetComponentRotation();
		CameraRotation.Roll = 0.0f;
		GetController()->SetControlRotation(CameraRotation);
		FirstPersonCameraComponent->bUsePawnControlRotation = true;

		bUseControllerRotationPitch = false;
		bUseControllerRotationRoll = false;
		bUseControllerRotationYaw = true;

		CurrentPitchSpeed = 0.0f;
		CurrentRollSpeed = 0.0f;
		CurrentYawSpeed = 0.0f;
	}
	else
	{
		FirstPersonCameraComponent->bUsePawnControlRotation = false;
		GetCharacterMovement()->SetMovementMode( MOVE_Flying );
		CurrentVelocity = FVector::ZeroVector;

		bUseControllerRotationPitch = false;
		bUseControllerRotationRoll = false;
		bUseControllerRotationYaw = false;
	}

	NotifyProcessedInput();
}

void ACompleteRPGCharacter::OnSprintPressed()
{
	GetCharacterMovement()->MaxWalkSpeed = SprintSpeed;
}
void ACompleteRPGCharacter::OnSprintReleased()
{
	GetCharacterMovement()->MaxWalkSpeed = CachedWalkSpeed;
}

void ACompleteRPGCharacter::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	if(!IsPendingKill())
	{
		UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);
		if(CrowdManager)
		{
			CrowdManager->RegisterAgent(this);
		}
	}
}

void ACompleteRPGCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	UCrowdManager* CrowdManager = UCrowdManager::GetCurrent(this);
	if(CrowdManager)
	{
		CrowdManager->UnregisterAgent(this);
	}
}

void ACompleteRPGCharacter::NotifyProcessedInput()
{
	ACompleteRPGPC* const PC = Cast<ACompleteRPGPC>(GetController());
	if (PC)
	{
		PC->bProcessedInputThisTick = true;
	}
}


