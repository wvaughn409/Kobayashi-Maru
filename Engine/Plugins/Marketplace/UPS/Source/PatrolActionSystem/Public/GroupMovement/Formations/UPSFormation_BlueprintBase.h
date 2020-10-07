// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GroupMovement/UPSGroupMovementFormation.h"
#include "Navigation/PathFollowingComponent.h"
#include "UPSFormation_BlueprintBase.generated.h"

class ACharacter;

/*
Contains functions to create your own formation in blueprints
*/

UCLASS(Abstract)
class PATROLACTIONSYSTEM_API AUPSFormation_BlueprintBase : public AUPSGroupMovementFormation
{
	GENERATED_BODY()

public:
	virtual void InitFormation(ACharacter* InLeaderCharacter) override;
	virtual FVector GetLocationInFormationForCharacter(ACharacter* Character) override;
	virtual void AddCharacterInGroup(ACharacter* Character) override;
	virtual void RemoveCharacterFromGroup(ACharacter* Character) override;
	virtual void OnLeaderStartMovementToNewActor(AActor* NewActor) override;
	virtual void OnLeaderStartMovementToNewLocation(FVector NewLocation) override;
	virtual void OnLeaderCompleteMovement(EPathFollowingResult::Type Result) override;

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Get Location In Formation For Character"), Category = "UPSFormation")
	FVector K2_GetLocationInFormationForCharacter(ACharacter* Character);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "Init Formation"), Category = "UPSFormation")
	void K2_InitFormation(ACharacter* InLeaderCharacter);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Remove Character From Group"), Category = "UPSFormation")
	void K2_OnRemoveCharacterFromGroup(ACharacter* Character);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Add Character In Group"), Category = "UPSFormation")
	void K2_OnAddCharacterInGroup(ACharacter* Character);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Leader Start Movement To New Actor"), Category = "UPSFormation")
	void K2_OnLeaderStartMovementToNewActor(AActor* NewActor);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Leader Start Movement To New Location"), Category = "UPSFormation")
	void K2_OnLeaderStartMovementToNewLocation(FVector NewLocation);

	UFUNCTION(BlueprintImplementableEvent, meta = (DisplayName = "On Leader Complete Movement"), Category = "UPSFormation")
	void K2_OnLeaderCompleteMovement(EPathFollowingResult::Type Result);
};
