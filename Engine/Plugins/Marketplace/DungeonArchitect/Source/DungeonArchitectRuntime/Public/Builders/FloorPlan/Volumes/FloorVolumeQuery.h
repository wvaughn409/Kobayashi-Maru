//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

class AFloorPlanRoomVolume;
class ADungeon;

class FVolumeQuery {
public:
    virtual ~FVolumeQuery() {
    }

    virtual void Initialize(const TArray<AFloorPlanRoomVolume*>& RoomVolumes) = 0;
    virtual FName GetVolumeIdAt(const FVector& WorldLocation) = 0;
};


class FSpatialCacheVolumeQuery : public FVolumeQuery {
public:
    FSpatialCacheVolumeQuery(const FVector& InGridSize, ADungeon* InDungeon);

    void Initialize(const TArray<AFloorPlanRoomVolume*>& RoomVolumes) override;

    FName GetVolumeIdAt(const FVector& WorldLocation) override;

private:
    uint32 GetHash(const FVector& WorldLocation);

private:
    TMap<uint32, FName> LocationToVolumeMap;
    FTransform DungeonInverserTransform;
    FVector GridSize;
};


class FBurteForceVolumeQuery : public FVolumeQuery {
public:
    void Initialize(const TArray<AFloorPlanRoomVolume*>& InRoomVolumes) override;
    FName GetVolumeIdAt(const FVector& WorldLocation) override;

private:
    TArray<AFloorPlanRoomVolume*> RoomVolumes;
};
