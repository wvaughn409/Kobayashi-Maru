// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UPSTypes.h"
#include "Actors/UPSPatrolPoint.h"
#include "GameplayTagContainer.h"
#include "UPSFunctionLIbrary.generated.h"

class UAnimMontage;
class UUPSEnemyAction;
class UUPSPatrolPointScript;
class AActor;
class AAIController;

/**
 * 
 */
UCLASS()
class PATROLACTIONSYSTEM_API UUPSFunctionLIbrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	static float GetMontageSectionLength(UAnimMontage* Montage, FName SectionName = NAME_None);

	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	static float GetMontageSectionIndexLength(UAnimMontage* Montage, int32 Index);

	//Use raw data, without duplicating
	UFUNCTION(BlueprintPure, Category = "UPSPatrolSystem")
	static UUPSEnemyAction* GetEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector);

	//Copy all objects from origin data
	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	static UUPSEnemyAction* GetDynamicEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	static UUPSPatrolPointScript* CreatePatrolScriptIntance(FPatrolPointScript Script);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	static void JumpToMontageSectionByIndex(ACharacter* Character, UAnimMontage* Montage, int32 SectionIndex);

	static AUPSPatrolPoint* CreatePatrolPoint(UObject* WorldContext, FVector WorldLocation = FVector::ZeroVector, FRotator WorldRotation = FRotator::ZeroRotator, AUPSPatrolPoint* PreviousPoint = nullptr, FGameplayTag LinkTagFromPreviousPoint = FGameplayTag::EmptyTag, TSubclassOf<AUPSPatrolPoint> PointClass = nullptr);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem", meta = (HidePin = "WorldContext", DefaultToSelf = "WorldContext", AdvancedDisplay = "PreviousPoint, LinkTagFromPreviousPoint, PointClass"), DisplayName = "Create Patrol Point")
	static AUPSPatrolPoint* K2_CreatePatrolPoint(UObject* WorldContext, FVector WorldLocation, FRotator WorldRotation, AUPSPatrolPoint* PreviousPoint, FGameplayTag LinkTagFromPreviousPoint, TSubclassOf<AUPSPatrolPoint> PointClass);
};
