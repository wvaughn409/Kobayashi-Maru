// Copyright 2020 DmVergasov All Rights Reserved.

#include "Utils/UPSPatrolVisualizer.h"
#include "Debug/DebugDrawService.h"
#include "DrawDebugHelpers.h"

#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "Editor.h"
#include "LevelEditorViewport.h"
#endif
#include "Engine/Selection.h"
#include "EngineUtils.h"
#include "Actors/UPSPatrolPoint.h"
#include "Components/UPSPatrolComponent.h"
#include "Engine/World.h"
#include "NavigationSystem.h"
#include "NavigationPath.h"
#include "Utils/UPSEditorDrawer.h"
#include "UPSTypes.h"
#include "Utils/UPSFunctionLIbrary.h"
#include "Utils/UPSSettings.h"
#include "Components/BillboardComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameplayTagContainer.h"
#include "EnemyPointActions/UPSEnemyPointAction.h"


UUPSPatrolVisualizer::UUPSPatrolVisualizer()
{
#if WITH_EDITOR
	FEditorDelegates::PreBeginPIE.AddUObject(this, &UUPSPatrolVisualizer::OnPreBeginPIE);
	FEditorDelegates::EndPIE.AddUObject(this, &UUPSPatrolVisualizer::OnEndPIE);
	FEditorDelegates::OnMapOpened.AddUObject(this, &UUPSPatrolVisualizer::OnMapChangedInEditor);
#endif

#if !UE_BUILD_SHIPPING
	FWorldDelegates::OnPostWorldInitialization.AddUObject(this, &UUPSPatrolVisualizer::OnWorldInitializedActors);
#endif
}

bool UUPSPatrolVisualizer::IsTickableInEditor() const
{
	return true;
}

void UUPSPatrolVisualizer::Tick(float DeltaTime)
{
#if !UE_BUILD_SHIPPING
	if (!IsVisualizationEnabled())
	{
		return;
	}

#if WITH_EDITOR
	if (IsInEditorWorld() && (!GCurrentLevelEditingViewportClient || GCurrentLevelEditingViewportClient->IsInGameView()))
	{
		return;
	}
#endif

	DrawText();
	DrawLines();
	DrawPathPoints();
	VisualizePointReachRadius();

	ArrowMoverValue += DeltaTime * UUPSSettings::Get()->ArrowMovementSpeed;

	if (ArrowMoverValue >= ArrowMoverMaxValue)
	{
		ArrowMoverValue = 0.f;
	}

	if (bNeedUpdatePaths)
	{
		TickCounter++;

		//because if you do it instantly, then after moving an object, the path is not aligned correctly
		if (TickCounter == 3)
		{
			bNeedUpdatePaths = false;
			UpdatePathPoints();
		}
	}
#endif
}

TStatId UUPSPatrolVisualizer::GetStatId() const
{
	return TStatId();
}


#if WITH_ENGINE
class UWorld* UUPSPatrolVisualizer::GetWorld() const
{
	UWorld* returnWorld = nullptr;

	if (CurrentWorld.IsValid() && CurrentWorld->WorldType != EWorldType::Type::Editor && CurrentWorld->WorldType != EWorldType::Type::EditorPreview)
	{
		return CurrentWorld.Get();
	}

	if (GIsEditor && !GIsPlayInEditorWorld && !bIsPIE && GEngine)
	{
		for (auto& worldContext : GEngine->GetWorldContexts())
		{
			if (worldContext.World() != nullptr)
			{
				returnWorld = worldContext.World();
				break;
			}
		}
	}

	return returnWorld;
}
#endif


void UUPSPatrolVisualizer::PostInitProperties()
{
	Super::PostInitProperties();
}

void UUPSPatrolVisualizer::RegisterPatrolComponent(UUPSPatrolComponent* NewComponent)
{
	PatrolComponents.AddUnique(NewComponent);
}

void UUPSPatrolVisualizer::UnregisterPatrolComponent(UUPSPatrolComponent* NewComponent)
{
	PatrolComponents.Remove(NewComponent);
}

