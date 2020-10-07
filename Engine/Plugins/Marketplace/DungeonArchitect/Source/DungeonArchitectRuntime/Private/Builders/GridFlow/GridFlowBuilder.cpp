//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/GridFlow/GridFlowBuilder.h"

#include "Builders/GridFlow/GridFlowConfig.h"
#include "Builders/GridFlow/GridFlowModel.h"
#include "Builders/GridFlow/GridFlowQuery.h"
#include "Builders/GridFlow/GridFlowSelectorLogic.h"
#include "Builders/GridFlow/GridFlowToolData.h"
#include "Builders/GridFlow/GridFlowTransformLogic.h"
#include "Core/Dungeon.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractGraph.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecGraphScript.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskStructs.h"
#include "Frameworks/GridFlow/Processor/GridFlowProcessor.h"
#include "Frameworks/GridFlow/Tilemap/GridFlowTilemap.h"

#include "Components/BrushComponent.h"
#include "DrawDebugHelpers.h"
#include "EngineUtils.h"
#include <stack>

DEFINE_LOG_CATEGORY(GridFlowBuilderLog);

namespace GridFlowConstants {
    const FString MARKER_GROUND = "Ground";
    const FString MARKER_WALL = "Wall";
    const FString MARKER_WALL_L = "WallL";
    const FString MARKER_WALL_T = "WallT";
    const FString MARKER_WALL_X = "WallX";
    const FString MARKER_DOOR = "Door";
    const FString MARKER_DOOR_ONEWAY = "DoorOneWay";
    const FString MARKER_CAVE_FENCE = "CaveFence";
    const FString MARKER_CAVE_FENCE_SEPARATOR = "CaveFenceSeparator";

    const FString MARKER_WALL_SEPARATOR = "WallSeparator";
    const FString MARKER_FENCE = "Fence";
    const FString MARKER_FENCE_SEPARATOR = "FenceSeparator";
}

void UGridFlowBuilder::BuildDungeonImpl(UWorld* World) {
    GridFlowModel = Cast<UGridFlowModel>(model);
    GridFlowConfig = Cast<UGridFlowConfig>(config);
    GridFlowQuery = Cast<UGridFlowQuery>(query);
    PropSockets.Reset();

    if (!GridFlowModel) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Invalid dungeon model provided to the grid flow builder"));
        return;
    }

    if (!GridFlowConfig) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Invalid dungeon config provided to the grid flow builder"));
        return;
    }

    if (!ExecuteGraph()) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Failed to execute grid flow graph"));
    }
}

bool UGridFlowBuilder::ExecuteGraph() {
    GridFlowModel->AbstractGraph = nullptr;
    GridFlowModel->Tilemap = nullptr;

    UGridFlowAsset* GridFlowAsset = GridFlowConfig->GridFlow.LoadSynchronous();

    if (!GridFlowAsset) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Missing Grid Flow graph"));
        return false;
    }

    if (!GridFlowAsset->ExecScript) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Invalid Grid Flow graph state. Please resave in editor"));
        return false;
    }

    FGridFlowProcessor GridFlowProcessor;
    const int32 MAX_RETRIES = FMath::Max(1, GridFlowConfig->MaxRetries);
    int32 NumTries = 0;
    EGridFlowTaskExecutionResult ExecResult = EGridFlowTaskExecutionResult::FailHalt;
    while (NumTries < MAX_RETRIES) {
        FGridFlowProcessorSettings GridFlowProcessorSettings;
        GridFlowProcessorSettings.AttributeList = AttributeList;
        GridFlowProcessorSettings.SerializedAttributeList = GridFlowConfig->ParameterOverrides;
        ExecResult = GridFlowProcessor.Process(GridFlowAsset->ExecScript, random, GridFlowProcessorSettings);
        NumTries++;
        if (ExecResult == EGridFlowTaskExecutionResult::Success || ExecResult == EGridFlowTaskExecutionResult::FailHalt
        ) {
            break;
        }
    }

    if (ExecResult != EGridFlowTaskExecutionResult::Success) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Failed to generate grid flow graph"));
        return false;
    }

    if (!GridFlowAsset->ExecScript->ResultNode) {
        UE_LOG(GridFlowBuilderLog, Error,
               TEXT(
                   "Cannot find result node in the grid flow exec graph. Please resave the grid flow asset in the editor"
               ));
        return false;
    }

    FGuid ResultNodeId = GridFlowAsset->ExecScript->ResultNode->NodeId;
    if (GridFlowProcessor.GetNodeExecStage(ResultNodeId) != EGridFlowTaskExecutionStage::Executed) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Grid Flow Graph execution failed"));
        return false;
    }

    FGridFlowExecutionOutput ResultNodeState;
    GridFlowProcessor.GetNodeState(ResultNodeId, ResultNodeState);
    if (ResultNodeState.ExecutionResult != EGridFlowTaskExecutionResult::Success) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Grid Flow Result node execution did not succeed"));
        return false;
    }

    // Save a copy in the model
    {
        GridFlowModel->AbstractGraph = NewObject<UGridFlowAbstractGraph>(
            GridFlowModel, "AbstractGraph", RF_NoFlags, ResultNodeState.State->AbstractGraph);
        GridFlowModel->Tilemap = NewObject<UGridFlowTilemap>(GridFlowModel, "Tilemap", RF_NoFlags,
                                                             ResultNodeState.State->Tilemap);
    }
    return true;
}

