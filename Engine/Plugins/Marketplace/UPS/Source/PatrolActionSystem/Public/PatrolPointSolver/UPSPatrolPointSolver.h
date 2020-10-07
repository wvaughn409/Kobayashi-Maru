// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPSTypes.h"
#include "UPSPatrolPointSolver.generated.h"

class AUPSPatrolPoint;
class ACharacter;


/*
	The class needed to determine the next patrol point after the current one. The default implementation of UUPSPatrolPointSolver_RandomPoint returns a random point
         TArray <FPatrolPointLink> & PatrolPointLinks - depending on the Direction settings in the UUPS PatrolComponent, these are the patrol points ahead of them, or those that belong to this one.
*/
UCLASS(Abstract, DefaultToInstanced, editinlinenew, Blueprintable, meta = (ShowWorldContextPin))
class PATROLACTIONSYSTEM_API UUPSPatrolPointSolver : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintNativeEvent, Category = "UPSPatrolPointSolver")
	AUPSPatrolPoint* SelectPatrolPoint(UPARAM(ref) TArray<FPatrolPointLink>& PatrolPointLinks, AUPSPatrolPoint* ThisPatrolPoint, ACharacter* Character);
};
