// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyPointActions/UPSEnemyPointAction.h"
#include "EnemyPointActions/UPSEnemyPointActionComponent.h"
#include "GameFramework/Character.h"
#include "AIController.h"
#include "Tasks/AITask_MoveTo.h"
#include "Navigation/PathFollowingComponent.h"
#include "EnemyPointActions/UPSMoveToEnemyPointAction.h"
#include "AITasks/UPSAITask_AIRotateToTarget.h"
#include "PatrolActionSystem.h"
#include "Logging/LogMacros.h"
#include "BlueprintNodeHelpers.h"
#include "EnemyPointActions/UPSPointActionMovementHandler.h"
#include "EnemyPointActions/UPSMovementHandlerDefault.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Utils/UPSSettings.h"
#include "Utils/UPSPatrolVisualizer.h"

// Sets default values
AUPSEnemyPointAction::AUPSEnemyPointAction()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SetActorTickEnabled(false);

	RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
	RootComponent = RootSceneComponent;

	DefaultEnemyPointActionComponent = CreateDefaultSubobject<UUPSEnemyPointActionComponent>(TEXT("DefaultEnemyActionPointComponent"));
	DefaultEnemyPointActionComponent->SetupAttachment(RootSceneComponent);
	
	UClass* stopAtClass = AUPSEnemyPointAction::StaticClass();
	bK2CanStartImplemented = BlueprintNodeHelpers::HasBlueprintFunction("K2_CanStartPointAction", *this, *stopAtClass);

	MovementHandlerClass = AUPSMovementHandlerDefault::StaticClass();
}

void AUPSEnemyPointAction::PostRegisterAllComponents()
{
	Super::PostRegisterAllComponents();

	EnemyActionPointComponents.Empty();
	GetComponents<UUPSEnemyPointActionComponent>(EnemyActionPointComponents);
}



void AUPSEnemyPointAction::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

#if !UE_BUILD_SHIPPING
	if (VisualizationEnabled.IsSet() && VisualizationEnabled.GetValue())
	{
		auto settings = UUPSSettings::Get();
		for (auto component : EnemyActionPointComponents)
		{
			if (component != nullptr && component->GetCharacterOnPoint() != nullptr)
			{
				::DrawDebugDirectionalArrow(GetWorld(), component->GetCharacterOnPoint()->GetActorLocation(), component->GetComponentLocation() + settings->DebugPointActionOffset, settings->DebugPointActionArrowSize, settings->DebugPointActionColor, false, 0.f, 1, settings->DebugPointActionLineThickness);
			}
		}
	}
#endif
}

TArray<ACharacter*> AUPSEnemyPointAction::GetCharactersReachedPoints() const
{
	return CharactersReachedPoint.Array();
}

TArray<ACharacter*> AUPSEnemyPointAction::GetCharactersGoingToPoint() const
{
	return CharactersStartedPointAction.Array();
}

TArray<ACharacter*> AUPSEnemyPointAction::GetCharactersStartedPointAction() const
{
	return CharactersStartedPointAction.Array();
}

void AUPSEnemyPointAction::EnableVisualization(bool bEnable)
{
#if !UE_BUILD_SHIPPING
	if (!VisualizationEnabled.IsSet() || VisualizationEnabled.GetValue() != bEnable)
	{
		VisualizationEnabled = bEnable;
		OnVisualizationStateChanged(bEnable);
	}
#endif
}

bool AUPSEnemyPointAction::StartEnemyPointAction(FOnEnemyPointActionFinished OnPointActionFinishedCallback, ACharacter* Character)
{
	if (CanStartPointAction(Character))
	{
		if (Cast<AAIController>(Character->GetController()))
		{
			K2_StartEnemyPointAction(Character);

			auto pointComponent = GetFreeEnemyActionPointComponent(Character);
			pointComponent->SetCharacterOnPoint(Character);
			CharactersStartedPointAction.Add(Character);

			FActorSpawnParameters spawnParams;
			spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

			if (auto movementHandler = GetWorld()->SpawnActor<AUPSPointActionMovementHandler>(MovementHandlerClass, FTransform::Identity, spawnParams))
			{
				CharacterMovementHandlers.Add(Character, movementHandler);
				movementHandler->OnCharacterReachPointDelegate.AddUObject(this, &AUPSEnemyPointAction::OnCharacterReachPoint);
				ActionFinishedCallbacks.Add(Character, OnPointActionFinishedCallback);
				movementHandler->CharacterStartMovement(Character, pointComponent);
				Character->OnDestroyed.AddDynamic(this, &AUPSEnemyPointAction::OnCharacterDestroyed);
				return true;
			}

			ClearPointActionForCharacter(Character);
		}
		else
		{
			UE_LOG(UPSPatrolSystemLog, Display, TEXT("UPSEnemyPointAction Character %s must have AIController"), *Character->GetFName().ToString());
		}
	}

	return false;
}

