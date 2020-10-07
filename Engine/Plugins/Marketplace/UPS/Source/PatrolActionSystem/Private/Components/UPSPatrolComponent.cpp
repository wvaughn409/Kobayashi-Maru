// Copyright 2020 DmVergasov All Rights Reserved.

#include "Components/UPSPatrolComponent.h"
#include "Utils/UPSPatrolVisualizer.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Utils/UPSSettings.h"
#include "Actors/UPSPatrolPoint.h"

UUPSPatrolComponent::UUPSPatrolComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UUPSPatrolComponent::BeginPlay()
{
	Super::BeginPlay();
	
	UpdateMovementPatrolPoint(InitialMovementPatrolPoint);
}

void UUPSPatrolComponent::OnRegister()
{
	Super::OnRegister();

	if (UUPSPatrolVisualizer::Get())
	{
		UUPSPatrolVisualizer::Get()->RegisterPatrolComponent(this);
	}
}

void UUPSPatrolComponent::OnUnregister()
{
	Super::OnUnregister();

	if (UUPSPatrolVisualizer::Get())
	{
		UUPSPatrolVisualizer::Get()->UnregisterPatrolComponent(this);
	}
}

#if WITH_EDITOR
bool UUPSPatrolComponent::CanEditChange(const FProperty* InProperty) const
{
	bool bSuperResult = Super::CanEditChange(InProperty);

	if (InProperty->GetFName() == GET_MEMBER_NAME_CHECKED(UUPSPatrolComponent, PatrolMovementDirection))
	{
		return InitialMovementPatrolPoint != nullptr && bSuperResult;
	}

	return bSuperResult;
}

void UUPSPatrolComponent::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UUPSPatrolComponent, InitialMovementPatrolPoint))
	{
		if (UUPSPatrolVisualizer::Get())
		{
			UUPSPatrolVisualizer::Get()->UpdatePathPointsRequest();
			UUPSPatrolVisualizer::Get()->UpdateVisitedPoints();
		}
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(UUPSPatrolComponent, bDisableVisualization))
	{
		if (UUPSPatrolVisualizer::Get() && !bDisableVisualization)
		{
			UUPSPatrolVisualizer::Get()->UpdatePathPointsRequest();
		}
	}
}

#endif

void UUPSPatrolComponent::UpdateMovementPatrolPoint(AUPSPatrolPoint* PatrolPoint)
{
	if (auto ownerCharacter = Cast<ACharacter>(GetOwner()))
	{
		auto aic = Cast<AAIController>(ownerCharacter->GetController());
		if (aic != nullptr && aic->GetBlackboardComponent())
		{
			aic->GetBlackboardComponent()->SetValueAsObject(UUPSSettings::Get()->CurrentPatrolPointBBName, PatrolPoint);
		}

		CurrentPatrolPoint = PatrolPoint;
	}
}

void UUPSPatrolComponent::SetPatrolMovementType(EPatrolMovementType MovementType)
{
	PatrolMovementDirection = MovementType;
}

AUPSPatrolPoint* UUPSPatrolComponent::GetCurrentPatrolPoint() const
{
	return CurrentPatrolPoint != nullptr ? CurrentPatrolPoint : InitialMovementPatrolPoint;
}
