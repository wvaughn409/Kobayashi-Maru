//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Asset/ModuleDatabase/SnapMapModuleDBFactory.h"

#include "Builders/SnapMap/SnapMapDungeonConfig.h"

USnapMapModuleDBFactory::USnapMapModuleDBFactory(const FObjectInitializer& ObjectInitializer) : Super(
    ObjectInitializer) {
    SupportedClass = USnapMapModuleDatabase::StaticClass();
    bCreateNew = true;
    bEditAfterNew = true;
}

bool USnapMapModuleDBFactory::CanCreateNew() const {
    return true;
}

UObject* USnapMapModuleDBFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
                                                   UObject* Context, FFeedbackContext* Warn) {
    USnapMapModuleDatabase* NewAsset = NewObject<USnapMapModuleDatabase>(
        InParent, Class, Name, Flags | RF_Transactional);
    return NewAsset;
}
