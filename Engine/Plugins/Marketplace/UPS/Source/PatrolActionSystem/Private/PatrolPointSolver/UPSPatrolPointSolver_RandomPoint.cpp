// Copyright 2020 DmVergasov All Rights Reserved.

#include "PatrolPointSolver/UPSPatrolPointSolver_RandomPoint.h"
#include "Actors/UPSPatrolPoint.h"
#include "GameFramework/Character.h"

AUPSPatrolPoint* UUPSPatrolPointSolver_RandomPoint::SelectPatrolPoint_Implementation(TArray<FPatrolPointLink>& PatrolPointLinks, AUPSPatrolPoint* ThisPatrolPoint, ACharacter* Character)
{
	if (PatrolPointLinks.Num() != 0)
	{
		return PatrolPointLinks[FMath::RandRange(0, PatrolPointLinks.Num() - 1)].PatrolPoint;
	}

	return nullptr;
}
