//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Tilemap/GridFlowTaskTilemap_Initialize.h"

#include "Core/Utils/MathUtils.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"
#include "Frameworks/GridFlow/Tilemap/GridFlowTilemap.h"

#include "Containers/Queue.h"

DEFINE_LOG_CATEGORY_STATIC(LogCreateTilemapTask, Log, All);

namespace {
    struct FDoorInfo {
        FGuid AbstractLinkId;
        FIntPoint CellCoord;
        bool bHorizontalDoorEdge;
    };

    FIntPoint ScaleIntPoint(const FIntPoint& A, const FIntPoint& B) {
        return FIntPoint(A.X * B.X, A.Y * B.Y);
    }

    struct FNodeTilemapBounds {
        static FNodeTilemapBounds Build(const FGridFlowTilemapNodeInfo& TileNode, int32 TilemapWidth,
                                        int32 TilemapHeight, bool bWallsAsTiles) {
            FNodeTilemapBounds b;

            b.x0 = FMath::FloorToInt(TileNode.x0);
            b.y0 = FMath::FloorToInt(TileNode.y0);
            b.x1 = FMath::FloorToInt(TileNode.x1);
            b.y1 = FMath::FloorToInt(TileNode.y1);
            b.mx = FMath::FloorToInt(TileNode.midX);
            b.my = FMath::FloorToInt(TileNode.midY);

            if (bWallsAsTiles) {
                b.x0 = FMath::Clamp(b.x0, 0, TilemapWidth - 1);
                b.x1 = FMath::Clamp(b.x1, 0, TilemapWidth - 1);
                b.y0 = FMath::Clamp(b.y0, 0, TilemapHeight - 1);
                b.y1 = FMath::Clamp(b.y1, 0, TilemapHeight - 1);
                b.mx = FMath::Clamp(b.mx, 0, TilemapWidth - 1);
                b.my = FMath::Clamp(b.my, 0, TilemapHeight - 1);
            }

            return b;
        }

        int32 x0 = 0;
        int32 x1 = 0;
        int32 y0 = 0;
        int32 y1 = 0;
        int32 mx = 0;
        int32 my = 0;
    };
}


void UGridFlowTaskTilemap_Initialize::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
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
        Output.ErrorMessage = "Invalid Input";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }

    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    UGridFlowTilemap* Tilemap = BuildTilemap(Graph, *Input.Random);

    Output.State->Tilemap = Tilemap;
    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}

UGridFlowTilemap* UGridFlowTaskTilemap_Initialize::BuildTilemap(UGridFlowAbstractGraph* Graph,
                                                                const FRandomStream& Random) {
    FGridFlowAbstractGraphQuery GraphQuery(Graph);
    LayoutGridSize = Graph->GridSize;
    FIntPoint TilemapSize = ScaleIntPoint(LayoutGridSize, TilemapSizePerNode);
    UGridFlowTilemap* Tilemap = NewObject<UGridFlowTilemap>();
    Tilemap->Initialize(TilemapSize.X, TilemapSize.Y);

    FGridFlowTilemapNodes TileNodes;
    TileNodes.InitializeArray2D(LayoutGridSize.X, LayoutGridSize.Y);
    for (int ny = 0; ny < LayoutGridSize.Y; ny++) {
        for (int nx = 0; nx < LayoutGridSize.X; nx++) {
            int32 x0 = nx * TilemapSizePerNode.X;
            int32 y0 = ny * TilemapSizePerNode.Y;
            int32 x1 = x0 + TilemapSizePerNode.X;
            int32 y1 = y0 + TilemapSizePerNode.Y;
            TileNodes[FIntPoint(nx, ny)] = FGridFlowTilemapNodeInfo(x0, y0, x1, y1);
        }
    }

    for (const FGridFlowAbstractNode& Node : Graph->Nodes) {
        FIntPoint Coord = Node.State.GridCoord;
        TileNodes[Coord].AbstractNodeId = Node.NodeId;
    }

    PerturbRoomSizes(TileNodes, Tilemap, GraphQuery, Random);
    FixCorridorSizes(TileNodes, GraphQuery);

    InitRasterization(TileNodes, Tilemap, GraphQuery);
    RasterizeRoomCorridors(TileNodes, Tilemap, GraphQuery);
    RasterizeBaseCaveBlocks(TileNodes, Tilemap, GraphQuery);

    GenerateMainPath(TileNodes, Tilemap, GraphQuery);
    BuildCaves(TileNodes, Tilemap, GraphQuery, Random);
    BuildDoors(TileNodes, Tilemap, GraphQuery);

    Tilemap = ApplyCropAndPadding(Tilemap);

    CalculateDistanceFromMainPath(TileNodes, Tilemap, GraphQuery, {EGridFlowAbstractNodeRoomType::Cave});
    CalculateDistanceFromMainPath(TileNodes, Tilemap, GraphQuery, {
                                      EGridFlowAbstractNodeRoomType::Room,
                                      EGridFlowAbstractNodeRoomType::Corridor,
                                  });
    CalculateDistanceFromMainPathOnEmptyArea(Tilemap);

    return Tilemap;
}

