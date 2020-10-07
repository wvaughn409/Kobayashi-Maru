//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

class DUNGEONARCHITECTEDITOR_API FSnapMapModuleDBTypeActions : public FAssetTypeActions_Base {
public:
    // IAssetTypeActions interface
    FText GetName() const override;
    FColor GetTypeColor() const override;
    UClass* GetSupportedClass() const override;
    bool HasActions(const TArray<UObject*>& InObjects) const override { return false; }
    uint32 GetCategories() override;
    // End of IAssetTypeActions interface

};
