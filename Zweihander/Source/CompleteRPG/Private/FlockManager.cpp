// Copyright Epic Games, Inc. All Rights Reserved.

#include "CompleteRPG.h"
#include "FlockManager.h"
#include "FlockCrowdFollowingComponent.h"
#include "EngineUtils.h"
#include "Components/BillboardComponent.h"
#include "NavigationSystem.h"
#include "CrowdTestAIController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "CrowdTestChar.h"

#include "EngineGlobals.h"
#include "Engine/Engine.h"
#include "VisualLogger/VisualLogger.h"
#include "DrawDebugHelpers.h"

DEFINE_LOG_CATEGORY_STATIC(LogFlockManager, Warning, All);

namespace FlockManagerConstants
{
	const float TimeToPathFindForFleeingAgents = 0.1f;
}

FAgentInfo::FAgentInfo(UFlockCrowdFollowingComponent* InPathFollowingComponent)
	: PathFollowingComponent(InPathFollowingComponent)
	, CharacterMovementComponent(nullptr)
	, SkeletalMeshComponent(nullptr)
	, OwningPawn(nullptr)
	, AIController(nullptr)
	, Location(0.0f, 0.0f, 0.0f)
	, PerceivedCenterOfMass(0.0f, 0.0f, 0.0f)
	, TargetLocation(0.0f, 0.0f, 0.0f)
	, TargetCentroid(0.0f, 0.0f, 0.0f)
	, TimeToPathFind(0.0f)
	, TimeToMove(0.0f)
	, Spookedness(0.0f)
	, SpookednessRate(FMath::FRandRange(0.8f, 1.2f))
	, PlayerDeltaLength(0.0f)
	, State(EAgentState::Grazing)
	, bWantsNewPath(false)
{
	if (PathFollowingComponent)
	{
		AIController = Cast<ACrowdTestAIController>(PathFollowingComponent->GetOwner());

		if (AIController)
		{
			OwningPawn = AIController->GetPawn();
			if (OwningPawn)
			{
				CharacterMovementComponent = OwningPawn->FindComponentByClass<UCharacterMovementComponent>();
				SkeletalMeshComponent = OwningPawn->FindComponentByClass<USkeletalMeshComponent>();
			}
		}
	}
}

AFlockManager::AFlockManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	// Add a billboard component as the root
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrowdTexture(TEXT("/Engine/EditorMaterials/TargetIconSpawn"));
	SpriteComponent = ObjectInitializer.CreateDefaultSubobject<UBillboardComponent>(this, TEXT("SpriteComp"));
	SpriteComponent->Sprite = CrowdTexture.Object;
	RootComponent = SpriteComponent;

	MoveTimer = 8.0f;
	MoveTimerVariance = 4.0f;
	PathFindTimer = 10.0f;
	PathFindTimerVariance = 5.0f;
	AgentWalkSpeed = 125.0f;
	AgentRunSpeed = 440.0f;
	SpookRadius = 1500.0f;
	SpookSafetyRadius = 6000.0f;
	PlayerTrackingRadius = 2000.0f;
	AgentAgentSpookRadius = 400.0f;
	PathFindSuccessRadius = 500.0f;
	TargetCentroidRadius = 3000.0f;
	MaxRequestsPerFrame = 8;
	FullCharacterMovementRadius = 2000.0f;
	AnimationRadius = 8000.0f;
	CenterOfMassPerceptionRadius = 5000.0f;
	PositionToRunTo = FVector(0.0f, 0.0f, 0.0f);
	MovementMode = EFlockMovementMode::Flock;
	RadiusOfFlockWhenRunningDirectionally = 5000.0f;
	TickRate = 0.033f * 8.0f;
	TickAccumulator = 0.0f;
}