namespace {
    bool IsWallOnOffset(UGridFlowTilemap* Tilemap, const FGridFlowTilemapCell& Cell, int32 dx, int32 dy) {
        FGridFlowTilemapCell* NCell = Tilemap->GetSafe(Cell.TileCoord.X + dx, Cell.TileCoord.Y + dy);
        if (!NCell) return false;
        return NCell->CellType == EGridFlowTilemapCellType::Wall || NCell->CellType == EGridFlowTilemapCellType::Door;
    }

    bool IsLayoutTile(UGridFlowTilemap* Tilemap, const FGridFlowTilemapCell& Cell, int32 dx, int32 dy) {
        FGridFlowTilemapCell* NCell = Tilemap->GetSafe(Cell.TileCoord.X + dx, Cell.TileCoord.Y + dy);
        return NCell ? NCell->bLayoutCell : false;
    }

}

void UGridFlowBuilder::EmitDungeonMarkers_Implementation() {
    Super::EmitDungeonMarkers_Implementation();

    GridFlowModel = Cast<UGridFlowModel>(model);
    GridFlowConfig = Cast<UGridFlowConfig>(config);

    const FVector& GridSize = GridFlowConfig->GridSize;
    UWorld* World = Dungeon ? Dungeon->GetWorld() : nullptr;
    FTransform DungeonTransform = Dungeon ? Dungeon->GetActorTransform() : FTransform::Identity;
    ClearSockets();

    UGridFlowAbstractGraph* AbstractGraph = GridFlowModel->AbstractGraph;
    UGridFlowTilemap* Tilemap = GridFlowModel->Tilemap;

    if (!AbstractGraph || !Tilemap) {
        UE_LOG(GridFlowBuilderLog, Error, TEXT("Invalid grid flow model state. Cannot build grid flow dungeon"));
        return;
    }

    int32 Width = Tilemap->GetWidth();
    int32 Height = Tilemap->GetHeight();

    int32 OffsetIdxX = 0;
    int32 OffsetIdxY = 0;
    if (GridFlowConfig->bAlignDungeonAtCenter) {
        OffsetIdxX = Width / 2;
        OffsetIdxY = Height / 2;
    }

    GridFlowModel->BuildTileOffset = FIntPoint(OffsetIdxX, OffsetIdxY);

    TMap<FGuid, FGridFlowItem> Items;
    {
        TArray<FGridFlowItem> ItemArray;
        GridFlowModel->AbstractGraph->GetAllItemsCopy(ItemArray);
        for (const FGridFlowItem& Item : ItemArray) {
            FGridFlowItem& ItemRef = Items.FindOrAdd(Item.ItemId);
            ItemRef = Item;
        }
    }

    FVector TileExtent = GridSize * 0.5f;
    TileExtent.Z = 0;
    for (int32 y = 0; y < Height; y++) {
        for (int32 x = 0; x < Width; x++) {
            bool bEmitFloor = false;
            const FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
            if (Cell.CellType != EGridFlowTilemapCellType::Empty) {
                FString MarkerName;
                float Angle = 0;

                if (Cell.CellType == EGridFlowTilemapCellType::Floor) {
                    bEmitFloor = true;
                }
                else if (Cell.CellType == EGridFlowTilemapCellType::Door) {
                    bEmitFloor = true;
                    MarkerName = GridFlowConstants::MARKER_DOOR;

                    FGridFlowTilemapCellDoorInfo DoorInfo;
                    if (Tilemap->GetDoorMeta(FGridFlowTilemapCoord(Cell.TileCoord), DoorInfo)) {
                        if (DoorInfo.bOneWay) {
                            MarkerName = GridFlowConstants::MARKER_DOOR_ONEWAY;
                        }
                        else if (DoorInfo.bLocked) {
                            // Remove the door marker. This will be replaced with the lock marker
                            MarkerName = "";
                        }
                        Angle = DoorInfo.Angle;
                    }
                }
                else if (Cell.CellType == EGridFlowTilemapCellType::Custom) {
                    MarkerName = Cell.CustomCellInfo.MarkerName;
                }
                else if (Cell.CellType == EGridFlowTilemapCellType::Wall) {
                    MarkerName = GridFlowConstants::MARKER_WALL;
                    bool bLeft = IsWallOnOffset(Tilemap, Cell, -1, 0);
                    bool bRight = IsWallOnOffset(Tilemap, Cell, 1, 0);
                    bool bTop = IsWallOnOffset(Tilemap, Cell, 0, -1);
                    bool bBottom = IsWallOnOffset(Tilemap, Cell, 0, 1);

                    int32 NWallCount = 0;
                    if (bLeft) NWallCount++;
                    if (bRight) NWallCount++;
                    if (bTop) NWallCount++;
                    if (bBottom) NWallCount++;

                    if (NWallCount == 4) {
                        MarkerName = GridFlowConstants::MARKER_WALL_X;
                        Angle = 0;
                    }
                    else if (NWallCount == 3) {
                        MarkerName = GridFlowConstants::MARKER_WALL_T;
                        if (!bTop) Angle = 0;
                        else if (!bRight) Angle = 90;
                        else if (!bBottom) Angle = 180;
                        else if (!bLeft) Angle = 270;
                    }
                    else if (NWallCount == 2) {
                        if (bRight && bBottom) {
                            MarkerName = GridFlowConstants::MARKER_WALL_L;
                            Angle = 0;
                        }
                        else if (bBottom && bLeft) {
                            MarkerName = GridFlowConstants::MARKER_WALL_L;
                            Angle = 90;
                        }
                        else if (bLeft && bTop) {
                            MarkerName = GridFlowConstants::MARKER_WALL_L;
                            Angle = 180;
                        }
                        else if (bTop && bRight) {
                            MarkerName = GridFlowConstants::MARKER_WALL_L;
                            Angle = 270;
                        }
                        else if (bTop && bBottom) {
                            Angle = 90;
                        }
                    }
                }

                int32 TileX = x - OffsetIdxX;
                int32 TileY = y - OffsetIdxY;
                int32 TileZ = Cell.Height;
                FVector TileCenter = FVector(TileX + 0.5f, TileY + 0.5f, TileZ) * GridSize;
                if (MarkerName.Len() > 0) {
                    EmitMarkerAt(TileCenter, MarkerName, Angle);
                }

                if (bEmitFloor) {
                    EmitMarkerAt(TileCenter, GridFlowConstants::MARKER_GROUND, Angle);
                }

                if (Cell.CellType != EGridFlowTilemapCellType::Empty && Cell.bHasOverlay) {
                    EmitMarkerAt(TileCenter, Cell.Overlay.MarkerName, Angle);
                }

                if (Cell.bHasItem) {
                    FGridFlowItem* Item = Items.Find(Cell.ItemId);
                    if (Item) {
                        TSharedPtr<FGridFlowBuilderMarkerUserData> ItemMetaData = MakeShareable(
                            new FGridFlowBuilderMarkerUserData);
                        ItemMetaData->TileCoord = Cell.TileCoord;
                        ItemMetaData->bIsItem = true;
                        ItemMetaData->Item = *Item;
                        EmitMarkerAt(TileCenter, Item->MarkerName, Angle, ItemMetaData);
                    }
                }
            }
        }
    }

    TSet<FIntPoint> WallSeparators;
    TSet<FIntPoint> FenceSeparators;
    for (int32 y = 0; y <= Height; y++) {
        for (int32 x = 0; x <= Width; x++) {
            const int32 TileX = x - OffsetIdxX;
            const int32 TileY = y - OffsetIdxY;
            const FGridFlowTilemapEdge* EdgeH = Tilemap->GetEdgeHSafe(x, y);
            if (EdgeH) {
                EmitEdgeMarker(*EdgeH, FVector(TileX, TileY, EdgeH->HeightCoord), GridSize, Tilemap);
                if (EdgeH->EdgeType == EGridFlowTilemapEdgeType::Wall) {
                    WallSeparators.Add(FIntPoint(x, y));
                    WallSeparators.Add(FIntPoint(x + 1, y));
                }
                if (EdgeH->EdgeType == EGridFlowTilemapEdgeType::Fence) {
                    FenceSeparators.Add(FIntPoint(x, y));
                    FenceSeparators.Add(FIntPoint(x + 1, y));
                }
            }

            const FGridFlowTilemapEdge* EdgeV = Tilemap->GetEdgeVSafe(x, y);
            if (EdgeV) {
                EmitEdgeMarker(*EdgeV, FVector(TileX, TileY, EdgeV->HeightCoord), GridSize, Tilemap);
                if (EdgeV->EdgeType == EGridFlowTilemapEdgeType::Wall) {
                    WallSeparators.Add(FIntPoint(x, y));
                    WallSeparators.Add(FIntPoint(x, y + 1));
                }
                if (EdgeV->EdgeType == EGridFlowTilemapEdgeType::Fence) {
                    FenceSeparators.Add(FIntPoint(x, y));
                    FenceSeparators.Add(FIntPoint(x, y + 1));
                }
            }
        }
    }

    FIntPoint BaseOffset = FIntPoint(-OffsetIdxX, -OffsetIdxY);
    const float TileZ = 0;
    for (const FIntPoint& FenceSeparator : FenceSeparators) {
        FIntPoint Coord = FenceSeparator + BaseOffset;
        FVector Location = FVector(Coord.X, Coord.Y, TileZ) * GridSize;
        EmitMarkerAt(Location, GridFlowConstants::MARKER_FENCE_SEPARATOR, 0);

        // Adding this for legacy purpose.  This will be removed in the future
        EmitMarkerAt(Location, GridFlowConstants::MARKER_CAVE_FENCE_SEPARATOR, 0);
    }
    
    for (const FIntPoint& WallSeparator : WallSeparators) {
        FIntPoint Coord = WallSeparator + BaseOffset;
        FVector Location = FVector(Coord.X, Coord.Y, TileZ) * GridSize;
        EmitMarkerAt(Location, GridFlowConstants::MARKER_WALL_SEPARATOR, 0);
    }

    /*
    // Build a map of room type for each tile
    TMap<FIntPoint, EGridFlowAbstractNodeRoomType> RoomTypeByTileCoord;
    {
        TMap<FIntPoint, EGridFlowAbstractNodeRoomType> RoomTypeByNodeCoord;
        for (const FGridFlowAbstractNode& Node : AbstractGraph->Nodes) {
            EGridFlowAbstractNodeRoomType& RoomTypeRef = RoomTypeByNodeCoord.FindOrAdd(Node.State.GridCoord);
            RoomTypeRef = Node.State.RoomType;
        }

        for (int32 y = 0; y < Height; y++) {
            for (int32 x = 0; x < Width; x++) {
                const FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
                EGridFlowAbstractNodeRoomType* SearchResult = RoomTypeByNodeCoord.Find(Cell.NodeCoord);
                EGridFlowAbstractNodeRoomType RoomType = SearchResult
                                                             ? *SearchResult
                                                             : EGridFlowAbstractNodeRoomType::Unknown;
                RoomTypeByTileCoord.Add(FIntPoint(x, y), RoomType);
            }
        }
    }

    TSet<FIntVector4> WallH;
    TSet<FIntVector4> WallV;
    TSet<FIntVector4> WallSep;
    for (int32 y = 0; y < Height; y++) {
        for (int32 x = 0; x < Width; x++) {
            const FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
            FIntPoint TileCoord(x, y);
            EGridFlowAbstractNodeRoomType RoomType = RoomTypeByTileCoord[TileCoord];
            if (RoomType == EGridFlowAbstractNodeRoomType::Cave && Cell.CellType == EGridFlowTilemapCellType::Floor) {
                bool bCreateLeft = !IsLayoutTile(Tilemap, Cell, -1, 0);
                bool bCreateRight = !IsLayoutTile(Tilemap, Cell, 1, 0);
                bool bCreateTop = !IsLayoutTile(Tilemap, Cell, 0, -1);
                bool bCreateBottom = !IsLayoutTile(Tilemap, Cell, 0, 1);
                const int32 z = Cell.Height;
                if (bCreateLeft) {
                    int Angle = 270;
                    WallV.Add(FIntVector4(x, y, z, Angle));
                    WallSep.Add(FIntVector4(x, y, z, Angle));
                    WallSep.Add(FIntVector4(x, y + 1, z, Angle));
                }
                if (bCreateRight) {
                    int Angle = 90;
                    WallV.Add(FIntVector4(x + 1, y, z, Angle));
                    WallSep.Add(FIntVector4(x + 1, y, z, Angle));
                    WallSep.Add(FIntVector4(x + 1, y + 1, z, Angle));
                }
                if (bCreateTop) {
                    int Angle = 0;
                    WallH.Add(FIntVector4(x, y, z, Angle));
                    WallSep.Add(FIntVector4(x, y, z, Angle));
                    WallSep.Add(FIntVector4(x + 1, y, z, Angle));
                }
                if (bCreateBottom) {
                    int Angle = 180;
                    WallH.Add(FIntVector4(x, y + 1, z, Angle));
                    WallSep.Add(FIntVector4(x, y + 1, z, Angle));
                    WallSep.Add(FIntVector4(x + 1, y + 1, z, Angle));
                }
            }
        }
    }

    for (const FIntVector4& PWallH : WallH) {
        float Angle = PWallH.W;
        int32 TileX = PWallH.X - OffsetIdxX;
        int32 TileY = PWallH.Y - OffsetIdxY;
        FVector TileCenter = FVector(TileX + 0.5f, TileY, PWallH.Z) * GridSize;
        EmitMarkerAt(TileCenter, GridFlowConstants::MARKER_CAVE_FENCE, Angle);
    }

    for (const FIntVector4& PWallV : WallV) {
        float Angle = PWallV.W;
        int32 TileX = PWallV.X - OffsetIdxX;
        int32 TileY = PWallV.Y - OffsetIdxY;
        FVector TileCenter = FVector(TileX, TileY + 0.5f, PWallV.Z) * GridSize;
        EmitMarkerAt(TileCenter, GridFlowConstants::MARKER_CAVE_FENCE, Angle);
    }

    for (const FIntVector4& PWallSep : WallSep) {
        float Angle = PWallSep.W;
        int32 TileX = PWallSep.X - OffsetIdxX;
        int32 TileY = PWallSep.Y - OffsetIdxY;
        FVector TileCenter = FVector(TileX, TileY, PWallSep.Z) * GridSize;
        EmitMarkerAt(TileCenter, GridFlowConstants::MARKER_CAVE_FENCE_SEPARATOR, Angle);
    }
    */
}

