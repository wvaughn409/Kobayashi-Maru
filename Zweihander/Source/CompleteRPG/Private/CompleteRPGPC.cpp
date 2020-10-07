// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGPC.h"
#include "CompleteRPGHUD.h"
#include "CompleteRPGCharacter.h"
#include "CompleteRPGCheatManager.h"
#include "CompleteRPGGameMode.h"
#include "HoverDronePawn.h"
#include "HoverDroneMovementComponent.h"
#include "TimerManager.h"
#include "GameFramework/WorldSettings.h"
#include "Engine/BookMark.h"

ACompleteRPGPC::ACompleteRPGPC(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	CheatClass = UCompleteRPGCheatManager::StaticClass();

	CurrentControlMode = EGDCControlMode::HoverDrone;

	JumpToBookmarkCameraFadeTime = 0.5f;
	JumpToBookmarkCameraHoldBlackTime = 1.5f;
}

void ACompleteRPGPC::SetupInputComponent()
{
	Super::SetupInputComponent();

	// editor bookmark bindings
	InputComponent->BindAction("Bookmark0", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark0);
	InputComponent->BindAction("Bookmark1", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark1);
	InputComponent->BindAction("Bookmark2", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark2);
	InputComponent->BindAction("Bookmark3", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark3);
	InputComponent->BindAction("Bookmark4", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark4);
	InputComponent->BindAction("Bookmark5", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark5);
	InputComponent->BindAction("Bookmark6", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark6);
	InputComponent->BindAction("Bookmark7", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark7);
	InputComponent->BindAction("Bookmark8", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark8);
	InputComponent->BindAction("Bookmark9", IE_Pressed, this, &ACompleteRPGPC::JumpToBookmark9);

	InputComponent->BindAction("CycleControlMode", IE_Pressed, this, &ACompleteRPGPC::CycleControlMode);
	InputComponent->BindAction("ToggleTelemetry", IE_Pressed, this, &ACompleteRPGPC::ToggleTelemetry);
	InputComponent->BindAction("ToggleInvertedPitchControl", IE_Pressed, this, &ACompleteRPGPC::ToggleInvertedPitchControl);
	InputComponent->BindAction("AbortCine", IE_Pressed, this, &ACompleteRPGPC::AbortCine);

	InputComponent->BindAction("PlayKiteCine", IE_Pressed, this, &ACompleteRPGPC::PlayKiteCine);
	InputComponent->BindAction("PlayAttractCine", IE_Pressed, this, &ACompleteRPGPC::PlayAttractCine);
	InputComponent->BindAction("StartAttractLoop", IE_Pressed, this, &ACompleteRPGPC::StartAttractLoop);

}

void ACompleteRPGPC::DoJumpToBookmark()
{
	// Can only jump to a pre-existing bookmark
	UWorld* const World = GetWorld();
	if (World)
	{
		if (AWorldSettings const* const WorldSettings = World->GetWorldSettings())
		{
			const TArray<UBookmarkBase*>& Bookmarks = WorldSettings->GetBookmarks();
			if (Bookmarks.IsValidIndex(JumpToBookmarkDestination) && Bookmarks[JumpToBookmarkDestination])
			{
				const UBookMark* const CurBookMark = Cast<UBookMark>(Bookmarks[JumpToBookmarkDestination]);
				check(CurBookMark);

				APawn* PlayerPawn = GetPawn();
				if (PlayerPawn)
				{
					if (CurrentControlMode == EGDCControlMode::Walk)
					{
						SetControlMode(EGDCControlMode::HoverDrone);

						PlayerPawn = GetPawn();
					}

					// teleport player to the bookmark location
					PlayerPawn->TeleportTo(CurBookMark->Location, CurBookMark->Rotation);

					// tell hover drone to maintain that altitude
					UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(PlayerPawn->GetMovementComponent());
					if (HoverMoveComponent)
					{
						HoverMoveComponent->ResetDesiredAltitude();
					}

					// teleport player to the bookmark location
					PlayerPawn->TeleportTo(CurBookMark->Location, CurBookMark->Rotation);
					// start fade back in
					GetWorldTimerManager().SetTimer(JumpToBookmarkFadeTimerHandle, this, &ACompleteRPGPC::BookmarkJumpHoldBlackEnded, JumpToBookmarkCameraHoldBlackTime, false);
				}
			}
		}
	}
}

