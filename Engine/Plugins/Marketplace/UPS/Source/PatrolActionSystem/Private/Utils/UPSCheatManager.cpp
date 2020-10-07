// Copyright 2020 DmVergasov All Rights Reserved.

#include "Utils/UPSCheatManager.h"
#include "Utils/UPSPatrolVisualizer.h"
#include "GroupMovement/UPSGroupMemberMovementPoint.h"
#include "EngineUtils.h"
#include "Components/BillboardComponent.h"
#include "../../Public/Actors/UPSPatrolPoint.h"
#include "../../Public/EnemyPointActions/UPSEnemyPointAction.h"
#include "../../Public/EnemyPointActions/UPSEnemyPointActionComponent.h"

void UUPSCheatManager::UPS_EnablePatrolVisualization()
{
#if !UE_BUILD_SHIPPING
	if (auto visualizer = UUPSPatrolVisualizer::Get())
	{
		visualizer->EnablePathVisualizationInGame(true);
	}
#endif
}

void UUPSCheatManager::UPS_DisablePatrolVisualization()
{
#if !UE_BUILD_SHIPPING
	if (auto visualizer = UUPSPatrolVisualizer::Get())
	{
		visualizer->EnablePathVisualizationInGame(false);
	}
#endif
}

void UUPSCheatManager::UPS_EnableGroupMovementDebug()
{
#if !UE_BUILD_SHIPPING
	for (auto iterator = TActorIterator<AUPSGroupMemberMovementPoint>(GetWorld()); iterator; ++iterator)
	{
		auto groupMember = *iterator; 
		groupMember->GetBillboardComponent()->SetHiddenInGame(false);
	}
#endif
}

void UUPSCheatManager::UPS_DisableGroupMovementDebug()
{
#if !UE_BUILD_SHIPPING
	for (auto iterator = TActorIterator<AUPSGroupMemberMovementPoint>(GetWorld()); iterator; ++iterator)
	{
		auto groupMember = *iterator;
		groupMember->GetBillboardComponent()->SetHiddenInGame(true);
	}
#endif
}

void UUPSCheatManager::UPS_EnablePointActionsDebug()
{
#if !UE_BUILD_SHIPPING
	if (auto visualizer = UUPSPatrolVisualizer::Get())
	{
		visualizer->EnablePointActionVisualization(true);
	}
#endif
}

void UUPSCheatManager::UPS_DisablePointActionsDebug()
{
#if !UE_BUILD_SHIPPING
	if (auto visualizer = UUPSPatrolVisualizer::Get())
	{
		visualizer->EnablePointActionVisualization(false);
	}
#endif
}
