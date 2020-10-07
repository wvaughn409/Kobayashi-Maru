//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Assets/SnapFlow/DungeonFlowAssetTypeActions.h"

#include "Core/DungeonFlow/DungeonFlow.h"
#include "Core/Editors/SnapFlow/DungeonFlowEditor.h"
#include "DungeonArchitectEditorModule.h"

#include "AssetToolsModule.h"

#define LOCTEXT_NAMESPACE "DungeonFlowAssetTypeActions"

//////////////////////////////////////////////////////////////////////////
// FDungeonFlowTypeActions

FText FDungeonFlowAssetTypeActions::GetName() const {
    return LOCTEXT("FDungeonSnapFlowAssetTypeActionsName", "Snap Flow");
}

FColor FDungeonFlowAssetTypeActions::GetTypeColor() const {
    return FColor::Purple;
}

UClass* FDungeonFlowAssetTypeActions::GetSupportedClass() const {
    return UDungeonFlow::StaticClass();
}

void FDungeonFlowAssetTypeActions::OpenAssetEditor(const TArray<UObject*>& InObjects,
                                                   TSharedPtr<class IToolkitHost> EditWithinLevelEditor) {
    const EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid()
                                        ? EToolkitMode::WorldCentric
                                        : EToolkitMode::Standalone;
    for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt) {
        UDungeonFlow* DungeonFlow = Cast<UDungeonFlow>(*ObjIt);
        if (DungeonFlow) {
            TSharedRef<FDungeonFlowEditor> NewDungeonEditor(new FDungeonFlowEditor());
            NewDungeonEditor->InitFlowEditor(Mode, EditWithinLevelEditor, DungeonFlow);
        }
    }
}

uint32 FDungeonFlowAssetTypeActions::GetCategories() {
    return IDungeonArchitectEditorModule::Get().GetDungeonAssetCategoryBit();
}

void FDungeonFlowAssetTypeActions::GetActions(const TArray<UObject*>& InObjects, FMenuBuilder& MenuBuilder) {
}


#undef LOCTEXT_NAMESPACE
