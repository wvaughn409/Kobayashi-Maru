// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GDC_ControlMode.h"

#include "CompleteRPGPC.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FControlModeChanged, EGDCControlMode::Type, ControlMode);

UCLASS(config=Game)
class ACompleteRPGPC : public APlayerController
{
	GENERATED_UCLASS_BODY()

public:
	// PlayerController interface
	virtual void SetupInputComponent() override;
	virtual void UpdateRotation(float DeltaTime) override;
	virtual void AddYawInput(float Val) override;
	virtual void AddPitchInput(float Val) override;
	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;

	void JumpToEditorBookmark(int32 BookmarkIndex);

	bool SetControlMode(EGDCControlMode::Type NewMode);

	/** Returns the player's current control mode. */
	UFUNCTION(BlueprintCallable, Category = "CompleteRPGPC")
	EGDCControlMode::Type GetControlMode() const;

	/** Returns the name of the player's current control mode. */
	UFUNCTION(BlueprintCallable, Category = "CompleteRPGPC")
	FString GetControlModeString() const;
	
	UPROPERTY(BlueprintAssignable, Category = "CompleteRPGPC")
	FControlModeChanged OnControlModeChanged;

	UFUNCTION(BlueprintCallable, Category = "CompleteRPGPC")
	UCapsuleComponent* GetFoliageOverlapCapsule() const;

	UFUNCTION(BlueprintCallable, Category = "CompleteRPGPC")
	float GetPawnAltitude() const;

	uint8 bProcessedInputThisTick : 1;
	uint8 bInvertPitch : 1;

protected:

	EGDCControlMode::Type CurrentControlMode;

	/** The pawn class used by players in each control mode. */
	UPROPERTY(EditDefaultsOnly, Category = Classes)
	TSubclassOf<class APawn> ControlModePawnClass[EGDCControlMode::MAX];

private:

	/** How long the fade down/up should take on a bookmark jump */
	UPROPERTY(EditDefaultsOnly, Category = Classes)
	float JumpToBookmarkCameraFadeTime;

	/** How long to hold at black (after fade down, before fade up) during a bookmark jump. */
	UPROPERTY(EditDefaultsOnly, Category = Classes)
	float JumpToBookmarkCameraHoldBlackTime;

	FTimerHandle JumpToBookmarkFadeTimerHandle;
	int32 JumpToBookmarkDestination;

	/** Input callbacks. */
	void JumpToBookmark0() { JumpToEditorBookmark(0); bProcessedInputThisTick = true; };
	void JumpToBookmark1() { JumpToEditorBookmark(1); bProcessedInputThisTick = true; };
	void JumpToBookmark2() { JumpToEditorBookmark(2); bProcessedInputThisTick = true; };
	void JumpToBookmark3() { JumpToEditorBookmark(3); bProcessedInputThisTick = true; };
	void JumpToBookmark4() { JumpToEditorBookmark(4); bProcessedInputThisTick = true; };
	void JumpToBookmark5() { JumpToEditorBookmark(5); bProcessedInputThisTick = true; };
	void JumpToBookmark6() { JumpToEditorBookmark(6); bProcessedInputThisTick = true; };
	void JumpToBookmark7() { JumpToEditorBookmark(7); bProcessedInputThisTick = true; };
	void JumpToBookmark8() { JumpToEditorBookmark(8); bProcessedInputThisTick = true; };
	void JumpToBookmark9() { JumpToEditorBookmark(9); bProcessedInputThisTick = true; };

	void DoJumpToBookmark();
	void BookmarkJumpHoldBlackEnded();

	void CycleControlMode();
	void ToggleTelemetry();
	void ToggleInvertedPitchControl();

	void PlayKiteCine();
	void PlayAttractCine();
	void StartAttractLoop();
	void AbortCine();
};

