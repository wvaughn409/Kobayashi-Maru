// Copyright 2020 DmVergasov All Rights Reserved.

#include "GroupMovement/UPSGroupMemberMovementPoint.h"
#include "Components/BillboardComponent.h"
#include "Engine/Texture2D.h"
#include "UObject/ConstructorHelpers.h"

AUPSGroupMemberMovementPoint::AUPSGroupMemberMovementPoint()
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
				: TextureObject(TEXT("/UPS/Icons/MovementPoint"))
			{
			}
		};
		static FConstructorStatics ConstructorStatics;

		BillboardComponent->Sprite = ConstructorStatics.TextureObject.Get();
	}

	BillboardComponent->SetHiddenInGame(true);
}

UBillboardComponent* AUPSGroupMemberMovementPoint::GetBillboardComponent() const
{
	return BillboardComponent;
}