void ACompleteRPGPC::BookmarkJumpHoldBlackEnded()
{
	if (PlayerCameraManager)
	{
		PlayerCameraManager->StartCameraFade(1.f, 0.f, JumpToBookmarkCameraFadeTime, FLinearColor::Black, true);
	}
}


void ACompleteRPGPC::JumpToEditorBookmark(int32 BookmarkIndex)
{
	UWorld* const World = GetWorld();
	if (World)
	{
		if (AWorldSettings const* const WorldSettings = World->GetWorldSettings())
		{
			const TArray<UBookmarkBase*>& Bookmarks = WorldSettings->GetBookmarks();
			if (Bookmarks.IsValidIndex(JumpToBookmarkDestination) && Bookmarks[JumpToBookmarkDestination])
			{
				if (GetWorldTimerManager().TimerExists(JumpToBookmarkFadeTimerHandle) == false)
				{
					if (PlayerCameraManager)
					{
						// fade to black and hold it
						PlayerCameraManager->StartCameraFade(0.f, 1.f, JumpToBookmarkCameraFadeTime, FLinearColor::Black, true, true);
					}
					GetWorldTimerManager().SetTimer(JumpToBookmarkFadeTimerHandle, this, &ACompleteRPGPC::DoJumpToBookmark, JumpToBookmarkCameraFadeTime, false);
				}

				JumpToBookmarkDestination = BookmarkIndex;
			}
		}
	}
}

bool ACompleteRPGPC::SetControlMode(EGDCControlMode::Type NewMode)
{
	if ( (CurrentControlMode != NewMode) && GetWorld() )
	{
		UClass* const PawnClass = ControlModePawnClass[NewMode] ? ControlModePawnClass[NewMode] : GetDefault<ACompleteRPGGameMode>()->DefaultPawnClass;

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		APawn* const PrevPawn = GetPawn();
		FVector SpawnLoc;
		FRotator SpawnRot;

		if ((NewMode == EGDCControlMode::HoverDrone) || (PrevPawn == nullptr))
		{
			GetActorEyesViewPoint(SpawnLoc, SpawnRot);
		}
		else if (NewMode == EGDCControlMode::Walk)
		{
			SpawnLoc = PrevPawn->GetActorLocation();

			SpawnRot = FRotator::ZeroRotator;
			SpawnRot.Yaw = PrevPawn->GetActorRotation().Yaw;
		}
		else
		{
			SpawnLoc = PrevPawn->GetActorLocation();
			SpawnRot = PrevPawn->GetActorRotation();
		}

		APawn* const NewPawn = GetWorld()->SpawnActor<APawn>(PawnClass, SpawnLoc, SpawnRot, SpawnParams);

		if (NewPawn)
		{
			FVector OldVelocity(0);

			bool bMatchOldRot = false;
			FRotator OldRotation = FRotator::ZeroRotator;

			if (PrevPawn)
			{
				bMatchOldRot = true;
				OldRotation = PrevPawn->GetActorRotation();

				UMovementComponent* OldMC = PrevPawn->GetMovementComponent();
				if (OldMC)
				{
					OldVelocity = OldMC->Velocity;
				}

				PrevPawn->Destroy();
			}

			Possess(NewPawn);

			// copy over velocity
			UMovementComponent* NewMC = NewPawn->GetMovementComponent();
			if (NewMC && !OldVelocity.IsZero())
			{
				NewMC->Velocity = OldVelocity;
			}

			if (NewMode == EGDCControlMode::Walk && bMatchOldRot)
			{
				FRotator NewControlRot = OldRotation;
				NewControlRot.Roll = 0.f;
				SetControlRotation(OldRotation);
			}
		}

		CurrentControlMode = NewMode;

		OnControlModeChanged.Broadcast(CurrentControlMode);

		return true;
	}

	return false;
}

EGDCControlMode::Type ACompleteRPGPC::GetControlMode() const
{
	return CurrentControlMode;
}

FString ACompleteRPGPC::GetControlModeString() const
{
	switch (CurrentControlMode)
	{
	case EGDCControlMode::Walk:
		return FString(TEXT("Walking"));
	case EGDCControlMode::HoverDrone:
		return FString(TEXT("Piloting Drone"));
	}

	return FString(TEXT("Unknown"));
}


void ACompleteRPGPC::CycleControlMode()
{
	int32 NextControlMode = CurrentControlMode + 1;
	if (NextControlMode >= EGDCControlMode::MAX)
	{
		NextControlMode = 0;
	}

	SetControlMode((EGDCControlMode::Type)NextControlMode);

	bProcessedInputThisTick = true;
}

