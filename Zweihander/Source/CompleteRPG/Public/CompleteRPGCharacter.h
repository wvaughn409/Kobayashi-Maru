// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "AITypes.h"
#include "GameFramework/Character.h"
#include "Navigation/CrowdAgentInterface.h"
#include "CompleteRPGCharacter.generated.h"

UCLASS(config=Game)
class ACompleteRPGCharacter : public ACharacter, public ICrowdAgentInterface
{
	GENERATED_UCLASS_BODY()

private:
	/** Pawn mesh: 1st person view (arms; seen only by self) */
	UPROPERTY(VisibleDefaultsOnly, Category=Mesh)
	class USkeletalMeshComponent* Mesh1P;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FirstPersonCameraComponent;
public:

	/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseTurnRate;

	/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category=Camera)
	float BaseLookUpRate;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector GunOffset;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class ACompleteRPGProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	class USoundBase* FireSound;

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	class UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	float SprintSpeed;

	/** This is the default walk speed set in the movement component */
	float CachedWalkSpeed;

protected:
	// Begin AActor interface
	virtual void Tick( float DeltaSeconds ) override;
	virtual void PostInitializeComponents() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// End AActor interface

	/** Handler for a touch input beginning. */
	void TouchStarted(const ETouchIndex::Type FingerIndex, const FVector Location);

	/** Handles moving forward/backward */
	void MoveForward(float Val);

	/** Handles stafing movement, left and right */
	void MoveRight(float Val);

	/**
	 * Called via input to turn at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void TurnAtRate(float Rate);

	/**
	 * Called via input to turn look up/down at a given rate.
	 * @param Rate	This is a normalized rate, i.e. 1.0 means 100% of desired turn rate
	 */
	void LookUpAtRate(float Rate);

	void OnFlyPressed();
	void LookUp( float Value );
	void Turn( float Value );
	void OnSprintPressed();
	void OnSprintReleased();

	virtual void Jump() override;
	virtual void StopJumping() override;

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	// End of APawn interface

	// ICrowdAgentInterface interface
	virtual FVector GetCrowdAgentLocation() const override { return GetActorLocation(); }
	virtual FVector GetCrowdAgentVelocity() const override { return GetVelocity(); }
	virtual void GetCrowdAgentCollisions(float& CylinderRadius, float& CylinderHalfHeight) const override { GetCapsuleComponent()->GetScaledCapsuleSize(CylinderRadius, CylinderHalfHeight); }
	virtual float GetCrowdAgentMaxSpeed() const override { return GetCharacterMovement()->GetMaxSpeed(); }
	// End of ICrowdAgentInterface interface

	// Flying Data
	/** How quickly forward speed changes */
	UPROPERTY(Category=Flight, EditAnywhere)
	float Acceleration;

	/** How quickly we reach max acceleration */
	UPROPERTY(Category = Flight, EditAnywhere)
	float TimeToMaxAcceleration;

	/** How quickly pawn can steer */
	UPROPERTY(Category=Flight, EditAnywhere)
	float TurnSpeed;

	/** Max forward speed */
	UPROPERTY(Category=Flight, EditAnywhere)
	float MaxSpeed;

	/** Acceleration applied vertically (+Z locally) when traveling at SpeedForMaxLiftAcceleration */
	UPROPERTY(Category=Flight, EditAnywhere)
	float LiftAcceleration;

	/** Speed at which max LiftAcceleration is applied */
	UPROPERTY(Category=Flight, EditAnywhere)
	float SpeedForMaxLiftAcceleration;

	/** Current yaw speed */
	UPROPERTY(Transient, BlueprintReadOnly)
	float CurrentYawSpeed;

	/** Current pitch speed */
	UPROPERTY(Transient, BlueprintReadOnly)
	float CurrentPitchSpeed;

	/** Current roll speed */
	UPROPERTY(Transient, BlueprintReadOnly)
	float CurrentRollSpeed;

	UPROPERTY(Transient, BlueprintReadOnly)
	FVector CurrentVelocity;

	UPROPERTY(Transient, BlueprintReadOnly)
	float AccelerationTime;

public:
	/** Returns Mesh1P subobject **/
	FORCEINLINE class USkeletalMeshComponent* GetMesh1P() const { return Mesh1P; }
	/** Returns FirstPersonCameraComponent subobject **/
	FORCEINLINE class UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }
	/** Returns Foliage overlap component subobject */
	FORCEINLINE class UCapsuleComponent* GetFoliageOverlapCapsule() const { return FoliageOverlapComponent; };

private:
	UPROPERTY()
	UCapsuleComponent* FoliageOverlapComponent;

	void NotifyProcessedInput();
};


