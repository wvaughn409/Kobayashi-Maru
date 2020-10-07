// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Navigation/PathFollowingComponent.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "UPSMoveToEnemyPointAction.h"
#include "GameplayTagContainer.h"
#include "UPSEnemyPointAction.generated.h"

/*
	The concept is to make one or more of the characters come to certain positions and perform some action.

	UPSEnemyPointActionComponent defines the point approached by the character. One character can only approach one point;
	after the movement is started, the point keeps a reference to the character that is using it.
	The number of such components determines how many characters can simultaneously interact with the EnemyPointAction.
	To make a character approach the point, use the StartEnemyPointAction function.

	After invoking the StartEnemyPointAction function, the character should announce approaching to the desired
	point. For this purpose, a special class UPSMovementHandler should be created, which has events when the character
	starts moving to the point, and all you need to do is invoke the FinishMovement function after the movement is
	completed, which would mean that the character has reached the PointAction point and can start acting.

	// ----------------------------------------------------------------------------------------------------------------
	//
	//	The important functions:
	//
	//		StartEnemyPointAction()	- start point action by character if has free UUPSEnemyPointActionComponent. 
	//		After success execution use AUPSPointActionMovementHandler to reach UUPSEnemyPointActionComponent
	//
	//		OnCharacterReachPoint()	- is invoked at the moment when MovementHandler is completed.
	//
	//		AllCharactersReachPoints()	-  is invoked when all possible characters have reached their points. The number of available characters is equal to the number of EnemyPointActionComponents.
	//
	//		AbortEnemyPointAction()	- interrupt the execution of the PointAction by character. If bFinishActionAfterCharacterAbort == true, finish point action for all characters
	//
	//		FinishPointAction()	- finish point action, call finish callback	for each character started point action @see ActionFinishedCallbacks
	//
	//		AllCharactersReachPoints() - is invoked when all possible characters have reached their points. The number of available characters is equal to the number of EnemyPointActionComponents.
	//
	// ----------------------------------------------------------------------------------------------------------------

*/

class ACharacter;
class UUPSEnemyPointActionComponent;
class AAIController;
class UAITask_MoveTo;
class UUPSMoveToEnemyPointAction;
class UUPSAITask_AIRotateToTarget;
class AUPSPointActionMovementHandler;

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEnemyPointActionFinished, AUPSEnemyPointAction*, EnemyPointAction, ACharacter*, Character);

UCLASS(BlueprintType, Blueprintable, Abstract)
class PATROLACTIONSYSTEM_API AUPSEnemyPointAction : public AActor
{
	GENERATED_BODY()
	
public:	
	AUPSEnemyPointAction();

	/*AActor Begin*/
	virtual void PostRegisterAllComponents() override;
	virtual void Tick(float DeltaSeconds) override;
	/*AActor End*/

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	virtual bool StartEnemyPointAction(FOnEnemyPointActionFinished OnPointActionFinishedCallback, ACharacter* Character);

	UFUNCTION(BlueprintImplementableEvent, Category = "UPSEnemyPointAction", meta = (DisplayName = "On Point Started By Character"))
	void K2_StartEnemyPointAction(ACharacter* Character);

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	virtual void AbortEnemyPointAction(ACharacter* Character);

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	TArray<ACharacter*> GetCharactersReachedPoints() const;

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	TArray<ACharacter*> GetCharactersGoingToPoint() const;

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	TArray<ACharacter*> GetCharactersStartedPointAction() const;

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	virtual void EnableVisualization(bool bEnable);

protected:	
	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	virtual void FinishPointAction();

	UFUNCTION(BlueprintImplementableEvent, Category = "UPSEnemyPointAction", meta = (DisplayName = "On Point Action Finished"))
	void K2_FinishPointAction();

	UFUNCTION()
	virtual void AllCharactersReachPoints();

	UFUNCTION(BlueprintImplementableEvent, Category = "UPSEnemyPointAction", meta = (DisplayName = "On All Characters Reach Points"))
	void K2_AllCharactersReachPoints();

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	virtual void ClearPointActionForCharacter(ACharacter* Character);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "UPSEnemyPointAction", meta = (DisplayName = "On Clear Point Action For Character"))
	void K2_ClearPointActionForCharacter(ACharacter* Character);

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	TArray<UUPSEnemyPointActionComponent*> GetEnemyActionPointComponents() const;

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	virtual bool HasFreePointComponent() const;

	UFUNCTION(BlueprintCallable, Category = "UPSEnemyPointAction")
	virtual UUPSEnemyPointActionComponent* GetFreeEnemyActionPointComponent(ACharacter* Character) const;

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	virtual UUPSEnemyPointActionComponent* GetCharacterPoint(ACharacter* Character) const;

	UFUNCTION()
	virtual void OnCharacterReachPoint(ACharacter* Character, bool bSuccess);
	
	UFUNCTION(BlueprintImplementableEvent, Category = "UPSEnemyPointAction", meta = (DisplayName = "On Character Reach Point"))
	void K2_OnCharacterReachPoint(ACharacter* Character, bool bSuccess);

	UFUNCTION(BlueprintPure, Category = "UPSEnemyPointAction")
	virtual bool CanStartPointAction(ACharacter* Character) const;
	
	UFUNCTION(BlueprintImplementableEvent, Category = "UPSEnemyPointAction", meta = (DisplayName = "Can Start Point Action"))
	bool K2_CanStartPointAction(ACharacter* Character) const;

	virtual void OnVisualizationStateChanged(bool bEnabled);

	UFUNCTION()
	virtual void OnCharacterDestroyed(AActor* DestroyedActor);

protected:

	bool bK2CanStartImplemented = false;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "UPSEnemyPointAction")
	UUPSEnemyPointActionComponent* DefaultEnemyPointActionComponent;

	UPROPERTY(VisibleDefaultsOnly, Category = "UPSEnemyPointAction")
	USceneComponent* RootSceneComponent;

	UPROPERTY()
	TArray<UUPSEnemyPointActionComponent*> EnemyActionPointComponents;

	UPROPERTY()
	TSet<ACharacter*> CharactersReachedPoint;

	UPROPERTY()
	TMap<ACharacter*, AUPSPointActionMovementHandler*> CharacterMovementHandlers;

	TMap <TWeakObjectPtr<ACharacter>, FOnEnemyPointActionFinished> ActionFinishedCallbacks;

	UPROPERTY()
	TSet<ACharacter*> CharactersStartedPointAction;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPSEnemyPointAction")
	TSubclassOf<AUPSPointActionMovementHandler> MovementHandlerClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPSEnemyPointAction")
	FGameplayTag PointTag;

	//Finish action if one of characters call AbortEnemyPointAction 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UPSEnemyPointAction")
	bool bFinishActionAfterCharacterAbort = true;

	private:
	TOptional <bool> VisualizationEnabled;
};
