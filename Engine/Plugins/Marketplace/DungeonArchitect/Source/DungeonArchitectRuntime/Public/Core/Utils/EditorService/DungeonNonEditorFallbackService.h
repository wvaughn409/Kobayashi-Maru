//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Utils/EditorService/IDungeonEditorService.h"

/** This is a fallback module that would be registered if the editor module is unavailable (e.g. standalone builds) */
class DUNGEONARCHITECTRUNTIME_API FDungeonNonEditorFallbackService : public IDungeonEditorService {
public:
    AActor* CreateGroupActor(UWorld* World, const TArray<AActor*>& MergedActorList,
                             const FTransform& Transform) override;
    UObject* CloneAsset(UObject* SourceAsset, const FString& FolderPath) override;
    void SetActorEnabled(AActor* Actor, bool bEnabled) override;

    void RefreshEditorViews() override {
    }

    ULevelStreaming* AddLevelToWorld(UWorld* InWorld, const TCHAR* LevelPackageName,
                                     TSubclassOf<ULevelStreaming> LevelStreamingClass,
                                     const FTransform& LevelTransform) override;
};
