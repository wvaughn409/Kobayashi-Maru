// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPSEnemyActionScript.generated.h"


/*
Enemy action scripts executed when their action started, aborted or finished.
Don't create this objects nowhere except UUPSEnemyAction
*/
class ACharacter;

UCLASS(Abstract, DefaultToInstanced, editinlinenew, Blueprintable, meta = (ShowWorldContextPin))
class PATROLACTIONSYSTEM_API UUPSEnemyActionScript : public UObject
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, Category = "UPSPatrolSystem")
	void OnActionStarted(ACharacter* Character);

	UFUNCTION(BlueprintNativeEvent, Category = "UPSPatrolSystem")
	void OnActionAborted(ACharacter* Character);

	UFUNCTION(BlueprintNativeEvent, Category = "UPSPatrolSystem")
	void OnActionFinished(ACharacter* Character);
};
