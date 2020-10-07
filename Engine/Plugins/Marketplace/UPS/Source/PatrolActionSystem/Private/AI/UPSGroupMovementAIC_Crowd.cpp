// Copyright 2020 DmVergasov All Rights Reserved.

#include "AI/UPSGroupMovementAIC_Crowd.h"
#include "Navigation/CrowdFollowingComponent.h"

AUPSGroupMovementAIC_Crowd::AUPSGroupMovementAIC_Crowd(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass<UCrowdFollowingComponent>(TEXT("PathFollowingComponent")))
{

}
