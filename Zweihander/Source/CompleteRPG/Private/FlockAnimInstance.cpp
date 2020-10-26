// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "FlockAnimInstance.h"
#include "FlockCrowdFollowingComponent.h"
#include "CrowdTestAIController.h"
#include "Animation/AnimNode_StateMachine.h"

DECLARE_CYCLE_STAT_EXTERN(TEXT("Flock_NativeUpdate"), STAT_NativeFlockUpdate, STATGROUP_Anim, );
DEFINE_STAT(STAT_NativeFlockUpdate);

namespace FlockAnimInstanceConstants
{
	/** Angle that animation can accommodate for terrain conformation */
	float MaxTerrainGradientFromAnimation = 15.0f;
}

//namespace FlockNames
//{
	static const FName NAME_MainStateMachine(TEXT("Main State Machine"));
	static const FName WalkState(TEXT("Walk"));
	static const FName RunState(TEXT("Run"));
	static const FName IdleState(TEXT("Idle"));
	static const FName Bolt180State(TEXT("Bolt 180"));
	static const FName Bolt90State(TEXT("Bolt 90"));
	static const FName BoltForwardState(TEXT("Bolt Forward"));
	static const FName TrotState(TEXT("Trot"));
//}

UFlockAnimInstance::UFlockAnimInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	RunThreshold = 150.0f;
	TurnThreshold = 80.0f;
	Bolt180Threshold = 140.0f;
	Bolt90Threshold = 90.0f;
	TransitionDelayTimer = 0.0f;
	SpeedMultiplier = FMath::FRandRange(0.95f, 1.05f);
	RunSpeed = 0.85f;
	WalkSpeed = 0.85f;

	// bind delegates
	AddNativeTransitionBinding(NAME_MainStateMachine, WalkState, Bolt180State, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBolt180));
	AddNativeTransitionBinding(NAME_MainStateMachine, RunState, Bolt180State, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBolt180Running));
	AddNativeTransitionBinding(NAME_MainStateMachine, IdleState, Bolt180State, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBolt180));

	AddNativeTransitionBinding(NAME_MainStateMachine, WalkState, Bolt90State, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBolt90));
	AddNativeTransitionBinding(NAME_MainStateMachine, RunState, Bolt90State, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBolt90Running));
	AddNativeTransitionBinding(NAME_MainStateMachine, IdleState, Bolt90State, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBolt90));

	AddNativeTransitionBinding(NAME_MainStateMachine, IdleState, BoltForwardState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBoltForward));
	AddNativeTransitionBinding(NAME_MainStateMachine, WalkState, BoltForwardState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldBoltForward));

	AddNativeTransitionBinding(NAME_MainStateMachine, RunState, WalkState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldWalkFromRun));
	AddNativeTransitionBinding(NAME_MainStateMachine, WalkState, IdleState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldIdleFromWalk));
	AddNativeTransitionBinding(NAME_MainStateMachine, IdleState, WalkState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldWalkFromIdle));
	AddNativeTransitionBinding(NAME_MainStateMachine, RunState, IdleState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldIdleFromRun));

	AddNativeTransitionBinding(NAME_MainStateMachine, RunState, TrotState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldTrotFromRun));
	AddNativeTransitionBinding(NAME_MainStateMachine, TrotState, WalkState, FCanTakeTransition::CreateUObject(this, &UFlockAnimInstance::ShouldWalkFromTrot));

	AddNativeStateEntryBinding(NAME_MainStateMachine, RunState, FOnGraphStateChanged::CreateUObject(this, &UFlockAnimInstance::HandleRunEntered));
	AddNativeStateEntryBinding(NAME_MainStateMachine, WalkState, FOnGraphStateChanged::CreateUObject(this, &UFlockAnimInstance::HandleWalkEntered));
	AddNativeStateEntryBinding(NAME_MainStateMachine, IdleState, FOnGraphStateChanged::CreateUObject(this, &UFlockAnimInstance::HandleIdleEntered));
	AddNativeStateEntryBinding(NAME_MainStateMachine, TrotState, FOnGraphStateChanged::CreateUObject(this, &UFlockAnimInstance::HandleTrotEntered));
}