void UGridFlowTaskTilemap_Initialize::PerturbRoomSizes(FGridFlowTilemapNodes& TileNodes, UGridFlowTilemap* Tilemap,
                                                       const FGridFlowAbstractGraphQuery& GraphQuery,
                                                       const FRandomStream& Random) {
    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    CorridorLaneWidth = FMath::Max(1, CorridorLaneWidth);

    // Perturb horizontally
    {
        int32 MaxPerturbAmount = FMath::FloorToInt((TilemapSizePerNode.X - 2 - CorridorLaneWidth) * 0.5f);
        MaxPerturbAmount = FMath::Max(0, MaxPerturbAmount);

        int32 PerturbX = FMath::Min(PerturbAmount.X, MaxPerturbAmount);
        PerturbX = FMath::Max(0, PerturbX);

        for (int ny = 0; ny < LayoutGridSize.Y; ny++) {
            for (int nx = -1; nx < LayoutGridSize.X; nx++) {
                FGridFlowTilemapNodeInfo* NodeA = TileNodes.GetSafe(nx, ny);
                FGridFlowTilemapNodeInfo* NodeB = TileNodes.GetSafe(nx + 1, ny);

                bool bConnected = false;
                if (NodeA && NodeB) {
                    FGridFlowAbstractLink* Link = Graph->GetLink(NodeA->AbstractNodeId, NodeB->AbstractNodeId, true);
                    bConnected = (Link && Link->State.Type != EGridFlowAbstractLinkType::Unconnected);
                }
                FGridFlowAbstractNode* AbstractNodeA = NodeA ? GraphQuery.GetNode(NodeA->AbstractNodeId) : nullptr;
                FGridFlowAbstractNode* AbstractNodeB = NodeB ? GraphQuery.GetNode(NodeB->AbstractNodeId) : nullptr;

                if (bConnected) {
                    bool bCanPerturb = (AbstractNodeA && AbstractNodeB
                        && !AbstractNodeA->State.bDisablePerturb
                        && !AbstractNodeB->State.bDisablePerturb);
                    if (bCanPerturb) {
                        float Perturb = Random.FRandRange(-PerturbX, PerturbX);
                        if (NodeA) NodeA->x1 += Perturb;
                        if (NodeB) NodeB->x0 += Perturb;
                    }
                }
                else {
                    if (NodeA && AbstractNodeA && !AbstractNodeA->State.bDisablePerturb) {
                        float PerturbA = PerturbX * Random.FRand();
                        NodeA->x1 -= PerturbA;
                    }
                    if (NodeB && AbstractNodeB && !AbstractNodeB->State.bDisablePerturb) {
                        float PerturbB = PerturbX * Random.FRand();
                        NodeB->x0 += PerturbB;
                    }
                }
            }
        }
    }

    // Perturb vertically
    {
        int32 MaxPerturbAmount = FMath::FloorToInt((TilemapSizePerNode.Y - 2 - CorridorLaneWidth) * 0.5f);
        MaxPerturbAmount = FMath::Max(0, MaxPerturbAmount);

        int32 PerturbY = FMath::Min(PerturbAmount.Y, MaxPerturbAmount);
        PerturbY = FMath::Max(0, PerturbY);

        for (int nx = 0; nx < LayoutGridSize.X; nx++) {
            for (int ny = -1; ny < LayoutGridSize.Y; ny++) {
                FGridFlowTilemapNodeInfo* NodeA = TileNodes.GetSafe(nx, ny);
                FGridFlowTilemapNodeInfo* NodeB = TileNodes.GetSafe(nx, ny + 1);

                bool bConnected = false;
                if (NodeA && NodeB) {
                    FGridFlowAbstractLink* Link = Graph->GetLink(NodeA->AbstractNodeId, NodeB->AbstractNodeId, true);
                    bConnected = (Link && Link->State.Type != EGridFlowAbstractLinkType::Unconnected);
                }

                FGridFlowAbstractNode* AbstractNodeA = NodeA ? GraphQuery.GetNode(NodeA->AbstractNodeId) : nullptr;
                FGridFlowAbstractNode* AbstractNodeB = NodeB ? GraphQuery.GetNode(NodeB->AbstractNodeId) : nullptr;

                if (bConnected) {
                    bool bCanPerturb = AbstractNodeA && AbstractNodeB
                        && !AbstractNodeA->State.bDisablePerturb
                        && !AbstractNodeB->State.bDisablePerturb;

                    if (bCanPerturb) {
                        bool bCanMoveDown = (NodeA->x0 >= NodeB->x0 && NodeA->x1 <= NodeB->x1);
                        bool bCanMoveUp = (NodeB->x0 >= NodeA->x0 && NodeB->x1 <= NodeA->x1);

                        if (!bCanMoveUp && !bCanMoveDown) continue;

                        if (bCanMoveUp && bCanMoveDown) {
                            // Move randomly on either one direction
                            if (Random.FRand() < 0.5f) {
                                bCanMoveUp = false;
                            }
                            else {
                                bCanMoveDown = false;
                            }
                        }

                        float PerturbDirection = (bCanMoveUp ? -1 : 1);
                        float Perturb = Random.FRand() * PerturbY * PerturbDirection;
                        NodeA->y1 += Perturb;
                        NodeB->y0 += Perturb;
                    }
                }
                else {
                    if (NodeA && AbstractNodeA && !AbstractNodeA->State.bDisablePerturb) {
                        float PerturbA = PerturbY * Random.FRand();
                        NodeA->y1 -= PerturbA;
                    }

                    if (NodeB && AbstractNodeB && !AbstractNodeB->State.bDisablePerturb) {
                        float PerturbB = PerturbY * Random.FRand();
                        NodeB->y0 += PerturbB;
                    }
                }
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::FixCorridorSizes(FGridFlowTilemapNodes& TileNodes,
                                                       const FGridFlowAbstractGraphQuery& GraphQuery) {
    for (FGridFlowTilemapNodeInfo& TileNode : TileNodes.GetCells()) {
        FGridFlowAbstractNode* Node = GraphQuery.GetNode(TileNode.AbstractNodeId);
        if (Node && Node->State.RoomType == EGridFlowAbstractNodeRoomType::Corridor) {
            UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
            TArray<FGuid> IncomingNodes = Graph->GetIncomingNodes(Node->NodeId);
            TArray<FGuid> OutgoingNodes = Graph->GetOutgoingNodes(Node->NodeId);
            if (IncomingNodes.Num() == 0 || OutgoingNodes.Num() == 0) continue;

            FGridFlowAbstractNode* IncomingNode = GraphQuery.GetNode(IncomingNodes[0]);
            FGridFlowAbstractNode* OutgoingNode = GraphQuery.GetNode(OutgoingNodes[0]);
            if (!IncomingNode || !OutgoingNode) continue;

            FIntPoint InCoord = IncomingNode->State.GridCoord;
            FIntPoint OutCoord = OutgoingNode->State.GridCoord;
            bool bVertical = (InCoord.X == OutCoord.X);
            if (bVertical) {
                TileNode.x0 = FMath::Max(TileNode.x0, TileNode.midX - CorridorLaneWidth);
                TileNode.x1 = FMath::Min(TileNode.x1, TileNode.midX + CorridorLaneWidth);
            }
            else {
                TileNode.y0 = FMath::Max(TileNode.y0, TileNode.midY - CorridorLaneWidth);
                TileNode.y1 = FMath::Min(TileNode.y1, TileNode.midY + CorridorLaneWidth);
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::InitRasterization(FGridFlowTilemapNodes& TileNodes, UGridFlowTilemap* Tilemap,
                                                        const FGridFlowAbstractGraphQuery& GraphQuery) {
    for (FGridFlowTilemapNodeInfo& TileNode : TileNodes.GetCells()) {
        FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
        if (!TileNodePtr) continue;

        const bool bWallsAsTiles = WallGenerationMethod == EGridFlowTilemapWallGenerationMethod::WallAsTiles;
        FNodeTilemapBounds Bounds = FNodeTilemapBounds::Build(TileNode, Tilemap->GetWidth(), Tilemap->GetHeight(), bWallsAsTiles);
        for (int y = Bounds.y0; y <= Bounds.y1; y++) {
            for (int x = Bounds.x0; x <= Bounds.x1; x++) {
                FGridFlowTilemapCell* CellPtr = Tilemap->GetSafe(x, y);
                if (!CellPtr) continue;
                CellPtr->NodeCoord = TileNodePtr->State.GridCoord;
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::RasterizeRoomCorridors(FGridFlowTilemapNodes& TileNodes,
                                                             UGridFlowTilemap* Tilemap,
                                                             const FGridFlowAbstractGraphQuery& GraphQuery) {
    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    const bool bWallsAsTiles = WallGenerationMethod == EGridFlowTilemapWallGenerationMethod::WallAsTiles;
    for (FGridFlowTilemapNodeInfo& TileNode : TileNodes.GetCells()) {
        FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
        if (!TileNodePtr || !TileNodePtr->State.bActive) continue;

        const FNodeTilemapBounds Bounds = FNodeTilemapBounds::Build(TileNode, Tilemap->GetWidth(), Tilemap->GetHeight(), bWallsAsTiles);

        if (TileNodePtr->State.RoomType == EGridFlowAbstractNodeRoomType::Cave) {
            // Render the caves in another pass
            continue;
        }

        for (int y = Bounds.y0; y <= Bounds.y1; y++) {
            for (int x = Bounds.x0; x <= Bounds.x1; x++) {
                FGridFlowTilemapCell* CellPtr = Tilemap->GetSafe(x, y);
                if (!CellPtr) continue;

                FGridFlowTilemapCell& Cell = *CellPtr;
                Cell.bLayoutCell = true;
                Cell.NodeCoord = TileNodePtr->State.GridCoord;
                if (bWallsAsTiles) {
                    Cell.CellType = (x == Bounds.x0 || x == Bounds.x1 || y == Bounds.y0 || y == Bounds.y1)
                                        ? EGridFlowTilemapCellType::Wall
                                        : EGridFlowTilemapCellType::Floor;
                }
                else {
                    if (x < Bounds.x1 && y < Bounds.y1) {
                        Cell.CellType = EGridFlowTilemapCellType::Floor;
                    }
                }

                FLinearColor NodeColor = TileNodePtr->State.Color;
                Cell.CustomColor = FColorUtils::BrightenColor(NodeColor, RoomColorSaturation, RoomColorBrightness);

                if (Cell.CellType == EGridFlowTilemapCellType::Floor) {
                    Cell.bUseCustomColor = true;
                }

                else if (Cell.CellType == EGridFlowTilemapCellType::Wall) {
                    FGridFlowTilemapCellWallInfo WallInfo;
                    Tilemap->GetWallMeta(FGridFlowTilemapCoord(Cell.TileCoord), WallInfo);
                    WallInfo.OwningNodes.Add(TileNodePtr->State.GridCoord);
                    Tilemap->SetWallMetadata(FGridFlowTilemapCoord(Cell.TileCoord), WallInfo);
                }
            }
        }
        
        // Rasterize the edges
        if (!bWallsAsTiles)
        {
            for (int y = Bounds.y0; y < Bounds.y1; y++)
            {
                {
                    FGridFlowTilemapEdge& Edge = Tilemap->GetEdgeV(Bounds.x0, y);
                    Edge.EdgeType = EGridFlowTilemapEdgeType::Wall;
                    Edge.MarkerAngle = 90;
                    
                    FGridFlowTilemapCellWallInfo WallInfo;
                    WallInfo.OwningNodes.Add(FIntPoint(Bounds.x0, y));
                    Tilemap->SetWallMetadata(Edge.EdgeCoord, WallInfo);
                }
                
                {
                    FGridFlowTilemapEdge& Edge = Tilemap->GetEdgeV(Bounds.x1, y);
                    Edge.EdgeType = EGridFlowTilemapEdgeType::Wall;
                    Edge.MarkerAngle = -90;

                    FGridFlowTilemapCellWallInfo WallInfo;
                    WallInfo.OwningNodes.Add(FIntPoint(Bounds.x1 - 1, y));
                    Tilemap->SetWallMetadata(Edge.EdgeCoord, WallInfo);
                }
            }
            for (int x = Bounds.x0; x < Bounds.x1; x++)
            {
                {
                    FGridFlowTilemapEdge& Edge = Tilemap->GetEdgeH(x, Bounds.y0);
                    Edge.EdgeType = EGridFlowTilemapEdgeType::Wall;
                    Edge.MarkerAngle = 180;

                    FGridFlowTilemapCellWallInfo WallInfo;
                    WallInfo.OwningNodes.Add(FIntPoint(x, Bounds.y0));
                    Tilemap->SetWallMetadata(Edge.EdgeCoord, WallInfo);
                }
                
                {
                    FGridFlowTilemapEdge& Edge = Tilemap->GetEdgeH(x, Bounds.y1);
                    Edge.EdgeType = EGridFlowTilemapEdgeType::Wall;
                    Edge.MarkerAngle = 0;
                    
                    FGridFlowTilemapCellWallInfo WallInfo;
                    WallInfo.OwningNodes.Add(FIntPoint(x, Bounds.y1 - 1));
                    Tilemap->SetWallMetadata(Edge.EdgeCoord, WallInfo);
                }
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::GenerateMainPath(FGridFlowTilemapNodes& TileNodes, UGridFlowTilemap* Tilemap,
                                                       const FGridFlowAbstractGraphQuery& GraphQuery) {
    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    for (const FGridFlowAbstractLink& Link : Graph->Links) {
        FGridFlowAbstractNodeState* nodeA = Graph->GetNodeState(Link.Source);
        FGridFlowAbstractNodeState* nodeB = Graph->GetNodeState(Link.Destination);
        if (!nodeA || !nodeB) continue;

        FIntPoint tileCenterA = NodeCoordToTileCoord(nodeA->GridCoord);
        FIntPoint tileCenterB = NodeCoordToTileCoord(nodeB->GridCoord);
        if (tileCenterA.X == tileCenterB.X) {
            int32 x = tileCenterA.X;
            int32 y0 = FMath::Min(tileCenterA.Y, tileCenterB.Y);
            int32 y1 = FMath::Max(tileCenterA.Y, tileCenterB.Y);
            for (int y = y0; y <= y1; y++) {
                FGridFlowTilemapCell* CellPtr = Tilemap->GetSafe(x, y);
                if (!CellPtr) continue;

                FGridFlowTilemapCell& Cell = *CellPtr;
                Cell.bMainPath = true;
                Cell.DistanceFromMainPath = 0;
            }
        }
        else if (tileCenterA.Y == tileCenterB.Y) {
            int32 y = tileCenterA.Y;
            int x0 = FMath::Min(tileCenterA.X, tileCenterB.X);
            int x1 = FMath::Max(tileCenterA.X, tileCenterB.X);
            for (int x = x0; x <= x1; x++) {
                FGridFlowTilemapCell* CellPtr = Tilemap->GetSafe(x, y);
                if (!CellPtr) continue;

                FGridFlowTilemapCell& Cell = *CellPtr;
                Cell.bMainPath = true;
                Cell.DistanceFromMainPath = 0;
            }
        }
        else {
            UE_LOG(LogCreateTilemapTask, Error, TEXT("Invalid Input"));
        }
    }

    if (Graph->Links.Num() == 0 && Graph->Nodes.Num() == 1) {
        FGridFlowAbstractNode& node = Graph->Nodes[0];
        FIntPoint tc = NodeCoordToTileCoord(node.State.GridCoord);
        FGridFlowTilemapCell& Cell = Tilemap->Get(tc.X, tc.Y);
        Cell.bMainPath = true;
        Cell.DistanceFromMainPath = 0;
    }
}

void UGridFlowTaskTilemap_Initialize::BuildCaves(FGridFlowTilemapNodes& TileNodes, UGridFlowTilemap* Tilemap,
                                                 const FGridFlowAbstractGraphQuery& GraphQuery,
                                                 const FRandomStream& Random) {
    CalculateDistanceFromMainPath(TileNodes, Tilemap, GraphQuery, {EGridFlowAbstractNodeRoomType::Cave});

    FGFCaveCellBuildTiles CaveMap;
    GenerateCaveMap(CaveMap, TileNodes, Tilemap, GraphQuery);
    BuildCaveStep_BuildRocks(CaveMap, Tilemap, Random);
    BuildCaveStep_SimulateGrowth(CaveMap, Tilemap, Random);
    BuildCaveStep_Cleanup(CaveMap, TileNodes, Tilemap, GraphQuery);
    BuildCaveStep_UpdateEdges(CaveMap, Tilemap);
}

void UGridFlowTaskTilemap_Initialize::GenerateCaveMap(FGFCaveCellBuildTiles& CaveMap, FGridFlowTilemapNodes& TileNodes,
                                                      UGridFlowTilemap* Tilemap,
                                                      const FGridFlowAbstractGraphQuery& GraphQuery) {
    CaveMap.InitializeArray2D(Tilemap->GetWidth(), Tilemap->GetHeight());

    for (const FGridFlowTilemapCell& Cell : Tilemap->GetCells()) {
        FGFCaveCellBuildTile& CaveTile = CaveMap[Cell.TileCoord];
        CaveTile.TileCoord = Cell.TileCoord;

        FGridFlowTilemapNodeInfo& TileNode = TileNodes[Cell.NodeCoord];
        FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
        CaveTile.bValid = (TileNodePtr->State.RoomType == EGridFlowAbstractNodeRoomType::Cave && TileNodePtr
                                                                                                 ->State.bActive && Cell
            .bLayoutCell);
    }
}

void UGridFlowTaskTilemap_Initialize::BuildCaveStep_BuildRocks(FGFCaveCellBuildTiles& CaveMap,
                                                               UGridFlowTilemap* Tilemap, const FRandomStream& Random) {
    for (FGFCaveCellBuildTile& CaveCell : CaveMap.GetCells()) {
        FGridFlowTilemapCell* TileCell = Tilemap->GetSafe(CaveCell.TileCoord.X, CaveCell.TileCoord.Y);
        if (!TileCell) continue;
        if (CaveCell.bValid) {
            if (CaveThickness > 0) {
                float RockProbability = FMath::Exp(-TileCell->DistanceFromMainPath / CaveThickness);
                CaveCell.bRockTile = Random.FRand() < RockProbability;
            }
            else {
                CaveCell.bRockTile = (TileCell->DistanceFromMainPath == 0);
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::BuildCaveStep_SimulateGrowth(FGFCaveCellBuildTiles& CaveMap,
                                                                   UGridFlowTilemap* Tilemap,
                                                                   const FRandomStream& Random) {
    int32 width = CaveMap.GetWidth();
    int32 height = CaveMap.GetHeight();

    for (int i = 0; i < CaveAutomataIterations; i++) {
        FGFCaveCellBuildTiles OldMap = CaveMap;

        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                int nrocks = 0;
                for (int dy = -1; dy <= 1; dy++) {
                    for (int dx = -1; dx <= 1; dx++) {
                        if (dx == 0 && dy == 0) continue;
                        int nx = x + dx;
                        int ny = y + dy;
                        if (nx < 0 || ny < 0 || nx >= width || ny >= height) continue;
                        if (OldMap[FIntPoint(nx, ny)].bRockTile) {
                            nrocks++;
                        }
                    }
                }

                if (nrocks >= CaveAutomataNeighbors) {
                    CaveMap[FIntPoint(x, y)].bRockTile = true;
                }
            }
        }

    }

    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            if (CaveMap[FIntPoint(x, y)].bValid && !CaveMap[FIntPoint(x, y)].bRockTile) {
                Tilemap->Get(x, y).CellType = EGridFlowTilemapCellType::Empty;
                Tilemap->Get(x, y).bUseCustomColor = false;
                CaveMap[FIntPoint(x, y)].bValid = false;
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::BuildCaveStep_Cleanup(FGFCaveCellBuildTiles& CaveMap,
                                                            FGridFlowTilemapNodes& TileNodes, UGridFlowTilemap* Tilemap,
                                                            const FGridFlowAbstractGraphQuery& GraphQuery) {
    int32 Width = Tilemap->GetWidth();
    int32 Height = Tilemap->GetHeight();
    TDAArray2D<bool> TraversibleCaveTiles;
    TraversibleCaveTiles.InitializeArray2D(Width, Height);

    static const int childOffsets[] = {
        -1, 0,
        1, 0,
        0, -1,
        0, 1
    };

    for (FGridFlowTilemapNodeInfo& TileNode : TileNodes.GetCells()) {
        FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
        if (!TileNodePtr) continue;
        if (TileNodePtr->State.RoomType != EGridFlowAbstractNodeRoomType::Cave) {
            // Only process the caves
            continue;
        }

        if (!TileNodePtr->State.bActive) {
            // Do not process inactive nodes
            continue;
        }

        FIntPoint tileCenter = NodeCoordToTileCoord(TileNodePtr->State.GridCoord);

        if (TraversibleCaveTiles[tileCenter]) {
            // Already processed from another adjacent node
            continue;
        }

        // Flood fill from the center of this node
        TQueue<FIntPoint> Queue;
        Queue.Enqueue(tileCenter);
        FIntPoint Front;
        while (Queue.Dequeue(Front)) {
            if (TraversibleCaveTiles[Front]) {
                // Already processed
                continue;
            }

            TraversibleCaveTiles[Front] = true;

            // Traverse the children
            for (int i = 0; i < 4; i++) {
                FIntPoint ChildCoord(
                    Front.X + childOffsets[i * 2 + 0],
                    Front.Y + childOffsets[i * 2 + 1]);

                if (ChildCoord.X >= 0 && ChildCoord.Y >= 0 && ChildCoord.X < Width && ChildCoord.Y < Height) {
                    if (CaveMap[ChildCoord].bValid) {
                        bool bVisited = TraversibleCaveTiles[ChildCoord];
                        if (!bVisited) {
                            Queue.Enqueue(ChildCoord);
                        }
                    }
                }
            }
        }
    }

    // Assign the valid traversable paths 
    for (int y = 0; y < Height; y++) {
        for (int x = 0; x < Width; x++) {
            FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
            FIntPoint NodeCoord = Cell.NodeCoord;
            FGridFlowTilemapNodeInfo& TileNode = TileNodes[NodeCoord];
            FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
            if (!TileNodePtr) continue;

            if (TileNodePtr->State.bActive && TileNodePtr->State.RoomType == EGridFlowAbstractNodeRoomType::Cave) {
                bool bValid = TraversibleCaveTiles[FIntPoint(x, y)];
                CaveMap[FIntPoint(x, y)].bValid = bValid;
                if (!bValid || !CaveMap[FIntPoint(x, y)].bRockTile) {
                    Tilemap->Get(x, y).CellType = EGridFlowTilemapCellType::Empty;
                    Tilemap->Get(x, y).bUseCustomColor = false;
                    Tilemap->Get(x, y).bLayoutCell = false;
                }
                else {
                    Tilemap->Get(x, y).bLayoutCell = true;
                }
            }
            else {
                check(CaveMap[FIntPoint(x, y)].bValid == false);
            }
        }
    }


    if (bDebugLayoutTiles) {
        for (int y = 0; y < Height; y++) {
            for (int x = 0; x < Width; x++) {
                FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
                FIntPoint Coord(x, y);
                if (CaveMap[Coord].bValid) {
                    Cell.CustomColor = FLinearColor::Green;
                    Cell.bUseCustomColor = true;
                }
                if (TraversibleCaveTiles[Coord]) {
                    //Cell.CustomColor = FLinearColor::Red;
                    //Cell.bUseCustomColor = true;
                }
            }
        }
    }
}


namespace {
    bool CanCreateEdgeToAdjacentCaveTile(UGridFlowTilemap* Tilemap, FGFCaveCellBuildTiles& CaveMap, int x, int y)
    {
        if (x < 0 || x >= Tilemap->GetWidth() || y < 0 || y >= Tilemap->GetHeight()) return true;   // this is an empty tile

        if (Tilemap->Get(x, y).CellType == EGridFlowTilemapCellType::Empty
            || Tilemap->Get(x, y).CellType == EGridFlowTilemapCellType::Custom)
        {
            return true;
        }

        const bool bCaveTile = CaveMap[FIntPoint(x, y)].bValid && CaveMap[FIntPoint(x, y)].bRockTile;
        if (bCaveTile)
        {
            // no need for an edge between two cave tiles
            return false;
        }

        // This tile is not empty and is not a cave tile
        return false;
    }

}

void UGridFlowTaskTilemap_Initialize::BuildCaveStep_UpdateEdges(FGFCaveCellBuildTiles& CaveMap, UGridFlowTilemap* Tilemap) {
    const int32 Width = Tilemap->GetWidth();
    const int32 Height = Tilemap->GetHeight();

    for (int y = 0; y < Height; y++)
    {
        for (int x = 0; x < Width; x++)
        {
            const bool bCaveTile = x < Width && y < Height && CaveMap[FIntPoint(x, y)].bValid && CaveMap[FIntPoint(x, y)].bRockTile;
            if (!bCaveTile) continue;

            const bool bCreateEdgeLeft = CanCreateEdgeToAdjacentCaveTile(Tilemap, CaveMap, x - 1, y);
            const bool bCreateEdgeRight = CanCreateEdgeToAdjacentCaveTile(Tilemap, CaveMap, x + 1, y);

            const bool bCreateEdgeBottom = CanCreateEdgeToAdjacentCaveTile(Tilemap, CaveMap, x, y - 1);
            const bool bCreateEdgeTop = CanCreateEdgeToAdjacentCaveTile(Tilemap, CaveMap, x, y + 1);

            if (bCreateEdgeLeft)
            {
                FGridFlowTilemapEdge& EdgeV = Tilemap->GetEdgeV(x, y);
                if (EdgeV.EdgeType == EGridFlowTilemapEdgeType::Empty)
                {
                    EdgeV.EdgeType = EGridFlowTilemapEdgeType::Fence;
                    EdgeV.MarkerAngle = -90;
                }
            }

            if (bCreateEdgeRight)
            {
                FGridFlowTilemapEdge& EdgeV = Tilemap->GetEdgeV(x + 1, y);
                if (EdgeV.EdgeType == EGridFlowTilemapEdgeType::Empty)
                {
                    EdgeV.EdgeType = EGridFlowTilemapEdgeType::Fence;
                    EdgeV.MarkerAngle = 90;
                }
            }

            if (bCreateEdgeBottom)
            {
                FGridFlowTilemapEdge& EdgeH = Tilemap->GetEdgeH(x, y);
                if (EdgeH.EdgeType == EGridFlowTilemapEdgeType::Empty)
                {
                    EdgeH.EdgeType = EGridFlowTilemapEdgeType::Fence;
                    EdgeH.MarkerAngle = 0;
                }
            }

            if (bCreateEdgeTop)
            {
                FGridFlowTilemapEdge& EdgeH = Tilemap->GetEdgeH(x, y + 1);
                if (EdgeH.EdgeType == EGridFlowTilemapEdgeType::Empty)
                {
                    EdgeH.EdgeType = EGridFlowTilemapEdgeType::Fence;
                    EdgeH.MarkerAngle = 180;
                }
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::BuildDoors(FGridFlowTilemapNodes& TileNodes, UGridFlowTilemap* Tilemap,
                                                 const FGridFlowAbstractGraphQuery& GraphQuery) {
    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    const bool bWallsAsTiles = (WallGenerationMethod == EGridFlowTilemapWallGenerationMethod::WallAsTiles);
    // Build the doors
    TArray<FDoorInfo> doorList;
    for (FGridFlowTilemapNodeInfo& TileNode : TileNodes.GetCells()) {
        FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
        if (!TileNodePtr || !TileNodePtr->State.bActive) continue;

        FNodeTilemapBounds b = FNodeTilemapBounds::Build(TileNode, Tilemap->GetWidth(), Tilemap->GetHeight(), bWallsAsTiles);

        FGridFlowAbstractNode* Node = TileNodePtr;
        FIntPoint nodeCoord = TileNodePtr->State.GridCoord;
        for (FGuid LinkId : Graph->GetOutgoingLinks(TileNodePtr->NodeId)) {
            FGridFlowAbstractLink* Link = Graph->FindLink(LinkId);
            if (!Link || Link->State.Type == EGridFlowAbstractLinkType::Unconnected) continue;
            FGridFlowTilemapCell* DoorCell = nullptr;

            FGridFlowAbstractNode* OtherNode = Graph->GetNode(Link->Destination);
            if (Node->State.RoomType == EGridFlowAbstractNodeRoomType::Cave && OtherNode->State.RoomType ==
                EGridFlowAbstractNodeRoomType::Cave) {
                // We don't need a door between two cave nodes
                continue;
            }

            FIntPoint otherCoord = OtherNode->State.GridCoord;
            float Angle = 0;
            bool bHorizontalEdge = true;
            if (nodeCoord.X == otherCoord.X) {
                // Vertical link
                int32 y = (nodeCoord.Y < otherCoord.Y) ? b.y1 : b.y0;
                DoorCell = Tilemap->GetSafe(b.mx, y);
                Angle = 90;
                bHorizontalEdge = true;
            }
            else if (nodeCoord.Y == otherCoord.Y) {
                // Horizontal link
                int32 x = (nodeCoord.X < otherCoord.X) ? b.x1 : b.x0;
                DoorCell = Tilemap->GetSafe(x, b.my);
                bHorizontalEdge = false;
            }

            if (DoorCell) {
                FGridFlowAbstractNode* SourceNode = GraphQuery.GetNode(Link->Source);
                FGridFlowAbstractNode* DestNode = GraphQuery.GetNode(Link->Destination);

                FGridFlowTilemapCellDoorInfo DoorMeta;
                DoorMeta.bOneWay = Link->State.Type == EGridFlowAbstractLinkType::OneWay;
                DoorMeta.NodeA = SourceNode->State.GridCoord;
                DoorMeta.NodeB = DestNode->State.GridCoord;

                // Find the correct angle
                {
                    if (DoorMeta.NodeA.Y > DoorMeta.NodeB.Y) {
                        // Pointing Up
                        Angle = 0;
                    }
                    else if (DoorMeta.NodeA.X < DoorMeta.NodeB.X) {
                        // Pointing Right
                        Angle = 90;
                    }
                    else if (DoorMeta.NodeA.Y < DoorMeta.NodeB.Y) {
                        // Pointing Down
                        Angle = 180;
                    }
                    else if (DoorMeta.NodeA.X > DoorMeta.NodeB.X) {
                        // Pointing Left
                        Angle = 270;
                    }
                }

                DoorMeta.Angle = Angle;
                int32 NumLockedItems = 0;
                for (const FGridFlowItem& Item : Link->State.Items) {
                    if (Item.ItemType == EGridFlowItemType::Lock) {
                        NumLockedItems++;
                    }
                }
                DoorMeta.bLocked = NumLockedItems > 0;

                if (bWallsAsTiles) {
                    DoorCell->CellType = EGridFlowTilemapCellType::Door;
                    Tilemap->SetDoorMetadata(FGridFlowTilemapCoord(DoorCell->TileCoord), DoorMeta);
                }
                else {
                    FGridFlowTilemapEdge& DoorEdge = bHorizontalEdge
                        ? Tilemap->GetEdgeH(DoorCell->TileCoord.X, DoorCell->TileCoord.Y)
                        : Tilemap->GetEdgeV(DoorCell->TileCoord.X, DoorCell->TileCoord.Y);
                    DoorEdge.EdgeType = EGridFlowTilemapEdgeType::Door;
                    DoorEdge.MarkerAngle = Angle;
                    Tilemap->SetDoorMetadata(FGridFlowTilemapCoord(DoorCell->TileCoord, bHorizontalEdge), DoorMeta);
                }

                FDoorInfo& DoorInfo = doorList.AddDefaulted_GetRef();
                DoorInfo.AbstractLinkId = Link->LinkId;
                DoorInfo.CellCoord = DoorCell->TileCoord;
                DoorInfo.bHorizontalDoorEdge = bHorizontalEdge;
            }
        }
    }

    // Add door items
    for (const FDoorInfo& Door : doorList) {
        FGridFlowAbstractLink* Link = Graph->FindLink(Door.AbstractLinkId);
        TArray<FGridFlowItem>& Items = Link->State.Items;
        FGridFlowItem* DoorItem = Items.Num() > 0 ? &Items[0] : nullptr;
        if (!DoorItem) continue;

        // TODO: Add metadata in the model with source/destination, one-way etc

        const FIntPoint CellCoord = Door.CellCoord;
        if (bWallsAsTiles) {
            FGridFlowTilemapCell& Cell = Tilemap->Get(CellCoord.X, CellCoord.Y);
            Cell.ItemId = DoorItem->ItemId;
            Cell.bHasItem = true;
        }
        else {
            FGridFlowTilemapEdge* DoorEdge = Door.bHorizontalDoorEdge
                ? Tilemap->GetEdgeHSafe(CellCoord.X, CellCoord.Y)
                : Tilemap->GetEdgeVSafe(CellCoord.X, CellCoord.Y);

            if (DoorEdge) {
                DoorEdge->ItemId = DoorItem->ItemId;
                DoorEdge->bHasItem = true;
            }
        }
    }
}

UGridFlowTilemap* UGridFlowTaskTilemap_Initialize::ApplyCropAndPadding(UGridFlowTilemap* OldTilemap) {
    if (OldTilemap->GetWidth() == 0 || OldTilemap->GetHeight() == 0) {
        return OldTilemap;
    }

    int x0 = 0;
    int x1 = 0;
    int y0 = 0;
    int y1 = 0;

    if (bCropTilemapToLayout) {
        bool bFoundFirstCell = false;
        for (const FGridFlowTilemapCell& Cell : OldTilemap->GetCells()) {
            bool bLayoutTile = Cell.CellType == EGridFlowTilemapCellType::Floor
                || Cell.CellType == EGridFlowTilemapCellType::Wall
                || Cell.CellType == EGridFlowTilemapCellType::Door;

            if (bLayoutTile) {
                int32 x = Cell.TileCoord.X;
                int32 y = Cell.TileCoord.Y;
                if (!bFoundFirstCell) {
                    bFoundFirstCell = true;
                    x0 = x1 = x;
                    y0 = y1 = y;
                }
                else {
                    x0 = FMath::Min(x0, x);
                    x1 = FMath::Max(x1, x);
                    y0 = FMath::Min(y0, y);
                    y1 = FMath::Max(y1, y);
                }
            }
        }
    }
    else {
        // No cropping required
        x0 = 0;
        x1 = OldTilemap->GetWidth() - 1;
        y0 = 0;
        y1 = OldTilemap->GetHeight() - 1;
    }

    int32 p = LayoutPadding;
    int32 LayoutWidth = x1 - x0 + 1;
    int32 LayoutHeight = y1 - y0 + 1;
    UGridFlowTilemap* Tilemap = NewObject<UGridFlowTilemap>(OldTilemap->GetOuter());
    Tilemap->Initialize(LayoutWidth + p * 2, LayoutHeight + p * 2);

    for (int y = 0; y < LayoutHeight; y++) {
        for (int x = 0; x < LayoutWidth; x++) {
            int32 ix = x + p;
            int32 iy = y + p;
            FIntPoint Coord(ix, iy);

            // Copy over the cell
            {
                FGridFlowTilemapCell Cell = OldTilemap->Get(x + x0, y + y0);
                Cell.TileCoord = Coord;
                Tilemap->Set(ix, iy, Cell);
            }

        }
    }

    for (int y = 0; y <= LayoutHeight; y++) {
        for (int x = 0; x <= LayoutWidth; x++) {
            int32 ix = x + p;
            int32 iy = y + p;
            FIntPoint Coord(ix, iy);
            
            // Copy over the horizontal edge
            {
                FGridFlowTilemapEdge Edge = OldTilemap->GetEdgeH(x + x0, y + y0);
                Edge.EdgeCoord = FGridFlowTilemapCoord(Coord, true);
                Tilemap->SetEdgeH(ix, iy, Edge);
            }

            // Copy over the vertical edge
            {
                FGridFlowTilemapEdge Edge = OldTilemap->GetEdgeV(x + x0, y + y0);
                Edge.EdgeCoord = FGridFlowTilemapCoord(Coord, false);
                Tilemap->SetEdgeV(ix, iy, Edge);
            }
        }
    }
    
#define TRANSLATE(Coord) ((Coord) - FIntPoint(x0, y0) + FIntPoint(p, p))

    // Update the metadata
    {
        // Fix the wall metadata coords
        for (auto& Entry : OldTilemap->GetWallMetaMap()) {
            // Fix the wall info
            FGridFlowTilemapCellWallInfo WallInfo = Entry.Value;
            for (int i = 0; i < WallInfo.OwningNodes.Num(); i++) {
                WallInfo.OwningNodes[i] = TRANSLATE(WallInfo.OwningNodes[i]);
            }

            const FGridFlowTilemapCoord& OldTileCoord = Entry.Key;
            FIntPoint NewCoordPoint = TRANSLATE(OldTileCoord.Coord);
            const FGridFlowTilemapCoord NewCoord(NewCoordPoint, OldTileCoord.bHorizontalEdge);
            Tilemap->SetWallMetadata(NewCoord, WallInfo);
        }

        // Fix the door metadata coords
        for (auto& Entry : OldTilemap->GetDoorMetaMap()) {
            FGridFlowTilemapCellDoorInfo DoorInfo = Entry.Value;
            DoorInfo.NodeA = TRANSLATE(DoorInfo.NodeA);
            DoorInfo.NodeB = TRANSLATE(DoorInfo.NodeB);

            const FGridFlowTilemapCoord& OldTileCoord = Entry.Key;
            FIntPoint NewCoordPoint = TRANSLATE(OldTileCoord.Coord);
            FGridFlowTilemapCoord NewCoord;
            NewCoord.Coord = NewCoordPoint;
            NewCoord.bIsEdgeCoord = OldTileCoord.bIsEdgeCoord;
            NewCoord.bHorizontalEdge = OldTileCoord.bHorizontalEdge;
            Tilemap->SetDoorMetadata(NewCoord, DoorInfo);
        }
    }

#undef TRANSLATE

    return Tilemap;
}

void UGridFlowTaskTilemap_Initialize::CalculateDistanceFromMainPathOnEmptyArea(UGridFlowTilemap* Tilemap) {
    int32 Width = Tilemap->GetWidth();
    int32 Height = Tilemap->GetHeight();
    TQueue<FGridFlowTilemapCell*> Queue;

    static const int ChildOffsets[] =
    {
        -1, 0,
        1, 0,
        0, -1,
        0, 1
    };

    for (FGridFlowTilemapCell& Cell : Tilemap->GetCells()) {
        if (Cell.CellType != EGridFlowTilemapCellType::Empty) {
            continue;
        }

        bool bValidStartNode = false;

        for (int i = 0; i < 4; i++) {
            int nx = Cell.TileCoord.X + ChildOffsets[i * 2 + 0];
            int ny = Cell.TileCoord.Y + ChildOffsets[i * 2 + 1];
            if (nx >= 0 && nx < Width && ny >= 0 && ny < Height) {
                FGridFlowTilemapCell& ncell = Tilemap->Get(nx, ny);
                if (ncell.CellType != EGridFlowTilemapCellType::Empty) {
                    bValidStartNode = true;
                    Cell.DistanceFromMainPath = FMath::Min(Cell.DistanceFromMainPath, ncell.DistanceFromMainPath);
                }
            }
        }

        if (bValidStartNode) {
            Queue.Enqueue(&Cell);
        }
    }


    FGridFlowTilemapCell* Cell = nullptr;
    while (Queue.Dequeue(Cell)) {
        int32 ndist = Cell->DistanceFromMainPath + 1;

        for (int i = 0; i < 4; i++) {
            int nx = Cell->TileCoord.X + ChildOffsets[i * 2 + 0];
            int ny = Cell->TileCoord.Y + ChildOffsets[i * 2 + 1];
            if (nx >= 0 && nx < Width && ny >= 0 && ny < Height) {
                FGridFlowTilemapCell& ncell = Tilemap->Get(nx, ny);

                if (ncell.CellType == EGridFlowTilemapCellType::Empty) {
                    if (ndist < ncell.DistanceFromMainPath) {
                        ncell.DistanceFromMainPath = ndist;
                        Queue.Enqueue(&ncell);

                    }
                }
            }
        }
    }
}

void UGridFlowTaskTilemap_Initialize::RasterizeBaseCaveBlocks(FGridFlowTilemapNodes& TileNodes,
                                                              UGridFlowTilemap* Tilemap,
                                                              const FGridFlowAbstractGraphQuery& GraphQuery) {
    UGridFlowAbstractGraph* Graph = GraphQuery.GetGraph();
    for (FGridFlowTilemapNodeInfo& TileNode : TileNodes.GetCells()) {
        FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
        if (!TileNodePtr || !TileNodePtr->State.bActive) continue;

        const bool bWallsAsTiles = (WallGenerationMethod == EGridFlowTilemapWallGenerationMethod::WallAsTiles);
        FNodeTilemapBounds b = FNodeTilemapBounds::Build(TileNode, Tilemap->GetWidth(), Tilemap->GetHeight(), bWallsAsTiles);
        if (TileNodePtr->State.RoomType != EGridFlowAbstractNodeRoomType::Cave) {
            // Only build the caves in this pass
            continue;
        }

        FGridFlowAbstractNode* CaveNode = TileNodePtr;
        const bool bBlockLeft = ShouldBlockCaveBoundary(Graph, CaveNode, -1, 0);
        const bool bBlockRight = ShouldBlockCaveBoundary(Graph, CaveNode, 1, 0);
        const bool bBlockTop = ShouldBlockCaveBoundary(Graph, CaveNode, 0, -1);
        const bool bBlockBottom = ShouldBlockCaveBoundary(Graph, CaveNode, 0, 1);
        for (int y = b.y0; y <= b.y1; y++) {
            for (int x = b.x0; x <= b.x1; x++) {
                FGridFlowTilemapCell* CellPtr = Tilemap->GetSafe(x, y);
                if (!CellPtr) continue;
                FGridFlowTilemapCell& Cell = *CellPtr;

                if (Cell.CellType == EGridFlowTilemapCellType::Empty) {
                    bool bMakeFloor = true;
                    if (bWallsAsTiles) {
                        if (bBlockLeft && x == b.x0) bMakeFloor = false;
                        if (bBlockRight && x == b.x1) bMakeFloor = false;
                        if (bBlockTop && y == b.y0) bMakeFloor = false;
                        if (bBlockBottom && y == b.y1) bMakeFloor = false;
                    }
                    else {
                        if (bBlockRight && x == b.x1) bMakeFloor = false;
                        if (bBlockBottom && y == b.y1) bMakeFloor = false;
                    }

                    if (bMakeFloor) {
                        Cell.NodeCoord = TileNodePtr->State.GridCoord;
                        Cell.CellType = EGridFlowTilemapCellType::Floor;
                        Cell.bUseCustomColor = true;
                        FLinearColor nodeColor = TileNodePtr->State.Color;
                        Cell.CustomColor = FColorUtils::BrightenColor(nodeColor, RoomColorSaturation,
                                                                      RoomColorBrightness);
                    }

                    Cell.bLayoutCell = bMakeFloor;
                }
            }
        }
    }
}

bool UGridFlowTaskTilemap_Initialize::ShouldBlockCaveBoundary(UGridFlowAbstractGraph* Graph,
                                                              FGridFlowAbstractNode* CaveNode, int dx, int dy) {
    FIntPoint Coord = CaveNode->State.GridCoord;
    FIntPoint OtherCoord = Coord + FIntPoint(dx, dy);
    FGridFlowAbstractNode* OtherNode = nullptr;
    for (FGridFlowAbstractNode& Node : Graph->Nodes) {
        if (Node.State.GridCoord == OtherCoord) {
            OtherNode = &Node;
            break;
        }
    }

    if (!OtherNode || !OtherNode->State.bActive) {
        // a node in this location doesn't exist
        return false;
    }

    // Check if we have a link between these nodes. If we don't, then block it
    FGridFlowAbstractLink* Link = Graph->GetLink(CaveNode->NodeId, OtherNode->NodeId);
    if (!Link) {
        // No link exists. we should block this
        return true;
    }

    // We have a link to the other node.   block only if they it is a non-cave nodes
    return OtherNode->State.RoomType != EGridFlowAbstractNodeRoomType::Cave;
}

FIntPoint UGridFlowTaskTilemap_Initialize::NodeCoordToTileCoord(const FIntPoint& NodeCoord) {
    FIntPoint TileCoord = ScaleIntPoint(NodeCoord, TilemapSizePerNode);
    TileCoord += TilemapSizePerNode / 2;
    return TileCoord;
}

void UGridFlowTaskTilemap_Initialize::CalculateDistanceFromMainPath(FGridFlowTilemapNodes& TileNodes,
                                                                    UGridFlowTilemap* Tilemap,
                                                                    const FGridFlowAbstractGraphQuery& GraphQuery,
                                                                    const TArray<EGridFlowAbstractNodeRoomType>
                                                                    AllowedRoomTypes) {
    int32 Width = Tilemap->GetWidth();
    int32 Height = Tilemap->GetHeight();
    TQueue<FGridFlowTilemapCell*> Queue;

    for (FGridFlowTilemapCell& Cell : Tilemap->GetCells()) {
        FGridFlowTilemapNodeInfo& TileNode = TileNodes[Cell.NodeCoord];
        FGridFlowAbstractNode* TileNodePtr = GraphQuery.GetNode(TileNode.AbstractNodeId);
        if (!TileNodePtr) continue;

        EGridFlowAbstractNodeRoomType RoomType = TileNodePtr->State.RoomType;
        if (!AllowedRoomTypes.Contains(RoomType)) {
            continue;
        }

        if (Cell.bMainPath) {
            Queue.Enqueue(&Cell);
        }
    }

    static int ChildOffsets[] = {
        -1, 0,
        1, 0,
        0, -1,
        0, 1
    };

    FGridFlowTilemapCell* Tile = nullptr;
    while (Queue.Dequeue(Tile)) {
        // Traverse the children
        int32 ChildDistance = Tile->DistanceFromMainPath + 1;
        for (int i = 0; i < 4; i++) {
            int nx = Tile->TileCoord.X + ChildOffsets[i * 2 + 0];
            int ny = Tile->TileCoord.Y + ChildOffsets[i * 2 + 1];
            if (nx >= 0 && nx < Width && ny >= 0 && ny < Height) {
                FGridFlowTilemapCell& NCell = Tilemap->Get(nx, ny);
                FGridFlowTilemapNodeInfo& NTileNode = TileNodes[NCell.NodeCoord];
                FGridFlowAbstractNode* NTileNodePtr = GraphQuery.GetNode(NTileNode.AbstractNodeId);
                EGridFlowAbstractNodeRoomType NRoomType = NTileNodePtr->State.RoomType;
                if (!AllowedRoomTypes.Contains(NRoomType)) {
                    continue;
                }

                if (ChildDistance < NCell.DistanceFromMainPath) {
                    NCell.DistanceFromMainPath = ChildDistance;
                    Queue.Enqueue(&NCell);
                }
            }
        }
    }
}


bool UGridFlowTaskTilemap_Initialize::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_SIZE(TilemapSizePerNode);
    GRIDFLOWATTR_GET_SIZE(PerturbAmount);
    GRIDFLOWATTR_GET_INT(CorridorLaneWidth);
    GRIDFLOWATTR_GET_INT(LayoutPadding);
    GRIDFLOWATTR_GET_BOOL(bCropTilemapToLayout);
    GRIDFLOWATTR_GET_INT(CaveAutomataNeighbors);
    GRIDFLOWATTR_GET_INT(CaveAutomataIterations);
    GRIDFLOWATTR_GET_FLOAT(CaveThickness);

    return false;
}

bool UGridFlowTaskTilemap_Initialize::SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_SIZEI(TilemapSizePerNode);
    GRIDFLOWATTR_SET_SIZEI(PerturbAmount);
    GRIDFLOWATTR_SET_INT(CorridorLaneWidth);
    GRIDFLOWATTR_SET_INT(LayoutPadding);
    GRIDFLOWATTR_SET_BOOL(bCropTilemapToLayout);
    GRIDFLOWATTR_SET_INT(CaveAutomataNeighbors);
    GRIDFLOWATTR_SET_INT(CaveAutomataIterations);
    GRIDFLOWATTR_SET_FLOAT(CaveThickness);

    return false;
}

bool UGridFlowTaskTilemap_Initialize::SetParameterSerialized(const FString& InParameterName,
                                                             const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_SIZEI(TilemapSizePerNode);
    GRIDFLOWATTR_SET_PARSE_SIZEI(PerturbAmount);
    GRIDFLOWATTR_SET_PARSE_INT(CorridorLaneWidth);
    GRIDFLOWATTR_SET_PARSE_INT(LayoutPadding);
    GRIDFLOWATTR_SET_PARSE_BOOL(bCropTilemapToLayout);
    GRIDFLOWATTR_SET_PARSE_INT(CaveAutomataNeighbors);
    GRIDFLOWATTR_SET_PARSE_INT(CaveAutomataIterations);
    GRIDFLOWATTR_SET_PARSE_FLOAT(CaveThickness);

    return false;
}
