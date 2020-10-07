// Copyright 2019 Chris Garnier. All Rights Reserved.

#pragma once
#include "AssetData.h"
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AssetsCleanerEntryObject.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class ASSETSCLEANER_API UAssetsCleanerEntryObject : public UObject
{
	GENERATED_BODY()
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = "true"), Category = "AssetData")
		FAssetData CustomAssetData;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (ExposeOnSpawn = "true"),  Category = "Size")
		float DiskSize;


};
