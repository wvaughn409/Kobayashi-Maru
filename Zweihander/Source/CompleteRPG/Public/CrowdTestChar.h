// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Character.h"
#include "FlockManager.h"
#include "CrowdTestChar.generated.h"

/** One agent in a crowd */
UCLASS(Blueprintable)
class ACrowdTestChar : public ACharacter
{
	GENERATED_UCLASS_BODY()

	/** Weak pointer to the flock manager we are registered with */
	TWeakObjectPtr<class AFlockManager>	WeakFlockManager;

	virtual void PostInitializeComponents() override;
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

protected:
	/** Auto register with the specified flock manager, or to a specific flock manager if specified */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flock")
	bool bAutoRegisterWithFlockManager;

	/** Flock Manager to register to (only if bAutoRegisterWithFlockManager = true) */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Flock")
	class AFlockManager* FlockManager;

	UPROPERTY(Transient)
	FRandomStream RandomStream;

	UPROPERTY(Transient)
	bool bMale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scale Variation")
	float HartBaseScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scale Variation")
	float HartScaleVariance;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scale Variation")
	float HindBaseScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Scale Variation")
	float HindScaleVariance;

	UPROPERTY()
	class USkeletalMesh* SkeletalMeshes[2];

	UPROPERTY()
	class UStaticMesh* AntlerMeshes[4];

	UPROPERTY()
	class UStaticMeshComponent* Antlers;
};