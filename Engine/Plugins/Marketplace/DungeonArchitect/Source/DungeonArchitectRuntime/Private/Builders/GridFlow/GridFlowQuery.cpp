//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/GridFlow/GridFlowQuery.h"

#include "Builders/GridFlow/GridFlowConfig.h"
#include "Builders/GridFlow/GridFlowModel.h"
#include "Core/Utils/MathUtils.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"

#include "GameFramework/Actor.h"

DEFINE_LOG_CATEGORY_STATIC(LogGridFlowQuery, Log, All);

void UGridFlowQuery::InitializeImpl(UDungeonConfig* InConfig, UDungeonModel* InModel) {
    Config = Cast<UGridFlowConfig>(InConfig);
    Model = Cast<UGridFlowModel>(InModel);

    if (!Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid config passed to grid flow query object"));
    }
    if (!Model) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid model passed to grid flow query object"));
    }
}

FVector UGridFlowQuery::ConvertTileToWorldCoord(const FVector& TileCoord) {
    if (!Model || !Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid grid flow query object state"));
        return FVector::ZeroVector;
    }

    const FIntPoint Offset = Model->BuildTileOffset;

    const float TileX = TileCoord.X - Offset.X;
    const float TileY = TileCoord.Y - Offset.Y;
    const float TileZ = TileCoord.Z;

    FVector TileCenter = FVector(TileX + 0.5f, TileY + 0.5f, TileZ) * Config->GridSize;

    AActor* HostActor = Cast<AActor>(GetOuter());
    if (HostActor) {
        TileCenter = HostActor->GetTransform().TransformPosition(TileCenter);
    }
    return TileCenter;
}

FVector UGridFlowQuery::ConvertWorldToTileCoord(const FVector& InWorldCoords) {
    if (!Model || !Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid grid flow query object state"));
        return FVector::ZeroVector;
    }

    FVector LocalCoords = InWorldCoords;
    AActor* HostActor = Cast<AActor>(GetOuter());
    if (HostActor) {
        LocalCoords = HostActor->GetTransform().InverseTransformPosition(LocalCoords);
    }

    FVector TileCoordsF = LocalCoords / Config->GridSize;

    int32 TileX = FMath::FloorToInt(TileCoordsF.X);
    int32 TileY = FMath::FloorToInt(TileCoordsF.Y);
    int32 TileZ = FMath::FloorToInt(TileCoordsF.Z);

    //int32 TileX = TileCoordsF.X;
    //int32 TileY = TileCoordsF.Y;
    //int32 TileZ = TileCoordsF.Z;

    TileX += Model->BuildTileOffset.X;
    TileY += Model->BuildTileOffset.Y;
    return FVector(TileX, TileY, TileZ);
}

bool UGridFlowQuery::GetCellAtTileCoord(const FVector& TileCoord, FGridFlowTilemapCell& OutCell) {
    if (!Model || !Model->Tilemap || !Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid grid flow query object state"));
        return false;
    }

    int32 IX = FMath::FloorToInt(TileCoord.X);
    int32 IY = FMath::FloorToInt(TileCoord.Y);
    const FGridFlowTilemapCell* CellPtr = Model->Tilemap->GetSafe(IX, IY);
    if (CellPtr) {
        OutCell = *CellPtr;
        return true;
    }
    return false;
}

bool UGridFlowQuery::GetCellAtWorldCoord(const FVector& InWorldCoord, FGridFlowTilemapCell& OutCell) {
    if (!Model || !Model->Tilemap || !Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid grid flow query object state"));
        return false;
    }
    FVector TileCoord = ConvertWorldToTileCoord(InWorldCoord);
    return GetCellAtTileCoord(TileCoord, OutCell);
}

bool UGridFlowQuery::GetCellRoomType(const FVector& WorldCoord, EGridFlowAbstractNodeRoomType& OutRoomType) {
    if (!Model || !Model->Tilemap || !Model->AbstractGraph || !Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid grid flow query object state"));
        return false;
    }
    FVector TileCoords = ConvertWorldToTileCoord(WorldCoord);
    const FGridFlowTilemapCell* CellPtr = Model->Tilemap->GetSafe(TileCoords.X, TileCoords.Y);
    if (CellPtr) {
        FIntPoint NodeCoord = CellPtr->NodeCoord;
        for (const FGridFlowAbstractNode& Node : Model->AbstractGraph->Nodes) {
            if (NodeCoord == Node.State.GridCoord) {
                OutRoomType = Node.State.RoomType;
                return true;
            }
        }
    }
    return false;
}

