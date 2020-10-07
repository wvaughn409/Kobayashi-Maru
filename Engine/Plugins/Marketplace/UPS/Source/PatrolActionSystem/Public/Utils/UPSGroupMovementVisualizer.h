// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Tickable.h"
#include "UPSGroupMovementVisualizer.generated.h"

class AUPSMovementGroup;

/*
Class contains functions to check groups selection and visualization in editor
*/

USTRUCT()
struct PATROLACTIONSYSTEM_API FGroupVisualizationInfo
{
	GENERATED_BODY()
public:
	bool bSelectedInEditor = false;
};

UCLASS()
class PATROLACTIONSYSTEM_API UUPSGroupMovementVisualizer : public UObject, public FTickableGameObject
{
	GENERATED_BODY()
public:
	UUPSGroupMovementVisualizer();

	static UUPSGroupMovementVisualizer* Get() { return UUPSGroupMovementVisualizer::StaticClass()->GetDefaultObject <UUPSGroupMovementVisualizer>(); }

	/*FTickableEditorObject Start*/
	virtual bool IsTickableInEditor() const override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	/*FTickableEditorObject End*/

	/*UObject Start*/
#if WITH_ENGINE
	virtual class UWorld* GetWorld() const;
#endif
	/*UObject End*/

	void RegisterMovementGroup(AUPSMovementGroup* NewGroup);
	void UnregisterMovementGroup(AUPSMovementGroup* GroupToUnregister);

private:
	void DrawLines();
	void GroupMovementEditorSelectionCheck();

	void OnPreBeginPIE(const bool bIsSimulating);
	void OnEndPIE(const bool bIsSimulating);
	void DrawLine(FVector LineStart, FVector LineEnd, FColor LineColor = FColor::White, float Thickness = 2.f);
private:
	bool bIsPIE = false;

	TMap<TWeakObjectPtr <AUPSMovementGroup>, bool> MovementGroups;
};
