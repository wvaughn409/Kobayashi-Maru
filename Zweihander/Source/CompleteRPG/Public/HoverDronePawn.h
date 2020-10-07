// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GameFramework/DefaultPawn.h"
#include "HoverDronePawn.generated.h"

UCLASS()
class AHoverDronePawn : public ADefaultPawn
{
	GENERATED_BODY()

public:
	/** ctor */
	AHoverDronePawn(const FObjectInitializer& ObjectInitializer);

	// APawn interface
	virtual FRotator GetViewRotation() const override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	/** Custom camera. */
	virtual void CalcCamera(float DeltaTime, FMinimalViewInfo& OutResult) override;

	/** Returns drone's current height above the ground. */
	UFUNCTION(BlueprintCallable, Category=HoverDrone)
	float GetAltitude() const;

	/** Returns true if this drone has auto-altitude on. */
	UFUNCTION(BlueprintCallable, Category=HoverDrone)
	bool IsMaintainingConstantAltitude() const;

	/** Returns the drone's capsules used for foliage overlap queries (for environmental audio) */
	FORCEINLINE class UCapsuleComponent* GetFoliageOverlapCapsule() const { return FoliageOverlapComponent; };

protected:

	// ratio of mag(FullHorizontalThrust) to mag(FullVerticalThrust)
	// we only care about direction, so absolute thrust magnitudes don't matter, only the ratio between them
	/** Controls how far to tilt based on acceleration. Higher is more tilt. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDrone)
	float MaxAccelToGravRatio;

	/** How quickly/aggressively to interp into the tilted position. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDrone)
	float DroneTiltInterpSpeed_Accel;

	/** How quickly/aggressively to interp back to neutral when decelerating */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDrone)
	float DroneTiltInterpSpeed_Decel;

	/** How fast to zoom, in FOV degrees per sec. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDrone)
	float ZoomRate;

	/** How fast to interpolate FOV (for smoothness). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDrone)
	float FOVInterpSpeed;

	/** Max FOV for the camera. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDrone)
	float MaxFOV;

	/** Min FOV for the camera. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = HoverDrone)
	float MinFOV;

	/** True to turn on depth of field and auto focusing, false otherwise. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AutoFocus)
	bool bAutoFocus;

	/** Controls how quickly the focal distance converges on the depth at the center of the screen. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AutoFocus)
	float AutoFocusInterpSpeed;

	/** When autofocus is on, 1/Fstop for the camera. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = AutoFocus)
	float CameraApertureFStop;

	/** Curve that controls screen fringe intensity as a function of fov. X is intensity, Y is saturation*/
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = ScreenFringe)
	class UCurveVector* ScreenFringeFOVCurve;
	
private:

	/** Movement input handlers */
	virtual void MoveForward(float Val) override;
	virtual void MoveRight(float Val) override;
	void MoveUp(float Val);
	virtual void AddControllerPitchInput(float Val) override;
	virtual void AddControllerYawInput(float Val) override;

	// override to ignore base class bindings
	virtual void MoveUp_World(float Val) override {};

	/** Input handler for zooming */
	void ZoomIn(float Val);

	/** Input handler for lookat functionality */
	void BeginLookat();
	void EndLookat();

	/** Input handler for turbo functionality */
	void StartTurboHover();
	void StopTurboHover();

	/** Input handler for turbo auto-altitude */
	void ToggleFixedHeight();

	/** For interpolating the tilt. */
	FRotator LastTiltedDroneRot;

	float CurrentFOV;
	float GoalFOV;		// for interpolating

	UPROPERTY()
	UCapsuleComponent* FoliageOverlapComponent;

	void NotifyProcessedInput();

	float AutoFocusDistance;

	/** Updates camera autofocus */
	void UpdateAutoFocus(FMinimalViewInfo& OutPOV, float DeltaTime);

	/** Update screen fringe settings based on fov */
	void UpdateSceneFringe(FMinimalViewInfo& OutPOV);

};



