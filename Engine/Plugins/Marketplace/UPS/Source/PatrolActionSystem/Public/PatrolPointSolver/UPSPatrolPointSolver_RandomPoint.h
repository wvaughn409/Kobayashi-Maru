// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "PatrolPointSolver/UPSPatrolPointSolver.h"
#include "UPSPatrolPointSolver_RandomPoint.generated.h"

class AUPSPatrolPoint;
class ACharacter;

/*
	Returns a random point as the next one to patrol
*/
UCLASS()
class PATROLACTIONSYSTEM_API UUPSPatrolPointSolver_RandomPoint : public UUPSPatrolPointSolver
{
	GENERATED_BODY()
public:
	AUPSPatrolPoint* SelectPatrolPoint_Implementation(UPARAM(ref) TArray<FPatrolPointLink>& PatrolPointLinks, AUPSPatrolPoint* ThisPatrolPoint, ACharacter* Character);
};
