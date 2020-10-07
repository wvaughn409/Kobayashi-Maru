// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

DECLARE_LOG_CATEGORY_EXTERN(UPSPatrolSystemLog, Warning, All);
DECLARE_LOG_CATEGORY_EXTERN(UPSGroupMovementLog, Warning, All);
class FPatrolActionSystemModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

void UPSLog(const FString& Text, float Time = 1.0, const FColor& Color = FColor::White);
