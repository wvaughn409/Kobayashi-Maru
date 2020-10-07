//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Tilemap/GridFlowTaskTilemap_Finalize.h"

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractNode.h"
#include "Frameworks/GridFlow/Tilemap/GridFlowTilemap.h"

#include "Containers/Queue.h"

void UGridFlowTaskTilemap_Finalize::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
    if (Input.IncomingNodeOutputs.Num() == 0) {
        Output.ErrorMessage = "Missing Input";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }
    if (Input.IncomingNodeOutputs.Num() > 1) {
        Output.ErrorMessage = "Only one input allowed";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }

    Output.State = Input.IncomingNodeOutputs[0].State->Clone();

    if (!Output.State->AbstractGraph) {
        Output.ErrorMessage = "Invalid Input Layout Graph";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }

    if (!Output.State->Tilemap) {
        Output.ErrorMessage = "Invalid Input Tilemap";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }

    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    UGridFlowTilemap* Tilemap = Output.State->Tilemap;


    TMap<FIntPoint, FGridFlowAbstractNode*> NodesByCoord;
    TMap<FIntPoint, TArray<FGridFlowTilemapCell*>> FreeTilesByNode;

    for (FGridFlowAbstractNode& Node : Graph->Nodes) {
        NodesByCoord.Add(Node.State.GridCoord, &Node);
    }

    for (FGridFlowTilemapCell& Cell : Tilemap->GetCells()) {
        if (Cell.CellType == EGridFlowTilemapCellType::Floor) {
            FIntPoint NodeCoord = Cell.NodeCoord;
            TArray<FGridFlowTilemapCell*>& FreeTiles = FreeTilesByNode.FindOrAdd(NodeCoord);
            if (!Cell.bHasItem) {
                FreeTiles.Add(&Cell);
            }
        }
    }

    // Filter walkable paths on the free tiles (some free tile patches may be blocked by overlays like tree lines)
    TArray<FIntPoint> NodeKeys;
    FreeTilesByNode.GenerateKeyArray(NodeKeys);

    for (const FIntPoint& NodeCoord : NodeKeys) {
        TArray<FGridFlowTilemapCell*>& FreeTiles = FreeTilesByNode.FindOrAdd(NodeCoord);
        FreeTiles = FilterWalkablePath(FreeTiles);
    }

    FGridFlowTilemapDistanceField DistanceField(Tilemap);

    const FRandomStream& Random = *Input.Random;
    // Add node items
    for (FGridFlowAbstractNode& Node : Graph->Nodes) {
        TArray<FGridFlowTilemapCell*>* SearchResult = FreeTilesByNode.Find(Node.State.GridCoord);
        if (!SearchResult) continue;

        TArray<FGridFlowTilemapCell*>& FreeTiles = *SearchResult;

        for (FGridFlowItem& Item : Node.State.Items) {
            if (FreeTiles.Num() == 0) {
                Output.ErrorMessage = "Item Placement failed. Insufficient free tiles";
                Output.ExecutionResult = EGridFlowTaskExecutionResult::FailRetry;
                return;
            }

            int32 FreeTileIndex = -1;
            FreeTileIndex = Random.RandRange(0, FreeTiles.Num() - 1);
            FGridFlowTilemapCell* FreeTile = FreeTiles[FreeTileIndex];
            FreeTile->bHasItem = true;
            FreeTile->ItemId = Item.ItemId;
            FreeTiles.Remove(FreeTile);
        }
    }

    // Cache tilemap metadata for each abstract graph node
    UpdateLayoutTilemapMetadata(Graph, Tilemap);

    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}

