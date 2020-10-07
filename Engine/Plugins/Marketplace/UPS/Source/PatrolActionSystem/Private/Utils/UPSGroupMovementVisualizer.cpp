// Copyright 2020 DmVergasov All Rights Reserved.

#include "Utils/UPSGroupMovementVisualizer.h"
#include "Debug/DebugDrawService.h"
#include "DrawDebugHelpers.h"

#if WITH_EDITOR
#include "Editor/EditorEngine.h"
#include "Editor.h"
#include "LevelEditorViewport.h"
#endif
#include "Engine/Selection.h"
#include "EngineUtils.h"
#include "GroupMovement/UPSMovementGroup.h"
#include "GameFramework/Character.h"
#include "GroupMovement/GroupMovementTypes.h"
#include "Utils/UPSMovementGroupsSettings.h"

UUPSGroupMovementVisualizer::UUPSGroupMovementVisualizer()
{
#if WITH_EDITOR
	FEditorDelegates::PreBeginPIE.AddUObject(this, &UUPSGroupMovementVisualizer::OnPreBeginPIE);
	FEditorDelegates::EndPIE.AddUObject(this, &UUPSGroupMovementVisualizer::OnEndPIE);
#endif
}

bool UUPSGroupMovementVisualizer::IsTickableInEditor() const
{
	return true;
}

void UUPSGroupMovementVisualizer::Tick(float DeltaTime)
{
#if WITH_EDITOR
	if (bIsPIE)
	{
		return;
	}

	if (!GCurrentLevelEditingViewportClient || GCurrentLevelEditingViewportClient->IsInGameView())
	{
		return;
	}

	if (GetWorld())
	{
		GroupMovementEditorSelectionCheck();
		DrawLines();
	}
#endif
}

TStatId UUPSGroupMovementVisualizer::GetStatId() const
{
	return TStatId();
}

#if WITH_ENGINE
class UWorld* UUPSGroupMovementVisualizer::GetWorld() const
{
	UWorld* returnWorld = nullptr;

	if (GEngine)
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


void UUPSGroupMovementVisualizer::RegisterMovementGroup(AUPSMovementGroup* NewGroup)
{
	MovementGroups.Add(NewGroup, false);
}

void UUPSGroupMovementVisualizer::UnregisterMovementGroup(AUPSMovementGroup* GroupToUnregister)
{
	MovementGroups.Remove(GroupToUnregister);
}

void UUPSGroupMovementVisualizer::DrawLines()
{
	for (auto groupIter : MovementGroups)
	{
		if (groupIter.Key.IsValid())
		{
			if (groupIter.Value == true)
			{
				auto movementGroup = groupIter.Key;

				if (movementGroup->GetGroupLeader() != nullptr)
				{
					FVector movementGroupLocation = movementGroup->GetActorLocation();
					movementGroupLocation.Z += 50.f;
					DrawLine(movementGroupLocation, movementGroup->GetGroupLeader()->GetActorLocation(), UUPSMovementGroupsSettings::Get()->LineBetweenGroupLeaderAndGroupActorColor, UUPSMovementGroupsSettings::Get()->LineBetweenGroupLeaderAndGroupActorThickness);

					for (auto& groupMember : movementGroup->GetGroupMembers())
					{
						if (groupMember.Key != nullptr)
						{
							DrawLine(groupMember.Key->GetActorLocation(), movementGroup->GetGroupLeader()->GetActorLocation(), UUPSMovementGroupsSettings::Get()->LineBetweenGroupMemberAndLeaderColor, UUPSMovementGroupsSettings::Get()->LineBetweenGroupMemberAndLeaderThickness);
						}
					}
				}
			}
		}
	}
}

void UUPSGroupMovementVisualizer::GroupMovementEditorSelectionCheck()
{
#if WITH_EDITOR
	for (auto movementGroup : MovementGroups)
	{
		if (movementGroup.Key.IsValid())
		{
			bool bSelected = false;

			for (auto selectedActorIterator = GEditor->GetSelectedActorIterator(); selectedActorIterator; ++selectedActorIterator)
			{
				AActor* selectedActor = Cast<AActor>(*selectedActorIterator);

				if (movementGroup.Key == selectedActor)
				{
					bSelected = true;
					break;
				}

				if (selectedActor == movementGroup.Key->GetGroupLeader())
				{
					bSelected = true;
					break;
				}

				for (auto& groupMember : movementGroup.Key->GetGroupMembers())
				{
					if (groupMember.Key == selectedActor)
					{
						bSelected = true;
						break;
					}
				}
			}

			MovementGroups[movementGroup.Key] = bSelected;
		}
	}
#endif
}

void UUPSGroupMovementVisualizer::OnPreBeginPIE(const bool bIsSimulating)
{
	bIsPIE = true;
}

void UUPSGroupMovementVisualizer::OnEndPIE(const bool bIsSimulating)
{
	bIsPIE = false;
}

void UUPSGroupMovementVisualizer::DrawLine(FVector LineStart, FVector LineEnd, FColor LineColor /*= FColor::White*/, float Thickness /*= 2.f*/)
{
	::DrawDebugLine(GetWorld(), LineStart, LineEnd, LineColor, false, 0.f, 1, Thickness);
}