void AFlockManager::TryRegisterAgent(ACrowdTestChar* CrowdChar)
{
	// Check we were passed an agent, and it isn't already registered 
	if(CrowdChar && FindInfoIndexFromPawn(CrowdChar) == INDEX_NONE)
	{
		// Find a controller
		ACrowdTestAIController* Controller = Cast<ACrowdTestAIController>(CrowdChar->GetController());
		if (Controller)
		{
			// Find component on the controller
			UFlockCrowdFollowingComponent* FlockComponent = Controller->FindComponentByClass<UFlockCrowdFollowingComponent>();
			if (FlockComponent)
			{
				Agents.Add(FAgentInfo(FlockComponent));

				FAgentInfo& NewInfo = Agents.Last();
				const FVector AgentLocation = NewInfo.OwningPawn->GetActorLocation(); 
				NewInfo.Location = AgentLocation;
				NewInfo.TargetLocation = AgentLocation;
				NewInfo.TargetCentroid = AgentLocation;
				NewInfo.bWantsNewPath = false;
				NewInfo.State = FMath::FRand() < 0.5f ? EAgentState::Grazing : EAgentState::Walking;

				UNavigationSystemV1::RegisterNavigationInvoker(*NewInfo.OwningPawn, 3000.0f, 8000.0f);
			}
		}
	}
}

void AFlockManager::TryUnregisterAgent(ACrowdTestChar* CrowdChar)
{
	if(CrowdChar)
	{
		// remove from request queue
		int32 StackIndex = 0;
		for(auto AgentIndex : RequestStack)
		{
			if(AgentIndex < Agents.Num())
			{
				if(Agents[AgentIndex].OwningPawn == CrowdChar)
				{
					RequestStack.RemoveAt(StackIndex);
					break;
				}
			}
			StackIndex++;
		}

		// Find index for the info about this agent
		int32 AgentIndexToRemove = FindInfoIndexFromPawn(CrowdChar);
		if(AgentIndexToRemove != INDEX_NONE)
		{
			// Remove from array
			Agents.RemoveAt(AgentIndexToRemove);
		}

		// adjust request stack indices
		for(auto& AgentIndex : RequestStack)
		{
			if(AgentIndex > AgentIndexToRemove)
			{
				AgentIndex--;
			}
		}

		UNavigationSystemV1::UnregisterNavigationInvoker(*CrowdChar);
	}
}

int32 AFlockManager::FindInfoIndexFromPawn(APawn* InPawn)
{
	int32 ResultIndex = INDEX_NONE;

	// Linear search for the right info. @TODO hash these?
	for (int AgentIdx = 0; AgentIdx < Agents.Num(); AgentIdx++)
	{
		FAgentInfo& Info = Agents[AgentIdx];
		if (Info.OwningPawn == InPawn)
		{
			ResultIndex = AgentIdx;
			break;
		}
	}

	return ResultIndex;
}


