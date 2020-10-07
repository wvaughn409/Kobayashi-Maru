// Copyright 2020 DmVergasov All Rights Reserved.

#include "Utils/UPSFunctionLIbrary.h"
#include "Animation/AnimMontage.h"
#if WITH_EDITOR
#include "Editor.h"
#endif
#include "PatrolPointScripts/UPSPatrolPointScript.h"
#include "Logging/TokenizedMessage.h"
#include "GameFramework/Actor.h"
#include "Misc/UObjectToken.h"
#include "Logging/MessageLog.h"
#include "NavigationSystem.h"
#include "AIController.h"
#include "NavMesh/RecastNavMesh.h"
#include "NavFilters/NavigationQueryFilter.h"
#include "Templates/SharedPointer.h"
#include "AI/Navigation/NavQueryFilter.h"
#include "NavigationPath.h"
#include "GameFramework/Character.h"
#include "Animation/AnimInstance.h"
#include "Actors/UPSPatrolPoint.h"
#include "UPSTypes.h"
#include "UObject/Object.h"
#include "EnemyActions/UPSEnemyAction.h"

float UUPSFunctionLIbrary::GetMontageSectionLength(UAnimMontage* Montage, FName SectionName /*= NAME_None*/)
{
	float returnValue = 0.f;

	if (Montage != nullptr && SectionName != NAME_None)
	{
		returnValue = Montage->GetSectionLength(Montage->GetSectionIndex(SectionName));
	}

	return returnValue;
}

float UUPSFunctionLIbrary::GetMontageSectionIndexLength(UAnimMontage* Montage, int32 Index)
{
	float returnValue = 0.f;

	if (Montage != nullptr)
	{
		returnValue = Montage->GetSectionLength(Index);
	}

	return returnValue;
}

UUPSEnemyAction* UUPSFunctionLIbrary::GetEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector)
{
	UUPSEnemyAction* returnAction = nullptr;

	if (EnemyActionSelector.bUseInstancedEnemyActions)
	{
		returnAction = EnemyActionSelector.InstancedEnemyAction;
	}
	else
	{
		returnAction = EnemyActionSelector.DAEnemyAction;
	}

	return returnAction;
}

UUPSEnemyAction* UUPSFunctionLIbrary::GetDynamicEnemyActionFromSelector(FEnemyActionSelector EnemyActionSelector)
{
	UUPSEnemyAction* returnAction = nullptr;

	if (auto internalAction = (EnemyActionSelector.bUseInstancedEnemyActions ? EnemyActionSelector.InstancedEnemyAction : EnemyActionSelector.DAEnemyAction))
	{
		returnAction = DuplicateObject<UUPSEnemyAction>(internalAction, nullptr);
		returnAction->AddToRoot();
	}

	return returnAction;
}

UUPSPatrolPointScript* UUPSFunctionLIbrary::CreatePatrolScriptIntance(FPatrolPointScript Script)
{
	if (Script.PatrolPointScript != nullptr)
	{
		auto newScript = DuplicateObject<UUPSPatrolPointScript>(Script.PatrolPointScript, Script.PatrolPointScript->GetOuter());
		return newScript;
	}

	return nullptr;
}

void UUPSFunctionLIbrary::JumpToMontageSectionByIndex(ACharacter* Character, UAnimMontage* Montage, int32 SectionIndex)
{
	if (Character != nullptr && Montage != nullptr)
	{
		Character->GetMesh()->GetAnimInstance()->Montage_JumpToSection(Montage->GetSectionName(SectionIndex), Montage);
	}
}

AUPSPatrolPoint* UUPSFunctionLIbrary::CreatePatrolPoint(UObject* WorldContext, FVector WorldLocation /*= FVector::ZeroVector*/, FRotator WorldRotation /*= FRotator::ZeroRotator*/, AUPSPatrolPoint* PreviousPoint /*= nullptr*/, FGameplayTag LinkFromPreviousPoint /*= FGameplayTag()*/, TSubclassOf<AUPSPatrolPoint> PointClass/*= nullptr*/)
{
	if (WorldContext != nullptr && WorldContext->GetWorld() != nullptr)
	{
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		if (auto point = WorldContext->GetWorld()->SpawnActor<AUPSPatrolPoint>((PointClass != nullptr ? PointClass.Get() : AUPSPatrolPoint::StaticClass()), WorldLocation, WorldRotation, spawnParams))
		{
			point->GetNextPatrolPointLinks().Empty();
			point->FixLocation();

			if (PreviousPoint != nullptr)
			{
				PreviousPoint->AddNextLink(FPatrolPointLink(point, LinkFromPreviousPoint));
			}

			return point;
		}
	}

	return nullptr;
}

AUPSPatrolPoint* UUPSFunctionLIbrary::K2_CreatePatrolPoint(UObject* WorldContext, FVector WorldLocation, FRotator WorldRotation, AUPSPatrolPoint* PreviousPoint, FGameplayTag LinkTagFromPreviousPoint, TSubclassOf<AUPSPatrolPoint> PointClass)
{
	return UUPSFunctionLIbrary::CreatePatrolPoint(WorldContext, WorldLocation, WorldRotation, PreviousPoint, LinkTagFromPreviousPoint, PointClass);
}