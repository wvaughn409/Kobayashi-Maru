// Copyright 2020 DmVergasov All Rights Reserved.

#include "Components/UPSPreviewSkeletalMeshComponent.h"

UUPSPreviewSkeletalMeshComponent::UUPSPreviewSkeletalMeshComponent()
{

}
void UUPSPreviewSkeletalMeshComponent::SetPreviewAnim(UAnimationAsset* Anim, float InitTime /*= 0.f*/)
{
	SetUpdateAnimationInEditor(true);
	OverrideAnimationData(Anim, false, false, InitTime, 0.f);
}
