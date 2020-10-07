// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask.h"
#include "Tickable.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "UPSPatrolBuilder.generated.h"

class UEditorUtilityWidget;
class UUPSEditorExtensionPatrolBuilder;
class AUPSGameplayTaskProxyOwner;
class APlayerController;
class UCanvas;
class AUPSPatrolPoint;
class UWorld;


DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPatrolBuildFailed);

UCLASS(Transient)
class PATROLACTIONSYSTEMEDITOR_API UUPSPatrolBuilder : public UGameplayTask, public FTickableGameObject
{
	GENERATED_BODY()

public:
	UUPSPatrolBuilder(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem|Editor|PatrolBuilder", meta = (HidePin = "EditorUtilityWidget", DefaultToSelf = "EditorUtilityWidget", BlueprintInternalUseOnly = "TRUE"))
	static UUPSPatrolBuilder* RunPatrolBuilder(UEditorUtilityWidget* EditorUtilityWidget);

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem|Editor|PatrolBuilder")
	void FinishBuilding();

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem|Editor|PatrolBuilder")
	void AbortBuilding();

	/*FTickableEditorObject Start*/
	virtual bool IsTickableInEditor() const override;
	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;
	/*FTickableEditorObject End*/

protected:
	virtual void Activate() override;
	virtual void OnDestroy(bool bInOwnerFinished) override;


#if WITH_EDITOR
	void OnKeyPressed(FKey Key, EInputEvent Event);
	void DebugDrawServiceTick(UCanvas* InCanvas, APlayerController* InPlayerController);

	AUPSPatrolPoint* GetFirstSelectedPatrolPoint();
	bool IsNeedSpawnNewPoint(FVector InLocation, AUPSPatrolPoint* SelectedPatrolPoint);
	AUPSPatrolPoint* GetNearestPatrolPointToLocation(FVector InLocation, AUPSPatrolPoint* SelectedPatrolPoint);
	void UnselectAllActors();

	void PreBeginPIE(bool bIsSimulatingPIE);
	void EndPIE(bool bIsSimulatingPIE);

	void OnWorldChanged(UWorld* World, const UWorld::InitializationValues IVS);
#endif

public:
 	UPROPERTY(BlueprintAssignable, Category = "UPSPatrolSystem|Editor|PatrolBuilder")
 	FOnPatrolBuildFailed OnPatrolBuildFailed;

protected:
#if WITH_EDITOR
	UPROPERTY()
	UUPSEditorExtensionPatrolBuilder* PatrolBuilderEditorExtension;
	UPROPERTY()
	AUPSGameplayTaskProxyOwner* ProxyTaskOwner;

	bool bMarkForFinish = false;
	bool bNeedHandleInput = false;

	UPROPERTY()
	TArray<AUPSPatrolPoint*> SpawnedPatrolPoints;

	TWeakObjectPtr<UWorld> CachedWorld;
#endif
};
