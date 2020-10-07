// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tasks/AITask.h"
#include "AIController.h"
#include "AITypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UPSMoveToEnemyPointAction.generated.h"

class UUPSEnemyPointActionComponent;
class ACharacter;
class UUPSMoveToEnemyPointAction;
class UNavigationQueryFilter;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnMovetoEnemyPointActionFinished, ACharacter*, Character, UUPSMoveToEnemyPointAction*, MoveTask, EPathFollowingResult::Type, Result);

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FUPSMoveParams
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	bool bUsePathfinding = true;

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	bool bAllowPartialPath = true;

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	bool bProjectGoalLocation = false;

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	TSubclassOf<UNavigationQueryFilter> NavFilter = nullptr;

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	float AcceptenceRadius = 1.f;

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	bool bReachTestIncludesAgentRadius = false;

	UPROPERTY(EditAnywhere, Category = "UPSEnemyPointAction")
	bool bCanStrafe = true;
};

UCLASS()
class PATROLACTIONSYSTEM_API UUPSMoveToEnemyPointAction : public UAITask
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = "PointToMove", BlueprintInternalUseOnly = "TRUE"), Category = "UPSEnemyPointAction")
	static UUPSMoveToEnemyPointAction* UPSMoveToLocation(ACharacter* Character, FVector Location, FUPSMoveParams& MoveParams);

	virtual void Activate() override;

	virtual void OnDestroy(bool bInOwnerFinished) override;

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	void StopMovement(bool bEndTask = false);

	UPROPERTY(BlueprintAssignable, Category = "UPSEnemyPointAction")
	FOnMovetoEnemyPointActionFinished OnMoveToEnemyPointActionFinishedDelegate;

protected:
	UFUNCTION()
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);

protected:
	UPROPERTY()
	ACharacter* MoveChracter;

	bool bMovementFinished = false;

	FPathFollowingRequestResult PathRequest;

	FVector MoveLocation = FVector::ZeroVector;

	UPROPERTY()
	FUPSMoveParams MoveParams;
};
