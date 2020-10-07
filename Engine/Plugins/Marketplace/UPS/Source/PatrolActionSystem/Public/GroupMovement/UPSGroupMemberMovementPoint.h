// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UPSGroupMemberMovementPoint.generated.h"

class UBillboardComponent;

/*
	It is used as an actor for AI movement in group movement.
*/

UCLASS()
class PATROLACTIONSYSTEM_API AUPSGroupMemberMovementPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	AUPSGroupMemberMovementPoint();

public:	
	UBillboardComponent* GetBillboardComponent() const;

private:
	UPROPERTY(VisibleAnywhere, Category = "UPSGroupMovement")
	UBillboardComponent* BillboardComponent;
};
