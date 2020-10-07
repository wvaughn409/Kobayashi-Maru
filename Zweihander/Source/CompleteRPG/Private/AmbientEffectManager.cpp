// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CompleteRPGGameMode.h"
#include "AmbientEffectManager.h"
#include "FoliageStatistics.h"
#include "EngineUtils.h"
#include "LandscapeProxy.h"
#include "Components/HierarchicalInstancedStaticMeshComponent.h"

DECLARE_STATS_GROUP(TEXT("GDC"), STATGROUP_GDC, STATCAT_Advanced);

const float AAmbientEffectManager::EffectUpdatesPerSecond = 2.f;

// Sets default values for this actor's properties
AAmbientEffectManager::AAmbientEffectManager()
{
 	// Set this actor to be ticked every frame.  You can turn this off to improve performance if you don't need it.
	//PrimaryActorTick.bCanEverTick = true;

	SkipUpdatesPlayerSpeedThreshold = 30.f * 100.f;		// 30 m/s
}

APawn* AAmbientEffectManager::GetPlayerPawn() const
{
	UWorld* const W = GetWorld();
	APlayerController* const PC = W ? W->GetFirstPlayerController() : nullptr;
	return PC ? PC->GetPawn() : nullptr;
}

// Called when the game starts
void AAmbientEffectManager::BeginPlay()
{
	Super::BeginPlay();

	// init instnace data.  instance data entries are parallel to particle data entries
	FoliageParticleInstanceData.AddZeroed(FoliageParticleData.Num());

	// kick off the perioding world querying
	GetWorldTimerManager().SetTimer(UpdateTimerHandle, this, &AAmbientEffectManager::UpdateEmitters, 1.f / EffectUpdatesPerSecond, true, 1.f);
}

// @note: potential optimizations
// - only test for a limited number of FoliageParticleDatas per update, rotating queue
// - we potentially return thousands of grass transforms but only use a couple.  maybe get the count, then just look up specific transforms by index?
void AAmbientEffectManager::UpdateEmitters()
{
	DECLARE_SCOPE_CYCLE_COUNTER(TEXT("AmbientEffectManager UpdateEmitters"), STAT_AmbientEffectManager_UpdateEmitters, STATGROUP_GDC);

	APawn* const PlayerPawn = GetPlayerPawn();
	if (PlayerPawn == nullptr)
	{
		// can't do anything without a player
		return;
	}

	// skip?
	{
		ACompleteRPGGameMode* const Game = GetWorld()->GetAuthGameMode<ACompleteRPGGameMode>();
		if (Game)
		{
			// skip if cinematic is playing
			if (Game->IsPlayingAnyCine())
			{
				return;
			}
		}

		// skip if player moving above certain speed threshold
		if (PlayerPawn->GetVelocity().SizeSquared() > FMath::Square(SkipUpdatesPlayerSpeedThreshold))
		{
			return;
		}
	}

	// make and allocate some to minimize reallocs
	TArray<FTransform> OutTransforms;
	OutTransforms.Reserve(64);

	FVector const PlayerLoc = PlayerPawn->GetActorLocation();
	FBox BaseBox(PlayerLoc, PlayerLoc);

	// see if we need to delete any emitters
	{
		DECLARE_SCOPE_CYCLE_COUNTER(TEXT("AmbientEffectManager: Cleanup"), STAT_AmbientEffectManager_Cleanup, STATGROUP_GDC);
		for (int32 Idx = 0; Idx < FoliageParticleInstanceData.Num(); ++Idx)
		{
			FFoliageParticleInstanceData const& FPID = FoliageParticleInstanceData[Idx];
			FFoliageParticleData const& FPD = FoliageParticleData[Idx];

			for (int32 EmitterIdx = 0; EmitterIdx < FPID.ActiveEmitters.Num(); EmitterIdx++)
			{
				static float EmitterDestroyBuffer = 1000.f;	// cm

				AEmitter* const E = FPID.ActiveEmitters[EmitterIdx];

				// is it too far away?
				bool const bDeadEmitter = ((E == nullptr) || E->IsPendingKill());			// emitter might not be looping, clean it out if necessary
				if (bDeadEmitter
					|| ((E->GetActorLocation() - PlayerLoc).SizeSquared() > FMath::Square((FPD.Range + EmitterDestroyBuffer))))
				{
					if (DestroyEmitter(Idx, EmitterIdx))
					{
						// array was modified, fix our indexing
						--EmitterIdx;
					}
				}
			}
		}
	}

	// see if we need to create any more emitters based on surroundings
	for (int32 Idx = 0; Idx < FoliageParticleData.Num(); ++Idx)
	{
		FFoliageParticleData const& FPD = FoliageParticleData[Idx];
		FFoliageParticleInstanceData const& FPID = FoliageParticleInstanceData[Idx];

		bool const bAtMaxEmitters = (FPD.MaxEmitterCount > 0) && (FPID.ActiveEmitters.Num() >= FPD.MaxEmitterCount);
		if ((FPD.bDisabled == false) && FPD.FoliageMesh && !bAtMaxEmitters)
		{
			OutTransforms.Reset();
			FBox const B = BaseBox.ExpandBy(FPD.Range);

			// check foliage system
			if (FPD.bCheckFoliage == true)
			{
				DECLARE_SCOPE_CYCLE_COUNTER(TEXT("AmbientEffectManager CheckFoliage"), STAT_AmbientEffectManager_CheckFoliage, STATGROUP_GDC);

				// collect foliage of this type near the player
				UFoliageStatistics::FoliageOverlappingBoxTransforms(this, FPD.FoliageMesh, B, OutTransforms);
			}

			// check grass system
			if (FPD.bCheckGrass == true)
			{
				DECLARE_SCOPE_CYCLE_COUNTER(TEXT("AmbientEffectManager CheckGrass"), STAT_AmbientEffectManager_CheckGrass, STATGROUP_GDC);

				// check every landscape
				for (TActorIterator<ALandscapeProxy> It(GetWorld()); It; ++It)
				{
					ALandscapeProxy* L = *It;
					if (L)
					{
						for (UHierarchicalInstancedStaticMeshComponent* HComp : L->FoliageComponents)
						{
							if (HComp && (HComp->GetStaticMesh() == FPD.FoliageMesh))
							{
								HComp->GetOverlappingBoxTransforms(B, OutTransforms);
							}
						}
					}
				}
			}
		}

		if (OutTransforms.Num() > 0)
		{
			DECLARE_SCOPE_CYCLE_COUNTER(TEXT("AmbientEffectManager SpawnEmitters"), STAT_AmbientEffectManager_SpawnEmitters, STATGROUP_GDC);

			// check ratio
			float const EmitterRatioIfOneSpawns = (float)(FPID.ActiveEmitters.Num() + 1) / (float)OutTransforms.Num();
			if (EmitterRatioIfOneSpawns < FPD.MaxEmitterRatio)
			{
				// ok to spawn one!
				// pick a transform at random
				// @todo: ensure min dist?
				int32 const RandIdx = FMath::RandRange(0, OutTransforms.Num() - 1);
				CreateEmitter(Idx, OutTransforms[RandIdx]);
			}
		}
	}
}

