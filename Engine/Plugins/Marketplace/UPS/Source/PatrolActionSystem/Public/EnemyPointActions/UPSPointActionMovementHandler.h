// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UPSPointActionMovementHandler.generated.h"

class ACharacter;
class UUPSEnemyPointActionComponent;

/*
	This class requered to character can move to UUPSEnemyPointActionComponent.

	CharacterStartMovement() - called when character start movement to point
	CharacterAbortMovement() called when character abort point action
	FinishMovement() - call after character finish movement to point
*/

UCLASS(Abstract)
class PATROLACTIONSYSTEM_API AUPSPointActionMovementHandler : public AActor
{
	GENERATED_BODY()
	
public:	
	AUPSPointActionMovementHandler();

	virtual void CharacterStartMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point);

	virtual void CharacterAbortMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point);

protected:
	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Character Start Movement"), Category = "UPSPointActionMovementHandler")
	void K2_CharacterStartMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Character Abort Movement"), Category = "UPSPointActionMovementHandler")
	void K2_CharacterAbortMovement(ACharacter* Character, UUPSEnemyPointActionComponent* Point);

	UFUNCTION(BlueprintCallable, Category = "UPSPointActionMovementHandler")
	virtual void FinishMovement(bool bSuccess);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Movement Finished"), Category = "UPSPointActionMovementHandler")
	void K2_FinishMovement(bool bSuccess);

public:
	DECLARE_EVENT_TwoParams(AUPSPointActionMovementHandler, FOnCharacterReachPoint, ACharacter* /*Character*/, bool /*bSuccess*/);
	FOnCharacterReachPoint OnCharacterReachPointDelegate;

protected:
	UPROPERTY()
	ACharacter* MovementCharacter;
	
	UPROPERTY()
	UUPSEnemyPointActionComponent* PointActionComponent;

};
