//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Tilemap/GridFlowTaskTilemap_Merge.h"

#include "Frameworks/GridFlow/Tilemap/GridFlowTilemap.h"

void UGridFlowTaskTilemap_Merge::Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) {
    if (Input.IncomingNodeOutputs.Num() == 0) {
        Output.ErrorMessage = "Missing Input";
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

    TArray<UGridFlowTilemap*> IncomingTilemaps;
    for (const FGridFlowExecutionOutput& IncomingNodeOutput : Input.IncomingNodeOutputs) {
        if (IncomingNodeOutput.State->Tilemap) {
            IncomingTilemaps.Add(IncomingNodeOutput.State->Tilemap);
        }
    }

    UGridFlowAbstractGraph* Graph = Output.State->AbstractGraph;
    UGridFlowTilemap* Tilemap = Output.State->Tilemap;

    for (int y = 0; y < Tilemap->GetHeight(); y++) {
        for (int x = 0; x < Tilemap->GetWidth(); x++) {
            int32 BestWeight = 0;
            FGridFlowTilemapCell* BestCell = nullptr;
            TArray<FGridFlowTilemapCellOverlay*> IncomingOverlays;
            for (UGridFlowTilemap* IncomingTilemap : IncomingTilemaps) {
                int32 Weight = 0;
                FGridFlowTilemapCell& IncomingCell = IncomingTilemap->Get(x, y);
                if (IncomingCell.CellType == EGridFlowTilemapCellType::Empty) {
                    Weight = 1;
                }
                else if (IncomingCell.CellType == EGridFlowTilemapCellType::Custom) {
                    Weight = 2;
                }
                else {
                    Weight = 3;
                }

                if (IncomingCell.bHasOverlay) {
                    IncomingOverlays.Add(&IncomingCell.Overlay);
                }

                bool bUseResult = false;
                if (Weight > BestWeight) {
                    bUseResult = true;
                }
                else if (Weight == BestWeight) {
                    if (BestCell && IncomingCell.Height > BestCell->Height) {
                        bUseResult = true;
                    }
                }

                if (bUseResult) {
                    BestCell = &IncomingCell;
                    BestWeight = Weight;
                }
            }

            FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
            if (!BestCell) {
                Cell.CellType = EGridFlowTilemapCellType::Empty;
                continue;
            }

            Cell = *BestCell;

            FGridFlowTilemapCellOverlay* BestOverlay = nullptr;
            float BestOverlayWeight = 0.0f;
            for (FGridFlowTilemapCellOverlay* IncomingOverlay : IncomingOverlays) {
                bool bValid = Cell.Height >= IncomingOverlay->MergeConfig.MinHeight
                    && Cell.Height <= IncomingOverlay->MergeConfig.MaxHeight;

                if (!bValid) continue;

                if (!BestOverlay || IncomingOverlay->NoiseValue > BestOverlayWeight) {
                    BestOverlay = IncomingOverlay;
                    BestOverlayWeight = IncomingOverlay->NoiseValue;
                }

            }

            if (BestOverlay) {
                Cell.bHasOverlay = true;
                Cell.Overlay = *BestOverlay;
            }

            if (Cell.CellType == EGridFlowTilemapCellType::Wall && Cell.bHasOverlay) {
                EGridFlowTilemapCellOverlayMergeWallOverlayRule WallOverlayRule = Cell
                                                                                  .Overlay.MergeConfig.WallOverlayRule;
                if (WallOverlayRule == EGridFlowTilemapCellOverlayMergeWallOverlayRule::KeepOverlayRemoveWall) {
                    Cell.CellType = EGridFlowTilemapCellType::Floor;
                    Cell.bUseCustomColor = true;
                }
                else if (WallOverlayRule == EGridFlowTilemapCellOverlayMergeWallOverlayRule::KeepWallRemoveOverlay) {
                    Cell.bHasOverlay = false;
                }
            }
        }
    }

    
    // Merge the edges
    for (int y = 0; y <= Tilemap->GetHeight(); y++) {
        for (int x = 0; x <= Tilemap->GetWidth(); x++) {
            
            const FGridFlowTilemapEdge* BestEdgeH = nullptr;
            const FGridFlowTilemapEdge* BestEdgeV = nullptr;
            for (UGridFlowTilemap* IncomingTilemap : IncomingTilemaps) {
                {
                    const FGridFlowTilemapEdge& IncomingEdgeH = IncomingTilemap->GetEdgeH(x, y);
                    if (IncomingEdgeH.EdgeType != EGridFlowTilemapEdgeType::Empty) {
                        BestEdgeH = &IncomingEdgeH;
                    }
                }
                {
                    FGridFlowTilemapEdge& IncomingEdgeV = IncomingTilemap->GetEdgeV(x, y);
                    if (IncomingEdgeV.EdgeType != EGridFlowTilemapEdgeType::Empty) {
                        BestEdgeV = &IncomingEdgeV;
                    }
                }
            }
            if (BestEdgeH != nullptr) {
                Tilemap->SetEdgeH(x, y, *BestEdgeH);
            }
            if (BestEdgeV != nullptr) {
                Tilemap->SetEdgeV(x, y, *BestEdgeV);
            }
        }
    }
    
    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}