TArray<FGridFlowTilemapCell*> UGridFlowTaskTilemap_Finalize::FilterWalkablePath(
    const TArray<FGridFlowTilemapCell*>& Cells) {
    TSet<FIntPoint> Unreachable;
    TMap<FIntPoint, FGridFlowTilemapCell*> CellsByCoord;

    TQueue<FGridFlowTilemapCell*> Queue;

    {
        for (FGridFlowTilemapCell* Cell : Cells) {
            CellsByCoord.Add(Cell->TileCoord, Cell);
            if (Cell->bMainPath) {
                Queue.Enqueue(Cell);
            }
            else {
                Unreachable.Add(Cell->TileCoord);
            }
        }
    }

    static const int ChildOffsets[] = {
        -1, 0,
        1, 0,
        0, -1,
        0, 1
    };

    {
        FGridFlowTilemapCell* Cell = nullptr;
        while (Queue.Dequeue(Cell)) {
            FIntPoint Coord = Cell->TileCoord;
            for (int i = 0; i < 4; i++) {
                int32 cx = Coord.X + ChildOffsets[i * 2 + 0];
                int32 cy = Coord.Y + ChildOffsets[i * 2 + 1];
                FIntPoint ChildCoord(cx, cy);
                if (Unreachable.Contains(ChildCoord)) {
                    bool bCanTraverse = true;
                    FGridFlowTilemapCell* ChildCell = CellsByCoord[ChildCoord];
                    if (ChildCell->bHasOverlay && ChildCell->Overlay.bTileBlockingOverlay) {
                        bCanTraverse = false;
                    }
                    if (bCanTraverse) {
                        Unreachable.Remove(ChildCoord);
                        Queue.Enqueue(CellsByCoord[ChildCoord]);
                    }
                }
            }
        }
    }

    // Tag the cells that are not reachable
    for (const FIntPoint& UnreachableCoord : Unreachable) {
        FGridFlowTilemapCell* InvalidCell = CellsByCoord[UnreachableCoord];
        InvalidCell->bUnreachable = true;
    }

    if (bDebugUnwalkableCells) {
        for (const FIntPoint& UnreachableCoord : Unreachable) {
            FGridFlowTilemapCell* InvalidCell = CellsByCoord[UnreachableCoord];
            InvalidCell->CustomColor = FLinearColor::Red;
            InvalidCell->bUseCustomColor = true;
        }
    }

    // Grab all the cells that are not in the unreachable list
    TArray<FGridFlowTilemapCell*> Result;
    for (FGridFlowTilemapCell* Cell : Cells) {
        if (!Unreachable.Contains(Cell->TileCoord)) {
            Result.Add(Cell);
        }
    }

    return Result;
}

void UGridFlowTaskTilemap_Finalize::UpdateLayoutTilemapMetadata(UGridFlowAbstractGraph* InGraph,
                                                                UGridFlowTilemap* InTilemap) {
    // List of tilemap coords that belong to the layout graph node coord
    TMap<FIntPoint, TArray<FIntPoint>> TileCoordsByLayoutCoord;

    for (const FGridFlowTilemapCell& Cell : InTilemap->GetCells()) {
        if (Cell.CellType == EGridFlowTilemapCellType::Empty || Cell.CellType == EGridFlowTilemapCellType::Custom) {
            continue;
        }

        if (!Cell.bLayoutCell) {
            // Only consider layout cells
            continue;
        }

        TArray<FIntPoint>& NodeTiles = TileCoordsByLayoutCoord.FindOrAdd(Cell.NodeCoord);
        NodeTiles.Add(Cell.TileCoord);
    }

    for (FGridFlowAbstractNode& Node : InGraph->Nodes) {
        FGridFlowAbstractNodeTilemapMetadata& Metadata = Node.State.TilemapMetadata;

        Metadata.Tiles = TileCoordsByLayoutCoord.FindOrAdd(Node.State.GridCoord);
        FIntPoint Min, Max;
        if (Metadata.Tiles.Num() > 0) {
            Min = Metadata.Tiles[0];
            Max = Metadata.Tiles[0];
            for (int i = 1; i < Metadata.Tiles.Num(); i++) {
                const FIntPoint& Tile = Metadata.Tiles[i];
                Min.X = FMath::Min(Min.X, Tile.X);
                Min.Y = FMath::Min(Min.Y, Tile.Y);

                Max.X = FMath::Max(Max.X, Tile.X);
                Max.Y = FMath::Max(Max.Y, Tile.Y);
            }
        }
        else {
            Min = FIntPoint::ZeroValue;
            Max = FIntPoint::ZeroValue;
        }

        Metadata.TileCoordStart = Min;
        Metadata.TileCoordEnd = Max;
    }
}