void ACompleteRPGPC::UpdateRotation(float DeltaTime)
{
	if (CurrentControlMode == EGDCControlMode::HoverDrone)
	{
		APawn* const MyPawn = GetPawn();
		if (MyPawn)
		{
			SetControlRotation(MyPawn->GetActorRotation());
		}
	}

	Super::UpdateRotation(DeltaTime);

}

void ACompleteRPGPC::AddYawInput(float Val)
{
	Super::AddYawInput(Val);

	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(MyPawn->GetMovementComponent());
		if (HoverMoveComponent)
		{
			FRotator const YawInput = !IsLookInputIgnored() ? FRotator(0, Val /** InputYawScale*/, 0) : FRotator::ZeroRotator;
			HoverMoveComponent->AddRotationInput(YawInput);
		}
	}
}

void ACompleteRPGPC::AddPitchInput(float Val)
{
	Val = bInvertPitch ? -Val : Val;

	Super::AddPitchInput(Val);

	APawn* const MyPawn = GetPawn();
	if (MyPawn)
	{
		UHoverDroneMovementComponent* const HoverMoveComponent = Cast<UHoverDroneMovementComponent>(MyPawn->GetMovementComponent());
		if (HoverMoveComponent)
		{
			// @fixme: neg val is a hack, not sure where the inversion is coming in
			FRotator const PitchInput = !IsLookInputIgnored() ? FRotator(-Val, 0, 0) : FRotator::ZeroRotator;
			HoverMoveComponent->AddRotationInput(PitchInput);
		}
	}
}

void ACompleteRPGPC::PreProcessInput(const float DeltaTime, const bool bGamePaused)
{
	bProcessedInputThisTick = false;

	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void ACompleteRPGPC::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PostProcessInput(DeltaTime, bGamePaused);

	// tell the game mode if we detected input
	if (bProcessedInputThisTick)
	{
		ACompleteRPGGameMode* const Game = GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>();
		if (Game)
		{
			Game->NotifyDetectedInputThisTick();
		}
	}
}


void ACompleteRPGPC::ToggleTelemetry()
{
	ACompleteRPGGameMode* const Game = GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>();
	if (Game)
	{
		if (Game->IsPlayingAnyCine())
		{
			// ignore this command during cines
			return;
		}
	}

	ACompleteRPGHUD* const Hud = Cast<ACompleteRPGHUD>(GetHUD());
	if (Hud)
	{
		Hud->SetShowTelemetry(!Hud->GetShowTelemetry());
	}

	bProcessedInputThisTick = true;
}


UCapsuleComponent* ACompleteRPGPC::GetFoliageOverlapCapsule() const
{
	AHoverDronePawn const* const HoverPawn = Cast<AHoverDronePawn>(GetPawn());
	if (HoverPawn)
	{
		return HoverPawn->GetFoliageOverlapCapsule();
	}

	ACompleteRPGCharacter const* const WalkingPawn = Cast<ACompleteRPGCharacter>(GetPawn());
	if (WalkingPawn)
	{
		return WalkingPawn->GetFoliageOverlapCapsule();
	}

	return nullptr;
}

float ACompleteRPGPC::GetPawnAltitude() const
{
	AHoverDronePawn const* const HoverPawn = Cast<AHoverDronePawn>(GetPawn());
	if (HoverPawn)
	{
		return HoverPawn->GetAltitude();
	}

	return 0.f;
}

void ACompleteRPGPC::ToggleInvertedPitchControl()
{
	bInvertPitch = !bInvertPitch;
	
	bProcessedInputThisTick = true;
}

void ACompleteRPGPC::PlayKiteCine()
{
	ACompleteRPGGameMode* const Game = GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>();
	if (Game)
	{
		Game->BeginKiteCine();
	}

	bProcessedInputThisTick = true;
}

void ACompleteRPGPC::PlayAttractCine()
{
	ACompleteRPGGameMode* const Game = GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>();
	if (Game)
	{
		Game->BeginAttractMode();
	}

	// bProcessedInputThisTick = true;		// no!
}

void ACompleteRPGPC::StartAttractLoop()
{
	ACompleteRPGGameMode* const Game = GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>();
	if (Game)
	{
		Game->BeginAttractLoop();
	}

	// bProcessedInputThisTick = true;		// no!
}

void ACompleteRPGPC::AbortCine()
{
	ACompleteRPGGameMode* const Game = GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>();
	if (Game)
	{
		Game->AbortAllCines();
	}

	bProcessedInputThisTick = true;
}



