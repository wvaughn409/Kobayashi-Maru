//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Assets/SnapFlow/DungeonFlowFactory.h"

#include "Core/DungeonFlow/DungeonFlow.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditorUtils.h"

UDungeonFlowFactory::UDungeonFlowFactory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    SupportedClass = UDungeonFlow::StaticClass();
    bCreateNew = true;
    bEditAfterNew = true;
}

bool UDungeonFlowFactory::CanCreateNew() const {
    return true;
}

UObject* UDungeonFlowFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
                                               UObject* Context, FFeedbackContext* Warn) {
    UDungeonFlow* NewAsset = NewObject<UDungeonFlow>(InParent, Class, Name, Flags | RF_Transactional);
    FDungeonFlowEditorUtils::InitializeFlowAsset(NewAsset);
    return NewAsset;
}
