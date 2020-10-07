// Copyright 2020 DmVergasov All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "UPSPreviewSkeletalMeshComponent.generated.h"

class UAnimationAsset;

/*
Has SetPreviewAnim function with update in editor
*/

UCLASS(editinlinenew, meta = (BlueprintSpawnableComponent))
class PATROLACTIONSYSTEM_API UUPSPreviewSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:
	UUPSPreviewSkeletalMeshComponent();

	UFUNCTION(BlueprintCallable, Category = "UPSPatrolSystem")
	void SetPreviewAnim(UAnimationAsset* Anim, float InitTime = 0.f);
};