void UUPSPatrolVisualizer::EnablePathVisualizationInGame(bool bEnable)
{
#if !UE_BUILD_SHIPPING
	bEnableVisualizationInGameMode = bEnable;

	if (GetWorld())
	{
		for (TActorIterator<AUPSPatrolPoint> patrolPointIterator(GetWorld()); patrolPointIterator; ++patrolPointIterator)
		{
			patrolPointIterator->EnableVisualization(bEnableVisualizationInGameMode);
		}
	}
#endif
}

void UUPSPatrolVisualizer::EnablePointActionVisualization(bool bEnable)
{
#if !UE_BUILD_SHIPPING
	for (auto iterator = TActorIterator<AUPSEnemyPointAction>(GetWorld()); iterator; ++iterator)
	{
		auto enemyPointAction = *iterator;

		enemyPointAction->EnableVisualization(bEnable);
	}
#endif
}

void UUPSPatrolVisualizer::DrawRouteLine(FVector LineStart, FVector LineEnd, FColor LineColor /*= FColor::White*/, float Thickness /*= 2.f*/)
{
	::DrawDebugLine(GetWorld(), LineStart, LineEnd, LineColor, false, 0.f, 1, Thickness);
}

void UUPSPatrolVisualizer::DrawRouteArrow(FVector LineStart, FVector LineEnd, FColor LineColor /*= FColor::White*/, float Thickness /*= 2.f*/, float ArrowOffset /*= 50.f*/, float ArrowSize /*= 600.f*/)
{
	FVector finalEnd = LineEnd + (FVector(LineStart - LineEnd).GetSafeNormal() * ArrowOffset);

	FVector finalStart = LineStart /*- (FVector(LineStart - LineEnd).GetSafeNormal() * ArrowOffset)*/;

	::DrawDebugLine(GetWorld(), finalStart, finalEnd, LineColor, false, 0.f, 1, Thickness);

	FVector Dir = (finalEnd - finalStart);
	Dir.Normalize();
	FVector Up(0, 0, 1);
	FVector Right = Dir ^ Up;
	if (!Right.IsNormalized())
	{
		Dir.FindBestAxisVectors(Up, Right);
	}
	FVector Origin = FVector::ZeroVector;
	FMatrix TM;
	// get matrix with dir/right/up
	TM.SetAxes(&Dir, &Right, &Up, &Origin);

	// since dir is x direction, my arrow will be pointing +y, -x and -y, -x
	float ArrowSqrt = FMath::Sqrt(ArrowSize);
	FVector ArrowPos;
	::DrawDebugLine(GetWorld(), finalEnd, finalEnd + TM.TransformPosition(FVector(-ArrowSqrt, ArrowSqrt, 0)), LineColor, false, 0.f, 1, Thickness);
	::DrawDebugLine(GetWorld(), finalEnd, finalEnd + TM.TransformPosition(FVector(-ArrowSqrt, -ArrowSqrt, 0)), LineColor, false, 0.f, 1, Thickness);

	float lineLength = FVector(finalStart - finalEnd).Size();

	ArrowSqrt = FMath::Sqrt(UUPSSettings::Get()->PatrolPointSmallArrowSize);

	for (int32 lineIndex = 0; lineIndex < FMath::RoundToInt(lineLength / UUPSSettings::Get()->DistanceBetweenArrows); lineIndex++)
	{
		FVector linePosition = finalStart + ((finalEnd - finalStart).GetUnsafeNormal() * lineIndex * UUPSSettings::Get()->DistanceBetweenArrows);

		float moveOffset = UUPSSettings::Get()->DistanceBetweenArrows * ArrowMoverValue / ArrowMoverMaxValue;
		
		FVector lineFinalPosition = linePosition + ((finalEnd - finalStart).GetUnsafeNormal() * moveOffset);

		if ((finalStart - lineFinalPosition).Size() <= lineLength && (finalStart - lineFinalPosition).Size() >= ArrowOffset)
		{
		::DrawDebugLine(GetWorld(), lineFinalPosition, lineFinalPosition + TM.TransformPosition(FVector(-ArrowSqrt, ArrowSqrt, 0)), LineColor, false, 0.f, 1, Thickness);
		::DrawDebugLine(GetWorld(), lineFinalPosition, lineFinalPosition + TM.TransformPosition(FVector(-ArrowSqrt, -ArrowSqrt, 0)), LineColor, false, 0.f, 1, Thickness);
		}
	}
}


