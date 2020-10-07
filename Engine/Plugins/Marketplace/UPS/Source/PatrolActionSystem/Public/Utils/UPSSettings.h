// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UPSSettings.generated.h"

class UTexture2D;
class UEditorUtilityWidget;
class USkeletalMesh;
class UMaterialInterface;

/**
 * 
 */
UCLASS(Config = UPSSettings, defaultconfig)
class PATROLACTIONSYSTEM_API UUPSSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category = "UPSSettings")
	static UUPSSettings* Get() {return UUPSSettings::StaticClass()->GetDefaultObject<UUPSSettings>(); }

	virtual FName GetCategoryName() const override;

public:
	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Lines")
	FColor PathLinesColor = FColor::Green;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Lines")
	FColor LinesBetweenPointsColor = FColor::Blue;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Lines")
	FColor LineFromPatrolComponentOwnerColor = FColor::Cyan;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Lines")
	FColor ErrorLineColor = FColor::Red;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Lines", meta = (ClampMin = 0.f, UIMin = 0.f))
	float DefaultLinesThickness = 2.5f;
	
	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Lines", meta = (ClampMin = 0.f, UIMin = 0.f))
	float ErrorLinesThickness = 5.f;
	
	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Arrow", meta = (ClampMin = 0.f, UIMin = 0.f))
	float PatrolPointArrowOffset = 50.f;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Arrow", meta = (ClampMin = 0.f, UIMin = 0.f))
	float PatrolPointArrowSize = 1300.f;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Arrow", meta = (ClampMin = 0.f, UIMin = 0.f))
	float PatrolPointSmallArrowSize = 400.f;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Arrow", meta = (ClampMin = 0.f, UIMin = 0.f))
	float ArrowMovementSpeed = 15.f;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|Arrow", meta = (ClampMin = 0.f, UIMin = 0.f))
	float DistanceBetweenArrows = 450.f;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|ReachRadius")
	FColor ReachRadiusColor = FColor::Purple;

	UPROPERTY(Config, EditAnywhere, Category = "PatrolPoint|ReachRadius", meta = (ClampMin = 0.f, UIMin = 0.f))
	float ReachRadiusThickness = 2.f;

	UPROPERTY(Config, EditAnywhere, BlueprintReadOnly, Category = "Patrol Builder")
	FKey KeyToAddNewPoint = FKey("X");

	UPROPERTY(Config, EditAnywhere, Category = "Patrol Builder")
	TEnumAsByte<ECollisionChannel> PatrolBuilderTraceChannel = ECC_WorldStatic;

	UPROPERTY(Config, EditAnywhere, Category = "Patrol Builder", meta = (ClampMin = 0.f, UIMin = 0.f))
	float CheckDistanceBetweenPoints = 100.f;

	UPROPERTY(Config, EditAnywhere, Category = "Enemy Point Action Component")
	TSoftObjectPtr<USkeletalMesh> EnemyActionPointComponentMesh;

	UPROPERTY(Config, EditAnywhere, Category = "Enemy Point Action Component")
	TSoftObjectPtr<UMaterialInterface> EnemyActionPointComponentMeshMaterial;

	UPROPERTY(Config, EditAnywhere, Category = "Enemy Point Action Component")
	TSoftObjectPtr<UTexture2D> EnemyActionPointComponentBillboardSprite;

	UPROPERTY(Config, EditAnywhere, Category = "Enemy Point Action Component")
	FVector DebugPointActionOffset = FVector(0.f, 0.f, 100.f);

	UPROPERTY(Config, EditAnywhere, Category = "Enemy Point Action Component")
	FColor DebugPointActionColor = FColor::Yellow;

	UPROPERTY(Config, EditAnywhere, Category = "Enemy Point Action Component")
	float DebugPointActionArrowSize = 300.f;

	UPROPERTY(Config, EditAnywhere, Category = "Enemy Point Action Component")
	float DebugPointActionLineThickness = 1.5f;
	
	UPROPERTY(Config, EditAnywhere, Category = "BT Settings")
	FName CurrentPatrolPointBBName = "CurrentPatrolPoint";
};
