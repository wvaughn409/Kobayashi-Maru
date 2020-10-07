//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Asset/Connection/SnapMapConnectionAssetTypeActions.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"
#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditor.h"
#include "DungeonArchitectEditorModule.h"

#include "AssetToolsModule.h"

#define LOCTEXT_NAMESPACE "AssetTypeActions"

//////////////////////////////////////////////////////////////////////////
// FDungeonThemeAssetTypeActions

FText FSnapMapConnectionAssetTypeActions::GetName() const {
    return LOCTEXT("FSnapMapConnectionAssetTypeActionsName", "Dungeon SnapMap Door");
}

FColor FSnapMapConnectionAssetTypeActions::GetTypeColor() const {
    return FColor(153, 102, 51); // Brown
}

UClass* FSnapMapConnectionAssetTypeActions::GetSupportedClass() const {
    return USnapMapConnectionInfo::StaticClass();
}

void FSnapMapConnectionAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects,
                                                         TSharedPtr<class IToolkitHost> EditWithinLevelEditor) {
    const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid()
                                        ? EToolkitMode::WorldCentric
                                        : EToolkitMode::Standalone;
    for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt) {
        USnapMapConnectionInfo* DoorAsset = Cast<USnapMapConnectionInfo>(*ObjIt);
        if (DoorAsset) {
            TSharedRef<FSnapMapConnectionEditor> DoorEditor(new FSnapMapConnectionEditor);
            DoorEditor->InitSnapMapConnectionEditor(Mode, EditWithinLevelEditor, DoorAsset);
        }
    }
}

uint32 FSnapMapConnectionAssetTypeActions::GetCategories() {
    return IDungeonArchitectEditorModule::Get().GetDungeonAssetCategoryBit();
}

void FSnapMapConnectionAssetTypeActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) {
}


#undef LOCTEXT_NAMESPACE