bool UUPSPatrolVisualizer::FindPathBetweenLocations(FVector FirstLocation, FVector SecondLocation, TArray<FVector>& OutPath)
{
	bool bPathIsBroken = true;

	TArray<FVector> returnArray;

	auto navPath = UNavigationSystemV1::FindPathToLocationSynchronously(this, FirstLocation, SecondLocation);

	if (navPath && navPath->IsValid() && !navPath->IsPartial())
	{
		returnArray = navPath->PathPoints;
		bPathIsBroken = false;
	}
	else
	{
		returnArray.Add(FirstLocation);
		returnArray.Add(SecondLocation);
	}

	OutPath = returnArray;

	return !bPathIsBroken;
}


void UUPSPatrolVisualizer::UpdatePathPointsRequest()
{
#if !UE_BUILD_SHIPPING
	TickCounter = 0;
	bNeedUpdatePaths = true;
#endif
}

FUPSPatrolPointPathData UUPSPatrolVisualizer::CalculatePatrolPointPathData(AUPSPatrolPoint* FirstPoint, AUPSPatrolPoint* SecondPoint, float VerticalOffset /*= 0.f*/)
{
	FUPSPatrolPointPathData returnData;

	if (FirstPoint != nullptr && SecondPoint != nullptr)
	{
		TArray<FVector> pathPoints;

		bool pathIsValid = FindPathBetweenLocations(FirstPoint->GetActorLocation(), SecondPoint->GetActorLocation(), pathPoints);

		returnData.bPathIsValid = pathIsValid;

		returnData.FirstPoint = FirstPoint;
		returnData.SecondPoint = SecondPoint;


		if (pathIsValid)
		{
			returnData.PathPoints = pathPoints;
		}
		else
		{
			returnData.PathPoints = { FirstPoint->GetActorLocation() - FVector(0.f, 0.f, VerticalOffset),  SecondPoint->GetActorLocation() - FVector(0.f, 0.f, VerticalOffset) };
		}
	}

	return returnData;
}

FUPSPatrolComponentPathData UUPSPatrolVisualizer::CalculatePatrolComponentPathData(FVector FirstPoint, FVector SecondPoint, UUPSPatrolComponent* PatrolComponent, float VerticalOffset /*= 0.f*/)
{
	FUPSPatrolComponentPathData returnData;

	TArray<FVector> pathPoints;

	bool pathIsValid = FindPathBetweenLocations(FirstPoint, SecondPoint, pathPoints);

	returnData.bPathIsValid = pathIsValid;
	returnData.PatrolComponent = PatrolComponent;

	if (pathIsValid)
	{
		returnData.PathPoints = pathPoints;
	}
	else
	{
		returnData.PathPoints = { FirstPoint - FVector(0.f, 0.f, VerticalOffset), SecondPoint - FVector(0.f, 0.f, VerticalOffset) };
	}

	return returnData;
}