void UGridFlowQuery::GetFreeTileLocation(TArray<EGridFlowAbstractNodeRoomType> AllowedRoomTypes,
                                         const FRandomStream& Random, bool& OutSuccess, FVector& OutWorldCoord) {
    if (!Model || !Model->Tilemap || !Model->AbstractGraph || !Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid grid flow query object state"));
        OutSuccess = false;
        OutWorldCoord = FVector::ZeroVector;
        return;
    }

    TSet<EGridFlowAbstractNodeRoomType> ValidRoomTypes(AllowedRoomTypes);
    TMap<FIntPoint, EGridFlowAbstractNodeRoomType> RoomTypesByNodeCoord;
    for (const FGridFlowAbstractNode& Node : Model->AbstractGraph->Nodes) {
        EGridFlowAbstractNodeRoomType& RoomTypeRef = RoomTypesByNodeCoord.FindOrAdd(Node.State.GridCoord);
        RoomTypeRef = Node.State.RoomType;
    }

    TArray<FIntVector> AllFloorTiles;
    TArray<FIntVector> ValidFloorTiles;
    for (const FGridFlowTilemapCell& Cell : Model->Tilemap->GetCells()) {
        if (Cell.bLayoutCell && Cell.CellType == EGridFlowTilemapCellType::Floor) {
            if (Cell.bHasItem) continue;
            if (Cell.bHasOverlay && Cell.Overlay.bTileBlockingOverlay) continue;

            EGridFlowAbstractNodeRoomType* RoomTypePtr = RoomTypesByNodeCoord.Find(Cell.NodeCoord);
            if (RoomTypePtr) {
                EGridFlowAbstractNodeRoomType RoomType = *RoomTypePtr;
                FIntVector TileCoord(Cell.TileCoord.X, Cell.TileCoord.Y, Cell.Height);
                if (ValidRoomTypes.Contains(RoomType)) {
                    ValidFloorTiles.Add(TileCoord);
                }
                AllFloorTiles.Add(TileCoord);
            }
        }
    }

    if (ValidFloorTiles.Num() == 0 && AllFloorTiles.Num() == 0) {
        OutSuccess = false;
        OutWorldCoord = FVector::ZeroVector;
        return;
    }

    TArray<FIntVector>& ValidTiles = ValidFloorTiles.Num() > 0 ? ValidFloorTiles : AllFloorTiles;
    int32 Index = Random.RandRange(0, ValidTiles.Num() - 1);
    FIntVector TargetTileCoord = ValidTiles[Index];
    FVector TargetWorldCoord = ConvertTileToWorldCoord(FMathUtils::ToVector(TargetTileCoord));

    OutWorldCoord = TargetWorldCoord;
    OutSuccess = true;
}

bool UGridFlowQuery::GetChunkAtWorldCoord(const FVector& InWorldCoord, FGridFlowChunkQueryResult& Result) {
    if (!Model || !Model->Tilemap || !Config) {
        UE_LOG(LogGridFlowQuery, Error, TEXT("Invalid grid flow query object state"));
        return false;
    }
    FVector TileCoord = ConvertWorldToTileCoord(InWorldCoord);
    const FGridFlowTilemapCell* CellPtr = Model->Tilemap->GetSafe(TileCoord.X, TileCoord.Y);
    if (CellPtr) {
        if (CellPtr->CellType != EGridFlowTilemapCellType::Empty && CellPtr->CellType !=
            EGridFlowTilemapCellType::Custom) {
            return GetChunkAtLayoutNodeCoord(CellPtr->NodeCoord, Result);
        }
    }
    return false;
}

bool UGridFlowQuery::GetChunkAtLayoutNodeCoord(const FIntPoint& InLayoutNodeCoord, FGridFlowChunkQueryResult& Result) {
    for (const FGridFlowAbstractNode& Node : Model->AbstractGraph->Nodes) {
        if (Node.State.GridCoord == InLayoutNodeCoord) {
            GetChunkAtLayoutNode(Node, Result);
            return true;
        }
    }
    return false;
}

void UGridFlowQuery::GetChunkAtLayoutNode(const FGridFlowAbstractNode& InLayoutNode,
                                          FGridFlowChunkQueryResult& Result) {
    const FGridFlowAbstractNodeTilemapMetadata& TileData = InLayoutNode.State.TilemapMetadata;
    Result.LayoutNodeCoord = InLayoutNode.State.GridCoord;
    Result.TilemapCoordStart = FVector(TileData.TileCoordStart.X, TileData.TileCoordStart.Y, 0);
    Result.TilemapCoordEnd = FVector(TileData.TileCoordEnd.X, TileData.TileCoordEnd.Y, 0);
    Result.TileCoords.Empty(TileData.Tiles.Num());
    for (const FIntPoint& Coord : TileData.Tiles) {
        Result.TileCoords.Add(FVector(Coord.X, Coord.Y, 0));
    }
    Result.RoomType = InLayoutNode.State.RoomType;
}

void UGridFlowQuery::GetAllChunksOfType(EGridFlowAbstractNodeRoomType InRoomType,
                                        TArray<FGridFlowChunkQueryResult>& OutChunks) {
    OutChunks.Reset();
    for (const FGridFlowAbstractNode& Node : Model->AbstractGraph->Nodes) {
        if (Node.State.RoomType == InRoomType) {
            FGridFlowChunkQueryResult& ChunkInfo = OutChunks.AddDefaulted_GetRef();
            GetChunkAtLayoutNode(Node, ChunkInfo);
        }
    }
}
