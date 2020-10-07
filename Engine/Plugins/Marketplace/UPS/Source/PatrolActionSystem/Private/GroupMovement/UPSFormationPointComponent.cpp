// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/UPSFormationPointComponent.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/Texture2D.h"
#include "GameFramework/Character.h"

UUPSFormationPointComponent::UUPSFormationPointComponent()
{
	PrimaryComponentTick.bCanEverTick = false;

	struct FConstructorStatics
	{
		ConstructorHelpers::FObjectFinderOptional<UTexture2D> TextureObject;
		FConstructorStatics()
			: TextureObject(TEXT("/Engine/EditorResources/S_Trigger"))
		{
		}
	};
	static FConstructorStatics ConstructorStatics;

	Sprite = ConstructorStatics.TextureObject.Get();
}

void UUPSFormationPointComponent::SetCharacterOnPoint(ACharacter* Character)
{
	if (CharacterOnPoint != Character)
	{
		CharacterOnPoint = Character;
	}
}

void UUPSFormationPointComponent::RemoveCharacterFromPoint()
{
	CharacterOnPoint = nullptr;
}

ACharacter* UUPSFormationPointComponent::GetCharacterOnPoint() const
{
	return CharacterOnPoint;
}
