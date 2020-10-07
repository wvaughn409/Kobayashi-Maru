// Copyright 2020 DmVergasov All Rights Reserved.

#include "Utils/UPSGameplayTaskProxyOwner.h"
#include "GameplayTasksComponent.h"


// Sets default values
AUPSGameplayTaskProxyOwner::AUPSGameplayTaskProxyOwner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	GameplayTaskComponent = CreateDefaultSubobject<UGameplayTasksComponent>(TEXT("GameplayTaskComponent"));
}

AActor* AUPSGameplayTaskProxyOwner::GetGameplayTaskOwner(const UGameplayTask* Task) const
{
	return const_cast<AActor*>((AActor*)this);
}

AActor* AUPSGameplayTaskProxyOwner::GetGameplayTaskAvatar(const UGameplayTask* Task) const
{
	return const_cast<AActor*>((AActor*)this);
}
