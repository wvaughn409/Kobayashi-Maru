// Copyright 2020 DmVergasov All Rights Reserved.

#include "EnemyPointActions/UPSEnemyPointActionComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/ArrowComponent.h"
#include "Utils/UPSSettings.h"
#include "Materials/MaterialInterface.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "PatrolActionSystem.h"
#include "BlueprintNodeHelpers.h"

UUPSEnemyPointActionComponent::UUPSEnemyPointActionComponent()
{
	UClass* stopAtClass = UUPSEnemyPointActionComponent::StaticClass();
	bK2CanUsePointImplemented = BlueprintNodeHelpers::HasBlueprintFunction(GET_FUNCTION_NAME_CHECKED(UUPSEnemyPointActionComponent, K2_CanUsePointComponent), *this, *stopAtClass);
}

void UUPSEnemyPointActionComponent::OnRegister()
{
	Super::OnRegister();

	if (HasAllFlags(RF_ClassDefaultObject))
	{
		return;
	}
	
	BillboardComponent = CreateComponent<UBillboardComponent>(FTransform(FRotator::ZeroRotator, FVector::ZeroVector, FVector(BillboardSize, BillboardSize, BillboardSize)));
	BillboardComponent->SetSprite(bOverrideProjectSettingsSprite ? OverrideEnemyActionPointComponentBillboardSprite : UUPSSettings::Get()->EnemyActionPointComponentBillboardSprite.LoadSynchronous());
	
	ArrowComponent = CreateComponent<UArrowComponent>(FTransform(FRotator::ZeroRotator, FVector(0.f, 0.f, ArrowOffset), FVector::OneVector));
	ArrowComponent->ArrowSize = ArrowSize;

	SkeletalMeshComponent = CreateComponent<USkeletalMeshComponent>(FTransform(MeshRotationOffset, FVector::ZeroVector, FVector::OneVector));
	SkeletalMeshComponent->SetSkeletalMesh(bOverrideProjectSettingsMesh ? OverrideEnemyActionPointComponentMesh : UUPSSettings::Get()->EnemyActionPointComponentMesh.LoadSynchronous());

	if (SkeletalMeshComponent->SkeletalMesh != nullptr)
	{
		for (int32 materialIndex = 0; materialIndex < SkeletalMeshComponent->GetMaterials().Num(); ++materialIndex)
		{
			SkeletalMeshComponent->SetMaterial(materialIndex, bOverrideProjectSettingsMaterial ? OverrideEnemyActionPointComponentMeshMaterial : UUPSSettings::Get()->EnemyActionPointComponentMeshMaterial.LoadSynchronous());
		}
	}

	SetPreviewAnim(PreviewAnim, PreviewAnimStartTime);
}

void UUPSEnemyPointActionComponent::OnUnregister()
{
	Super::OnUnregister();

	if (HasAllFlags(RF_ClassDefaultObject))
	{
		return;
	}

	RemoveComponent(BillboardComponent);
	RemoveComponent(ArrowComponent);
	RemoveComponent(SkeletalMeshComponent);
}

void UUPSEnemyPointActionComponent::SetPreviewAnim(UAnimationAsset* Anim, float InitTime /*= 0.f*/)
{
	if (SkeletalMeshComponent.IsValid() && SkeletalMeshComponent.Get() != nullptr)
	{
		SkeletalMeshComponent->SetUpdateAnimationInEditor(true);
		SkeletalMeshComponent->OverrideAnimationData(Anim, false, false, InitTime, 0.f);
	}
}

ACharacter* UUPSEnemyPointActionComponent::GetCharacterOnPoint() const
{
	return CharacterOnPoint;
}

void UUPSEnemyPointActionComponent::SetCharacterOnPoint(ACharacter* Character)
{
	CharacterOnPoint = Character;
}

USkeletalMeshComponent* UUPSEnemyPointActionComponent::GetSkeletalMeshComponent() const
{
	if (SkeletalMeshComponent.IsValid())
	{
		return SkeletalMeshComponent.Get();
	}

	return nullptr;
}

bool UUPSEnemyPointActionComponent::CanUsePointComponent(ACharacter* Character) const
{
	return CharacterOnPoint == nullptr && (!bK2CanUsePointImplemented || K2_CanUsePointComponent(Character));
}

void UUPSEnemyPointActionComponent::RemoveComponent(TStrongObjectPtr <USceneComponent> Component)
{
	if (!Component.IsValid() || Component.Get() == nullptr)
	{
		return;
	}

	Component->MarkPendingKill();
	Component->DestroyComponent();
	Component.Reset();
}
