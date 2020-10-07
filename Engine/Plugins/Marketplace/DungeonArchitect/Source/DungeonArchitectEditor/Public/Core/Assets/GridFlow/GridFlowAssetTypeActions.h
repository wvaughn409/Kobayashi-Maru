//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

class DUNGEONARCHITECTEDITOR_API FGridFlowFlowAssetTypeActions : public FAssetTypeActions_Base {
public:
    // IAssetTypeActions interface
    FText GetName() const override;
    FColor GetTypeColor() const override;
    UClass* GetSupportedClass() const override;
    bool HasActions(const TArray<UObject*>& InObjects) const override { return false; }
    void GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) override;
    void OpenAssetEditor(const TArray<UObject*>& InObjects,
                         TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;
    uint32 GetCategories() override;
    // End of IAssetTypeActions interface

};
