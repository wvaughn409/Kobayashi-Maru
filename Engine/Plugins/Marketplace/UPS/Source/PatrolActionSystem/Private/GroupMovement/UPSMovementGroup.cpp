// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/UPSMovementGroup.h"
#include "GameFramework/Character.h"
#include "Components/SceneComponent.h"
#include "Components/BillboardComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Texture2D.h"
#include "AI/UPSGroupMovementAIController.h"
#include "GroupMovement/UPSGroupMemberMovementPoint.h"
#include "Engine/World.h"
#include "GroupMovement/GroupMovementTypes.h"
#include "GroupMovement/UPSGroupMovementFormation.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Utils/UPSGroupMovementVisualizer.h"
#include "Kismet/KismetMathLibrary.h"
#include "Utils/UPSMovementGroupsSettings.h"
#include "GroupMovement/UPSGroupMovementManager.h"
#include "TimerManager.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "PatrolActionSystem.h"


AUPSMovementGroup::AUPSMovementGroup()
{
	PrimaryActorTick.bCanEverTick = false;

	BillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("BillboardComponent"));
	RootComponent = BillboardComponent;

	if (BillboardComponent != nullptr)
	{
		struct FConstructorStatics
		{
			ConstructorHelpers::FObjectFinderOptional<UTexture2D> TextureObject;
			FConstructorStatics()
				: TextureObject(TEXT("/UPS/Icons/MovementGroup"))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		BillboardComponent->Sprite = ConstructorStatics.TextureObject.Get();
	}
}

void AUPSMovementGroup::BeginPlay()
{
	Super::BeginPlay();
	
	if (HasAuthority() && GroupLeader != nullptr && Formation != nullptr)
	{
		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		spawnParams.Owner = this;

		SpawnedFormation = GetWorld()->SpawnActor<AUPSGroupMovementFormation>(Formation, FTransform::Identity, spawnParams);
		SpawnedFormation->InitFormation(GroupLeader);

		InitializeGroupMembers();
		InitializeGroupLeader();
	}
}

void AUPSMovementGroup::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AUPSMovementGroup::PostRegisterAllComponents()
{
	Super::PostRegisterAllComponents();
	
	if (UUPSGroupMovementVisualizer::Get())
	{
		UUPSGroupMovementVisualizer::Get()->RegisterMovementGroup(this);
	}

	if (UUPSGroupMovementManager::GetGroupMovementManager())
	{
		UUPSGroupMovementManager::GetGroupMovementManager()->RegisterMovementGroup(this);
	}
}

void AUPSMovementGroup::PostUnregisterAllComponents()
{
	Super::PostUnregisterAllComponents();

	if (UUPSGroupMovementVisualizer::Get())
	{
		UUPSGroupMovementVisualizer::Get()->UnregisterMovementGroup(this);
	}

	if (UUPSGroupMovementManager::GetGroupMovementManager())
	{
		UUPSGroupMovementManager::GetGroupMovementManager()->UnregisterMovementGroup(this);
	}
}

#if WITH_EDITOR
void AUPSMovementGroup::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AUPSMovementGroup, GroupLeader))
	{
		if (MovementGroupMembers.Contains(GroupLeader))
		{
			MovementGroupMembers.Remove(GroupLeader);
		}
	}

	if (PropertyChangedEvent.GetPropertyName() == GET_MEMBER_NAME_CHECKED(AUPSMovementGroup, MovementGroupMembers))
	{
		if (MovementGroupMembers.Contains(GroupLeader))
		{
			GroupLeader = nullptr;
		}
	}
}
#endif

void AUPSMovementGroup::SetGroupLeader(ACharacter* NewLeader)
{
	if (NewLeader != GroupLeader && HasAuthority())
	{
		if (GroupLeader != nullptr)
		{
			if (GroupMovementLeaderAIC != nullptr)
			{
				GroupMovementLeaderAIC->OnAIStartMovementToActorDelegate.RemoveAll(this);
				GroupMovementLeaderAIC->OnAIStartMovementToLocationDelegate.RemoveAll(this);
				GroupMovementLeaderAIC->ReceiveMoveCompleted.RemoveAll(this);
			}

			GroupLeader->OnDestroyed.RemoveAll(this);
		}

		GroupLeader = NewLeader;

		if (NewLeader != nullptr && MovementGroupMembers.Contains(NewLeader))
		{
			RemoveGroupMember(NewLeader);
		}

		InitializeGroupLeader();
	}
}