void UGridFlowBuilder::EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, float Angle,
                                    TSharedPtr<class IDungeonMarkerUserData> InUserData) {
    FQuat Rotation = FQuat::MakeFromEuler(FVector(0, 0, Angle));
    EmitMarkerAt(WorldLocation, MarkerName, Rotation, InUserData);
}

void UGridFlowBuilder::EmitEdgeMarker(const FGridFlowTilemapEdge& Edge, const FVector& TileCoord, const FVector& GridSize,
                                      UGridFlowTilemap* Tilemap) {
    check(Edge.EdgeCoord.bIsEdgeCoord);
    
    if (Edge.EdgeType == EGridFlowTilemapEdgeType::Empty) {
        return;
    }

    FVector Location = FVector(TileCoord.X, TileCoord.Y, TileCoord.Z);
    Location += Edge.EdgeCoord.bHorizontalEdge ? FVector(0.5f, 0, 0) : FVector(0, 0.5f, 0);
    Location *= GridSize;
    
    if (Edge.EdgeType == EGridFlowTilemapEdgeType::Wall) {
        EmitMarkerAt(Location, GridFlowConstants::MARKER_WALL, Edge.MarkerAngle);
    }
    else if (Edge.EdgeType == EGridFlowTilemapEdgeType::Door) {
        FGridFlowTilemapCellDoorInfo DoorMeta;
        if (Tilemap->GetDoorMeta(Edge.EdgeCoord, DoorMeta)) {
            const FString MarkerName = DoorMeta.bOneWay ? GridFlowConstants::MARKER_DOOR_ONEWAY : GridFlowConstants::MARKER_DOOR;
            EmitMarkerAt(Location, MarkerName, DoorMeta.Angle);
        }
    }
    else if (Edge.EdgeType == EGridFlowTilemapEdgeType::Fence) {
        EmitMarkerAt(Location, GridFlowConstants::MARKER_CAVE_FENCE, Edge.MarkerAngle);
        EmitMarkerAt(Location, GridFlowConstants::MARKER_FENCE, Edge.MarkerAngle);
    }
}