void AFlockManager::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TickAccumulator += DeltaSeconds;
	if(TickAccumulator < TickRate)
	{
		return;
	}

	if(ScareActor != nullptr)
	{
		PlayerLocation = ScareActor->GetActorLocation();
	}
	else
	{
		if(GetWorld() && GetWorld()->GetFirstPlayerController() && GetWorld()->GetFirstPlayerController()->GetPawn())
		{
			PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
		}
	}

	CenterOfMassPerceptionRadiusSquared = CenterOfMassPerceptionRadius * CenterOfMassPerceptionRadius;

	// update agent positions
	for (auto& AgentInfo : Agents)
	{
		if (AgentInfo.OwningPawn != nullptr)
		{
			AgentInfo.Location = AgentInfo.OwningPawn->GetActorLocation();
		}
	}

	bool bCleanDeadActors = false;

	switch (MovementMode)
	{
	case EFlockMovementMode::JustWalkForwards:
		{
			// Just make them all walk in one direction. Useful for perf testing.
			for (auto& AgentInfo : Agents)
			{
				if (AgentInfo.OwningPawn == nullptr || AgentInfo.OwningPawn->IsPendingKill())
				{
					bCleanDeadActors = true;
					continue;
				}

				// Move it
				AgentInfo.CharacterMovementComponent->RequestDirectMove(FVector(AgentInfo.CharacterMovementComponent->MaxWalkSpeed, 0, 0), false);
			}
		}
		break;
	case EFlockMovementMode::Flock:
		{
			// calculate relevant boids data
			int32 AgentIndex = 0;
			for (auto& AgentInfo : Agents)
			{
				if (AgentInfo.OwningPawn == nullptr || AgentInfo.OwningPawn->IsPendingKill())
				{
					bCleanDeadActors = true;
					continue;
				}

				AgentInfo.TimeToPathFind -= TickAccumulator;
				AgentInfo.TimeToMove -= TickAccumulator;

				if (AgentInfo.State != EAgentState::Fleeing && AgentInfo.TimeToMove < 0.0f)
				{
					AgentInfo.State = AgentInfo.State == EAgentState::Grazing ? EAgentState::Walking : EAgentState::Grazing;
					AgentInfo.TimeToMove = MoveTimer - (MoveTimerVariance * 0.5f) + (FMath::FRand() * MoveTimerVariance);
				}

				if (AgentInfo.State == EAgentState::Grazing)
				{
					AgentInfo.PathFollowingComponent->SpeedLimit = 0.0f;
				}
				else if (AgentInfo.State == EAgentState::Walking)
				{
					AgentInfo.PathFollowingComponent->SpeedLimit = AgentWalkSpeed;
				}
				else if (AgentInfo.State == EAgentState::Fleeing)
				{
					AgentInfo.PathFollowingComponent->SpeedLimit = AgentRunSpeed;
				}

				FVector PerceivedCenterOfMass = FVector::ZeroVector;
				float CenterOfMassCounter = 0.0f;
				float SpookednessOfOthers = 0.0f;
				float SpookednessCount = 0.0f;

				for (auto& OtherAgentInfo : Agents)
				{
					if (OtherAgentInfo.OwningPawn != nullptr && AgentInfo.PathFollowingComponent != OtherAgentInfo.PathFollowingComponent)
					{
						const FVector CharDelta = AgentInfo.Location - OtherAgentInfo.Location;
						const float DistanceSquared = CharDelta.SizeSquared();

						if (DistanceSquared < CenterOfMassPerceptionRadiusSquared)
						{
							PerceivedCenterOfMass += OtherAgentInfo.Location;
							CenterOfMassCounter += 1.0f;
						}

						if (OtherAgentInfo.State == EAgentState::Fleeing && DistanceSquared < AgentAgentSpookRadius * AgentAgentSpookRadius)
						{
							// spooked agents can spook others
							SpookednessOfOthers += OtherAgentInfo.Spookedness * 0.99f;
							SpookednessCount += 1.0f;
						}
					}
				}

				if (CenterOfMassCounter > 0.0f)
				{
					AgentInfo.PerceivedCenterOfMass = PerceivedCenterOfMass / CenterOfMassCounter;
				}
				else
				{
					AgentInfo.PerceivedCenterOfMass = AgentInfo.Location;
				}

				if (SpookednessCount > 0.0f)
				{
					SpookednessOfOthers = SpookednessOfOthers / SpookednessCount;
				}

				const FVector PlayerDelta = PlayerLocation - AgentInfo.Location;
				AgentInfo.PlayerDeltaLength = PlayerDelta.Size();

				bool bWantNewPath = false;

				if (bAlwaysBolt || AgentInfo.PlayerDeltaLength < SpookRadius)
				{
					EAgentState OldState = AgentInfo.State;
					AgentInfo.State = EAgentState::Fleeing;
					AgentInfo.Spookedness = 1.0f;
					if(OldState != EAgentState::Fleeing)
					{
						// newly fleeing - force new path request
						bWantNewPath = true;
					}
					else
					{
						AgentInfo.TimeToPathFind = FMath::Min(AgentInfo.TimeToPathFind, FlockManagerConstants::TimeToPathFindForFleeingAgents);
					}
				}
				else
				{
					if (AgentInfo.State == EAgentState::Fleeing)
					{
						AgentInfo.Spookedness -= TickAccumulator * AgentInfo.SpookednessRate * 0.1f;

						if (AgentInfo.Spookedness < 0.0f)
						{
							AgentInfo.State = EAgentState::Walking;
							AgentInfo.TimeToMove = MoveTimer - (MoveTimerVariance * 0.5f) + (FMath::FRand() * MoveTimerVariance);
						}
					}
					else if (SpookednessOfOthers > 0.01f)
					{
						AgentInfo.State = EAgentState::Fleeing;
						AgentInfo.Spookedness = SpookednessOfOthers;
						AgentInfo.TimeToPathFind = FMath::Min(AgentInfo.TimeToPathFind, FlockManagerConstants::TimeToPathFindForFleeingAgents);
					}
				}

				if (bWantNewPath || AgentNeedsNewTarget(AgentInfo))
				{
					// we need to re-path, so choose a target location
					ChooseTargetLocation(AgentInfo, AgentInfo.TargetLocation, AgentInfo.TargetCentroid);
					if(!AgentInfo.bWantsNewPath)
					{
						AgentInfo.bWantsNewPath = true;
						RequestStack.Add(AgentIndex);
					}
				}

				// player tracking update
				if(AgentInfo.PlayerDeltaLength < PlayerTrackingRadius)
				{
					Cast<ACrowdTestAIController>(AgentInfo.AIController)->bPlayerVisible = true;

					FRotator DesiredRotation = PlayerDelta.Rotation();
					FRotator CurrentRotation = AgentInfo.OwningPawn->GetActorForwardVector().Rotation();
					FRotator DeltaRotation = DesiredRotation - CurrentRotation;
					Cast<ACrowdTestAIController>(AgentInfo.AIController)->PlayerLookUpDown = DeltaRotation.Pitch;
					Cast<ACrowdTestAIController>(AgentInfo.AIController)->PlayerLookLeftRight = DeltaRotation.Yaw;
				}
				else
				{
					Cast<ACrowdTestAIController>(AgentInfo.AIController)->bPlayerVisible = false;
				}

				if(AgentInfo.PlayerDeltaLength < FullCharacterMovementRadius && AgentInfo.CharacterMovementComponent->MovementMode == MOVE_NavWalking)
				{
					AgentInfo.CharacterMovementComponent->SetMovementMode(MOVE_Walking);
				}
				else if(AgentInfo.PlayerDeltaLength >= FullCharacterMovementRadius && AgentInfo.CharacterMovementComponent->MovementMode == MOVE_Walking)
				{
					// Only switch to NavWalking if there is navmesh at the location, otherwise NavWalking will just start falling and go back to walking or NavWalking which is pointless.
					FNavLocation NavLocation;
					if (AgentInfo.CharacterMovementComponent->FindNavFloor(AgentInfo.Location, NavLocation) && NavLocation.NodeRef != INVALID_NAVNODEREF)
					{
						AgentInfo.CharacterMovementComponent->SetMovementMode(MOVE_NavWalking);
					}
					else
					{
						UE_LOG(LogFlockManager, Log, TEXT("Agent %s trying to switch from Walking to NavWalking but can't find navmesh! Staying in Walking."), *GetNameSafe(AgentInfo.OwningPawn));
					}
				}

				if(AgentInfo.PlayerDeltaLength < AnimationRadius)
				{
					AgentInfo.SkeletalMeshComponent->bNoSkeletonUpdate = false;
				}
				else
				{
					AgentInfo.SkeletalMeshComponent->bNoSkeletonUpdate = true;
				}

				AgentIndex++;
			}

			// bubble sort pass to keep requests in rough order
			for (int32 RequestIndex = 0; RequestIndex < RequestStack.Num() - 1; RequestIndex++)
			{
				if (Agents[RequestStack[RequestIndex]].PlayerDeltaLength < Agents[RequestStack[RequestIndex + 1]].PlayerDeltaLength)
				{
					Swap(RequestStack[RequestIndex], RequestStack[RequestIndex + 1]);
				}
			}
		}
		break;
	case EFlockMovementMode::SpecifyTargetPosition:
		{
			int32 AgentIndex = 0;
			for (auto& AgentInfo : Agents)
			{
				if (AgentInfo.OwningPawn == nullptr || AgentInfo.OwningPawn->IsPendingKill())
				{
					bCleanDeadActors = true;
					continue;
				}

				const FVector PlayerDelta = PlayerLocation - AgentInfo.Location;
				AgentInfo.PlayerDeltaLength = PlayerDelta.Size();

				AgentInfo.TimeToPathFind -= TickAccumulator;

				if(bBoltWhileRunningDirectionally || bAlwaysBolt)
				{
					if(AgentInfo.PlayerDeltaLength < SpookRadius || bAlwaysBolt)
					{
						AgentInfo.State = EAgentState::Fleeing;
						AgentInfo.PathFollowingComponent->SpeedLimit = AgentRunSpeed;
					}
					else
					{
						AgentInfo.State = EAgentState::Walking;
						AgentInfo.PathFollowingComponent->SpeedLimit = AgentWalkSpeed;
					}
				}
				else
				{
					AgentInfo.State = EAgentState::Fleeing;
					AgentInfo.PathFollowingComponent->SpeedLimit = AgentRunSpeed;
				}

				if(DirectionalAgentNeedsNewTarget(AgentInfo))
				{
					AgentInfo.TargetCentroid = PositionToRunTo;

					if (FindRandomPointInCircleOnNavigation(AgentInfo.TargetCentroid, RadiusOfFlockWhenRunningDirectionally, AgentInfo.TargetLocation) == true)
					{
						if (!AgentInfo.bWantsNewPath)
						{
							AgentInfo.bWantsNewPath = true;
							RequestStack.Add(AgentIndex);
						}
					}
					else
					{
						UE_VLOG(this, LogFlockManager, Warning, TEXT("failed to find point on navigation while assigning new target in SpecifyTargetPosition mode"));
					}
				}

				// always use full-fat movement
				if(AgentInfo.CharacterMovementComponent->MovementMode == MOVE_NavWalking)
				{
					AgentInfo.CharacterMovementComponent->SetMovementMode(MOVE_Walking);
				}

				AgentInfo.SkeletalMeshComponent->bNoSkeletonUpdate = false;

				AgentIndex++;
			}

			// bubble sort pass to keep requests in rough order
			for (int32 RequestIndex = 0; RequestIndex < RequestStack.Num() - 1; RequestIndex++)
			{
				if (Agents[RequestStack[RequestIndex]].TimeToPathFind < Agents[RequestStack[RequestIndex + 1]].TimeToPathFind)
				{
					Swap(RequestStack[RequestIndex], RequestStack[RequestIndex + 1]);
				}
			}

			
		}
		break;
	}

	int32 RequestCount = 0;
	while (RequestStack.Num() > 0 && RequestCount < MaxRequestsPerFrame)
	{
		int32 AgentIndex = RequestStack.Pop(false);
		if(Agents.IsValidIndex(AgentIndex))
		{
			FAgentInfo& AgentInfo = Agents[AgentIndex];
			if(AgentInfo.OwningPawn && AgentInfo.AIController)
			{
				AgentInfo.AIController->MoveToLocation(AgentInfo.TargetLocation, PathFindSuccessRadius, false, true, false, false);

				if (AgentInfo.State == EAgentState::Fleeing)
				{
					AgentInfo.TimeToPathFind = FlockManagerConstants::TimeToPathFindForFleeingAgents;
				}
				else
				{
					AgentInfo.TimeToPathFind = PathFindTimer - (PathFindTimerVariance * 0.5f) + (FMath::FRand() * PathFindTimerVariance);
				}

				RequestCount++;
			}

			AgentInfo.bWantsNewPath = false;
		}
	}

	if(bCleanDeadActors)
	{
		RequestStack.RemoveAll([&](int32 AgentIndex)->bool
		{
			if(Agents.IsValidIndex(AgentIndex))
			{
				FAgentInfo& AgentInfo = Agents[AgentIndex];
				if(AgentInfo.OwningPawn == nullptr || AgentInfo.OwningPawn->IsPendingKill())
				{
					return true;
				}
			}

			return false;
		});

		Agents.RemoveAll([](const FAgentInfo& AgentInfo)->bool
		{
			return AgentInfo.OwningPawn == nullptr || AgentInfo.OwningPawn->IsPendingKill();
		});
	}

	TickAccumulator = 0.0f;
}

