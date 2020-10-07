// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "AmbientEffectManager.generated.h"


/** Associates certain foliage meshes with certain particle emitters */
USTRUCT(BlueprintType)
struct FFoliageParticleData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	uint8 bDisabled : 1;

	/** True to check foliage/ecosystem system for this mesh.  False to save frametime. */
	UPROPERTY(EditAnywhere)
	uint8 bCheckFoliage : 1;

	/** True to check grass system for this mesh.  False to save frametime. */
	UPROPERTY(EditAnywhere)
	uint8 bCheckGrass : 1;

	UPROPERTY(EditAnywhere)
	UStaticMesh* FoliageMesh = nullptr;

	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleSystem = nullptr;

	/** Valid range to spawn these around the player, in cm */
	UPROPERTY(EditAnywhere)
	float Range = 0.0f;

	/** Do not exceed this ratio of emitters to meshes (NumberEmitters / NumPlants) */
	UPROPERTY(EditAnywhere)
	float MaxEmitterRatio = 0.0f;

	/** Do not exceed this number of emitters for this foliage type.  0 or less means unlimited. */
	UPROPERTY(EditAnywhere)
	float MaxEmitterCount = 4;

	UPROPERTY(EditAnywhere)
	float EmitterScale = 0.0f;

	/** Offset from foliage instance (tree) to emitter, in the local space of the instance */
	UPROPERTY(EditAnywhere)
	FVector EmitterRelativeOffset = FVector::ZeroVector;

	// Replace this when bitfields can have default member initializers
	FFoliageParticleData()
		: bDisabled(0)
		, bCheckFoliage(1)
		, bCheckGrass(0)
	{};
};

USTRUCT()
struct FFoliageParticleInstanceData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY()
	TArray<AEmitter*> ActiveEmitters;
};

UCLASS(Blueprintable)
class COMPLETERPG_API AAmbientEffectManager : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	AAmbientEffectManager();

	// Called when the game starts
	virtual void BeginPlay() override;
	
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FFoliageParticleData> FoliageParticleData;

	UPROPERTY(transient)
	TArray<FFoliageParticleInstanceData> FoliageParticleInstanceData;

	/** Above this speed (cm/s), skip updates. */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float SkipUpdatesPlayerSpeedThreshold;

	class APawn* GetPlayerPawn() const;

	void CreateEmitter(int32 DataIdx, FTransform const& Transform);
	bool DestroyEmitter(int32 DataIdx, int32 EmitterIdx);

private:
	static const float EffectUpdatesPerSecond;
	FTimerHandle UpdateTimerHandle;

	void UpdateEmitters();
};
