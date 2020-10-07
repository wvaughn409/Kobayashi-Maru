// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "Raven.h"
#include "Components/ArrowComponent.h"


// Sets default values for this actor's properties
ARaven::ARaven(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	
	DeltaFromLastTargetReset = 0.0f;
	bFirstFrame = true;
	InitialRotationFactor = FVector(0.0f,0.0f,1.0f);
	TargetLocRandomRange = FVector(800.0f,800.0f,10.0f);
	TargetThreshold = 80.0f;
	TurnAngleRange = 60.0f;
	YawFactor = 0.025f;
	Speed = 200.0f;
	WindDirectionNormalized = FVector(1.0f,0.0f,0.0f);
	WindStrength = 150.0f;
	TargetResetTime = 1.0f;
	DefaultTargetResetTime = 8.0f;
	RotationRate = 80.0f;
	
	RootComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this,"RootComponent");
	BirdMesh = CreateOptionalDefaultSubobject<USkeletalMeshComponent>(TEXT("BirdMesh"));
	if (BirdMesh)
	{
		static ConstructorHelpers::FObjectFinder<USkeletalMesh> RavenMeshAsset(TEXT("/Game/Meshes/Raven/raven.raven"));
		
		BirdMesh->SetupAttachment(RootComponent);
		BirdMesh->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
		BirdMesh->SetSkeletalMesh(RavenMeshAsset.Object);
		BirdMesh->AlwaysLoadOnClient = true;
		BirdMesh->AlwaysLoadOnServer = true;
		BirdMesh->bOwnerNoSee = false;		
		BirdMesh->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPose;
		BirdMesh->bCastDynamicShadow = true;
		BirdMesh->bAffectDynamicIndirectLighting = true;
		BirdMesh->PrimaryComponentTick.TickGroup = TG_PrePhysics;
		BirdMesh->SetGenerateOverlapEvents(false);
		BirdMesh->SetCanEverAffectNavigation(false);
		BirdMesh->KinematicBonesUpdateType = EKinematicBonesUpdateToPhysics::SkipAllBones;
	}

}


// Called when the game starts
void ARaven::BeginPlay()
{
	Super::BeginPlay();
	
	Initialize();
}


// Called every frame
void ARaven::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

	if( bFirstFrame == true )
	{
		Origin = GetActorLocation();
		bFirstFrame = false;
		GetNewTargetLocation();
		SetActorLocation(TargetLocation);
		LastLocation = TargetLocation;
		GetNewTargetLocation();

		FVector RandRot = RandomStream.VRand() * FVector(1.0f,1.0f,0.2f);
		RandRot.Normalize();
 		FRotator NewRot = FRotationMatrix::MakeFromXZ(RandRot, InitialRotationFactor).Rotator();
	}
	UpdateFlight(DeltaTime);
}

void ARaven::UpdateFlight(float DeltaTime)
{
	FVector CurrentActorLocation = GetActorLocation();
	FVector DistanceFromTarget = TargetLocation-CurrentActorLocation;
	bool bResetTime = DeltaFromLastTargetReset > TargetResetTime;
	bool bCloseToTarget = DistanceFromTarget.SizeSquared() < FMath::Square(TargetThreshold);	
	if( bCloseToTarget || bResetTime )
	{
		DeltaFromLastTargetReset = DeltaTime;
		GetNewTargetLocation();
		TargetResetTime = FMath::Lerp(DefaultTargetResetTime*0.8f, DefaultTargetResetTime, FMath::FRand()/*FMath::FRandRange(0.0f,1.0f)*/ );
	}
	else
	{
		DeltaFromLastTargetReset += DeltaTime;
	}

	FVector DistanceFromTargetNormalized = DistanceFromTarget.GetSafeNormal();
	FRotator CurrentRotation = GetActorRotation();
	
	FVector RotationRightVector = FRotationMatrix(CurrentRotation).GetScaledAxis( EAxis::Y );
	
	float DotProduct = FVector::DotProduct(DistanceFromTargetNormalized, RotationRightVector);

	float AdjustedRate = DeltaTime * RotationRate;
	float AdjustedProduct = AdjustedRate * DotProduct;

	float ClampedNewRoll = FMath::Clamp( CurrentRotation.Roll + AdjustedProduct, -TurnAngleRange,TurnAngleRange );
	
	float YawAdjust = ClampedNewRoll * ( AdjustedRate * YawFactor );
	float NewYaw = YawAdjust + CurrentRotation.Yaw;

	FRotator NewRotation = FRotator(0.0f, NewYaw,ClampedNewRoll);

	FVector NewForwardVectorNormalized = FRotationMatrix(NewRotation).GetScaledAxis(EAxis::X);
	NewForwardVectorNormalized.Normalize();

	float AdjustedSpeed = DeltaTime * Speed;
	float AdjustedWindStr = WindStrength * DeltaTime;
		

	FVector CurrentDir = NewForwardVectorNormalized * AdjustedSpeed;
	FVector CurrentWind = WindDirectionNormalized * AdjustedWindStr;
	float WindDot = FVector::DotProduct(NewForwardVectorNormalized,WindDirectionNormalized);
	FVector WindFactor = CurrentWind * WindDot;

	FVector NewPos = CurrentDir + WindFactor + CurrentActorLocation;
	SetActorLocationAndRotation(NewPos, NewRotation);
}


void ARaven::Initialize()
{
	if( bUseRandomSeed == true)
	{
		RandomStream.Initialize(RandomSeed);
	}
	else
	{
		RandomStream.Initialize(FMath::RandHelper(100));
	}
	GetNewTargetLocation();
		
	bFirstFrame = true;
}

void ARaven::GetNewTargetLocation()
{
	FVector RandomVector = RandomStream.VRand();
	RandomVector *= TargetLocRandomRange - (TargetLocRandomRange/2);
	TargetLocation = Origin + RandomVector;	
}