void UFlockAnimInstance::NativeInitializeAnimation()
{
	TwitchTimer = FMath::FRandRange(0.0f, 2.0f);

	AActor* Owner = GetOwningActor();
	if(Owner)
	{
		const FVector Location = Owner->GetActorLocation();
		RandomStream.Initialize(FMath::FloorToInt(Location.X + Location.Y + Location.Z));
		RunStartIndex = RandomStream.RandRange(0, 2);
	}
}

void UFlockAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	SCOPE_CYCLE_COUNTER(STAT_NativeFlockUpdate);

	ACharacter* OwningCharacter = Cast<ACharacter>(TryGetPawnOwner());
	if (OwningCharacter == nullptr)
	{
		return;
	}

	if (UCharacterMovementComponent* CharacterMovementComponent = OwningCharacter->GetCharacterMovement())
	{
		bIsInAir = CharacterMovementComponent->IsFalling();
		MaxSpeed = CharacterMovementComponent->GetMaxSpeed();
	}

	Speed = OwningCharacter->GetVelocity().Size2D();
	bIsMoving = Speed > 1.0f;

	if (ACrowdTestAIController* AIController = Cast<ACrowdTestAIController>(OwningCharacter->GetController()))
	{
		if (UFlockCrowdFollowingComponent* FlockCrowdFollowingComponent = AIController->GetFlockCrowdFollowingComponent())
		{
			RequestedSpeed = FlockCrowdFollowingComponent->RequestedVelocity.Size();
			RequestedSpeedSmoothed = FMath::FInterpTo(RequestedSpeedSmoothed, RequestedSpeed, DeltaSeconds, 10.0f);
			TurnRateSmoothed = FMath::FInterpTo(TurnRateSmoothed, FlockCrowdFollowingComponent->YawDelta, DeltaSeconds, 1.0f);

			if (!InclineRotation.Equals(FlockCrowdFollowingComponent->TerrainRotation))
			{
				InclineRotation = FQuat::Slerp(InclineRotation.Quaternion(), FlockCrowdFollowingComponent->TerrainRotation.Quaternion(), FMath::Clamp(DeltaSeconds * (0.1f / 0.033f), 0.0f, 1.0f)).Rotator();
			}
			TurnDelta = FlockCrowdFollowingComponent->DesiredAngleDelta;
			TurnDeltaSmoothed = FMath::FInterpTo(TurnDeltaSmoothed, TurnDelta, DeltaSeconds, 10.0f);
			TurnAmount = FMath::FInterpTo(TurnAmount, TurnDelta, DeltaSeconds, 5.0f);
		}

		UpDownAim = AIController->PlayerLookUpDown;
		LeftRightAim = AIController->PlayerLookLeftRight;
		bPlayerNearby = AIController->bPlayerVisible;
	}

	TwitchTimer -= DeltaSeconds;
	if (TwitchTimer < 0.0f)
	{
		if (TargetTwitchWeight == 0.0f)
		{
			TargetTwitchWeight = 1.0f;
			TwitchTimer = FMath::FRandRange(0.0f, 1.0f);
		}
		else
		{
			TargetTwitchWeight = 0.0f;
			TwitchTimer = FMath::FRandRange(0.0f, 4.0f);
		}
	}

	TwitchWeight = FMath::FInterpTo(TwitchWeight, TargetTwitchWeight, DeltaSeconds, 0.5f);
	TransitionDelayTimer -= DeltaSeconds;
	if (RequestedSpeed > Speed)
	{
		RunSpeed = FMath::Min(RunSpeed + (DeltaSeconds * 0.25f), 1.1f);
		WalkSpeed = FMath::Min(WalkSpeed + (DeltaSeconds * 0.25f), 1.5f);
	}
	else
	{
		RunSpeed = FMath::Max(RunSpeed - (DeltaSeconds * 0.25f), 0.85f);
		WalkSpeed = FMath::Max(WalkSpeed - (DeltaSeconds * 0.25f), 0.5f);
	}

	// rotate our skeletal mesh to match terrain if our animation cannot match it
	const float RemainingTerrainPitch = FMath::Max(0.0f, FMath::Abs(InclineRotation.Pitch) - FlockAnimInstanceConstants::MaxTerrainGradientFromAnimation);

	if (USkeletalMeshComponent* SkeletalMeshComponent = OwningCharacter->GetMesh())
	{
		const FRotator NewDesiredRotation = FRotator(0.0f, -90.0f, FMath::Sign(InclineRotation.Pitch) * -RemainingTerrainPitch);
		SkeletalMeshComponent->SetRelativeRotation(NewDesiredRotation);
	}
}