void UGridFlowBuilder::EmitMarkerAt(const FVector& WorldLocation, const FString& MarkerName, const FQuat& Rotation,
                                    TSharedPtr<class IDungeonMarkerUserData> InUserData) {
    FTransform Transform = FTransform::Identity;
    Transform.SetLocation(WorldLocation);
    Transform.SetRotation(Rotation);

    if (Dungeon) {
        // Transform the marker relative to the dungeon
        Transform = Transform * Dungeon->GetActorTransform();
    }

    AddMarker(MarkerName, Transform, InUserData);
}

void UGridFlowBuilder::DrawDebugData(UWorld* InWorld, bool bPersistant /*= false*/, float lifeTime /*= 0*/) {
    const FVector GridSize = GridFlowConfig->GridSize;

    if (!GridFlowModel) {
        return;
    }

    UGridFlowTilemap* Tilemap = GridFlowModel->Tilemap;
    if (!Tilemap) {
        return;
    }

    int32 Width = Tilemap->GetWidth();
    int32 Height = Tilemap->GetHeight();

    FVector TileExtent = GridSize * 0.5f;
    TileExtent.Z = 0;
    for (int32 y = 0; y < Height; y++) {
        for (int32 x = 0; x < Width; x++) {
            FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
            if (Cell.CellType != EGridFlowTilemapCellType::Empty) {
                FColor TileColor = FColor(0, 0, 0);
                if (Cell.CellType == EGridFlowTilemapCellType::Floor) {
                    TileColor = FColor(255, 0, 0);
                }
                else if (Cell.CellType == EGridFlowTilemapCellType::Wall) {
                    TileColor = FColor(0, 255, 0);
                }
                else if (Cell.CellType == EGridFlowTilemapCellType::Door) {
                    TileColor = FColor(0, 0, 255);
                }
                TileColor.A = 64;

                FVector TileCenter = FVector(x + 0.5f, y + 0.5f, 0) * GridSize;
                DrawDebugSolidBox(InWorld, TileCenter, TileExtent, FQuat::Identity, TileColor, bPersistant, lifeTime);
            }
        }
    }
}

