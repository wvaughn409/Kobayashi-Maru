// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/Formations/UPSFormation_FromFormationPoints.h"
#include "GroupMovement/UPSFormationPointComponent.h"
#include "GameFramework/Character.h"

void AUPSFormation_FromFormationPoints::InitFormation(ACharacter* InLeaderCharacter)
{
	Super::InitFormation(InLeaderCharacter);

	TArray <UUPSFormationPointComponent*> formationPointsComponents;
	GetComponents<UUPSFormationPointComponent>(formationPointsComponents);
	FormationPointComponents = formationPointsComponents;
}

FVector AUPSFormation_FromFormationPoints::GetLocationInFormationForCharacter(ACharacter* Character)
{
	return GetFreeFormationPoint(Character);
}

void AUPSFormation_FromFormationPoints::RemoveCharacterFromGroup(ACharacter* Character)
{
	Super::RemoveCharacterFromGroup(Character);

	for (auto point : FormationPointComponents)
	{
		if (point->GetCharacterOnPoint() == Character)
		{
			point->RemoveCharacterFromPoint();
			break;
		}
	}
}

FVector AUPSFormation_FromFormationPoints::GetFreeFormationPoint(ACharacter* Character)
{
	FVector returnVector = FVector::ZeroVector;

	if (CharactersInFormation.Contains(Character))
	{
		for (auto formationPoint : FormationPointComponents)
		{
			if (formationPoint->GetCharacterOnPoint() == nullptr)
			{
				formationPoint->SetCharacterOnPoint(Character);
				returnVector = GetTransform().InverseTransformPosition(formationPoint->GetComponentLocation());
				break;
			}
		}
	}
	return returnVector;
}

