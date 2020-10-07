// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UPSBasePatrolObject.generated.h"

/*
Base class for actors with snapping function
*/

UCLASS(Abstract)
class PATROLACTIONSYSTEM_API AUPSBasePatrolObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUPSBasePatrolObject();

public:
	/*AActor start*/
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
#if WITH_EDITOR
	virtual void PostEditMove(bool bFinished) override;
#endif

	void FixLocation();
	/*AActor end*/

protected:
	float VerticalOffsetAfterMoveInEditor = 50.f;

};
