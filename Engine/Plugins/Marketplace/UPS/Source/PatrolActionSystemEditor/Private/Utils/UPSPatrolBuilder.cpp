// Copyright 2020 DmVergasov All Rights Reserved.
#include "Utils/UPSPatrolBuilder.h"

#if WITH_EDITOR
#include "EditorWorldExtension.h"
#include "Editor.h"
#include "Utils/UPSEditorExtensionPatrolBuilder.h"
#include "Utils/UPSSettings.h"
#include "Debug/DebugDrawService.h"
#include "Engine/Selection.h"
#endif

#include "Engine/World.h"
#include "EngineUtils.h"
#include "Utils/UPSGameplayTaskProxyOwner.h"
#include "Engine/Canvas.h"
#include "GameFramework/PlayerController.h"
#include "Actors/UPSPatrolPoint.h"
#include "Kismet/KismetSystemLibrary.h"
#include "EditorUtilityWidget.h"
#include "GameplayTagContainer.h"
#include "Utils/UPSFunctionLIbrary.h"


UUPSPatrolBuilder::UUPSPatrolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{

}

UUPSPatrolBuilder* UUPSPatrolBuilder::RunPatrolBuilder(UEditorUtilityWidget* EditorUtilityWidget)
{
	UUPSPatrolBuilder* newBuilder = nullptr;

#if WITH_EDITOR
	if (EditorUtilityWidget != nullptr && EditorUtilityWidget->GetOuter() != nullptr)
	{
		auto world = Cast<UWorld>(EditorUtilityWidget->GetOuter());

		if (world != nullptr)
		{
			AActor* actorFromWorld = nullptr;

			for (TActorIterator<AActor> actorIterator(world); actorIterator; ++actorIterator)
			{
				actorFromWorld = *actorIterator;
			}

			if (actorFromWorld != nullptr)
			{
				auto proxyGameplayTaskOwner = world->SpawnActor<AUPSGameplayTaskProxyOwner>(FVector::ZeroVector, FRotator::ZeroRotator);

				newBuilder = NewTask<UUPSPatrolBuilder>(proxyGameplayTaskOwner);

				if (newBuilder != nullptr)
				{
					newBuilder->ProxyTaskOwner = proxyGameplayTaskOwner;
					newBuilder->CachedWorld = world;
				}
			}
		}
	}

#endif
	return newBuilder;
}

void UUPSPatrolBuilder::FinishBuilding()
{
	bMarkForFinish = true;
}

void UUPSPatrolBuilder::AbortBuilding()
{
	for (auto point : SpawnedPatrolPoints)
	{
		if (point != nullptr)
		{
			point->Destroy();
		}
	}

	UnselectAllActors();
	bMarkForFinish = true;
}

bool UUPSPatrolBuilder::IsTickableInEditor() const
{
	return !HasAnyFlags(RF_ClassDefaultObject);
}

void UUPSPatrolBuilder::Tick(float DeltaTime)
{
#if WITH_EDITOR
	if (bMarkForFinish)
	{
		bTickingTask = false;
		bMarkForFinish = false;
		SpawnedPatrolPoints.Empty();
		EndTask();
	}
#endif
}

TStatId UUPSPatrolBuilder::GetStatId() const
{
	return TStatId();
}

void UUPSPatrolBuilder::Activate()
{
	Super::Activate();

#if WITH_EDITOR

	FEditorDelegates::EndPIE.AddUObject(this, &UUPSPatrolBuilder::EndPIE);
	FEditorDelegates::PreBeginPIE.AddUObject(this, &UUPSPatrolBuilder::PreBeginPIE);
	FWorldDelegates::OnPostWorldInitialization.AddUObject(this, &UUPSPatrolBuilder::OnWorldChanged);

	UEditorWorldExtensionCollection* extensitonCollection = GEditor->GetEditorWorldExtensionsManager()->GetEditorWorldExtensions(GetWorld(), true);
	PatrolBuilderEditorExtension = Cast<UUPSEditorExtensionPatrolBuilder> (extensitonCollection->AddExtension(UUPSEditorExtensionPatrolBuilder::StaticClass()));
	PatrolBuilderEditorExtension->OnInputKeyDelegate.AddUObject(this, &UUPSPatrolBuilder::OnKeyPressed);

	UDebugDrawService::Register(TEXT("Editor"), FDebugDrawDelegate::CreateUObject(this, &UUPSPatrolBuilder::DebugDrawServiceTick));
#endif
}

void UUPSPatrolBuilder::OnDestroy(bool bInOwnerFinished)
{
#if WITH_EDITOR
	if (PatrolBuilderEditorExtension != nullptr)
	{
		PatrolBuilderEditorExtension->OnInputKeyDelegate.RemoveAll(this);
		if (UEditorWorldExtensionCollection* extensitonCollection = GEditor->GetEditorWorldExtensionsManager()->GetEditorWorldExtensions(GetWorld()))
		{
			extensitonCollection->RemoveExtension(PatrolBuilderEditorExtension);
		}
	}

	if (ProxyTaskOwner != nullptr)
	{
		ProxyTaskOwner->Destroy();
	}

#endif

	Super::OnDestroy(bInOwnerFinished);
}

#if WITH_EDITOR
void UUPSPatrolBuilder::OnKeyPressed(FKey Key, EInputEvent Event)
{
	if (Key == UUPSSettings::Get()->KeyToAddNewPoint && Event == IE_Pressed)
	{
		bNeedHandleInput = true;
	}
}