bool AFlockManager::DirectionalAgentNeedsNewTarget(const FAgentInfo& InAgentInfo) const
{
	// reached path destination
	if ((InAgentInfo.TargetLocation - InAgentInfo.Location).SizeSquared() < PathFindSuccessRadius * PathFindSuccessRadius)
	{
		return true;
	}

	// no path as yet
	if(!InAgentInfo.PathFollowingComponent->GetPath().IsValid())
	{
		return true;
	}

	return false;
}

bool AFlockManager::AgentNeedsNewTarget(FAgentInfo& InAgentInfo) const
{
	if (InAgentInfo.State == EAgentState::Grazing)
	{
		return false;
	}

	if (InAgentInfo.TimeToPathFind > 0.0f)
	{
		return false;
	}
	
	if (InAgentInfo.State == EAgentState::Fleeing)
	{
		// in player radius
		if (InAgentInfo.PlayerDeltaLength < SpookRadius)
		{
			// target centroid has moved
			const FVector TargetCentroidDelta = InAgentInfo.TargetCentroid - GetTargetCentroid(InAgentInfo, InAgentInfo.TargetCentroidDirection);
			if (TargetCentroidDelta.SizeSquared() > TargetCentroidRadius * TargetCentroidRadius)
			{
				return true;
			}
		}
	}

	
	if (InAgentInfo.State == EAgentState::Grazing)
	{
		// outside COM radius
		const FVector CenterOfMassDelta = InAgentInfo.PerceivedCenterOfMass - InAgentInfo.Location;
		if (CenterOfMassDelta.SizeSquared() > CenterOfMassPerceptionRadiusSquared)
		{
			return true;
		}
	}

	// reached path destination
	if ((InAgentInfo.TargetLocation - InAgentInfo.Location).SizeSquared() < PathFindSuccessRadius * PathFindSuccessRadius)
	{
		return true;
	}

	// no path as yet
	if(!InAgentInfo.PathFollowingComponent->GetPath().IsValid())
	{
		return true;
	}

	return false;
}

