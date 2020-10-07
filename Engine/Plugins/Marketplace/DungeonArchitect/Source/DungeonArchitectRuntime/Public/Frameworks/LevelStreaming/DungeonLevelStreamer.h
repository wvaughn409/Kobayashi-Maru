//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "DungeonLevelStreamer.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogLevelStreamer, Log, All);

class UDungeonStreamingChunk;

UENUM(BlueprintType)
enum class EDungeonLevelStreamingLoadingStrategy : uint8 {
    PreloadEverything UMETA(DisplayName = "Preload Everything"),
    LoadOnDemand UMETA(DisplayName = "Load On Demand"),
    OnlyVisibleLoaded UMETA(DisplayName = "Only Visible Loaded (unloaded hidden)"),
};

USTRUCT(BlueprintType)
struct DUNGEONARCHITECTRUNTIME_API FDungeonLevelStreamingConfig {
    GENERATED_USTRUCT_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon Streaming")
    bool bEnabledLevelStreaming = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon Streaming", Meta=(EditCondition=
        "bEnabledLevelStreaming"))
    int32 VisiblityRoomDepth = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon Streaming", Meta = (EditCondition =
        "bEnabledLevelStreaming"))
    bool bUnloadHiddenChunks = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Dungeon Streaming", Meta = (EditCondition =
        "bEnabledLevelStreaming"))
    bool bProcessStreamingNavigation = false;

};

class UDungeonLevelStreamingModel;

class DUNGEONARCHITECTRUNTIME_API FDungeonLevelStreamer {
public:
    FDungeonLevelStreamer(const FDungeonLevelStreamingConfig& InConfig)
        : Config(InConfig) {
    }

    void Process(UDungeonLevelStreamingModel* Model, const TArray<FVector>& ViewLocations);

private:
    void GetVisibleChunks(UDungeonStreamingChunk* StartChunk, TSet<UDungeonStreamingChunk*>& OutVisibleChunks);
    void GetVisibleChunksRecursive(UDungeonStreamingChunk* Chunk, int32 DepthFromStart,
                                   TSet<UDungeonStreamingChunk*>& Visited,
                                   TSet<UDungeonStreamingChunk*>& OutVisibleChunks);

    static bool GetNearestChunk(const TArray<UDungeonStreamingChunk*>& Chunks, const FVector& ViewLocation,
                                UDungeonStreamingChunk*& OutNearestChunk);

    bool IsEqualToHostChunks(const TArray<TWeakObjectPtr<UDungeonStreamingChunk>>& NewHostChunks) const;


private:
    FDungeonLevelStreamingConfig Config;

    /** The chunk the player is on */
    TArray<TWeakObjectPtr<UDungeonStreamingChunk>> HostChunks;
};
