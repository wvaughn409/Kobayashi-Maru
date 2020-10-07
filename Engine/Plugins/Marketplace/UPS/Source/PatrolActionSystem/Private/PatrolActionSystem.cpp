// Copyright 2020 DmVergasov All Rights Reserved.

#include "PatrolActionSystem.h"
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "FPatrolActionSystemModule"

DEFINE_LOG_CATEGORY(UPSPatrolSystemLog);
DEFINE_LOG_CATEGORY(UPSGroupMovementLog);

void FPatrolActionSystemModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FPatrolActionSystemModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FPatrolActionSystemModule, PatrolActionSystem)

void UPSLog(const FString& Text, float Time /*= 1.0*/, const FColor& Color /*= FColor::White*/)
{
	GEngine->AddOnScreenDebugMessage(-1, Time, Color, Text);
	UE_LOG(UPSPatrolSystemLog, Display, TEXT("%s"), *Text);
}