void AUPSMovementGroup::AddGroupMember(ACharacter* NewMember)
{
	if (!MovementGroupMembers.Contains(NewMember))
	{
		MovementGroupMembers.Add(NewMember, FMovementGroupMemberInfo());

		FActorSpawnParameters spawnParams;
		spawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		spawnParams.Owner = NewMember;
		
		auto groupMovementPoint = GetWorld()->SpawnActor<AUPSGroupMemberMovementPoint>(AUPSGroupMemberMovementPoint::StaticClass(), FTransform::Identity, spawnParams);

		groupMovementPoint->SetActorLocation(NewMember->GetActorLocation());

		MovementGroupMembers[NewMember].GroupMemberMovementPointActor = groupMovementPoint;
		
		auto aic = Cast<AAIController>(NewMember->GetController());

		if (aic != nullptr && aic->GetBlackboardComponent())
		{
			aic->GetBlackboardComponent()->SetValueAsObject(UUPSMovementGroupsSettings::Get()->GroupMovementPointBBName, groupMovementPoint);
		}

		NewMember->OnDestroyed.AddDynamic(this, &AUPSMovementGroup::OnCharacterDestroyed);

		if (SpawnedFormation != nullptr)
		{
			SpawnedFormation->AddCharacterInGroup(NewMember);
			UpdateLocationInFormationForCharacter(NewMember);
		}
		
	}
}

void AUPSMovementGroup::RemoveGroupMember(ACharacter* MemberToRemove)
{
	if (MovementGroupMembers.Contains(MemberToRemove))
	{
		if (SpawnedFormation != nullptr)
		{
			SpawnedFormation->RemoveCharacterFromGroup(MemberToRemove);
		}

		auto aic = Cast<AAIController>(MemberToRemove->GetController());

		if (aic != nullptr && aic->GetBlackboardComponent())
		{
			aic->GetBlackboardComponent()->SetValueAsObject(UUPSMovementGroupsSettings::Get()->GroupMovementPointBBName, nullptr);
		}

		MemberToRemove->OnDestroyed.RemoveAll(this);

		if (MovementGroupMembers[MemberToRemove].GroupMemberMovementPointActor != nullptr)
		{
			MovementGroupMembers[MemberToRemove].GroupMemberMovementPointActor->Destroy();
		}

		MovementGroupMembers.Remove(MemberToRemove);
	}
}

ACharacter* AUPSMovementGroup::GetGroupLeader() const
{
	return GroupLeader;
}

TMap<ACharacter*, FMovementGroupMemberInfo>& AUPSMovementGroup::GetGroupMembers()
{
	return MovementGroupMembers;
}

void AUPSMovementGroup::UpdateLocationInFormationForCharacter(ACharacter* Character)
{
	if (SpawnedFormation != nullptr)
	{
		MovementGroupMembers[Character].GroupMemberLocation = SpawnedFormation->GetLocationInFormationForCharacter(Character);
	}
}

void AUPSMovementGroup::InitializeGroupMembers()
{
	auto cachedMembers = MovementGroupMembers;

	for (auto& groupMember : cachedMembers)
	{
		RemoveGroupMember(groupMember.Key);
	}

	MovementGroupMembers.Empty();

	for (auto& groupMember : cachedMembers)
	{
		AddGroupMember(groupMember.Key);
	}
}

