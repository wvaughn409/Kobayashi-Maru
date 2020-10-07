// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once

#include "GameFramework/Actor.h"
#include "FlockManager.generated.h"

UENUM()
enum class EAgentState : uint8
{
	Grazing,

	Walking,

	Fleeing,
};

UENUM()
enum class EFlockMovementMode : uint8
{
	/** Use flocking system */
	Flock,

	/** Useful for performance testing - just walk forwards */
	JustWalkForwards,

	/** Specify a target position using PositionToRunTo and route find to it */
	SpecifyTargetPosition
};

/** Enum describing query points for navmesh projection */
UENUM()
enum class ETargetCentroidDirection : uint8
{
	AwayFromPlayer,

	BehindPlayer,

	LeftOfPlayer,

	RightOfPlayer,

	Count,
};

USTRUCT()
struct FAgentInfo
{
	GENERATED_USTRUCT_BODY()

	FAgentInfo() = default;

	FAgentInfo(class UFlockCrowdFollowingComponent* InPathFollowingComponent);

	UPROPERTY(VisibleAnywhere, Transient)
	class UFlockCrowdFollowingComponent* PathFollowingComponent = nullptr;

	UPROPERTY(VisibleAnywhere, Transient)
	class UCharacterMovementComponent* CharacterMovementComponent = nullptr;

	UPROPERTY(VisibleAnywhere, Transient)
	class USkeletalMeshComponent* SkeletalMeshComponent = nullptr;

	UPROPERTY(VisibleAnywhere, Transient)
	class APawn* OwningPawn = nullptr;

	UPROPERTY(VisibleAnywhere, Transient)
	class AAIController* AIController = nullptr;

	/** Current location of this agent */
	UPROPERTY(VisibleAnywhere, Transient)
	FVector Location = FVector::ZeroVector;

	/** Center of mass that this agent perceives */
	UPROPERTY(VisibleAnywhere, Transient)
	FVector PerceivedCenterOfMass = FVector::ZeroVector;

	/** Target location of this agent */
	UPROPERTY(VisibleAnywhere, Transient)
	FVector TargetLocation = FVector::ZeroVector;

	/** Centroid of the target location area */
	UPROPERTY(VisibleAnywhere, Transient)
	FVector TargetCentroid = FVector::ZeroVector;

	/** Time until next pathfind is forced */
	UPROPERTY(VisibleAnywhere, Transient)
	float TimeToPathFind = 0.0f;

	/** Time until next move is forced */
	UPROPERTY(VisibleAnywhere, Transient)
	float TimeToMove = 0.0f;

	/** Spookedness factor */
	UPROPERTY(VisibleAnywhere, Transient)
	float Spookedness = 0.0f;

	/** Spookedness rate 0->1 */
	UPROPERTY(VisibleAnywhere, Transient)
	float SpookednessRate = 0.0f;

	/** Distance to player */
	UPROPERTY(VisibleAnywhere, Transient)
	float PlayerDeltaLength = 0.0f;

	/** Agent state */
	UPROPERTY(VisibleAnywhere, Transient)
	EAgentState State = EAgentState::Grazing;

	/** New path required (agent is queued) */
	UPROPERTY(VisibleAnywhere, Transient)
	bool bWantsNewPath = false;

	/** Projection direction we last took */
	UPROPERTY(VisibleAnywhere, Transient)
	ETargetCentroidDirection TargetCentroidDirection = ETargetCentroidDirection::AwayFromPlayer;
};

/** Class that controls all the agents */
UCLASS(BlueprintType)
class AFlockManager : public AActor
{
	GENERATED_UCLASS_BODY()

	/** Attempts to find a flocking component within the provided agent's controller to register with the manager
	 *	@param CrowdChar Agent whos controller to check for suitable component
	 */
	UFUNCTION(BlueprintCallable, Category = "Flock")
	void TryRegisterAgent(class ACrowdTestChar* CrowdChar);

	/** Try to unregister the supplied agent from this manager */
	UFUNCTION(BlueprintCallable, Category = "Flock")
	void TryUnregisterAgent(class ACrowdTestChar* CrowdChar);

	virtual void Tick(float DeltaSeconds) override;
	virtual void EndPlay(const EEndPlayReason::Type Reason) override;

	bool AgentNeedsNewTarget(FAgentInfo& InAgentInfo) const;
	bool DirectionalAgentNeedsNewTarget(const FAgentInfo& InAgentInfo) const;
	void ChooseTargetLocation(FAgentInfo& InAgentInfo, FVector& OutTargetLocation, FVector& OutTargetCentroid) const;
	bool FindRandomPointInCircleOnNavigation(const FVector Center, float Radius, FVector& OutLocation) const;
	FVector GetTargetCentroid(const FAgentInfo& InAgentInfo, ETargetCentroidDirection TargetType) const;

	/** Set an actor */
	UFUNCTION(BlueprintCallable, Category = "Flock")
	void SetScareActor(AActor* Actor);

	UFUNCTION(BlueprintCallable, Category = "Flock")
	void SetMovementMode(EFlockMovementMode Mode);

	/** Cause deer to transition to running state, does not work in JustWalkForwards mode */
	UFUNCTION(BlueprintCallable, Category = "Flock")
	void Bolt();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	AActor* ScareActor;

	/** Sprite component, also used as root */
	UPROPERTY()
	class UBillboardComponent* SpriteComponent;

	/** Array of agents */
	UPROPERTY(VisibleAnywhere, Transient, Category = "Flock")
	TArray<FAgentInfo> Agents;

	/** Array of agents wanting pathfinding */
	TArray<int32> RequestStack;

	UPROPERTY(Transient)
	float CenterOfMassPerceptionRadiusSquared;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float MoveTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float MoveTimerVariance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float PathFindTimer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float PathFindTimerVariance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float AgentWalkSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float AgentRunSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float SpookRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float AgentAgentSpookRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float SpookSafetyRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float PathFindSuccessRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float TargetCentroidRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float PlayerTrackingRadius;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Flock")
	FVector PlayerLocation;

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Flock")
	EFlockMovementMode MovementMode;

	/** Maximum path requests per frame to make */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	int32 MaxRequestsPerFrame;

	/** Agents within this radius will use standard character movement rather than navmesh walking */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LOD")
	float FullCharacterMovementRadius;

	/** Agents within this radius will run their animation graph */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LOD")
	float AnimationRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float CenterOfMassPerceptionRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	FVector PositionToRunTo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float RadiusOfFlockWhenRunningDirectionally;

	/** Bolt according to player/scare actor proximity, or if bAlwaysBolt is set */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	bool bBoltWhileRunningDirectionally;

	/** Flag indicating deer should always bolt */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	bool bAlwaysBolt;

	UPROPERTY(Transient)
	float TickAccumulator;

	/** How often the flock manager ticks */
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Flock")
	float TickRate;

private:
	/** Find the info index given a particular pawn */
	int32 FindInfoIndexFromPawn(APawn* InPawn);

};