void UUPSPatrolVisualizer::DrawLines()
{
	for (auto patrolComponent : PatrolComponents)
	{
		if (patrolComponent.IsValid() && patrolComponent->GetCurrentPatrolPoint() != nullptr && (!patrolComponent->bDisableVisualization || !IsInEditorWorld()))
		{
			FVector startLine = patrolComponent->GetOwner()->GetActorLocation();
			FVector endLine = patrolComponent->GetCurrentPatrolPoint()->GetActorLocation() + FVector(0.f, 0.f, 20.f);

			DrawRouteArrow(startLine, endLine, UUPSSettings::Get()->LineFromPatrolComponentOwnerColor, UUPSSettings::Get()->DefaultLinesThickness, UUPSSettings::Get()->PatrolPointArrowOffset, UUPSSettings::Get()->PatrolPointArrowSize);
		}
	}

	for (auto& point : VisitedPoints)
	{
		if (point.FirstPoint.IsValid() && point.SecondPoint.IsValid())
		{
			DrawRouteArrow(point.FirstPoint->GetActorLocation(), point.SecondPoint->GetActorLocation(), UUPSSettings::Get()->LinesBetweenPointsColor, UUPSSettings::Get()->DefaultLinesThickness, UUPSSettings::Get()->PatrolPointArrowOffset, UUPSSettings::Get()->PatrolPointArrowSize);
		}
	}
}

void UUPSPatrolVisualizer::DrawText()
{
	if (IsInEditorWorld())
	{
		auto needDrawText = [&](AUPSPatrolPoint* FirstPoint, AUPSPatrolPoint* SecondPoint)->bool
		{
			for (auto point : VisitedPoints)
			{
				if (FirstPoint && SecondPoint && point.FirstPoint == FirstPoint && point.SecondPoint == SecondPoint)
				{
					return true;
				}
			}

			return false;
		};

		for (TActorIterator<AUPSPatrolPoint> patrolPointIterator(GetWorld()); patrolPointIterator; ++patrolPointIterator)
		{
			for (auto& link : patrolPointIterator->GetNextPatrolPointLinks())
			{
				if (link.IsValid() && needDrawText(*patrolPointIterator, link.PatrolPoint))
				{
					TArray<FVector> points{ patrolPointIterator->GetActorLocation(), link.PatrolPoint->GetActorLocation() };

					auto averagePoint = UKismetMathLibrary::GetVectorArrayAverage(points);
					
					UUPSEditorDrawer::Get()->DrawTextInWorld(GetWorld(), link.LinkTag != FGameplayTag::EmptyTag ? link.LinkTag.ToString() : "", averagePoint);
				}
			}
		}
	}
}

void UUPSPatrolVisualizer::DrawPathPoints()
{
	auto needDrawPathPoints = [&](FUPSPatrolPointPathData& PathData)->bool
	{
		if (!IsInEditorWorld())
		{
			return true;
		}

		for (auto& point : VisitedPoints)
		{
			if (point.FirstPoint == PathData.FirstPoint && point.SecondPoint == PathData.SecondPoint)
			{
				return true;
			}
		}

		return false;
	};

	for (auto& pathData : PatrolPointsPathData)
	{
		if (pathData.FirstPoint.IsValid() && pathData.SecondPoint.IsValid())
		{
			if (needDrawPathPoints(pathData))
			{
				for (int32 pathPointIndex = 0; pathPointIndex < pathData.PathPoints.Num() - 1; pathPointIndex++)
				{
					FVector startLine = pathData.PathPoints[pathPointIndex];
					FVector endLine = pathData.PathPoints[pathPointIndex + 1];
					DrawRouteLine(startLine, endLine, pathData.bPathIsValid ? UUPSSettings::Get()->PathLinesColor : UUPSSettings::Get()->ErrorLineColor, pathData.bPathIsValid ? UUPSSettings::Get()->DefaultLinesThickness : UUPSSettings::Get()->ErrorLinesThickness);
				}
			}
		}
	}

	if (IsInEditorWorld())
	{
		for (auto& pathData : PatrolComponentsPathData)
		{
			if (pathData.PatrolComponent.IsValid() && !pathData.PatrolComponent->bDisableVisualization)
			{
				for (int32 pathPointIndex = 0; pathPointIndex < pathData.PathPoints.Num() - 1; pathPointIndex++)
				{
					FVector startLine = pathData.PathPoints[pathPointIndex];
					FVector endLine = pathData.PathPoints[pathPointIndex + 1];
					DrawRouteLine(startLine, endLine, pathData.bPathIsValid ? UUPSSettings::Get()->PathLinesColor : UUPSSettings::Get()->ErrorLineColor, pathData.bPathIsValid ? UUPSSettings::Get()->DefaultLinesThickness : UUPSSettings::Get()->ErrorLinesThickness);
				}
			}
		}
	}
}