void AUPSMovementGroup::InitializeGroupLeader()
{
	if (GroupLeader != nullptr)
	{
		GroupMovementLeaderAIC = Cast<AUPSGroupMovementAIController>(GroupLeader->GetController());

		if (GroupMovementLeaderAIC != nullptr)
		{
			GroupMovementLeaderAIC->OnAIStartMovementToLocationDelegate.AddDynamic(this, &AUPSMovementGroup::OnLeaderStartMovementToLocation);
			GroupMovementLeaderAIC->OnAIStartMovementToActorDelegate.AddDynamic(this, &AUPSMovementGroup::OnLeaderStartMovementToActor);
			GroupMovementLeaderAIC->ReceiveMoveCompleted.AddDynamic(this, &AUPSMovementGroup::OnLeaderCompleteMovement);
		}
		else
		{
			UE_LOG(UPSGroupMovementLog, Warning, TEXT("Group movement leader %s should have AUPSGroupMovementAIController"), *GroupLeader->GetFName().ToString());
		}

		GroupLeader->OnDestroyed.AddDynamic(this, &AUPSMovementGroup::OnCharacterDestroyed);

		OriginLeaderTransform = GroupLeader->GetActorTransform();
	}
}

FTransform AUPSMovementGroup::GetLeaderMovementPointTransform(FVector InLocation)
{
	FTransform transform = FTransform::Identity;
	transform.SetLocation(InLocation);
	transform.SetRotation(bRotateMovementPointsAroundLeader ? UKismetMathLibrary::FindLookAtRotation(GroupLeader->GetActorLocation(), InLocation).Quaternion() : OriginLeaderTransform.GetRotation());
	return transform;
}

void AUPSMovementGroup::OnLeaderStartMovementToLocation(FVector NewLocation)
{
	ClearDelayedMovement();

	InternalOnLeaderStartMovementToLocation(NewLocation);
}

void AUPSMovementGroup::InternalOnLeaderStartMovementToLocation(FVector NewLocation)
{
	for (auto memberIter : MovementGroupMembers)
	{
		FTimerHandle newHandle;
		float delayedMovementTime = FMath::Abs(MembersMovementReactionTime + FMath::RandRange(MembersMovementReactionTimeRandomDiviation * -1, MembersMovementReactionTimeRandomDiviation));

		if (!FMath::IsNearlyZero(delayedMovementTime))
		{
			GetWorld()->GetTimerManager().SetTimer(newHandle, FTimerDelegate::CreateUObject(this, &AUPSMovementGroup::ExecuteDelayedMovement, TWeakObjectPtr<ACharacter>(memberIter.Key)), delayedMovementTime, false);
			DelayedMovement.Add(memberIter.Key, FDelayedGroupMovement(NewLocation, newHandle));
		}
		else
		{
			DelayedMovement.Add(memberIter.Key, FDelayedGroupMovement(NewLocation, newHandle));
			ExecuteDelayedMovement(TWeakObjectPtr<ACharacter>(memberIter.Key));
		}
	}

	if (SpawnedFormation != nullptr)
	{
		SpawnedFormation->OnLeaderStartMovementToNewLocation(NewLocation);
	}

	K2_OnLeaderStartMovementToLocation(NewLocation);
}

void AUPSMovementGroup::OnLeaderStartMovementToActor(AActor* NewActor)
{
	ClearDelayedMovement();

	InternalOnLeaderStartMovementToActor(NewActor);
}

void AUPSMovementGroup::InternalOnLeaderStartMovementToActor(AActor* NewActor)
{
	for (auto memberIter : MovementGroupMembers)
	{
		FTimerHandle newHandle;
		float delayedMovementTime = FMath::Abs(MembersMovementReactionTime + FMath::RandRange(MembersMovementReactionTimeRandomDiviation * -1, MembersMovementReactionTimeRandomDiviation));

		if (!FMath::IsNearlyZero(delayedMovementTime))
		{
			GetWorld()->GetTimerManager().SetTimer(newHandle, FTimerDelegate::CreateUObject(this, &AUPSMovementGroup::ExecuteDelayedMovement, TWeakObjectPtr<ACharacter>(memberIter.Key)), delayedMovementTime, false);
			DelayedMovement.Add(memberIter.Key, FDelayedGroupMovement(NewActor, newHandle));
		}
		else
		{
			DelayedMovement.Add(memberIter.Key, FDelayedGroupMovement(NewActor, newHandle));
			ExecuteDelayedMovement(TWeakObjectPtr<ACharacter>(memberIter.Key));
		}
	}

	if (SpawnedFormation != nullptr)
	{
		SpawnedFormation->OnLeaderStartMovementToNewActor(NewActor);
	}

	K2_OnLeaderStartMovementToActor(NewActor);
}

