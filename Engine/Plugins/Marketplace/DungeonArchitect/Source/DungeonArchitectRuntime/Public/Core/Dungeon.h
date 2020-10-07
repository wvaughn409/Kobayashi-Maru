//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/DungeonBuilder.h"
#include "Core/DungeonConfig.h"
#include "Core/DungeonModel.h"
#include "Core/Markers/DungeonMarkerEmitter.h"
#include "DungeonThemeAsset.h"
#include "Frameworks/LevelStreaming/DungeonLevelStreamer.h"
#include "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h"

#include "Async/AsyncWork.h"
#include "GameFramework/Actor.h"
#include "Dungeon.generated.h"

class ADungeon;
class UBillboardComponent;
class UDungeonModel;
class UDungeonQuery;
class UDungeonConfig;
class UDungeonBuilder;
class UDungeonToolData;
class UDungeonEventListener;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDungeonBuildCompleteBindableEvent, ADungeon*, Dungeon);

DECLARE_LOG_CATEGORY_EXTERN(DungeonLog, Log, All);

class DUNGEONARCHITECTRUNTIME_API FDungeonBuilderTask : public FNonAbandonableTask {
public:
    friend class FAutoDeleteAsyncTask<FDungeonBuilderTask>;
    FDungeonBuilderTask(UWorld* pWorld, ADungeon* pDungeon);

    void DoWork();

    void RunGameThreadCommands();

    static const TCHAR* Name() {
        return TEXT("DungeonBuilderTask");
    }

    FORCEINLINE TStatId GetStatId() const {
        RETURN_QUICK_DECLARE_CYCLE_STAT(FDungeonBuilderTask, STATGROUP_ThreadPoolAsyncTasks);
    }

    bool IsRunningGameThreadCommands() const { return bRunningGameThreadCommands; }

private:
    ADungeon* Dungeon;
    UWorld* World;
    TSharedPtr<class FDungeonSceneProvider> SceneProvider;

    bool bRunningGameThreadCommands;
};


/**
* The main dungeon actor responsible for creating a dungeon.  
* Drop this actor into your scene, assign a theme and click "Build Dungeon" button
* to create your dungeon.  
* From code, call ADungeon::BuildDungeon after adding an entry into the ADungeon::Themes array
*/
UCLASS(NotBlueprintable, hidecategories = (Rendering, Input, Actor, Misc))
class DUNGEONARCHITECTRUNTIME_API ADungeon : public AActor {
    GENERATED_BODY()

public:
    ADungeon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = Dungeon)
    void BuildDungeon();

    UFUNCTION(BlueprintCallable, Category = Dungeon)
    void DestroyDungeon();

    UFUNCTION(BlueprintCallable, Category = Dungeon)
    UDungeonBuilder* SetBuilderClass(TSubclassOf<UDungeonBuilder> InBuilderClass);

    //UFUNCTION(BlueprintCallable, Category = Dungeon)
    //void RebuildNavigation();

    UPROPERTY(BlueprintAssignable, Category = Dungeon)
    FDungeonBuildCompleteBindableEvent OnDungeonBuildComplete;

    UPROPERTY()
    FGuid Uid;

    void Destroyed() override;
    void Tick(float DeltaSeconds) override;
    bool ShouldTickIfViewportsOnly() const override { return true; }
    bool IsLevelBoundsRelevant() const override { return false; }

#if WITH_EDITOR
    void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
    void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;
#endif

    void CreateBuilderInstance();
    void CreateBuilderInstance(const FObjectInitializer& ObjectInitializer);

private:
#if WITH_EDITORONLY_DATA
    UPROPERTY()
    UBillboardComponent* SpriteComponent;
#endif //WITH_EDITORONLY_DATA

private:
    void PostDungeonBuild();
    void InitializeQueryObject();
    void ProcessLevelStreaming();

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    TArray<UDungeonThemeAsset*> Themes;

    /** Lets you emit your own markers into the scene */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, SimpleDisplay, Category = Advanced)
    TArray<UDungeonMarkerEmitter*> MarkerEmitters;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Instanced, SimpleDisplay, Category = Advanced)
    TArray<UDungeonEventListener*> EventListeners;

    /** When the dungeon is built asynchronously over multiple frames, objects closer to this point are built first */
    UPROPERTY(BlueprintReadWrite, Category = Dungeon)
    FVector BuildPriorityLocation;

    virtual UDungeonToolData* GetToolData() const { return ToolData; }
    virtual UDungeonConfig* GetConfig() const { return Config; }
    virtual UDungeonModel* GetModel() const { return DungeonModel; }
    virtual UDungeonBuilder* GetBuilder() const { return Builder; }

    UFUNCTION(BlueprintCallable, BlueprintPure, Category = Dungeon)
    UDungeonQuery* GetQuery();


#if WITH_EDITORONLY_DATA
    UBillboardComponent* GetSpriteComponent() const;
#endif //WITH_EDITORONLY_DATA

    typedef TSharedPtr<FAsyncTask<FDungeonBuilderTask>> FDungeonBuilderAsyncTaskPtr;
    typedef TArray<FDungeonBuilderAsyncTaskPtr> FDungeonBuilderAsyncTaskArray;

    // The active build task
    FDungeonBuilderAsyncTaskPtr BuildTask;

    // The next build task to run
    FDungeonBuilderAsyncTaskPtr QueuedBuildTask;

    // Flag to indicate if the dungeon build has been initiated in a separate thread
    bool bBuildInProgress;

    /** The folder under which the spawned actors should be placed in */
    FName ItemFolderPath;

    /** Lets you swap out the default dungeon builder with your own implementation */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    TSubclassOf<UDungeonBuilder> BuilderClass;

    UPROPERTY(EditAnywhere, Category = Advanced)
    bool bDrawDebugData;

    UPROPERTY(EditAnywhere, Category = Advanced)
    bool bReplicateDungeon;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Advanced)
    TArray<FClusterThemeInfo> ClusterThemes;

    UPROPERTY(BlueprintReadOnly, Category = Misc)
    UDungeonBuilder* Builder;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Misc)
    UDungeonConfig* Config;

    UPROPERTY(BlueprintReadOnly, Category = Misc)
    UDungeonModel* DungeonModel;

    UPROPERTY()
    UDungeonToolData* ToolData;

    UPROPERTY()
    UDungeonQuery* Query;

    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    UDungeonLevelStreamingModel* LevelStreamingModel;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Advanced)
    FDungeonLevelStreamingConfig LevelStreamingConfig;
};
