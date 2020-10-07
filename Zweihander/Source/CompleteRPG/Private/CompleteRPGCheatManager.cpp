// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGPC.h"
#include "CompleteRPGCheatManager.h"
#include "CompleteRPGGameMode.h"
#include "FoliageStatistics.h"
#include "Engine/LocalPlayer.h"
#include "Engine/Console.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include "LandscapeProxy.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"


UCompleteRPGCheatManager::UCompleteRPGCheatManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UCompleteRPGCheatManager::BM(int32 BookMarkIndex)
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	if (MyPC)
	{
		MyPC->JumpToEditorBookmark(BookMarkIndex);
	}
}


void UCompleteRPGCheatManager::HoverDrone(bool bUseHoverDrone)
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	if (MyPC)
	{
		if (MyPC->GetControlMode() == EGDCControlMode::HoverDrone)
		{
			MyPC->SetControlMode(EGDCControlMode::Walk);
		}
		else
		{
			MyPC->SetControlMode(EGDCControlMode::HoverDrone);
		}
	}
}

void UCompleteRPGCheatManager::FoliageNearMe(float Radius)
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	APawn* const MyPawn = MyPC ? MyPC->GetPawn() : nullptr;
	if (MyPawn)
	{
		ULocalPlayer* const LocalPlayer = Cast<ULocalPlayer>(MyPC->Player);
#if 0
		TMap<UStaticMesh*, int32> MeshCounts;
		UFoliageStatistics::FoliageOverlappingMeshCounts_Debug(MyPawn, MyPawn->GetActorLocation(), Radius, MeshCounts);

		DrawDebugSphere(MyPawn->GetWorld(), MyPawn->GetActorLocation(), Radius, 16, FColor::Yellow, false, 5.f);

		if (LocalPlayer && LocalPlayer->ViewportClient && LocalPlayer->ViewportClient->ViewportConsole)
		{
			if (MeshCounts.Num() > 0)
			{
				for (auto& C : MeshCounts)
				{
					UStaticMesh* const Mesh = C.Key;
					int32 const Count = C.Value;
					FString const Str = FString::Printf(TEXT("  %d instances of %s"), Count, *GetNameSafe(Mesh));
					LocalPlayer->ViewportClient->ViewportConsole->OutputText(Str);
				}
			}
			else
			{
				LocalPlayer->ViewportClient->ViewportConsole->OutputText(TEXT("No foliage detected"));
			}
		}
#endif
		// find landscapes
		for (TActorIterator<ALandscapeProxy> It(GetWorld()); It; ++It)
		{
			ALandscapeProxy* L = *It;
			if (L)
			{
				for (UHierarchicalInstancedStaticMeshComponent* HComp : L->FoliageComponents)
				{
					const FBox AABB(MyPawn->GetActorLocation() - FVector(Radius), MyPawn->GetActorLocation() + FVector(Radius));

					TArray<FTransform> Transforms;
					HComp->GetOverlappingBoxTransforms(AABB, Transforms);

					if (Transforms.Num() > 0)
					{
						UStaticMesh* const Mesh = HComp->GetStaticMesh();
						FString const Str = FString::Printf(TEXT("  ~%d instances of grass %s"), Transforms.Num(), *GetNameSafe(Mesh));
						LocalPlayer->ViewportClient->ViewportConsole->OutputText(Str);
					}
				}
			}
		}
	}
}

void UCompleteRPGCheatManager::PlayAttractCine()
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	ACompleteRPGGameMode* const Game = MyPC ? MyPC->GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>() : nullptr;
	if (Game)
	{
		Game->BeginAttractMode();
	}
}

void UCompleteRPGCheatManager::EndAttractCine()
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	ACompleteRPGGameMode* const Game = MyPC ? MyPC->GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>() : nullptr;
	if (Game)
	{
		Game->AbortAttractMode();
	}
}

void UCompleteRPGCheatManager::PlayKiteCine()
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	ACompleteRPGGameMode* const Game = MyPC ? MyPC->GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>() : nullptr;
	if (Game)
	{
		Game->BeginKiteCine();
	}
}

void UCompleteRPGCheatManager::EndKiteCine()
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	ACompleteRPGGameMode* const Game = MyPC ? MyPC->GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>() : nullptr;
	if (Game)
	{
		Game->AbortKiteCine();
	}
}

void UCompleteRPGCheatManager::PlayAttractLoop()
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	ACompleteRPGGameMode* const Game = MyPC ? MyPC->GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>() : nullptr;
	if (Game)
	{
		Game->BeginAttractLoop();
	}
}

void UCompleteRPGCheatManager::DisableAttractLoop()
{
	ACompleteRPGPC* const MyPC = GetOuterACompleteRPGPC();
	ACompleteRPGGameMode* const Game = MyPC ? MyPC->GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>() : nullptr;
	if (Game)
	{
		Game->AttractModeIdleTime = 0.f;
	}
}

