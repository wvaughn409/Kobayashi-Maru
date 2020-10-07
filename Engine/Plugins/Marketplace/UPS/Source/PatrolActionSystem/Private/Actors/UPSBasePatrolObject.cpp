// Copyright 2020 DmVergasov All Rights Reserved.

#include "Actors/UPSBasePatrolObject.h"
#include "Engine/EngineTypes.h"
#include "Kismet/KismetSystemLibrary.h"

AUPSBasePatrolObject::AUPSBasePatrolObject()
{
	PrimaryActorTick.bCanEverTick = false;

}


void AUPSBasePatrolObject::BeginPlay()
{
	Super::BeginPlay();
	
	AddActorWorldOffset(FVector(0.f, 0.f, -VerticalOffsetAfterMoveInEditor));
}

void AUPSBasePatrolObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

#if WITH_EDITOR
void AUPSBasePatrolObject::PostEditMove(bool bFinished)
{
	Super::PostEditMove(bFinished);

	//Snapping actor to floor after finish move actor in editor
	if (bFinished)
	{
		FixLocation();
	}
}

#endif

void AUPSBasePatrolObject::FixLocation()
{
	FHitResult hitResult;
	UKismetSystemLibrary::LineTraceSingle(this, GetActorLocation() + FVector(0.f, 0.f, 10.f), GetActorLocation() - FVector(0.f, 0.f, 500.f), UEngineTypes::ConvertToTraceType(ECC_WorldStatic), false, {}, EDrawDebugTrace::None, hitResult, true);

	if (hitResult.bBlockingHit)
	{
		SetActorLocation(hitResult.Location + FVector(0.f, 0.f, HasActorBegunPlay() ? 0.f : VerticalOffsetAfterMoveInEditor));
	}
}
