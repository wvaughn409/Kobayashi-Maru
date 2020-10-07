// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UPSTypes.h"
#include "UPSEnemyActionsPreset.generated.h"

class UUPSEnemyAction;

/**
 * 
 */
UCLASS(EditInLineNew, BlueprintType)
class PATROLACTIONSYSTEM_API UUPSEnemyActionsPreset : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UPSPatrolSystem")
	TArray<FEnemyActionSelector> EnemyActions;
};
