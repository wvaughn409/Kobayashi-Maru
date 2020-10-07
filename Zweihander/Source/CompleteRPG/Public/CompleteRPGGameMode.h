// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/GameMode.h"
#include "CompleteRPGGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBeginGDCAttractMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndGDCAttractMode);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBeginGDCKiteCine);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndGDCKiteCine);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGDCKiteCineAborted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnGDCAttractModeAborted);


UCLASS(minimalapi)
class ACompleteRPGGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

public:

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;

	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	bool IsInAttractMode() const;

	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	bool IsInAttractLoop() const;

	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	bool IsPlayingKiteCine() const;

	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	bool IsPlayingAnyCine() const;

	/** The default pawn class used by players. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Classes)
	TSubclassOf<class AAmbientEffectManager>  AmbientEffectManagerClass;

	UPROPERTY(transient, BlueprintReadOnly)
	class AAmbientEffectManager* AmbientEffectManager;

	/** */
	UPROPERTY(BlueprintAssignable)
	FBeginGDCAttractMode OnBeginGDCAttractMode;

	UPROPERTY(BlueprintAssignable)
	FEndGDCAttractMode OnEndGDCAttractMode;

	UPROPERTY(BlueprintAssignable)
	FBeginGDCKiteCine OnBeginGDCKiteCine;

	UPROPERTY(BlueprintAssignable)
	FEndGDCKiteCine OnEndGDCKiteCine;

	/** Called only when attract mode matinee prematurely aborted. */
	UPROPERTY(BlueprintAssignable)
	FOnGDCAttractModeAborted OnGDCAttractModeAborted;
	
	/** Called only when Kite cine prematurely aborted. */
	UPROPERTY(BlueprintAssignable)
	FOnGDCKiteCineAborted OnGDCKiteCineAborted;

	/** How long the demo needs to run idle before attract mode automatically begins, in seconds */
	UPROPERTY(EditAnywhere)
	float AttractModeIdleTime;

	/** Begins the looping attract mode sequence */
	void BeginAttractLoop();

	/** Starts the attract cine, does not imply looping. */
	void BeginAttractMode();
	/** Aborts the attract cine. */
	void AbortAttractMode();
	/** Called from BP when attract cine finishes naturally (not aborted) */
	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	void NotifyAttractModeFinished();

	/** Starts the kite cine, does not imply looping. */
	void BeginKiteCine();
	/** Aborts the kite cine. */
	void AbortKiteCine();
	/** Called from BP when kite cine finishes naturally (not aborted) */
	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	void NotifyKiteCineFinished();

	void AbortAllCines();

	void NotifyDetectedInputThisTick();

	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	void SetPlayerBounds(FVector BoundsMin, FVector BoundsMax);

	UFUNCTION(BlueprintCallable, Category = GDC_GameMode)
	void GetPlayerBounds(FVector& Max, FVector& Min) const;

	FBox GetPlayerBounds() const;

	UPROPERTY(EditAnywhere)
	uint8 bShowPlayerBounds : 1;

	/** Where to put the player in a player-location emergency! */
	UPROPERTY(EditAnywhere)
	int32 EmergencyBookmark;

private:

	// AABB to constrain the player during interactive portion
	FBox PlayerBounds;

	void TransitionToHoverDrone();

	void RestartAttractLoopTimer();
	void ClearAttractLoopTimer();

	FTimerHandle AttractModeTimerHandle;
	
	uint8 bLoopingAttractMode : 1;
	uint8 bInAttractMode : 1;
	uint8 bPlayingKiteCine : 1;
};



