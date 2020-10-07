//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Assets/GridFlow/GridFlowAssetFactory.h"

#include "Core/Editors/GridFlow/GridFlowEditorUtils.h"
#include "Frameworks/GridFlow/GridFlowAsset.h"

UGridFlowAssetFactory::UGridFlowAssetFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    SupportedClass = UGridFlowAsset::StaticClass();
    bCreateNew = true;
    bEditAfterNew = true;
}

bool UGridFlowAssetFactory::CanCreateNew() const {
    return true;
}

UObject* UGridFlowAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
                                                 UObject* Context, FFeedbackContext* Warn) {
    UGridFlowAsset* NewAsset = NewObject<UGridFlowAsset>(InParent, Class, Name, Flags | RF_Transactional);
    FGridFlowEditorUtils::InitializeFlowAsset(NewAsset);
    return NewAsset;
}