void AUPSMovementGroup::OnLeaderCompleteMovement(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	switch (Result)
	{
	case EPathFollowingResult::Blocked:
		StopMembersMovement();
		break;
	case EPathFollowingResult::OffPath:
		StopMembersMovement();
		break;
	case EPathFollowingResult::Aborted:
		StopMembersMovement();
		break;
	case EPathFollowingResult::Invalid:
		StopMembersMovement();
		break;
	default:
		break;
	}

	if (SpawnedFormation != nullptr)
	{
		SpawnedFormation->OnLeaderCompleteMovement(Result);
	}
}

void AUPSMovementGroup::ExecuteDelayedMovement(TWeakObjectPtr<ACharacter> ForCharacter)
{
	if (ForCharacter.IsValid() && MovementGroupMembers.Contains(ForCharacter.Get()) && GroupLeader != nullptr)
	{
		if (auto delayedMovement = DelayedMovement.Find(ForCharacter.Get()))
		{
			auto memberInfo = MovementGroupMembers.Find(ForCharacter.Get());

			if (auto moveActor = delayedMovement->MovementTargetActor)
			{
				memberInfo->GroupMemberMovementPointActor->SetActorLocation(GetLeaderMovementPointTransform(moveActor->GetActorLocation()).TransformPosition(memberInfo->GroupMemberLocation));
				memberInfo->GroupMemberMovementPointActor->AttachToActor(moveActor, FAttachmentTransformRules::KeepWorldTransform);
			}
			else
			{
				FVector pointLocation = GetLeaderMovementPointTransform(delayedMovement->MovementTargetLocation).TransformPosition(memberInfo->GroupMemberLocation);
				memberInfo->GroupMemberMovementPointActor->SetActorLocation(pointLocation);
				memberInfo->GroupMemberMovementPointActor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			}

			auto aic = Cast<AAIController>(ForCharacter.Get()->GetController());

			if (aic != nullptr)
			{
				bool bMoveWithAIC = false;

				if (auto bb = aic->GetBlackboardComponent())
				{
					//if dont have GroupMovementPoint key in black board move with simple aic move to
					if (bb->GetValueAsObject(UUPSMovementGroupsSettings::Get()->GroupMovementPointBBName) == nullptr)
					{
						bMoveWithAIC = true;
					}
				}
				else
				{
					bMoveWithAIC = true;
				}

				if (bMoveWithAIC)
				{
					aic->MoveToActor(memberInfo->GroupMemberMovementPointActor, 5.f, false, true, true, aic->GetDefaultNavigationFilterClass(), true);
				}
			}

			DelayedMovement.Remove(ForCharacter.Get());
		}
	}
}

void AUPSMovementGroup::StopMembersMovement()
{
	ClearDelayedMovement();

	for (auto memberIter : MovementGroupMembers)
	{
		memberIter.Value.GroupMemberMovementPointActor->SetActorLocation(memberIter.Key->GetActorLocation());
		memberIter.Key->GetCharacterMovement()->StopMovementImmediately();
	}
}

void AUPSMovementGroup::OnCharacterDestroyed(AActor* DestroyedActor)
{
	if (auto destroyedCharacter = Cast<ACharacter>(DestroyedActor))
	{
		if (destroyedCharacter == GroupLeader)
		{
			SetGroupLeader(nullptr);
		}
		else if (MovementGroupMembers.Contains(destroyedCharacter))
		{
			RemoveGroupMember(destroyedCharacter);
		}

		DelayedMovement.Remove(destroyedCharacter);
	}
}

void AUPSMovementGroup::ClearDelayedMovement()
{
	for (auto iter : DelayedMovement)
	{
		GetWorld()->GetTimerManager().ClearTimer(iter.Value.CachedTimerHandle);
	}

	DelayedMovement.Empty();
}