void AUPSEnemyPointAction::AbortEnemyPointAction(ACharacter* Character)
{
	if (bFinishActionAfterCharacterAbort)
	{
		FinishPointAction();
	}
	else
	{
		ClearPointActionForCharacter(Character);
	}
}

void AUPSEnemyPointAction::FinishPointAction()
{
	auto charactersStartedPointActionArray = CharactersStartedPointAction.Array();

	for (auto character : charactersStartedPointActionArray)
	{
		if (character != nullptr)
		{
			ClearPointActionForCharacter(character);
		}
	}

	K2_FinishPointAction();
}



void AUPSEnemyPointAction::AllCharactersReachPoints()
{
	K2_AllCharactersReachPoints();
}

void AUPSEnemyPointAction::ClearPointActionForCharacter(ACharacter* Character)
{
	Character->OnDestroyed.RemoveDynamic(this, &AUPSEnemyPointAction::OnCharacterDestroyed);

	if (auto characterPoint = GetCharacterPoint(Character))
	{
		characterPoint->SetCharacterOnPoint(nullptr);
	}

	if (CharactersReachedPoint.Contains(Character))
	{
		CharactersReachedPoint.Remove(Character);
	}

	if (CharacterMovementHandlers.Contains(Character))
	{
		CharacterMovementHandlers[Character]->CharacterAbortMovement(Character, GetCharacterPoint(Character));
		CharacterMovementHandlers[Character]->Destroy();
		CharacterMovementHandlers.Remove(Character);
	}

	CharactersStartedPointAction.Remove(Character);

	if (ActionFinishedCallbacks.Contains(Character))
	{
		auto callback = ActionFinishedCallbacks[Character];
		ActionFinishedCallbacks.Remove(Character);
		callback.ExecuteIfBound(this, Character);
	}

	K2_ClearPointActionForCharacter(Character);
}

TArray<UUPSEnemyPointActionComponent*> AUPSEnemyPointAction::GetEnemyActionPointComponents() const
{
	return EnemyActionPointComponents;
}

bool AUPSEnemyPointAction::HasFreePointComponent() const
{
	bool bHasFreePoint = false;

	for (auto enemyActionPointComponent : EnemyActionPointComponents)
	{
		if (enemyActionPointComponent != nullptr && enemyActionPointComponent->GetCharacterOnPoint() == nullptr)
		{
			bHasFreePoint = true;
			break;
		}
	}

	return bHasFreePoint;
}

UUPSEnemyPointActionComponent* AUPSEnemyPointAction::GetFreeEnemyActionPointComponent(ACharacter* Character) const
{
	UUPSEnemyPointActionComponent* pointToReturn = nullptr;

	for (auto enemyActionPointComponent : EnemyActionPointComponents)
	{
		if (enemyActionPointComponent != nullptr && enemyActionPointComponent->CanUsePointComponent(Character))
		{
			pointToReturn = enemyActionPointComponent;
			break;
		}
	}

	return pointToReturn;
}

UUPSEnemyPointActionComponent* AUPSEnemyPointAction::GetCharacterPoint(ACharacter* Character) const
{
	UUPSEnemyPointActionComponent* returnPoint = nullptr;

	for (auto enemyActionPointComponent : EnemyActionPointComponents)
	{
		if (enemyActionPointComponent != nullptr && enemyActionPointComponent->GetCharacterOnPoint() == Character)
		{
			returnPoint = enemyActionPointComponent;
			break;
		}
	}

	return returnPoint;
}

void AUPSEnemyPointAction::OnCharacterReachPoint(ACharacter* Character, bool bSuccess)
{
	K2_OnCharacterReachPoint(Character, bSuccess);

	if (CharacterMovementHandlers.Contains(Character) && CharacterMovementHandlers.Find(Character) != nullptr)
	{
		CharacterMovementHandlers[Character]->Destroy();
		CharacterMovementHandlers.Remove(Character);
	}

	if (bSuccess)
	{
		CharactersReachedPoint.Add(Character);

		if (CharactersReachedPoint.Num() == GetEnemyActionPointComponents().Num())
		{
			AllCharactersReachPoints();
		}
	}
	else
	{
		ClearPointActionForCharacter(Character);
	}
}

bool AUPSEnemyPointAction::CanStartPointAction(ACharacter* Character) const
{
	return Character != nullptr && !CharactersStartedPointAction.Contains(Character) && HasFreePointComponent() && (K2_CanStartPointAction(Character) || !bK2CanStartImplemented) && MovementHandlerClass != nullptr;
}

void AUPSEnemyPointAction::OnVisualizationStateChanged(bool bEnabled)
{
	for (auto component : EnemyActionPointComponents)
	{
		component->GetSkeletalMeshComponent()->SetHiddenInGame(!bEnabled);
	}

	if (bEnabled)
	{
		SetActorTickEnabled(true);
	}
}

void AUPSEnemyPointAction::OnCharacterDestroyed(AActor* DestroyedActor)
{
	if (auto character = Cast<ACharacter>(DestroyedActor))
	{
		ClearPointActionForCharacter(character);
	}
}

