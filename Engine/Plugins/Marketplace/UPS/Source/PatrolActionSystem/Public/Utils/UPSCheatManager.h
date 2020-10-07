// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "UPSCheatManager.generated.h"

/*
Need to enable debug visualization in game mode from console commands
*/

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSCheatManager : public UCheatManager
{
	GENERATED_BODY()
public:
	UFUNCTION(Exec)
	void UPS_EnablePatrolVisualization();
	UFUNCTION(Exec)
	void UPS_DisablePatrolVisualization();

	UFUNCTION(Exec)
	void UPS_EnableGroupMovementDebug();
	UFUNCTION(Exec)
	void UPS_DisableGroupMovementDebug();

	UFUNCTION(Exec)
	void UPS_EnablePointActionsDebug();
	UFUNCTION(Exec)
	void UPS_DisablePointActionsDebug();
};
