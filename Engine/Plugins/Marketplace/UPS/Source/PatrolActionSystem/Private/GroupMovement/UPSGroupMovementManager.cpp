// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/UPSGroupMovementManager.h"
#include "GameFramework/Character.h"
#include "GroupMovement/UPSMovementGroup.h"

AUPSMovementGroup* UUPSGroupMovementManager::GetMovementGroup(ACharacter* MovementGroupLeaderCharacter)
{
	AUPSMovementGroup* returnGroup = nullptr;

	for (auto group : MovementGroups)
	{
		if (group.IsValid())
		{
			if (group->GetGroupLeader() == MovementGroupLeaderCharacter)
			{
				returnGroup = group.Get();
				break;
			}
		}
	}

	return returnGroup;
}

ACharacter* UUPSGroupMovementManager::GetMovementGroupLeaderFromMember(ACharacter* GroupMember)
{
	ACharacter* returnCharacter = nullptr;

	for (auto group : MovementGroups)
	{
		if (group.IsValid())
		{
			for (auto member : group->GetGroupMembers())
			{
				if (member.Key != nullptr)
				{
					if (member.Key == GroupMember)
					{
						returnCharacter = group->GetGroupLeader();
						break;
					}
				}
			}

			if (returnCharacter != nullptr)
			{
				break;
			}
		}
	}

	return returnCharacter;
}

void UUPSGroupMovementManager::RegisterMovementGroup(AUPSMovementGroup* GroupToRegister)
{
	MovementGroups.Add(GroupToRegister);
}

void UUPSGroupMovementManager::UnregisterMovementGroup(AUPSMovementGroup* GroupToUnregister)
{
	MovementGroups.Remove(GroupToUnregister);
}

TArray<AUPSMovementGroup*> UUPSGroupMovementManager::GetMovementGroups()
{
	TArray<AUPSMovementGroup*> returnArray;

	for (auto group : MovementGroups)
	{
		if (group.IsValid())
		{
			returnArray.Add(group.Get());
		}
	}

	return returnArray;
}
