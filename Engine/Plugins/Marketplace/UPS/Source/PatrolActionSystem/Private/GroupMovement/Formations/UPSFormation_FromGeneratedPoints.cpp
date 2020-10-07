// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/Formations/UPSFormation_FromGeneratedPoints.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetSystemLibrary.h"

AUPSFormation_FromGeneratedPoints::AUPSFormation_FromGeneratedPoints()
{
	PrimaryActorTick.bCanEverTick = true;
}

bool AUPSFormation_FromGeneratedPoints::ShouldTickIfViewportsOnly() const
{
	return true;
}

void AUPSFormation_FromGeneratedPoints::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!HasActorBegunPlay())
	{
		GenerateFormationPoints(nullptr);
	}
}

void AUPSFormation_FromGeneratedPoints::InitFormation(ACharacter* InLeaderCharacter)
{
	Super::InitFormation(InLeaderCharacter);

	GenerateFormationPoints(InLeaderCharacter);
}

FVector AUPSFormation_FromGeneratedPoints::GetLocationInFormationForCharacter(ACharacter* Character)
{
	return GetGeneratedPoint();
}

void AUPSFormation_FromGeneratedPoints::GenerateFormationPoints(ACharacter* Character)
{
	GeneratedFormationPoints.Empty();

	AActor* orientAroundActor = Character != nullptr ? Character : (AActor*)this;

	FVector traceStartPoint = orientAroundActor->GetActorLocation();
	traceStartPoint -= orientAroundActor->GetActorForwardVector() * PointsGenerationSettings.Length * 0.5f;
	traceStartPoint -= orientAroundActor->GetActorRightVector() * PointsGenerationSettings.Width * 0.5f;

	int32 lengthCountOfPoints = PointsGenerationSettings.Length / PointsGenerationSettings.DistanceBetweenPoints;
	int32 widthCountOfPoints = PointsGenerationSettings.Width / PointsGenerationSettings.DistanceBetweenPoints;

	for (int32 length = 0; length < lengthCountOfPoints; length++)
	{
		for (int32 width = 0; width < widthCountOfPoints; width++)
		{
			FVector newPoint = traceStartPoint;

			newPoint += orientAroundActor->GetActorForwardVector() * length * PointsGenerationSettings.DistanceBetweenPoints;
			newPoint += orientAroundActor->GetActorRightVector() * width * PointsGenerationSettings.DistanceBetweenPoints;
			GeneratedFormationPoints.Add(orientAroundActor->GetTransform().InverseTransformPosition(newPoint));

			if (GetWorld()->WorldType == EWorldType::Type::Editor || GetWorld()->WorldType == EWorldType::Type::EditorPreview)
			{
				UKismetSystemLibrary::DrawDebugSphere(this, newPoint, 5.f, 6.f, FColor::Yellow, 0.f, 2.f);
			}
		}
	}

	NotUsedGeneratedPoints = GeneratedFormationPoints;
}

FVector AUPSFormation_FromGeneratedPoints::GetGeneratedPoint()
{
	FVector returnValue = FVector::ZeroVector;

	if (GeneratedFormationPoints.Num() != 0)
	{
		if (NotUsedGeneratedPoints.Num() == 0)
		{
			NotUsedGeneratedPoints = GeneratedFormationPoints;
			returnValue = GetGeneratedPoint();
		}

		int32 pointIndex = FMath::RandRange(0, NotUsedGeneratedPoints.Num() - 1);
		returnValue = NotUsedGeneratedPoints[pointIndex];
		NotUsedGeneratedPoints.RemoveAt(pointIndex);
	}

	return returnValue;
}
