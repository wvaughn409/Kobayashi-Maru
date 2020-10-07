// Copyright 2020 DmVergasov All Rights Reserved.

#include "Actors/UPSPatrolPoint.h"
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"
#include "UObject/ConstructorHelpers.h"
#include "Components/ArrowComponent.h"
#include "PatrolPointSolver/UPSPatrolPointSolver.h"
#include "PatrolPointSolver/UPSPatrolPointSolver_RandomPoint.h"


#if WITH_EDITOR
#include "Editor.h"
#endif
#include "Components/UPSPatrolComponent.h"
#include "GameFramework/Character.h"
#include "Utils/UPSPatrolVisualizer.h"
#include "EnemyActions/UPSEnemyActionsPreset.h"
#include "PatrolPointScripts/UPSPatrolPointScript.h"
#include "EnemyActions/UPSEnemyAction.h"






// Sets default values
AUPSPatrolPoint::AUPSPatrolPoint()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));

	if (BillboardComponent != nullptr)
	{
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> TextureObject;
			FConstructorStatics()
				: TextureObject(TEXT("/UPS/Icons/pin"))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		BillboardComponent->Sprite = ConstructorStatics.TextureObject.Get();
		BillboardComponent->SetWorldScale3D(FVector(0.4f, 0.4f, 0.4f));
	}

	RootComponent = BillboardComponent;

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("ArrowComponent"));
	ArrowComponent->SetupAttachment(RootComponent);
	ArrowComponent->SetVisibility(false);
	ArrowComponent->ArrowSize = 6.f;
	ArrowComponent->ArrowColor = FColor::Green;

	PatrolPointSettings.NextPatrolPointSolver = CreateDefaultSubobject<UUPSPatrolPointSolver_RandomPoint>(TEXT("NextPatrolPointSolver"));

	PatrolPointLinks.Add(FPatrolPointLink());
}

void AUPSPatrolPoint::Destroyed()
{
	for (auto link : PatrolPointLinks)
	{
		if (link.IsValid())
		{
			link.PatrolPoint->RemoveBackwardLink(this);
		}
	}

#if WITH_EDITOR
	if (UUPSPatrolVisualizer::Get())
	{
		UUPSPatrolVisualizer::Get()->UpdatePathPointsRequest();
		UUPSPatrolVisualizer::Get()->UpdateVisitedPoints();
	}
#endif

	Super::Destroyed();
}

void AUPSPatrolPoint::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	//set arrow pitch and roll in 0 values
	ArrowComponent->SetWorldRotation(FRotator(0.f, ArrowComponent->GetComponentRotation().Yaw, 0.f).Quaternion());
}

void AUPSPatrolPoint::BeginPlay()
{
	Super::BeginPlay();

#if !UE_BUILD_SHIPPING
	EnableVisualization(UUPSPatrolVisualizer::Get()->IsVisualizationEnabled());
#endif
}

void AUPSPatrolPoint::PostDuplicate(bool bDuplicateForPIE)
{
	Super::PostDuplicate(bDuplicateForPIE);

#if WITH_EDITOR
	if (GetWorld() && (GetWorld()->WorldType == EWorldType::Type::Editor || GetWorld()->WorldType == EWorldType::Type::EditorPreview))
	{
		for (auto& link : PatrolPointLinks)
		{
			if (link.IsValid())
			{
				link.PatrolPoint->AddBackwardLink(FPatrolPointLink(this, link.LinkTag));
			}
		}

		bool bNeedEmptyBackwardLinks = true;

		for (auto& backwardLink : BackwardPatrolPointLinks)
		{
			if (backwardLink.IsValid() )
			{
				for (auto& nextLinkFromBackwardLink : backwardLink.PatrolPoint->GetNextPatrolPointLinks())
				{
					if (nextLinkFromBackwardLink.IsValid() && nextLinkFromBackwardLink.PatrolPoint == this)
					{
						bNeedEmptyBackwardLinks = false;
						break;
					}
				}
			}
		}

		if (bNeedEmptyBackwardLinks)
		{
			BackwardPatrolPointLinks.Empty();
		}

		if (UUPSPatrolVisualizer::Get())
		{
			UUPSPatrolVisualizer::Get()->UpdatePathPointsRequest();
		}
	}
#endif
}

#if WITH_EDITOR
void AUPSPatrolPoint::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	// set arrow visibility if need rotate point after reach point (bRotateOnPointAfterReach)
	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(FPatrolPointSettings, bRotateOnPointAfterReach))
	{
		ArrowComponent->SetVisibility(PatrolPointSettings.bRotateOnPointAfterReach);
	}
}

void AUPSPatrolPoint::PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent)
{
	Super::PostEditChangeChainProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(FPatrolPointLink, PatrolPoint) ||
		PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(AUPSPatrolPoint, PatrolPointLinks) ||
		PropertyChangedEvent.MemberProperty->GetFName() == GET_MEMBER_NAME_CHECKED(FPatrolPointLink, LinkTag))
	{
		RefreshLinks();
	}
}

