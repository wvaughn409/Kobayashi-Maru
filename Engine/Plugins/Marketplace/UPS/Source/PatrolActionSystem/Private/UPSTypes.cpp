// Copyright 2020 DmVergasov All Rights Reserved.

#include "UPSTypes.h"

FPatrolPointLink::FPatrolPointLink(AUPSPatrolPoint* Point, FGameplayTag Tag) :
	PatrolPoint(Point),
	LinkTag(Tag)
{

}

FPatrolPointLink::FPatrolPointLink()
{

}
