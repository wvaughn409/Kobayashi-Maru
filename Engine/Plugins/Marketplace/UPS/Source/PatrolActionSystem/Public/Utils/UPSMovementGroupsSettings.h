// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "UPSMovementGroupsSettings.generated.h"

/**
 * 
 */
UCLASS(Config = UPSMovementGroupsSettings)
class PATROLACTIONSYSTEM_API UUPSMovementGroupsSettings : public UDeveloperSettings
{
	GENERATED_BODY()
	
public:
	static UUPSMovementGroupsSettings* Get() {return UUPSMovementGroupsSettings::StaticClass()->GetDefaultObject<UUPSMovementGroupsSettings>();}

	virtual FName GetCategoryName() const override;

public:
	UPROPERTY(Config, EditAnywhere, Category = "Visualization")
	FColor LineBetweenGroupLeaderAndGroupActorColor = FColor::Blue;

	UPROPERTY(Config, EditAnywhere, Category = "Visualization")
	FColor LineBetweenGroupMemberAndLeaderColor = FColor::Cyan;

	UPROPERTY(Config, EditAnywhere, Category = "Visualization", meta = (ClampMin = 0.f, UIMin = 0.f))
	float LineBetweenGroupLeaderAndGroupActorThickness = 2.f;

	UPROPERTY(Config, EditAnywhere, Category = "Visualization", meta = (ClampMin = 0.f, UIMin = 0.f))
	float LineBetweenGroupMemberAndLeaderThickness = 2.f;

	UPROPERTY(Config, EditAnywhere, Category = "BT Settings")
	FName GroupMovementPointBBName = "GroupMovementPoint";

};
