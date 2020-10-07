// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/Actor.h"
#include "Raven.generated.h"

class UArrowComponent;

UCLASS()
class ARaven : public AActor
{
	GENERATED_UCLASS_BODY()
	
public:	
	
	// Called when the game starts
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	void Initialize();
	
	void GetNewTargetLocation() const;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bUseRandomSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32  RandomSeed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float RotationRate;
	
	/* Range of the random bird target destination relative to initial position */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector	TargetLocRandomRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector InitialRotationFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TargetThreshold;

	/* Range of the angle the bird titles */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TurnAngleRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float YawFactor;

	/* The Speed the bird flys around */
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Speed;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector WindDirectionNormalized;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float WindStrength;

	void GetNewTargetLocation();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Projectile, meta = (AllowPrivateAccess = "true"))
	USkeletalMeshComponent* BirdMesh;

private:
	void UpdateFlight(float DeltaTime);

	bool bFirstFrame;
	FRandomStream	RandomStream;
	FVector	Origin;
	FVector	TargetLocation;
	FVector	LastLocation;
	FVector	LastDirection;
	FVector	TargetDirection; 
	float TargetResetTime;
	float DefaultTargetResetTime;
	float DeltaFromLastTargetReset;
	float RotationValue;
	FRotator LastRotation;
	
	FVector CurrentDirectionX;
	FVector CurrentLocation;	
};
