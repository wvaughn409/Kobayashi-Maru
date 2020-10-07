// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/Formations/UPSFormation_BlueprintBase.h"
#include "GameFramework/Character.h"

void AUPSFormation_BlueprintBase::InitFormation(ACharacter* InLeaderCharacter)
{
	Super::InitFormation(InLeaderCharacter);

	K2_InitFormation(InLeaderCharacter);
}

FVector AUPSFormation_BlueprintBase::GetLocationInFormationForCharacter(ACharacter* Character)
{
	return K2_GetLocationInFormationForCharacter(Character);
}

void AUPSFormation_BlueprintBase::AddCharacterInGroup(ACharacter* Character)
{
	Super::AddCharacterInGroup(Character);

	K2_OnAddCharacterInGroup(Character);
}

void AUPSFormation_BlueprintBase::RemoveCharacterFromGroup(ACharacter* Character)
{
	Super::RemoveCharacterFromGroup(Character);

	K2_OnRemoveCharacterFromGroup(Character);
}

void AUPSFormation_BlueprintBase::OnLeaderStartMovementToNewActor(AActor* NewActor)
{
	Super::OnLeaderStartMovementToNewActor(NewActor);
	K2_OnLeaderStartMovementToNewActor(NewActor);
}

void AUPSFormation_BlueprintBase::OnLeaderStartMovementToNewLocation(FVector NewLocation)
{
	Super::OnLeaderStartMovementToNewLocation(NewLocation);
	K2_OnLeaderStartMovementToNewLocation(NewLocation);
}

void AUPSFormation_BlueprintBase::OnLeaderCompleteMovement(EPathFollowingResult::Type Result)
{
	Super::OnLeaderCompleteMovement(Result);

	K2_OnLeaderCompleteMovement(Result);
}