static FVector GetPerp2D(const FVector& InVector, bool bLeft)
{
	return FVector(bLeft ? InVector.Y : -InVector.Y, InVector.X, InVector.Z);
}

FVector AFlockManager::GetTargetCentroid(const FAgentInfo& InAgentInfo, ETargetCentroidDirection TargetType) const
{
	if (InAgentInfo.State == EAgentState::Fleeing)
	{
		// pick a location that moves the center of mass away from the player
		switch(TargetType)
		{
		default:
		case ETargetCentroidDirection::AwayFromPlayer:
			return InAgentInfo.Location + ((InAgentInfo.PerceivedCenterOfMass - PlayerLocation).GetSafeNormal2D() * CenterOfMassPerceptionRadius);
		case ETargetCentroidDirection::BehindPlayer:
			return InAgentInfo.Location - ((InAgentInfo.PerceivedCenterOfMass - PlayerLocation).GetSafeNormal2D() * CenterOfMassPerceptionRadius);
		case ETargetCentroidDirection::LeftOfPlayer:
			return InAgentInfo.Location - (GetPerp2D((InAgentInfo.PerceivedCenterOfMass - PlayerLocation).GetSafeNormal2D(), true) * CenterOfMassPerceptionRadius);
		case ETargetCentroidDirection::RightOfPlayer:
			return InAgentInfo.Location - (GetPerp2D((InAgentInfo.PerceivedCenterOfMass - PlayerLocation).GetSafeNormal2D(), false) * CenterOfMassPerceptionRadius);
		}
	}
	else
	{
		// pick a location around the center of mass
		return InAgentInfo.PerceivedCenterOfMass;
	}
}

