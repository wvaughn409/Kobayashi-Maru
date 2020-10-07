// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGGameMode.h"
#include "CompleteRPGHUD.h"
#include "CompleteRPGCharacter.h"
#include "CompleteRPGPC.h"
#include "AmbientEffectManager.h"
#include "HoverDronePawn.h"
#include "HoverDroneMovementComponent.h"

#include "DrawDebugHelpers.h"


ACompleteRPGGameMode::ACompleteRPGGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
 	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/BP_HoverDrone"));
 	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// set default PlayerController class to our Blueprinted PC
	static ConstructorHelpers::FClassFinder<APlayerController> PCClassFinder(TEXT("/Game/Blueprints/MyPC"));
 	PlayerControllerClass = PCClassFinder.Class;

	static ConstructorHelpers::FClassFinder<AAmbientEffectManager> AEMClassFinder(TEXT("/Game/Blueprints/BP_AmbientEffectManager"));
	AmbientEffectManagerClass = AEMClassFinder.Class;

	AttractModeIdleTime = 30.f;

	EmergencyBookmark = 4;
}


void ACompleteRPGGameMode::BeginPlay()
{
	Super::BeginPlay();

	// auto spawn effect manager
	FActorSpawnParameters SpawnInfo;
	SpawnInfo.ObjectFlags |= RF_Transient;	// runtime only, don't save this
	AmbientEffectManager = GetWorld()->SpawnActor<AAmbientEffectManager>(AmbientEffectManagerClass, SpawnInfo);

	RestartAttractLoopTimer();
}

bool ACompleteRPGGameMode::IsInAttractMode() const
{
	return bInAttractMode;
}

bool ACompleteRPGGameMode::IsInAttractLoop() const
{
	return bLoopingAttractMode;
}

bool ACompleteRPGGameMode::IsPlayingKiteCine() const
{
	return bPlayingKiteCine;
}

bool ACompleteRPGGameMode::IsPlayingAnyCine() const
{
	return IsInAttractMode() || IsPlayingKiteCine();
}

void ACompleteRPGGameMode::BeginAttractLoop()
{
	BeginAttractMode();
	bLoopingAttractMode = true;
}

void ACompleteRPGGameMode::BeginAttractMode()
{
	if (bInAttractMode == false && bPlayingKiteCine == false)
	{
		bInAttractMode = true;
		OnBeginGDCAttractMode.Broadcast();
		
		ClearAttractLoopTimer();
	}
}

void ACompleteRPGGameMode::AbortAttractMode()
{
	if (bInAttractMode)
	{
		bInAttractMode = false;
		bLoopingAttractMode = false;
		OnGDCAttractModeAborted.Broadcast();
		
		TransitionToHoverDrone();

		RestartAttractLoopTimer();
	}
}

void ACompleteRPGGameMode::NotifyAttractModeFinished()
{
	bInAttractMode = false;
	OnEndGDCAttractMode.Broadcast();

	RestartAttractLoopTimer();
}

void ACompleteRPGGameMode::BeginKiteCine()
{
	if (bPlayingKiteCine == false && bInAttractMode == false)
	{
		OnBeginGDCKiteCine.Broadcast();
		ClearAttractLoopTimer();
		bPlayingKiteCine = true;
	}
}

void ACompleteRPGGameMode::AbortKiteCine()
{
	if (bPlayingKiteCine)
	{
		bPlayingKiteCine = false;
		bLoopingAttractMode = false;
		OnGDCKiteCineAborted.Broadcast();
		TransitionToHoverDrone();
		RestartAttractLoopTimer();
	}
}

void ACompleteRPGGameMode::NotifyKiteCineFinished()
{
	bPlayingKiteCine = false;
	OnEndGDCKiteCine.Broadcast();
	RestartAttractLoopTimer();
}

void ACompleteRPGGameMode::AbortAllCines()
{
	AbortAttractMode();
	AbortKiteCine();
	bLoopingAttractMode = false;
}

// seamlessly transition to hover drone controls
void ACompleteRPGGameMode::TransitionToHoverDrone()
{
	ACompleteRPGPC* const PC = Cast<ACompleteRPGPC>(GetWorld()->GetFirstPlayerController());
	if (PC)
	{
		// force hover mode
		PC->SetControlMode(EGDCControlMode::HoverDrone);

		// teleport pawn to last cam loc
		APawn* const P = PC->GetPawn();
		if (P && PC->PlayerCameraManager)
		{
			FVector TeleportLoc;
			FRotator TeleportRot;
			PC->PlayerCameraManager->GetCameraViewPoint(TeleportLoc, TeleportRot);
			TeleportRot.Roll = 0.f;		// no roll!

			if (PlayerBounds.IsInside(TeleportLoc))
			{
				P->TeleportTo(TeleportLoc, TeleportRot);
			
				// stay hovering right there
				UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(P->GetMovementComponent());
				if (HoverMoveComponent)
				{
					HoverMoveComponent->ResetDesiredAltitude();
				}	
			}
			else
			{
				// in a bad place, just go somewhere known safe
				PC->JumpToEditorBookmark(EmergencyBookmark);
			}
		}
	}
}

void ACompleteRPGGameMode::NotifyDetectedInputThisTick()
{
	if (GetWorldTimerManager().TimerExists(AttractModeTimerHandle) == true)
	{
		RestartAttractLoopTimer();
	}

	if (bInAttractMode)
	{
		// end it
		AbortAttractMode();
	}
}

void ACompleteRPGGameMode::RestartAttractLoopTimer()
{
	GetWorldTimerManager().SetTimer(AttractModeTimerHandle, this, &ACompleteRPGGameMode::BeginAttractLoop, AttractModeIdleTime, false);
}

void ACompleteRPGGameMode::ClearAttractLoopTimer()
{
	GetWorldTimerManager().ClearTimer(AttractModeTimerHandle);
}

void ACompleteRPGGameMode::SetPlayerBounds(FVector BoundsMin, FVector BoundsMax)
{
	PlayerBounds = FBox(BoundsMin, BoundsMax);
}

void ACompleteRPGGameMode::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	if (bShowPlayerBounds)
	{
		static FColor BoxColor = FColor(0, 255, 255, 64);
		DrawDebugSolidBox(GetWorld(), PlayerBounds.GetCenter(), PlayerBounds.GetExtent(), FQuat::Identity, BoxColor, false);

		static FColor LineColor = FColor::White;
		DrawDebugBox(GetWorld(), PlayerBounds.GetCenter(), PlayerBounds.GetExtent(), FQuat::Identity, LineColor, false, -1.f, 255);
	}
}

FBox ACompleteRPGGameMode::GetPlayerBounds() const
{
	return PlayerBounds;
}

void ACompleteRPGGameMode::GetPlayerBounds(FVector& Max, FVector& Min) const
{
	Max = PlayerBounds.Max;
	Min = PlayerBounds.Min;
}