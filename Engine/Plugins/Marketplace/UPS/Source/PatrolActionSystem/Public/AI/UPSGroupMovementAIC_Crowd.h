// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AI/UPSGroupMovementAIController.h"
#include "UPSGroupMovementAIC_Crowd.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = AI, BlueprintType, Blueprintable)
class PATROLACTIONSYSTEM_API AUPSGroupMovementAIC_Crowd : public AUPSGroupMovementAIController
{
	GENERATED_BODY()
public:
	AUPSGroupMovementAIC_Crowd(const FObjectInitializer& ObjectInitializer);
};