void AFlockManager::ChooseTargetLocation(FAgentInfo& InAgentInfo, FVector& OutTargetLocation, FVector& OutTargetCentroid) const
{
	bool bProjected = false;
	for(int32 Direction = 0; Direction < (int32)ETargetCentroidDirection::Count && !bProjected; Direction++)
	{
		OutTargetCentroid = GetTargetCentroid(InAgentInfo, (ETargetCentroidDirection)Direction);
		// @note: multiplying radius by 0.5 to maintain the previous behavior, but I don't think it's right
		if (FindRandomPointInCircleOnNavigation(OutTargetCentroid, CenterOfMassPerceptionRadius * 0.1f, OutTargetLocation))
		{
			bProjected = true;
			InAgentInfo.TargetCentroidDirection = (ETargetCentroidDirection)Direction;
		}
	}

	if(!bProjected)
	{
		UE_VLOG_LOCATION(this, LogFlockManager, Warning, InAgentInfo.Location, 50.0f, FColor::Yellow, TEXT("ChooseTargetLocation: failed to find point on navigation from point (%f, %f, %f)"), InAgentInfo.Location.X, InAgentInfo.Location.Z, InAgentInfo.Location.Z);
	}
}

bool AFlockManager::FindRandomPointInCircleOnNavigation(const FVector Center, float Radius, FVector& OutLocation) const
{
	const UWorld* World = GetWorld();
	if (World != nullptr && World->GetNavigationSystem() != nullptr)
	{
		const float Angle = FMath::FRandRange(0.0f, PI * 2.0f);
		FNavLocation ProjectedLocation;
		if (FNavigationSystem::GetCurrent<UNavigationSystemV1>(World)->ProjectPointToNavigation(Center + (FVector(FMath::Sin(Angle), FMath::Cos(Angle), 0.0f) * Radius), ProjectedLocation, FVector(200.0f, 200.0f, Radius)))
		{
			OutLocation = ProjectedLocation.Location;
			return true;
		}
		else if (FNavigationSystem::GetCurrent<UNavigationSystemV1>(World)->ProjectPointToNavigation(Center, ProjectedLocation, FVector(200.0f, 200.0f, Radius)))
		{
			UE_VLOG_LOCATION(this, LogFlockManager, Log, ProjectedLocation.Location, 50.0f, FColor::Blue, TEXT("FindRandomPointInCircleOnNavigation: falling back to center location (%f, %f, %f)"), ProjectedLocation.Location.X, ProjectedLocation.Location.Y, ProjectedLocation.Location.Z);
			OutLocation = ProjectedLocation.Location;
			return true;
		}
	}

	UE_VLOG_LOCATION(this, LogFlockManager, Log, Center, 50.0f, FColor::Blue, TEXT("FindRandomPointInCircleOnNavigation: failed to project location (%f, %f, %f)"), Center.X, Center.Y, Center.Z);

	return false;
}

void AFlockManager::SetScareActor(AActor* Actor)
{
	ScareActor = Actor;
}

void AFlockManager::SetMovementMode(EFlockMovementMode Mode)
{
	EFlockMovementMode LastMovementMode = MovementMode;

	MovementMode = Mode;
	if(LastMovementMode != MovementMode )
	{
		// invalidate paths
		for (auto& AgentInfo : Agents)
		{
			AgentInfo.PathFollowingComponent->AbortMove(*this, FPathFollowingResultFlags::InvalidPath);
		}
	}
}

void AFlockManager::Bolt()
{
	switch(MovementMode)
	{
	case EFlockMovementMode::JustWalkForwards:
		break;
	case EFlockMovementMode::Flock:
		bAlwaysBolt = true;
		break;
	case EFlockMovementMode::SpecifyTargetPosition:
		bBoltWhileRunningDirectionally = true;
		bAlwaysBolt = true;
		break;
	}
}

void AFlockManager::EndPlay(const EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);

	RequestStack.Empty();
}