void UUPSPatrolBuilder::DebugDrawServiceTick(UCanvas* InCanvas, APlayerController* InPlayerController)
{
	if (bNeedHandleInput && InCanvas != nullptr && CachedWorld.IsValid())
	{
		if (auto viewport = GEditor->GetActiveViewport())
		{
			FIntPoint mousePosition;
			viewport->GetMousePos(mousePosition);

			FVector worldOrigin;
			FVector worldDirection;

			InCanvas->Deproject(FVector2D(mousePosition.X, mousePosition.Y), worldOrigin, worldDirection);

			FVector fromCamToWorldLocation = worldOrigin;

			FHitResult hitResult;
			UKismetSystemLibrary::LineTraceSingle(CachedWorld.Get(), worldOrigin, worldOrigin + worldDirection * 10000.f, UEngineTypes::ConvertToTraceType(UUPSSettings::Get()->PatrolBuilderTraceChannel), false, {}, EDrawDebugTrace::None, hitResult, true);

			if (hitResult.bBlockingHit)
			{
				fromCamToWorldLocation = hitResult.Location;
			}

			auto currentSelectedPoint = GetFirstSelectedPatrolPoint();

			if (IsNeedSpawnNewPoint(fromCamToWorldLocation, currentSelectedPoint))
			{
				if (auto newPoint = UUPSFunctionLIbrary::CreatePatrolPoint(CachedWorld.Get(), fromCamToWorldLocation, FRotator::ZeroRotator, currentSelectedPoint))
				{
					SpawnedPatrolPoints.AddUnique(newPoint);

					UnselectAllActors();

					GEditor->SelectActor(newPoint, true, true);
				}
			}
			else
			{
				if (currentSelectedPoint != nullptr)
				{
					if (auto nearestPoint = GetNearestPatrolPointToLocation(fromCamToWorldLocation, currentSelectedPoint))
					{
						currentSelectedPoint->AddNextLink(FPatrolPointLink(nearestPoint, FGameplayTag::EmptyTag));
					}
				}
			}

			bNeedHandleInput = false;
		}
	}
}

AUPSPatrolPoint* UUPSPatrolBuilder::GetFirstSelectedPatrolPoint()
{
	AUPSPatrolPoint* returnValue = nullptr;
	for (auto selectedActorIterator = GEditor->GetSelectedActorIterator(); selectedActorIterator; ++selectedActorIterator)
	{
		if (auto selectedPatrolPoint = Cast<AUPSPatrolPoint>(*selectedActorIterator))
		{
			returnValue = selectedPatrolPoint;
			break;
		}
	}

	return returnValue;
}

bool UUPSPatrolBuilder::IsNeedSpawnNewPoint(FVector InLocation, AUPSPatrolPoint* SelectedPatrolPoint)
{
	bool bReturn = true;

	if (CachedWorld.IsValid())
	{
		for (TActorIterator<AActor> actorIterator(CachedWorld.Get()); actorIterator; ++actorIterator)
		{
			if (auto patrolPoint = Cast<AUPSPatrolPoint>(*actorIterator))
			{
				if (SelectedPatrolPoint != patrolPoint)
				{
					if ((patrolPoint->GetActorLocation() - InLocation).Size() < UUPSSettings::Get()->CheckDistanceBetweenPoints)
					{
						bReturn = false;
						break;
					}
				}
			}
		}
	}
	else
	{
		bReturn = false;
	}

	return bReturn;
}

AUPSPatrolPoint* UUPSPatrolBuilder::GetNearestPatrolPointToLocation(FVector InLocation, AUPSPatrolPoint* SelectedPatrolPoint)
{
	AUPSPatrolPoint* returnPoint = nullptr;

	if (CachedWorld.IsValid())
	{
		float nearestDistance = FLT_MAX;

		for (TActorIterator<AActor> actorIterator(CachedWorld.Get()); actorIterator; ++actorIterator)
		{
			if (auto patrolPoint = Cast<AUPSPatrolPoint>(*actorIterator))
			{
				auto distance = (patrolPoint->GetActorLocation() - InLocation).SizeSquared();

				if (SelectedPatrolPoint != patrolPoint && distance < nearestDistance)
				{
					nearestDistance = distance;
					returnPoint = patrolPoint;
				}
			}
		}
	}

	return returnPoint;
}

void UUPSPatrolBuilder::UnselectAllActors()
{
	for (auto selectedActorIterator = GEditor->GetSelectedActorIterator(); selectedActorIterator; ++selectedActorIterator)
	{
		GEditor->SelectActor(Cast<AActor>(*selectedActorIterator), false, true);
	}
}

void UUPSPatrolBuilder::PreBeginPIE(bool bIsSimulatingPIE)
{
	OnPatrolBuildFailed.Broadcast();

	for (auto point : SpawnedPatrolPoints)
	{
		if (point != nullptr)
		{
			point->Destroy();
		}
	}
}

void UUPSPatrolBuilder::EndPIE(bool bIsSimulatingPIE)
{
	AbortBuilding();
}

void UUPSPatrolBuilder::OnWorldChanged(UWorld* World, const UWorld::InitializationValues IVS)
{
	OnPatrolBuildFailed.Broadcast();

	if (World->WorldType != EWorldType::PIE)
	{
		AbortBuilding();
	}
}

#endif
