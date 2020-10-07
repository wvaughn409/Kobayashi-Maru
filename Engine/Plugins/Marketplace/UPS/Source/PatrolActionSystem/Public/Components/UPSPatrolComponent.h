// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UPSTypes.h"
#include "UPSPatrolComponent.generated.h"

class AUPSPatrolPoint;

/*
Contains settings for the patrol, sets the settings in blackboard.

-InitialMovementPatrolPoint - the first patrol point for movement
-PatrolMovementDirection - direction of movement, clockwise or counterclockwise

The direction of movement, or the next patrol point can be set using the functions:
UUPSPatrolComponent :: UpdateMovementPatrolPoint
UUPSPatrolComponent :: SetPatrolMovementType

The current patrol point is written to the blackboard by key
UUPSSettings :: Get () -> PatrolComponentBBName

The key can be changed in ProjectSettings
*/

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, DisplayName = "PatrolComponent", HideCategories = Activation, Collision), editinlinenew, Blueprintable)
class PATROLACTIONSYSTEM_API UUPSPatrolComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UUPSPatrolComponent();

public:	
	/*UActorComponent Begin*/
	virtual void BeginPlay() override;
	virtual void OnRegister() override;
	virtual void OnUnregister() override;
#if WITH_EDITOR
	virtual bool CanEditChange(const FProperty* InProperty) const override;
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif
	/*UActorComponent End*/

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	virtual void UpdateMovementPatrolPoint(AUPSPatrolPoint* PatrolPoint);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	virtual void SetPatrolMovementType(EPatrolMovementType MovementType);

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	virtual AUPSPatrolPoint* GetCurrentPatrolPoint() const;

public:
	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true, ExposeOnSpawn = true), Category = "UPSPatrolSystem")
	AUPSPatrolPoint* InitialMovementPatrolPoint = nullptr;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = true, ExposeOnSpawn = true), Category = "UPSPatrolSystem")
	EPatrolMovementType PatrolMovementDirection = EPatrolMovementType::Clockwise;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = true), Category = "UPSPatrolSystem")
	bool bDisableVisualization = false;

protected:
	UPROPERTY()
	AUPSPatrolPoint* CurrentPatrolPoint = nullptr;
		
};
