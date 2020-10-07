// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "CrowdTestChar.h"
#include "CrowdTestAIController.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "EngineUtils.h"
#include "ConstructorHelpers.h"

ACrowdTestChar::ACrowdTestChar(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	UCharacterMovementComponent* CharMovement = GetCharacterMovement();
	
	// Don't check floor height when standing still. Only necessary when moving objects will rise up from the ground.
	CharMovement->bAlwaysCheckFloor = false;

	// Use nav mesh walking
	CharMovement->DefaultLandMovementMode = MOVE_NavWalking;

	// Never break up simulations into multiple time steps if there is a spike.
	CharMovement->MaxSimulationIterations = 1;
	CharMovement->MaxSimulationTimeStep = 0.4f;

	// Allow for really fast turning (minimal drift). Keeps path following tight.
	CharMovement->GroundFriction = 64.f;

	bAutoRegisterWithFlockManager = true;

	HartBaseScale = 1.1f;
	HartScaleVariance = 0.1f;
	HindBaseScale = 0.9f;
	HindScaleVariance = 0.1f;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> HartMeshRef(TEXT("SkeletalMesh'/Game/Meshes/Deer/red_deer_buck_SKELMESH.red_deer_buck_SKELMESH'"));
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> HindMeshRef(TEXT("SkeletalMesh'/Game/Meshes/Deer/red_deer_doe_SKELMESH.red_deer_doe_SKELMESH'"));
	SkeletalMeshes[0] = HartMeshRef.Object;
	SkeletalMeshes[1] = HindMeshRef.Object;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> AntlerMesh1Ref(TEXT("StaticMesh'/Game/Meshes/Deer/Meshes/SM_Deer_Horns_01.SM_Deer_Horns_01'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AntlerMesh2Ref(TEXT("StaticMesh'/Game/Meshes/Deer/Meshes/SM_Deer_Horns_02.SM_Deer_Horns_02'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AntlerMesh3Ref(TEXT("StaticMesh'/Game/Meshes/Deer/Meshes/SM_Deer_Horns_03.SM_Deer_Horns_03'"));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> AntlerMesh4Ref(TEXT("StaticMesh'/Game/Meshes/Deer/Meshes/SM_Deer_Horns_04.SM_Deer_Horns_04'"));
	AntlerMeshes[0] = AntlerMesh1Ref.Object;
	AntlerMeshes[1] = AntlerMesh2Ref.Object;
	AntlerMeshes[2] = AntlerMesh3Ref.Object;
	AntlerMeshes[3] = AntlerMesh4Ref.Object;

	Antlers = ObjectInitializer.CreateDefaultSubobject<UStaticMeshComponent>(this, TEXT("Antlers"));
	Antlers->SetCanEverAffectNavigation(false);
	Antlers->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Antlers->SetupAttachment(GetRootComponent());	//attach to capsule component at the root
}

void ACrowdTestChar::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	const FVector Location = GetActorLocation();
	RandomStream.Initialize((int)(Location.X + Location.Y + Location.Z));

	// chose hart or hind & set skeletal mesh appropriately
	bMale = RandomStream.FRand() < 0.3f;
	GetMesh()->SetSkeletalMesh(bMale ? SkeletalMeshes[0] : SkeletalMeshes[1]);

	// setup scales
	float Scale = bMale ? HartBaseScale + RandomStream.FRandRange(-HartScaleVariance, HartScaleVariance) : HindBaseScale + RandomStream.FRandRange(-HindScaleVariance, HindScaleVariance);
	SetActorScale3D(FVector(Scale));

	// attach one of 4 meshes to hart
	if(bMale)
	{
		float RandomPick = RandomStream.FRand();
		Antlers->SetStaticMesh(RandomPick < 0.5f ? (RandomPick < 0.25f ? AntlerMeshes[0] : AntlerMeshes[1]) : (RandomPick < 0.75f ? AntlerMeshes[2] : AntlerMeshes[3]));
		Antlers->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("Antlers"));
	}
}

void ACrowdTestChar::BeginPlay()
{
	Super::BeginPlay();

	if(!WeakFlockManager.IsValid() && bAutoRegisterWithFlockManager) // if we have a controller, and no flock manager already
	{
		if(FlockManager)
		{
			FlockManager->TryRegisterAgent(this);
			WeakFlockManager = FlockManager;
		}
		else
		{
			// Find first flock manager not set to a scare actor
			for (TActorIterator<AFlockManager> It(GetWorld()); It; ++It)
			{
				AFlockManager* Manager = *It;
				if(Manager && Manager->ScareActor == nullptr)
				{
					Manager->TryRegisterAgent(this);
					WeakFlockManager = Manager; // Keep a ref to the manager we are registering with, for unregistration
					break;			
				}
			}
		}
	}
}

void ACrowdTestChar::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// If we are registered with a manager, unregister from it now
	if(bAutoRegisterWithFlockManager && WeakFlockManager.IsValid())
	{
		WeakFlockManager.Get()->TryUnregisterAgent(this);
	}

	Super::EndPlay(EndPlayReason);
}