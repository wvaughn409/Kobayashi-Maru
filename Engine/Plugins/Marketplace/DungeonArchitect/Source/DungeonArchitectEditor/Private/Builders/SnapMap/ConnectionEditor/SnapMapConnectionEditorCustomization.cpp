//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditorCustomization.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"
#include "Core/Common/Utils/DungeonEditorUtils.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"

void HideCategory(IDetailLayoutBuilder& DetailBuilder, const FName& CategoryName) {
    IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(CategoryName);
    Category.SetCategoryVisibility(false);
}

void FSnapMapConnectionMeshInfoCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) {
    USnapMapConnectionInfo* ConnectionInfo = FDungeonEditorUtils::GetBuilderObject<USnapMapConnectionInfo>(
        &DetailBuilder);
    if (!ConnectionInfo) {
        return;
    }
    /*
    FName PropertyNameDoor = GET_MEMBER_NAME_CHECKED(USnapMapConnectionInfo, DoorVisuals);
    TSharedRef<IPropertyHandle> PropertyDoor = DetailBuilder.GetProperty(PropertyNameDoor);

    FName PropertyNameWall = GET_MEMBER_NAME_CHECKED(USnapMapConnectionInfo, WallVisuals);
    TSharedRef<IPropertyHandle> PropertyWall = DetailBuilder.GetProperty(PropertyNameWall);
    PropertyWall->MarkHiddenByCustomization();
    PropertyDoor->MarkHiddenByCustomization();
    */
    HideCategory(DetailBuilder, "SnapMap");

    // Visuals category
    {
        FSnapMapConnectionVisualInfo& Visuals = ConnectionInfo->bEditorPreviewDoor
                                                    ? ConnectionInfo->DoorVisuals
                                                    : ConnectionInfo->WallVisuals;
        FString VisualCategoryName = ConnectionInfo->bEditorPreviewDoor ? "Door Details" : "Wall Details";
        FString VisualActorType = Visuals.bStaticMesh ? " (Static Mesh)" : " (Blueprint)";
        FString CategoryName = VisualCategoryName + VisualActorType;
        IDetailCategoryBuilder& VisualCategory = DetailBuilder.EditCategory(*CategoryName);

        TSharedRef<FStructOnScope> VisualStructRef = MakeShared<FStructOnScope>(
            FSnapMapConnectionVisualInfo::StaticStruct(), (uint8*)&Visuals.bStaticMesh);
        VisualCategory.AddExternalStructureProperty(VisualStructRef,
                                                    GET_MEMBER_NAME_CHECKED(FSnapMapConnectionVisualInfo, bStaticMesh));

        if (Visuals.bStaticMesh) {
            TSharedRef<FStructOnScope> MeshStructRef = MakeShared<FStructOnScope>(
                FSnapMapConnectionVisualMeshInfo::StaticStruct(), (uint8*)&Visuals.MeshInfo);
            VisualCategory.AddExternalStructureProperty(MeshStructRef,
                                                        GET_MEMBER_NAME_CHECKED(
                                                            FSnapMapConnectionVisualMeshInfo, StaticMesh));
            VisualCategory.AddExternalStructureProperty(MeshStructRef,
                                                        GET_MEMBER_NAME_CHECKED(
                                                            FSnapMapConnectionVisualMeshInfo, MaterialOverride));
            VisualCategory.AddExternalStructureProperty(MeshStructRef,
                                                        GET_MEMBER_NAME_CHECKED(
                                                            FSnapMapConnectionVisualMeshInfo, Offset));
        }
        else {
            TSharedRef<FStructOnScope> BlueprintStructRef = MakeShared<FStructOnScope>(
                FSnapMapConnectionVisualBlueprintInfo::StaticStruct(), (uint8*)&Visuals.BlueprintInfo);
            VisualCategory.AddExternalStructureProperty(BlueprintStructRef,
                                                        GET_MEMBER_NAME_CHECKED(
                                                            FSnapMapConnectionVisualBlueprintInfo, BlueprintClass));
            VisualCategory.AddExternalStructureProperty(BlueprintStructRef,
                                                        GET_MEMBER_NAME_CHECKED(
                                                            FSnapMapConnectionVisualBlueprintInfo, Offset));
        }
    }

    // General category
    {
        IDetailCategoryBuilder& GeneralCategory = DetailBuilder.EditCategory("General");
        TArray<UObject*> Configs;
        Configs.Add(ConnectionInfo);
        GeneralCategory.AddExternalObjectProperty(
            Configs, GET_MEMBER_NAME_CHECKED(USnapMapConnectionInfo, ConnectionCategory));
    }

}

TSharedRef<IDetailCustomization> FSnapMapConnectionMeshInfoCustomization::MakeInstance() {
    return MakeShareable(new FSnapMapConnectionMeshInfoCustomization);
}

///////////////// FSnapMapConnectionActorCustomization ////////////////

void FSnapMapConnectionActorCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) {
    ASnapMapConnectionActor* ConnectionActor = FDungeonEditorUtils::GetBuilderObject<ASnapMapConnectionActor>(
        &DetailBuilder);
    if (!ConnectionActor) {
        return;
    }

    if (ConnectionActor->ConnectionComponent) {
        IDetailCategoryBuilder& ConfigCategory = DetailBuilder.EditCategory("SnapMap");
        TArray<UObject*> Configs;
        Configs.Add(ConnectionActor->ConnectionComponent);
        ConfigCategory.AddExternalObjectProperty(
            Configs, GET_MEMBER_NAME_CHECKED(USnapMapConnectionComponent, ConnectionInfo));
        ConfigCategory.AddExternalObjectProperty(
            Configs, GET_MEMBER_NAME_CHECKED(USnapMapConnectionComponent, ConnectionConstraint));
    }

}

TSharedRef<IDetailCustomization> FSnapMapConnectionActorCustomization::MakeInstance() {
    return MakeShareable(new FSnapMapConnectionActorCustomization);
}
