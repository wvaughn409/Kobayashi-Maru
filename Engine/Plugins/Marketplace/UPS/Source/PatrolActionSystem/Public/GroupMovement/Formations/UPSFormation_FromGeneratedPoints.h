// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GroupMovement/UPSGroupMovementFormation.h"
#include "GroupMovement/GroupMovementTypes.h"
#include "UPSFormation_FromGeneratedPoints.generated.h"

/*
Generate points from params and get one of this for character location in formation
*/
UCLASS(Abstract)
class PATROLACTIONSYSTEM_API AUPSFormation_FromGeneratedPoints : public AUPSGroupMovementFormation
{
	GENERATED_BODY()
	
public:
	AUPSFormation_FromGeneratedPoints();

	/*AActor start*/
	virtual bool ShouldTickIfViewportsOnly() const override;
	virtual void Tick(float DeltaTime) override;
	/*AActor end*/

		/*AUPSGroupMovementFormation Start*/
	virtual void InitFormation(ACharacter* InLeaderCharacter) override;
	virtual FVector GetLocationInFormationForCharacter(ACharacter* Character) override;
	/*AUPSGroupMovementFormation End*/

protected:
	void GenerateFormationPoints(ACharacter* Character);
	FVector GetGeneratedPoint();

protected:
	UPROPERTY(EditAnywhere, Category = "UPSFormation")
	FFormationPointsGenerationSettings PointsGenerationSettings;

	TArray<FVector> GeneratedFormationPoints;

	TArray<FVector> NotUsedGeneratedPoints;
};