#endif


FPatrolPointSettings& AUPSPatrolPoint::GetPatrolPointSettings()
{
	return PatrolPointSettings;
}

void AUPSPatrolPoint::UpdatePatrolPointSettings(FPatrolPointSettings& NewSettings)
{
	PatrolPointSettings = NewSettings;
	PatrolPointSettings.EnemyActionsPreset = CopyObject<UUPSEnemyActionsPreset>(NewSettings.EnemyActionsPreset);
	PatrolPointSettings.NextPatrolPointSolver = CopyObject<UUPSPatrolPointSolver>(NewSettings.NextPatrolPointSolver);
	
	PatrolPointSettings.PatrolPointScripts.Reset();

	for (auto& script : NewSettings.PatrolPointScripts)
	{
		PatrolPointSettings.PatrolPointScripts.Add(FPatrolPointScript(CopyObject<UUPSPatrolPointScript>(script.PatrolPointScript)));
	}

	PatrolPointSettings.PatrolPointActions.Reset();

	for (auto& action : NewSettings.PatrolPointActions)
	{
		PatrolPointSettings.PatrolPointActions.Add(FEnemyActionSelector(action.bUseInstancedEnemyActions, CopyObject<UUPSEnemyAction>(action.InstancedEnemyAction), CopyObject<UUPSEnemyAction>(action.DAEnemyAction)));
	}
}

UBillboardComponent* AUPSPatrolPoint::GetBillboardComponent() const
{
	return BillboardComponent;
}

TArray<FPatrolPointLink>& AUPSPatrolPoint::GetNextPatrolPointLinks()
{
	return PatrolPointLinks;
}

TArray<FPatrolPointLink>& AUPSPatrolPoint::GetBackwardPatrolPointLinks()
{
	return BackwardPatrolPointLinks;
}

void AUPSPatrolPoint::AddNextLink(FPatrolPointLink Link)
{
	bool bCanAdd = true;

	for (auto& link : PatrolPointLinks)
	{
		if (Link == link)
		{
			bCanAdd = false;
			break;
		}
	}

	if (bCanAdd)
	{
		PatrolPointLinks.Add(Link);
	}

	RefreshLinks();
}

void AUPSPatrolPoint::AddBackwardLink(FPatrolPointLink Link)
{
	bool bCanAdd = true;

	for (auto& link : BackwardPatrolPointLinks)
	{
		if (Link == link)
		{
			bCanAdd = false;
			break;
		}
	}

	if (bCanAdd)
	{
		BackwardPatrolPointLinks.Add(Link);
	}
}

void AUPSPatrolPoint::RemoveBackwardLink(AUPSPatrolPoint* Point)
{
	for (int32 index = 0; index < BackwardPatrolPointLinks.Num();)
	{
		if (BackwardPatrolPointLinks[index].PatrolPoint == Point)
		{
			BackwardPatrolPointLinks.RemoveAt(index);
			break;
		}
		else
		{
			index++;
		}
	}
}

AUPSPatrolPoint* AUPSPatrolPoint::GetNextPatrolPoint(ACharacter* Character)
{
	if (auto patrolComponent = Cast<UUPSPatrolComponent>(Character->GetComponentByClass(UUPSPatrolComponent::StaticClass())))
	{
		if (PatrolPointSettings.NextPatrolPointSolver != nullptr)
		{
			TArray<FPatrolPointLink>& patrolPointLinks = patrolComponent->PatrolMovementDirection == EPatrolMovementType::Clockwise ? PatrolPointLinks : BackwardPatrolPointLinks;
			return PatrolPointSettings.NextPatrolPointSolver->SelectPatrolPoint(patrolPointLinks, this, Character);
		}
	}
	
	for (auto& link : PatrolPointLinks)
	{
		if (link.IsValid())
		{
			return link.PatrolPoint;
		}
	}

	return nullptr;
}

void AUPSPatrolPoint::EnableVisualization(bool bEnable)
{
	GetBillboardComponent()->SetHiddenInGame(!bEnable);
}

void AUPSPatrolPoint::RefreshLinks()
{
	for (auto& cachedLink : CachedPatrolPointLinks)
	{
		if (cachedLink.IsValid())
		{
			cachedLink.PatrolPoint->RemoveBackwardLink(this);
		}
	}

	for (auto& link : PatrolPointLinks)
	{
		if (link.IsValid())
		{
			link.PatrolPoint->AddBackwardLink(FPatrolPointLink(this, link.LinkTag));
		}
	}

	CachedPatrolPointLinks = PatrolPointLinks;

	if (UUPSPatrolVisualizer::Get())
	{
		UUPSPatrolVisualizer::Get()->UpdatePathPointsRequest();
		UUPSPatrolVisualizer::Get()->UpdateVisitedPoints();
	}
}
