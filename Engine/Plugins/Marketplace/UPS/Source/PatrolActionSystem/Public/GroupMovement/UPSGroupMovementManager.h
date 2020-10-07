// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UPSGroupMovementManager.generated.h"

class ACharacter;
class AUPSMovementGroup;


/*
Allow get movement group from leader or get all movement groups on level
*/

UCLASS()
class PATROLACTIONSYSTEM_API UUPSGroupMovementManager : public UObject
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure, Category = "UPSGroupMovement")
	static UUPSGroupMovementManager* GetGroupMovementManager() { return UUPSGroupMovementManager::StaticClass()->GetDefaultObject<UUPSGroupMovementManager>();}

	UFUNCTION(BlueprintPure, Category = "UPSGroupMovement")
	AUPSMovementGroup* GetMovementGroup(ACharacter* MovementGroupLeaderCharacter);
	
	UFUNCTION(BlueprintPure, Category = "UPSGroupMovement")
	ACharacter* GetMovementGroupLeaderFromMember(ACharacter* GroupMember);

	void RegisterMovementGroup(AUPSMovementGroup* GroupToRegister);
	void UnregisterMovementGroup(AUPSMovementGroup* GroupToUnregister);
	
	UFUNCTION(BlueprintPure, Category = "UPSGroupMovement")
	TArray<AUPSMovementGroup*> GetMovementGroups();

protected:

	TSet<TWeakObjectPtr<AUPSMovementGroup>> MovementGroups;
};