TSubclassOf<UDungeonModel> UGridFlowBuilder::GetModelClass() {
    return UGridFlowModel::StaticClass();
}

TSubclassOf<UDungeonConfig> UGridFlowBuilder::GetConfigClass() {
    return UGridFlowConfig::StaticClass();
}

TSubclassOf<UDungeonToolData> UGridFlowBuilder::GetToolDataClass() {
    return UGridFlowToolData::StaticClass();
}

TSubclassOf<UDungeonQuery> UGridFlowBuilder::GetQueryClass() {
    return UGridFlowQuery::StaticClass();
}

bool UGridFlowBuilder::ProcessSpatialConstraint(UDungeonSpatialConstraint* SpatialConstraint,
                                                const FTransform& Transform, FQuat& OutRotationOffset) {
    return false;
}

void UGridFlowBuilder::GetDefaultMarkerNames(TArray<FString>& OutMarkerNames) {
    OutMarkerNames.Reset();
    OutMarkerNames.Add(GridFlowConstants::MARKER_GROUND);
    OutMarkerNames.Add(GridFlowConstants::MARKER_WALL);
    OutMarkerNames.Add(GridFlowConstants::MARKER_WALL_L);
    OutMarkerNames.Add(GridFlowConstants::MARKER_WALL_T);
    OutMarkerNames.Add(GridFlowConstants::MARKER_WALL_X);
    OutMarkerNames.Add(GridFlowConstants::MARKER_DOOR);
    OutMarkerNames.Add(GridFlowConstants::MARKER_DOOR_ONEWAY);
    OutMarkerNames.Add(GridFlowConstants::MARKER_CAVE_FENCE);
    OutMarkerNames.Add(GridFlowConstants::MARKER_CAVE_FENCE_SEPARATOR);
}

