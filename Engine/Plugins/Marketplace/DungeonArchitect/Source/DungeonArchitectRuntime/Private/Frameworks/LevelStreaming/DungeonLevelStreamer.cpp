//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/LevelStreaming/DungeonLevelStreamer.h"

#include "Core/Dungeon.h"
#include "Frameworks/LevelStreaming/DungeonLevelStreamingModel.h"
#include "Frameworks/LevelStreaming/DungeonLevelStreamingNavigation.h"

DEFINE_LOG_CATEGORY(LogLevelStreamer);

struct FDungeonLevelStreamingStateRequest {
    TWeakObjectPtr<UDungeonStreamingChunk> Chunk;
    bool bRequestVisible;
    bool bRequestLoaded;
};

bool FDungeonLevelStreamer::IsEqualToHostChunks(
    const TArray<TWeakObjectPtr<UDungeonStreamingChunk>>& NewHostChunks) const {
    if (HostChunks.Num() != NewHostChunks.Num()) {
        return false;
    }

    for (int i = 0; i < HostChunks.Num(); i++) {
        UDungeonStreamingChunk* OldChunk = HostChunks[i].Get();
        UDungeonStreamingChunk* NewChunk = NewHostChunks[i].Get();
        if (OldChunk == nullptr || NewChunk == nullptr) {
            return false;
        }
        if (OldChunk->ID != NewChunk->ID) {
            return false;
        }
    }

    return true;
}

void FDungeonLevelStreamer::Process(UDungeonLevelStreamingModel* Model, const TArray<FVector>& ViewLocations) {
    if (!Model || Model->Chunks.Num() == 0) return;
    Model->StreamingNavigation->bEnabled = Config.bProcessStreamingNavigation;

    TArray<TWeakObjectPtr<UDungeonStreamingChunk>> StartChunks;
    for (const FVector& ViewLocation : ViewLocations) {
        UDungeonStreamingChunk* StartChunk = nullptr;
        if (!GetNearestChunk(Model->Chunks, ViewLocation, StartChunk)) {
            continue;
        }
        StartChunks.AddUnique(StartChunk);
    }

    StartChunks.Sort([](const TWeakObjectPtr<UDungeonStreamingChunk>& A,
                        const TWeakObjectPtr<UDungeonStreamingChunk>& B) -> bool {
        UDungeonStreamingChunk* PtrA = A.Get();
        UDungeonStreamingChunk* PtrB = B.Get();
        if (!PtrA || !PtrB) return false;

        return PtrA->ID < PtrB->ID;
    });

    // Handle Initial Chunk load event
    if (!Model->HasNotifiedInitialChunkLoadEvent() && StartChunks.Num() > 0) {
        TSet<UDungeonStreamingChunk*> InitialChunks;
        for (TWeakObjectPtr<UDungeonStreamingChunk> StartChunk : StartChunks) {
            GetVisibleChunks(StartChunk.Get(), InitialChunks);
        }

        if (InitialChunks.Num() > 0) {
            bool bAllChunksLoaded = true;
            for (UDungeonStreamingChunk* InitialChunk : InitialChunks) {
                if (!InitialChunk || !InitialChunk->IsLevelLoaded() || !InitialChunk->IsLevelVisible()) {
                    bAllChunksLoaded = false;
                    break;
                }
            }

            if (bAllChunksLoaded) {
                Model->NotifyInitialChunksLoaded();
            }
        }
    }

    if (IsEqualToHostChunks(StartChunks)) {
        // The state has not changed since last time
        return;
    }

    HostChunks = StartChunks;

    TArray<FDungeonLevelStreamingStateRequest> UpdateRequests;

    if (Config.bEnabledLevelStreaming) {
        TSet<UDungeonStreamingChunk*> VisibleChunks;

        for (TWeakObjectPtr<UDungeonStreamingChunk> HostChunk : HostChunks) {
            GetVisibleChunks(HostChunk.Get(), VisibleChunks);
        }

        for (UDungeonStreamingChunk* Chunk : Model->Chunks) {
            bool bVisible = VisibleChunks.Contains(Chunk);
            bool bShouldBeLoaded = bVisible ? true : !Config.bUnloadHiddenChunks;
            if (Chunk->RequiresStateUpdate(bVisible, bShouldBeLoaded)) {
                FDungeonLevelStreamingStateRequest Request;
                Request.Chunk = Chunk;
                Request.bRequestLoaded = bShouldBeLoaded;
                Request.bRequestVisible = bVisible;
                UpdateRequests.Add(Request);
            }
        }
    }
    else {
        for (UDungeonStreamingChunk* Chunk : Model->Chunks) {
            if (Chunk->RequiresStateUpdate(true, true)) {
                FDungeonLevelStreamingStateRequest Request;
                Request.Chunk = Chunk;
                Request.bRequestLoaded = true;
                Request.bRequestVisible = true;
                UpdateRequests.Add(Request);
            }
        }
    }

    // Sort the update requests based on the view location, so the nearby chunks are loaded first
    UpdateRequests.Sort([ViewLocations](const FDungeonLevelStreamingStateRequest& A,
                                        const FDungeonLevelStreamingStateRequest& B) -> bool {
        float BestDistA = MAX_flt;
        float BestDistB = MAX_flt;
        for (const FVector& ViewLocation : ViewLocations) {
            float DistA = A.Chunk->Bounds.ComputeSquaredDistanceToPoint(ViewLocation);
            float DistB = B.Chunk->Bounds.ComputeSquaredDistanceToPoint(ViewLocation);
            BestDistA = FMath::Min(BestDistA, DistA);
            BestDistB = FMath::Min(BestDistB, DistB);
        }
        return BestDistA < BestDistB;
    });

    for (const FDungeonLevelStreamingStateRequest& Request : UpdateRequests) {
        Request.Chunk->SetStreamingLevelState(Request.bRequestVisible, Request.bRequestLoaded);
    }
}