void UUPSPatrolVisualizer::VisualizePointReachRadius()
{
	for (auto& point : VisitedPoints)
	{
		if (point.FirstPoint.IsValid())
		{
			if (!FMath::IsNearlyZero(point.FirstPoint->GetPatrolPointSettings().ReachRadius))
			{
				::DrawDebugCircle(GetWorld(), point.FirstPoint->GetActorLocation(), point.FirstPoint->GetPatrolPointSettings().ReachRadius, 24, UUPSSettings::Get()->ReachRadiusColor, false, -1.f, 1, UUPSSettings::Get()->ReachRadiusThickness, FVector(1.f, 0.f, 0.f), FVector(0.f, 1.f, 0.f), false);
			}
		}
	}
}

void UUPSPatrolVisualizer::UpdatePathPoints()
{
	PatrolPointsPathData.Empty();
	PatrolComponentsPathData.Empty();

	for (TActorIterator<AUPSPatrolPoint> patrolPointIterator(GetWorld()); patrolPointIterator; ++patrolPointIterator)
	{
		for (auto& link : patrolPointIterator->GetNextPatrolPointLinks())
		{
			if (link.IsValid())
			{
				PatrolPointsPathData.Add(CalculatePatrolPointPathData(*patrolPointIterator, link.PatrolPoint, 50.f));
			}
		}
	}

	if (IsInEditorWorld())
	{
		for (auto patrolComponent : PatrolComponents)
		{
			if (patrolComponent.IsValid() && patrolComponent->InitialMovementPatrolPoint != nullptr)
			{
				FVector startLine = patrolComponent->GetOwner()->GetActorLocation();
				FVector endLine = patrolComponent->InitialMovementPatrolPoint->GetActorLocation() + FVector(0.f, 0.f, 20.f);

				PatrolComponentsPathData.Add(CalculatePatrolComponentPathData(startLine, endLine, patrolComponent.Get(), 50.f));
			}
		}
	}
}


void UUPSPatrolVisualizer::UpdateVisitedPoints()
{
#if !UE_BUILD_SHIPPING
	VisitedPoints.Empty();

	if (GetWorld())
	{
		if (IsInEditorWorld())
		{
#if WITH_EDITOR
			for (auto selectedActorIterator = GEditor->GetSelectedActorIterator(); selectedActorIterator; ++selectedActorIterator)
			{
				if (AUPSPatrolPoint* patrolPoint = Cast<AUPSPatrolPoint>(*selectedActorIterator))
				{
					CollectPatrolPointsToVisualize(VisitedPoints, patrolPoint);
				}
			}
#endif
		}
		else
		{
			for (TActorIterator<AUPSPatrolPoint> patrolPointIterator(GetWorld()); patrolPointIterator; ++patrolPointIterator)
			{
				CollectPatrolPointsToVisualize(VisitedPoints, *patrolPointIterator);
			}
		}
	}
#endif
}

bool UUPSPatrolVisualizer::IsVisualizationEnabled()
{
	if (GetWorld())
	{
		auto worldType = GetWorld()->WorldType;
		if (bEnableVisualizationInGameMode && !IsInEditorWorld())
		{
			return true;
		}

		if (!bEnableVisualizationInGameMode && IsInEditorWorld())
		{
			return true;
		}
	}

	return false;
}

bool UUPSPatrolVisualizer::IsInEditorWorld()
{
	if (GetWorld())
	{
		auto worldType = GetWorld()->WorldType;

		if (worldType == EWorldType::PIE || worldType == EWorldType::Game || worldType == EWorldType::GamePreview)
		{
			return false;
		}

		if (worldType == EWorldType::Editor || worldType == EWorldType::EditorPreview)
		{
			return true;
		}
	}

	return false;
}

