// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/FloatingPawnMovement.h"
#include "HoverDroneMovementComponent.generated.h"

UCLASS()
class UHoverDroneMovementComponent : public UFloatingPawnMovement
{
	GENERATED_BODY()

public:
	/** ctor */
	UHoverDroneMovementComponent(const FObjectInitializer& ObjectInitializer);

	// UActorComponent interface
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;

	// CharacterMovementComponent interface
	virtual void OnTeleported() override;

	/** Mag is between 0 and 1.0 */
	FVector LastControlAcceleration;

	void AddRotationInput(FRotator RotInput);

	void ForceFacing(FVector Location);
	void StopForceFacing();

	/** Auto-altitude controls */
	void SetMaintainHoverHeight(bool bShouldMaintainHeight);
	bool GetMaintainHoverHeight() const;
	void ResetDesiredAltitude();

	/** Returns height above the ground. */
	float GetAltitude() const { return CurrentAltitude; };

	/** Turbo controls */
	void SetTurbo(bool bNewTurbo) { bTurbo = bNewTurbo; };
	bool IsTurbo() { return bTurbo; };

protected:

	FRotator RotationInput;
	FRotator RotVelocity;

	/** Rotational acceleration when turning. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float RotAcceleration;

	/** Rotational deceleration when not turning. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float RotDeceleration;

	/** Maximum rotational speed, pitch */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float MaxPitchRotSpeed;

	/** Maximum rotational speed, yaw */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float MaxYawRotSpeed;

	/** Rotational acceleration when turning, while in turbo mode. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float TurboRotAcceleration;

	/** Rotational deceleration when not turning, while in turbo mode. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float TurboRotDeceleration;

	/** Maximum rotational speed, pitch, while in turbo mode. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float TurboMaxPitchRotSpeed;

	/** Maximum rotational speed, yaw, while in turbo mode. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float TurboMaxYawRotSpeed;

	/** Range of valid accelerations (mapped to TurboAccelerationAltitudeRange) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	FVector2D TurboAccelerationRange;

	/** Used to map Altitude to Acceleration (using TurboAccelerationRange) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	FVector2D TurboAccelerationAltitudeRange;

	/** Linear deceleration while in turbo mode. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDroneMovement)
	float TurboDeceleration;

	virtual void ApplyControlInputToVelocity(float DeltaTime) override;
	void ApplyControlInputToRotation(float DeltaTime);

private:

	/** Max timestep to simulate in one go. Frames longer than this will do multiple simulations. */
	float MaxSimulationTimestep;

	/** Valid Pitch range */
	float MinPitch;
	float MaxPitch;

	float CurrentAltitude;

	bool bMaintainHoverHeight;
	float DesiredHoverHeight;
	float MinHoverHeight;
	float MaintainHoverHeightTolerance;
	float MaintainHoverHeightPredictionTime;

	bool bForceFacingLocation;
	FVector ForcedFacingLocation;

	float ForceFacingInterpInPct;
	float ForceFacingInterpInTime;

	bool bTurbo;

	float MeasureAltitude(FVector Location) const;
	void ClampControlToWorldBounds(FVector& ControlAcceleration);
};



