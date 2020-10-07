// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/UPSGroupMovementFormation.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Texture2D.h"
#include "GameFramework/Character.h"
#include "Components/ActorComponent.h"
#include "GroupMovement/UPSFormationPointComponent.h"
#include "Components/ArrowComponent.h"
#include "Kismet/KismetSystemLibrary.h"

AUPSGroupMovementFormation::AUPSGroupMovementFormation()
{
	PrimaryActorTick.bCanEverTick = false;

	RootArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("RootArrowComponent"));
	RootArrowComponent->ArrowSize = 3.f;
	RootArrowComponent->ArrowColor = FColor::White;
	RootComponent = RootArrowComponent;
}

void AUPSGroupMovementFormation::InitFormation(ACharacter* InLeaderCharacter)
{
	LeaderCharacter = InLeaderCharacter;
}

FVector AUPSGroupMovementFormation::GetLocationInFormationForCharacter(ACharacter* Character)
{
	return FVector::ZeroVector;
}

void AUPSGroupMovementFormation::AddCharacterInGroup(ACharacter* Character)
{
	if (!CharactersInFormation.Contains(Character))
	{
		CharactersInFormation.Add(Character);
	}
}

void AUPSGroupMovementFormation::RemoveCharacterFromGroup(ACharacter* Character)
{
	if (CharactersInFormation.Contains(Character))
	{
		CharactersInFormation.Remove(Character);
	}
}

void AUPSGroupMovementFormation::OnLeaderStartMovementToNewActor(AActor* NewActor)
{

}

void AUPSGroupMovementFormation::OnLeaderStartMovementToNewLocation(FVector NewLocation)
{

}

void AUPSGroupMovementFormation::OnLeaderCompleteMovement(EPathFollowingResult::Type Result)
{
	
}
