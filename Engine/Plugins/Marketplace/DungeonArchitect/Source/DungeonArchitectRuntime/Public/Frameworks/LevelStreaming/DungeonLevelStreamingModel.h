//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "DungeonLevelStreamingModel.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogLevelStreamingModel, Log, All);

class ULevelStreaming;
class ULevelStreamingDynamic;

UCLASS()
class DUNGEONARCHITECTRUNTIME_API UDungeonStreamingChunk : public UObject {
    GENERATED_UCLASS_BODY()
public:

    UPROPERTY()
    FGuid ID;

    UPROPERTY()
    FBox Bounds;

    UPROPERTY()
    TSet<UDungeonStreamingChunk*> Neighbors;

private:
    UPROPERTY()
    bool bShouldBeVisible = false;

    UPROPERTY()
    bool bShouldBeLoaded = false;

private:
    UPROPERTY(Transient)
    ULevelStreamingDynamic* LevelStreaming;

    UPROPERTY(Transient)
    UPackage* LevelPackage;

private:
    bool bIsLoaded = false;
    bool bIsVisible = false;

public:
    void CreateLevelStreaming(UObject* WorldContextObject, TSoftObjectPtr<UWorld> Level, uint32 InstanceId,
                              FVector Location, FRotator Rotation, bool& bOutSuccess);
    void SetStreamingLevelState(bool bInVisible, bool bInLoaded);
    bool RequiresStateUpdate(bool bInVisible, bool bInLoaded) const;
    virtual void DestroyChunk(UWorld* InWorld);
    UPackage* GetLevelPackage() const;

    ULevel* GetLoadedLevel() const;
    ULevelStreaming* GetStreamingLevel() const;
    FTransform GetLevelTransform() const;
    bool IsLevelLoaded() const { return bIsLoaded; }
    bool IsLevelVisible() const { return bIsVisible; }

    UFUNCTION()
    virtual void HandleChunkVisible();

    UFUNCTION()
    virtual void HandleChunkHidden();

    UFUNCTION()
    virtual void HandleChunkLoaded();

    UFUNCTION()
    virtual void HandleChunkUnloaded();

private:
    void RegisterStreamingCallbacks();


};

class UDungeonLevelStreamingNavigation;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDALevelStreamerBindableEvent, ADungeon*, Dungeon);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDALevelStreamerStateChangeDelegate, ADungeon*, Dungeon,
                                             UDungeonStreamingChunk*, Chunk);

UCLASS()
class DUNGEONARCHITECTRUNTIME_API UDungeonLevelStreamingModel : public UObject {
    GENERATED_UCLASS_BODY()

public:
    UPROPERTY()
    TArray<UDungeonStreamingChunk*> Chunks;

    UPROPERTY()
    UDungeonLevelStreamingNavigation* StreamingNavigation;

    UPROPERTY(BlueprintAssignable, Category = Dungeon)
    FDALevelStreamerBindableEvent OnInitialChunksLoaded;

public:
    void Initialize(UWorld* InWorld);
    void Release(UWorld* InWorld);
    bool HasNotifiedInitialChunkLoadEvent() const { return bNotifiedInitialChunkLoadEvent; }
    void NotifyInitialChunksLoaded();

private:
    bool bNotifiedInitialChunkLoadEvent = false;

};


class DUNGEONARCHITECTRUNTIME_API FLevelStreamLoader {
public:
    static ULevelStreamingDynamic* LoadLevelInstanceBySoftObjectPtr(UObject* WorldContextObject,
                                                                    TSoftObjectPtr<UWorld> Level, uint32 InstanceId,
                                                                    FVector Location, FRotator Rotation,
                                                                    bool& bOutSuccess, UPackage*& OutLevelPackage);
private:
    // Counter used by LoadLevelInstance to create unique level names
    static ULevelStreamingDynamic* LoadLevelInstance_Internal(UWorld* World, const FString& LongPackageName,
                                                              uint32 InstanceId, FVector Location, FRotator Rotation,
                                                              UPackage*& OutLevelPackage);
};