void UUPSPatrolVisualizer::OnWorldInitializedActors(UWorld* World, const UWorld::InitializationValues IVS)
{
	CurrentWorld = World;

	UpdatePathPointsRequest();
	UpdateVisitedPoints();
}

#if WITH_EDITOR
void UUPSPatrolVisualizer::OnPreBeginPIE(const bool bIsSimulating)
{
	bIsPIE = true;

	CachedEditorPatrolComponents = PatrolComponents;
	PatrolComponents.Empty();

	UUPSEditorDrawer::Get()->UnregisterDrawer("Editor");
}

void UUPSPatrolVisualizer::OnEndPIE(const bool bIsSimulating)
{
	EnablePathVisualizationInGame(false);
	bIsPIE = false;
	PatrolComponents = CachedEditorPatrolComponents;
	UUPSEditorDrawer::Get()->RegisterDrawer("Editor");
}

void UUPSPatrolVisualizer::OnObjectEndMovement(UObject& Object)
{
	UpdatePathPointsRequest();
}

void UUPSPatrolVisualizer::OnMapChangedInEditor(const FString&  Filename, bool bAsTemplate)
{
	//good place to bind delegates :)

	if (GEditor && !GEditor->OnEndObjectMovement().IsBoundToObject(this))
	{
		GEditor->OnEndObjectMovement().AddUObject(this, &UUPSPatrolVisualizer::OnObjectEndMovement);
	}

	if (GEngine && !GEngine->OnLevelActorAdded().IsBoundToObject(this))
	{
		GEngine->OnLevelActorAdded().AddUObject(this, &UUPSPatrolVisualizer::OnLevelActorSpawnedOrDestroyed);
		GEngine->OnLevelActorDeleted().AddUObject(this, &UUPSPatrolVisualizer::OnLevelActorSpawnedOrDestroyed);
	}

	if (!USelection::SelectionChangedEvent.IsBoundToObject(this))
	{
		USelection::SelectionChangedEvent.AddUObject(this, &UUPSPatrolVisualizer::OnObjectSelectedInEditor);
	}

	UpdatePathPointsRequest();
}

void UUPSPatrolVisualizer::OnObjectSelectedInEditor(UObject* Object)
{
	UpdateVisitedPoints();
	UpdatePathPointsRequest();
}

void UUPSPatrolVisualizer::OnLevelActorSpawnedOrDestroyed(AActor* Actor)
{
	UpdatePathPointsRequest();
}

#endif

void UUPSPatrolVisualizer::CollectPatrolPointsToVisualize(TArray<FVisitedPoint>& InVisitedPoints, AUPSPatrolPoint* PatrtolPoint)
{
	for (auto& nextLink : PatrtolPoint->GetNextPatrolPointLinks())
	{
		if (nextLink.IsValid())
		{
			auto visitedPoint = FVisitedPoint(PatrtolPoint, nextLink.PatrolPoint);
			if (!IsVisitedPointExists(InVisitedPoints, visitedPoint))
			{
				InVisitedPoints.Add(FVisitedPoint(PatrtolPoint, nextLink.PatrolPoint));
				CollectPatrolPointsToVisualize(InVisitedPoints, nextLink.PatrolPoint);
			}
		}
	}

	for (auto& backwardLink : PatrtolPoint->GetBackwardPatrolPointLinks())
	{
		if (backwardLink.IsValid())
		{
			auto visitedPoint = FVisitedPoint(backwardLink.PatrolPoint, PatrtolPoint);
			if (!IsVisitedPointExists(InVisitedPoints, visitedPoint))
			{
				CollectPatrolPointsToVisualize(InVisitedPoints, backwardLink.PatrolPoint);
			}
		}
	}
}

bool UUPSPatrolVisualizer::IsVisitedPointExists(TArray<FVisitedPoint>& InVisitedPoints, FVisitedPoint& VisitedPoint)
{
	for (auto point : InVisitedPoints)
	{
		if (point == VisitedPoint)
		{
			return true;
		}
	}

	return false;
}