bool UGridFlowBuilder::PerformSelectionLogic(const TArray<UDungeonSelectorLogic*>& SelectionLogics,
                                             const FPropSocket& socket) {
    for (UDungeonSelectorLogic* SelectionLogic : SelectionLogics) {
        UGridFlowSelectorLogic* GridFlowSelectionLogic = Cast<UGridFlowSelectorLogic>(SelectionLogic);
        if (!GridFlowSelectionLogic) {
            UE_LOG(GridFlowBuilderLog, Warning,
                   TEXT("Invalid selection logic specified.  GridFlowSelectorLogic expected"));
            return false;
        }

        // Perform blueprint based selection logic
        FIntPoint TileOffset = GridFlowModel ? GridFlowModel->BuildTileOffset : FIntPoint::ZeroValue;
        FVector Location = socket.Transform.GetLocation();
        FVector GridSize = GridFlowConfig->GridSize;
        int32 TileX = FMath::FloorToInt(Location.X / GridSize.X) + TileOffset.X;
        int32 TileY = FMath::FloorToInt(Location.Y / GridSize.Y) + TileOffset.Y;

        bool bSelected = GridFlowSelectionLogic->SelectNode(GridFlowModel, GridFlowConfig, this, GridFlowQuery, random,
                                                            TileX, TileY, socket.Transform);
        if (!bSelected) {
            return false;
        }
    }
    return true;
}

