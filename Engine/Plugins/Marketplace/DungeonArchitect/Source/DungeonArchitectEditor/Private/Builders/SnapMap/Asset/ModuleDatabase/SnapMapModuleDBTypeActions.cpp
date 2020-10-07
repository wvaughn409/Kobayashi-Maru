//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Asset/ModuleDatabase/SnapMapModuleDBTypeActions.h"

#include "Builders/SnapMap/SnapMapDungeonConfig.h"
#include "DungeonArchitectEditorModule.h"

#include "AssetToolsModule.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

//////////////////////////////////////////////////////////////////////////
// FDungeonThemeAssetTypeActions

FText FSnapMapModuleDBTypeActions::GetName() const {
    return LOCTEXT("SnapMapModuleDBTypeActionsName", "SnapMap Module Database");
}

FColor FSnapMapModuleDBTypeActions::GetTypeColor() const {
    return FColor::Magenta;
}

UClass* FSnapMapModuleDBTypeActions::GetSupportedClass() const {
    return USnapMapModuleDatabase::StaticClass();
}

uint32 FSnapMapModuleDBTypeActions::GetCategories() {
    return IDungeonArchitectEditorModule::Get().GetDungeonAssetCategoryBit();
}

#undef LOCTEXT_NAMESPACE