void AAmbientEffectManager::CreateEmitter(int32 DataIdx, FTransform const& Transform)
{
	FFoliageParticleData const& FPD = FoliageParticleData[DataIdx];
	FFoliageParticleInstanceData& FPID = FoliageParticleInstanceData[DataIdx];

	if (FPD.ParticleSystem)
	{
		FVector const WorldOffset = Transform.TransformVector(FPD.EmitterRelativeOffset);		// should include scale
		FVector const SpawnLoc = Transform.GetLocation() + WorldOffset;
		FRotator const SpawnRot = Transform.Rotator();

		FActorSpawnParameters Params;
		Params.Owner = this;
		Params.bNoFail = true;
		AEmitter* const E = GetWorld()->SpawnActor<AEmitter>(SpawnLoc, SpawnRot, Params);
		if (E)
		{
			if (FPD.EmitterScale > 0.f)
			{
				E->GetParticleSystemComponent()->SetWorldScale3D(FVector(FPD.EmitterScale));
			}

			E->bDestroyOnSystemFinish = true;
			E->SetTemplate(FPD.ParticleSystem);
			FPID.ActiveEmitters.Emplace(E);
		}
	}
}

bool AAmbientEffectManager::DestroyEmitter(int32 DataIdx, int32 EmitterIdx)
{
	FFoliageParticleInstanceData& FPID = FoliageParticleInstanceData[DataIdx];
	if (FPID.ActiveEmitters.IsValidIndex(EmitterIdx))
	{
		AEmitter* const E = FPID.ActiveEmitters[EmitterIdx];
		if (E)
		{
			UParticleSystemComponent* const PSC = E->GetParticleSystemComponent();
			if (PSC)
			{
				// actor will destroy when PSC finishes
				PSC->DeactivateSystem();
			}
		}

		FPID.ActiveEmitters.RemoveAtSwap(EmitterIdx, 1, false);
		return true;
	}

	return false;
}

