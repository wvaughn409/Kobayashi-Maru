// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tickable.h"
#include "Actors/UPSPatrolPoint.h"
#include "Engine/World.h"
#include "UPSPatrolVisualizer.generated.h"

class UCanvas;
class UUPSPatrolComponent;
class UWorld;

/*
Class contains functions to check patrol route selection and visualization in editor
*/


USTRUCT()
struct PATROLACTIONSYSTEM_API FUPSPathData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FVector> PathPoints;

	UPROPERTY()
	bool bPathIsValid = true;

	void Clear() 
	{ 
		PathPoints.Empty();
		bPathIsValid = true;
	}
};

USTRUCT()
struct PATROLACTIONSYSTEM_API FUPSPatrolPointPathData : public FUPSPathData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TWeakObjectPtr<AUPSPatrolPoint> FirstPoint;

	UPROPERTY()
	TWeakObjectPtr <AUPSPatrolPoint> SecondPoint;
};

USTRUCT()
struct PATROLACTIONSYSTEM_API FUPSPatrolComponentPathData : public FUPSPathData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TWeakObjectPtr<UUPSPatrolComponent> PatrolComponent;
};


USTRUCT()
struct PATROLACTIONSYSTEM_API FVisitedPoint
{
	GENERATED_BODY()

public:
	FVisitedPoint(){}
	FVisitedPoint(AUPSPatrolPoint* InFirstPoint, AUPSPatrolPoint* InSecondPoint) :
		FirstPoint(InFirstPoint),
		SecondPoint(InSecondPoint) {}

	FORCEINLINE bool operator==(const FVisitedPoint& Other) const
	{
		return FirstPoint == Other.FirstPoint && SecondPoint == Other.SecondPoint;
	}

	public:
	UPROPERTY()
	TWeakObjectPtr<AUPSPatrolPoint>  FirstPoint;

	UPROPERTY()
	TWeakObjectPtr<AUPSPatrolPoint>  SecondPoint;
};

UCLASS()
class PATROLACTIONSYSTEM_API UUPSPatrolVisualizer : public UObject, public FTickableGameObject
{
	GENERATED_BODY()
public:
	UUPSPatrolVisualizer();

	UFUNCTION(BlueprintPure, Category = "UPSPatrolVisualizer", DisplayName = "Get Patrol Visualizer")
	static UUPSPatrolVisualizer* Get() { return UUPSPatrolVisualizer::StaticClass()->GetDefaultObject<UUPSPatrolVisualizer>(); }

	/*FTickableEditorObject Start*/
	virtual bool IsTickableInEditor() const override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	/*FTickableEditorObject End*/

	/*UObject Start*/
#if WITH_ENGINE
	virtual class UWorld* GetWorld() const;
#endif

	virtual void PostInitProperties() override;
	/*UObject End*/

	void RegisterPatrolComponent(UUPSPatrolComponent* NewComponent);
	void UnregisterPatrolComponent(UUPSPatrolComponent* NewComponent);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolVisualizer")
	void EnablePathVisualizationInGame(bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolVisualizer")
	void EnablePointActionVisualization(bool bEnable);

	void UpdatePathPointsRequest();
	void UpdateVisitedPoints();

	bool IsVisualizationEnabled();
private:
	void DrawRouteLine(FVector LineStart, FVector LineEnd, FColor LineColor = FColor::White, float Thickness = 2.f);
	void DrawRouteArrow(FVector LineStart, FVector LineEnd, FColor LineColor = FColor::White, float Thickness = 2.f, float ArrowOffset = 50.f, float ArrowSize = 600.f);

	bool FindPathBetweenLocations(FVector FirstLocation, FVector SecondLocation, TArray<FVector>& OutPath);

	FUPSPatrolPointPathData CalculatePatrolPointPathData(AUPSPatrolPoint* FirstPoint, AUPSPatrolPoint* SecondPoint, float VerticalOffset = 0.f);
	
	FUPSPatrolComponentPathData CalculatePatrolComponentPathData(FVector FirstPoint, FVector SecondPoint, UUPSPatrolComponent* PatrolComponent, float VerticalOffset = 0.f);

	void DrawLines();
	void DrawText();
	void DrawPathPoints();
	void VisualizePointReachRadius();

	void UpdatePathPoints();

#if WITH_EDITOR
	void OnPreBeginPIE(const bool bIsSimulating);
	void OnEndPIE(const bool bIsSimulating);
	void OnObjectEndMovement(UObject& Object);

	void OnMapChangedInEditor(const FString&  Filename , bool bAsTemplate);

	void OnObjectSelectedInEditor(UObject* Object);

	void OnLevelActorSpawnedOrDestroyed(AActor* Actor);
#endif

	bool IsVisitedPointExists(TArray<FVisitedPoint>& InVisitedPoints, FVisitedPoint& VisitedPoint);
	void CollectPatrolPointsToVisualize(TArray<FVisitedPoint>& InVisitedPoints, AUPSPatrolPoint* PatrtolPoint);
	bool IsInEditorWorld();

	void OnWorldInitializedActors(UWorld* World, const UWorld::InitializationValues IVS);
private:
	TArray<TWeakObjectPtr<UUPSPatrolComponent>> PatrolComponents;

	TArray<TWeakObjectPtr<UUPSPatrolComponent>> CachedEditorPatrolComponents;

	bool bEnableVisualizationInGameMode = false;
	bool bIsPIE = false;
	
	float ArrowMoverValue = 0.f;

	float ArrowMoverMaxValue = 100.f;

	bool bNeedUpdatePaths = false;

	uint32 TickCounter = 0;

	UPROPERTY()
	TArray<FUPSPatrolPointPathData> PatrolPointsPathData;

	UPROPERTY()
	TArray<FUPSPatrolComponentPathData> PatrolComponentsPathData;

	UPROPERTY()
	TArray<FVisitedPoint> VisitedPoints;

	TWeakObjectPtr<UWorld> CurrentWorld;
};
