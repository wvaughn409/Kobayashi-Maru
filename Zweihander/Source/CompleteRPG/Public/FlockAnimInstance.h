// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "Animation/AnimInstance.h"
#include "FlockAnimInstance.generated.h"

/** One agent in a crowd */
UCLASS(Blueprintable)
class UFlockAnimInstance : public UAnimInstance
{
	GENERATED_UCLASS_BODY()

	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

public:
	bool ShouldBolt180() const;
	bool ShouldBolt90() const;
	bool ShouldBolt180Running() const;
	bool ShouldBolt90Running() const;
	bool ShouldBoltForward() const;
	bool ShouldWalkFromRun() const;
	bool ShouldIdleFromWalk() const;
	bool ShouldWalkFromIdle() const;
	bool ShouldIdleFromRun() const;
	bool ShouldTrotFromRun() const;
	bool ShouldIdleFromTrot() const;
	bool ShouldWalkFromTrot() const;

	void HandleWalkEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex);
	void HandleRunEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex);
	void HandleIdleEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex);
	void HandleTrotEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex);

	UFUNCTION(BlueprintPure, Category="Transitions")
	float GetWalkAnimationSpeed() const;

	UFUNCTION(BlueprintPure, Category="Transitions")
	float GetRunAnimationSpeed() const;

public:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	bool bIsMoving;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	bool bIsInAir;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Default")
	float RunThreshold;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float MaxSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float TurnDelta;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Default")
	float TurnThreshold;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	bool bPlayerNearby;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float LeftRightAim;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float UpDownAim;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Default")
	float Bolt180Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Default")
	float TurnDeltaSmoothed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float RequestedSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float TurnRateSmoothed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float RequestedSpeedSmoothed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	FRotator InclineRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float TargetTwitchWeight;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float TwitchTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float TwitchWeight;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Default")
	float Bolt90Threshold;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Default")
	float TransitionDelayTimer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float RunSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float WalkSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float SpeedMultiplier;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Default")
	float TurnAmount;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Default")
	int32 RunStartIndex;

	FRandomStream RandomStream;
};