void FDungeonLevelStreamer::GetVisibleChunks(UDungeonStreamingChunk* StartChunk,
                                             TSet<UDungeonStreamingChunk*>& OutVisibleChunks) {
    TSet<UDungeonStreamingChunk*> Visited;
    GetVisibleChunksRecursive(StartChunk, 0, Visited, OutVisibleChunks);
}

void FDungeonLevelStreamer::GetVisibleChunksRecursive(UDungeonStreamingChunk* Chunk, int32 DepthFromStart,
                                                      TSet<UDungeonStreamingChunk*>& Visited,
                                                      TSet<UDungeonStreamingChunk*>& OutVisibleChunks) {
    if (!Chunk) return;

    Visited.Add(Chunk);

    OutVisibleChunks.Add(Chunk);

    if (DepthFromStart + 1 <= Config.VisiblityRoomDepth) {
        // Traverse the children
        for (UDungeonStreamingChunk* ChildChunk : Chunk->Neighbors) {
            if (!Visited.Contains(ChildChunk)) {
                GetVisibleChunksRecursive(ChildChunk, DepthFromStart + 1, Visited, OutVisibleChunks);
            }
        }
    }
}

bool FDungeonLevelStreamer::GetNearestChunk(const TArray<UDungeonStreamingChunk*>& Chunks, const FVector& ViewLocation,
                                            UDungeonStreamingChunk*& OutNearestChunk) {
    float NearestDistanceSq = MAX_int32;

    for (UDungeonStreamingChunk* Chunk : Chunks) {
        if (Chunk->Bounds.IsInside(ViewLocation)) {
            OutNearestChunk = Chunk;
            return true;
        }

        float DistanceSq = Chunk->Bounds.ComputeSquaredDistanceToPoint(ViewLocation);
        if (DistanceSq < NearestDistanceSq) {
            OutNearestChunk = Chunk;
            NearestDistanceSq = DistanceSq;
        }
    }


    return Chunks.Num() > 0;
}
