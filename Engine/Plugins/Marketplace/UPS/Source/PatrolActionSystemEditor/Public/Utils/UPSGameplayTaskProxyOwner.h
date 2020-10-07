// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTaskOwnerInterface.h"
#include "UPSGameplayTaskProxyOwner.generated.h"

class UGameplayTasksComponent;

//Class created in UPSPatrolBuilder that we can create GameplayTask in editor
UCLASS(meta = (notplaceable))
class PATROLACTIONSYSTEMEDITOR_API AUPSGameplayTaskProxyOwner : public AActor, public IGameplayTaskOwnerInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUPSGameplayTaskProxyOwner();

	/*IGameplayTaskOwnerInterface Begin*/
	virtual UGameplayTasksComponent* GetGameplayTasksComponent(const UGameplayTask& Task) const override { return GetGameplayTasksComponent(); }
	virtual AActor* GetGameplayTaskOwner(const UGameplayTask* Task) const override;
	virtual AActor* GetGameplayTaskAvatar(const UGameplayTask* Task) const override;
	virtual uint8 GetGameplayTaskDefaultPriority() const { return FGameplayTasks::DefaultPriority - 1; }

	FORCEINLINE UGameplayTasksComponent* GetGameplayTasksComponent() const { return GameplayTaskComponent; }

	// add empty overrides to fix linker errors if project implements a child class without adding GameplayTasks module dependency
	virtual void OnGameplayTaskInitialized(UGameplayTask& Task) override {}
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) override {}
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) override {}
	/*IGameplayTaskOwnerInterface End*/

private:
	UPROPERTY()
	UGameplayTasksComponent* GameplayTaskComponent;


};