bool UFlockAnimInstance::ShouldBolt180() const
{
	return RequestedSpeed > RunThreshold && FMath::Abs(TurnDelta) > Bolt180Threshold && TransitionDelayTimer < 0.0f;
}

bool UFlockAnimInstance::ShouldBolt180Running() const
{
	return RequestedSpeed > RunThreshold && FMath::Abs(TurnDeltaSmoothed) > Bolt180Threshold && TransitionDelayTimer < 0.0f;
}

bool UFlockAnimInstance::ShouldBolt90() const
{
	const float AbsTurnDelta = FMath::Abs(TurnDelta);
	return RequestedSpeedSmoothed > RunThreshold && AbsTurnDelta > Bolt90Threshold && AbsTurnDelta <= Bolt180Threshold && TransitionDelayTimer < 0.0f;
}

bool UFlockAnimInstance::ShouldBolt90Running() const
{
	const float AbsTurnDelta = FMath::Abs(TurnDeltaSmoothed);
	return RequestedSpeedSmoothed > RunThreshold && AbsTurnDelta > Bolt90Threshold && AbsTurnDelta <= Bolt180Threshold && TransitionDelayTimer < 0.0f;
}

bool UFlockAnimInstance::ShouldBoltForward() const
{
	return RequestedSpeedSmoothed > RunThreshold && FMath::Abs(TurnDelta) < Bolt90Threshold && TransitionDelayTimer < 0.0f;
}

bool UFlockAnimInstance::ShouldWalkFromRun() const
{
	return bIsMoving && (RequestedSpeedSmoothed < RunThreshold || Speed < RunThreshold);
}

bool UFlockAnimInstance::ShouldIdleFromWalk() const
{
	return (!bIsMoving || RequestedSpeedSmoothed < 1.0f) && TransitionDelayTimer < 0.0f;
}

bool UFlockAnimInstance::ShouldWalkFromIdle() const
{
	return (bIsMoving || RequestedSpeedSmoothed > 1.0f) && Speed < RequestedSpeedSmoothed && TransitionDelayTimer < 0.0f;
}

bool UFlockAnimInstance::ShouldIdleFromRun() const
{
	return !bIsMoving || RequestedSpeedSmoothed < 1.0f;
}

bool UFlockAnimInstance::ShouldTrotFromRun() const
{
	return bIsMoving && (RequestedSpeedSmoothed < RunThreshold || Speed < RunThreshold);
}

bool UFlockAnimInstance::ShouldWalkFromTrot() const
{
	return TransitionDelayTimer < 0.0f;
}

float UFlockAnimInstance::GetWalkAnimationSpeed() const
{
	return WalkSpeed * SpeedMultiplier;
}

float UFlockAnimInstance::GetRunAnimationSpeed() const
{
	return RunSpeed * SpeedMultiplier;
}

void UFlockAnimInstance::HandleWalkEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex)
{
	const FBakedAnimationState& PrevState = Machine.GetStateInfo(PrevStateIndex);

	if (PrevState.StateName == IdleState)
	{
		TransitionDelayTimer = 0.1f;
		WalkSpeed = 0.5f;
	}
	else if (PrevState.StateName == RunState)
	{
		TransitionDelayTimer = 3.0f;
		WalkSpeed = 1.5f;
	}
}

void UFlockAnimInstance::HandleRunEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex)
{
	TransitionDelayTimer = 3.0f;
	RunSpeed = 0.85f;
}

void UFlockAnimInstance::HandleIdleEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex)
{
	TransitionDelayTimer = 0.1f;
}

void UFlockAnimInstance::HandleTrotEntered(const FAnimNode_StateMachine& Machine, int32 PrevStateIndex, int32 NextStateIndex)
{
	TransitionDelayTimer = FMath::FRandRange(2.5f, 4.0f);
}