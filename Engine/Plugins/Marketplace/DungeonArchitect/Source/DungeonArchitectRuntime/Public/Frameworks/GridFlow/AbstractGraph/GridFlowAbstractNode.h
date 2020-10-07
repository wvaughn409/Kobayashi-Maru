//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"
#include "GridFlowAbstractNode.generated.h"

UENUM(BlueprintType)
enum class EGridFlowAbstractNodeRoomType : uint8 {
    Unknown,
    Room,
    Corridor,
    Cave
};

USTRUCT(BlueprintType)
struct DUNGEONARCHITECTRUNTIME_API FGridFlowAbstractNodeTilemapMetadata {
    GENERATED_BODY()

    /** The coordinate in the tilemap where the chunk representing this layout node starts */
    UPROPERTY()
    FIntPoint TileCoordStart = FIntPoint::ZeroValue;

    /** The coordinate in the tilemap where the chunk representing this layout node end */
    UPROPERTY()
    FIntPoint TileCoordEnd = FIntPoint::ZeroValue;

    UPROPERTY()
    TArray<FIntPoint> Tiles;
};

USTRUCT(BlueprintType)
struct DUNGEONARCHITECTRUNTIME_API FGridFlowAbstractNodeState {
    GENERATED_BODY()

    UPROPERTY()
    bool bActive = false;

    UPROPERTY()
    FLinearColor Color = FLinearColor::Green;

    UPROPERTY()
    FIntPoint GridCoord = FIntPoint::ZeroValue;

    UPROPERTY()
    FGridFlowAbstractNodeTilemapMetadata TilemapMetadata;

    UPROPERTY()
    FString PathName;

    UPROPERTY()
    TArray<FGridFlowItem> Items;

    UPROPERTY()
    bool bDisablePerturb = false;

    UPROPERTY()
    EGridFlowAbstractNodeRoomType RoomType = EGridFlowAbstractNodeRoomType::Unknown;
};

USTRUCT(BlueprintType)
struct DUNGEONARCHITECTRUNTIME_API FGridFlowAbstractNode {
    GENERATED_BODY()

    UPROPERTY()
    FGuid NodeId;

    UPROPERTY()
    FVector2D Location;

    UPROPERTY()
    FGridFlowAbstractNodeState State;
};