FTransform UGridFlowBuilder::PerformTransformLogic(const TArray<UDungeonTransformLogic*>& TransformLogics,
                                                   const FPropSocket& socket) {
    FTransform result = FTransform::Identity;

    for (UDungeonTransformLogic* TransformLogic : TransformLogics) {
        UGridFlowTransformLogic* GridFlowTransformLogic = Cast<UGridFlowTransformLogic>(TransformLogic);
        if (!GridFlowTransformLogic) {
            UE_LOG(GridFlowBuilderLog, Warning,
                   TEXT("Invalid transform logic specified.  GridFlowTransformLogic expected"));
            continue;
        }

        FVector Location = socket.Transform.GetLocation();
        FVector GridSize = GridFlowConfig->GridSize;
        int32 GridX = FMath::FloorToInt(Location.X / GridSize.X);
        int32 GridY = FMath::FloorToInt(Location.Y / GridSize.Y);
        FTransform LogicOffset;
        if (TransformLogic) {
            GridFlowTransformLogic->GetNodeOffset(GridFlowModel, GridFlowConfig, GridFlowQuery, random, GridX, GridY,
                                                  LogicOffset);
        }
        else {
            LogicOffset = FTransform::Identity;
        }

        FTransform out;
        FTransform::Multiply(&out, &LogicOffset, &result);
        result = out;
    }
    return result;

}

void UGridFlowBuilder::ProcessThemeItemUserData(TSharedPtr<IDungeonMarkerUserData> InUserData, AActor* SpawnedActor) {
    if (InUserData.IsValid() && SpawnedActor) {
        TSharedPtr<FGridFlowBuilderMarkerUserData> MarkerData = StaticCastSharedPtr<FGridFlowBuilderMarkerUserData
        >(InUserData);
        if (MarkerData->bIsItem) {
            UDungeonGridFlowItemMetadataComponent* ItemComponent = SpawnedActor->FindComponentByClass<
                UDungeonGridFlowItemMetadataComponent>();
            if (ItemComponent) {
                ItemComponent->Item = MarkerData->Item;
            }
        }
    }
}
