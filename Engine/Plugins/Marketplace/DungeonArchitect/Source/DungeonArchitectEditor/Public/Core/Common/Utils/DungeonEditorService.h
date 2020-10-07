//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Utils/EditorService/IDungeonEditorService.h"

#include "IAssetTools.h"

DECLARE_LOG_CATEGORY_EXTERN(LogEditorService, Log, All)

/** Provides editor services to the runtime module */
class DUNGEONARCHITECTEDITOR_API FDungeonEditorService : public IDungeonEditorService {
public:
    AActor* CreateGroupActor(UWorld* World, const TArray<AActor*>& MergedActorList,
                             const FTransform& Transform) override;

    UObject* CloneAsset(UObject* SourceAsset, const FString& FolderPath) override;

    void MoveActorsAcrossLevels(ULevel* SourceLevel, ULevel* TargetLevel, const FTransform& LevelTransform,
                                TArray<FGuid>& OutFoliageList) override;
    void RefreshEditorViews() override;
    void SetActorEnabled(AActor* Actor, bool bEnabled) override;
    void DeleteAssets(const TArray<UObject*>& InObjectsToDelete, bool bShowConfirmation) override;
    void ForceDeleteAssets(const TArray<UObject*>& InObjectsToDelete, bool bShowConfirmation) override;
    void DestroyFoliage(ULevel* Level, const TArray<FGuid>& InFoliageList) override;
    void BuildMapGeometry(UWorld* World) override;
    void SaveDirtyPackages() override;

    bool UnloadPackages(const TArray<UPackage*>& InPackagesToUnload) override;

    ULevelStreaming* AddLevelToWorld(UWorld* InWorld, const TCHAR* LevelPackageName,
                                     TSubclassOf<ULevelStreaming> LevelStreamingClass,
                                     const FTransform& LevelTransform) override;


public:
    static FString GetAssetPackagePath(UObject* AssetObject) {
        return AssetObject->GetOutermost()->GetName();
    }

    /*
    template<typename T>
    static T* CloneAsset(const FString& TemplatePath, const FString& TargetName, const FString& TargetDirectory) {
        T* Template = LoadObject<T>(NULL, *TemplatePath, NULL, LOAD_None, NULL);
        IAssetTools& AssetTools = FModuleManager::GetModuleChecked<FAssetToolsModule>("AssetTools").Get();
        UObject* AssetObject = AssetTools.DuplicateAsset(TargetName, TargetDirectory, Template);
        T* Asset = Cast<T>(AssetObject);
        if (!Asset) {
            UE_LOG(LogEditorService, Warning, TEXT("Failed to clone asset at location %s/%s"), *TargetDirectory, *TargetName);
        }
        return Asset;
    }
    */
};
