//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Asset/Connection/SnapMapConnectionAssetFactory.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"

USnapMapConnectionAssetFactory::USnapMapConnectionAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(
    ObjectInitializer) {
    SupportedClass = USnapMapConnectionInfo::StaticClass();
    bCreateNew = true;
    bEditAfterNew = true;
}

bool USnapMapConnectionAssetFactory::CanCreateNew() const {
    return true;
}

UObject* USnapMapConnectionAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name,
                                                          EObjectFlags Flags, UObject* Context,
                                                          FFeedbackContext* Warn) {
    USnapMapConnectionInfo* NewAsset = NewObject<USnapMapConnectionInfo>(
        InParent, Class, Name, Flags | RF_Transactional);
    return NewAsset;
}
