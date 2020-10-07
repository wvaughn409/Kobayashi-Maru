// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GroupMovementTypes.h"
#include "Actors/UPSBasePatrolObject.h"
#include "Navigation/PathFollowingComponent.h"
#include "AITypes.h"
#include "UPSMovementGroup.generated.h"

class ACharacter;
class UBillboardComponent;
class AUPSGroupMovementFormation;

/*
Movement group moves group members to a group leader position. For each member of the group created actor - AUPSGroupMemberMovementPoint 
and witten to blackboard to key with name UUPSMovementGroupsSettings::Get()->GroupMovementPointBBName. By default movement takes place in behavior tree with special task
If AI dont have key with it name movement takes place with AIMoveTo function in ai controller

You can get movement group for character (if he is group leader) from group movement manager with function - UUPSGroupMovementManager::GetMovementGroup

With delayed movement, group members can start movement with a delay
*/

UCLASS(BlueprintType, Blueprintable)
class PATROLACTIONSYSTEM_API AUPSMovementGroup : public AUPSBasePatrolObject
{
	GENERATED_BODY()
	
public:	
	AUPSMovementGroup();

public:	
	/*AActor start*/
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void PostRegisterAllComponents() override;
	virtual void PostUnregisterAllComponents() override;

#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	/*AActor end*/

	UFUNCTION(BlueprintCallable, Category = "UPSGroupMovement")
	virtual void SetGroupLeader(ACharacter* NewLeader);
	
	UFUNCTION(BlueprintCallable, Category = "UPSGroupMovement")
	virtual void AddGroupMember(ACharacter* NewMember);

	UFUNCTION(BlueprintCallable, Category = "UPSGroupMovement")
	virtual void RemoveGroupMember(ACharacter* MemberToRemove);

	ACharacter* GetGroupLeader() const;

	TMap<ACharacter*, FMovementGroupMemberInfo>& GetGroupMembers();

	UFUNCTION(BlueprintCallable, Category = "UPSGroupMovement")
	void UpdateLocationInFormationForCharacter(ACharacter* Character);

protected:
	UFUNCTION(BlueprintCallable, Category = "UPSGroupMovement")
	virtual void InitializeGroupMembers();

	virtual void InitializeGroupLeader();

	FTransform GetLeaderMovementPointTransform(FVector InLocation);

	UFUNCTION()
	virtual void OnLeaderStartMovementToLocation(FVector NewLocation);
	virtual void InternalOnLeaderStartMovementToLocation(FVector NewLocation);

	UFUNCTION()
	virtual void OnLeaderStartMovementToActor(AActor* NewActor);
	virtual void InternalOnLeaderStartMovementToActor(AActor* NewActor);

	UFUNCTION()
	virtual void OnLeaderCompleteMovement(FAIRequestID RequestID, EPathFollowingResult::Type Result);

	virtual void ExecuteDelayedMovement(TWeakObjectPtr<ACharacter> ForCharacter);

	virtual void StopMembersMovement();

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Leader Start Movement To Location"), Category = "UPSGroupMovement")
	void K2_OnLeaderStartMovementToLocation(FVector NewLocation);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Leader Start Movement To Actor"), Category = "UPSGroupMovement")
	void K2_OnLeaderStartMovementToActor(AActor* NewActor);

	UFUNCTION()
	virtual void OnCharacterDestroyed(AActor* DestroyedActor);

	void ClearDelayedMovement();

protected:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "UPSGroupMovement")
	ACharacter* GroupLeader = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "UPSGroupMovement")
	TMap<ACharacter*, FMovementGroupMemberInfo> MovementGroupMembers;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, Category = "UPSGroupMovement")
	bool bRotateMovementPointsAroundLeader = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPSGroupMovement")
	TSubclassOf<AUPSGroupMovementFormation> Formation;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (ClampMin = 0.f), Category = "UPSGroupMovement")
	float MembersMovementReactionTime = 0.f;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (ClampMin = 0.f), Category = "UPSGroupMovement")
	float MembersMovementReactionTimeRandomDiviation = 0.f;

	UPROPERTY()
	AUPSGroupMovementAIController* GroupMovementLeaderAIC = nullptr;

	UPROPERTY(VisibleAnywhere, Category = "UPSGroupMovement")
	UBillboardComponent* BillboardComponent;

	UPROPERTY()
	AUPSGroupMovementFormation* SpawnedFormation = nullptr;

	FTransform OriginLeaderTransform;

	UPROPERTY()
	TMap<ACharacter*, FDelayedGroupMovement> DelayedMovement;
};
