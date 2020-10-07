// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GroupMovementTypes.h"
#include "Navigation/PathFollowingComponent.h"
#include "UPSGroupMovementFormation.generated.h"

class UBillboardComponent;
class UUPSFormationPointComponent;
class UArrowComponent;

/*
Base class of formation for group movement. Need to receive relative to leader character location in formation
Contains pointers to all characters in formation and pointer to leader character.
*/

UCLASS(Abstract, BlueprintType, Blueprintable)
class PATROLACTIONSYSTEM_API AUPSGroupMovementFormation : public AActor
{
	GENERATED_BODY()
	
public:	
	AUPSGroupMovementFormation();

public:
	//Called one time after formation spawn
	virtual void InitFormation(ACharacter* InLeaderCharacter);

	//get relative to leader transform location in formation. Zero vector = leader location
	virtual FVector GetLocationInFormationForCharacter(ACharacter* Character);

	virtual void AddCharacterInGroup(ACharacter* Character);
	virtual void RemoveCharacterFromGroup(ACharacter* Character);

	//Notify when leader start movement to actor 
	virtual void OnLeaderStartMovementToNewActor(AActor* NewActor);

	//Notify when leader start movement to location 
	virtual void OnLeaderStartMovementToNewLocation(FVector NewLocation);

	//Notify when leader complete movement to point with movement result
	virtual void OnLeaderCompleteMovement(EPathFollowingResult::Type Result);

protected:
	UPROPERTY(VisibleAnywhere, Category = "UPSGroupMovementFormation")
	UArrowComponent* RootArrowComponent;

	UPROPERTY(BlueprintReadOnly, Category = "UPSGroupMovementFormation")
	TSet<ACharacter*> CharactersInFormation;

	UPROPERTY(BlueprintReadOnly, Category = "UPSGroupMovementFormation")
	ACharacter* LeaderCharacter = nullptr;
};
