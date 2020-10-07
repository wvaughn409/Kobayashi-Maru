//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Tilemap/GridFlowTaskTilemap_CreateOverlay.h"

#include "Core/Utils/Noise/Noise.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"

void UGridFlowTaskTilemap_CreateOverlay::Execute(const FGridFlowExecutionInput& Input,
                                                 FGridFlowExecutionOutput& Output) {
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

    Output.State = Input.IncomingNodeOutputs[0].State->Clone(true, false);

    if (!Output.State->AbstractGraph) {
        Output.ErrorMessage = "Invalid Input Layout Graph";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }

    UGridFlowTilemap* IncomingTilemap = Input.IncomingNodeOutputs[0].State->Tilemap;
    if (!IncomingTilemap) {
        Output.ErrorMessage = "Invalid Input Tilemap";
        Output.ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
        return;
    }


    UGridFlowTilemap* Tilemap = NewObject<UGridFlowTilemap>(IncomingTilemap->GetOuter());
    Output.State->Tilemap = Tilemap;

    int32 Width = IncomingTilemap->GetWidth();
    int32 Height = IncomingTilemap->GetHeight();
    Tilemap->Initialize(Width, Height);

    const FRandomStream& Random = *Input.Random;
    FGradientNoiseTable NoiseTable;
    NoiseTable.Init(128, Random);
    NoiseSettings.MinDistFromMainPath = FMath::Max(1, NoiseSettings.MinDistFromMainPath);

    for (int y = 0; y < Height; y++) {
        for (int x = 0; x < Width; x++) {
            FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
            const FGridFlowTilemapCell& IncomingCell = IncomingTilemap->Get(x, y);

            float OverlayValue = 0.0f;
            if (GenerateOverlayValue(Cell, IncomingCell, NoiseTable, OverlayValue)) {
                Cell.bHasOverlay = true;
                FGridFlowTilemapCellOverlay& Overlay = Cell.Overlay;
                Overlay.MarkerName = MarkerName;
                Overlay.Color = Color;
                Overlay.NoiseValue = OverlayValue;
                Overlay.MergeConfig = MergeConfig;
                Overlay.bTileBlockingOverlay = bOverlayBlocksTile;
            }
        }
    }

    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}

bool UGridFlowTaskTilemap_CreateOverlay::GenerateOverlayValue(FGridFlowTilemapCell& Cell,
                                                              const FGridFlowTilemapCell& IncomingCell,
                                                              const FGradientNoiseTable& NoiseTable, float& OutValue) {
    FIntPoint CellCoord = IncomingCell.TileCoord;
    FVector2D Position = FVector2D(CellCoord.X, CellCoord.Y) * NoiseSettings.NoiseFrequency;
    float N = NoiseTable.GetFbmNoise(Position, NoiseSettings.NoiseOctaves);
    if (NoiseSettings.NoiseValuePower > 0.0f) {
        N = FMath::Pow(N, NoiseSettings.NoiseValuePower);
    }

    N = NoiseSettings.NoiseMinValue + (NoiseSettings.NoiseMaxValue - NoiseSettings.NoiseMinValue) * N;

    if (N > NoiseSettings.NoiseThreshold) {
        int32 DistanceFromMainPath = IncomingCell.DistanceFromMainPath;
        float NoiseFactor = (N - NoiseSettings.NoiseThreshold) / (1.0f - NoiseSettings.NoiseThreshold);
        bool bInsertOverlay = (NoiseFactor * DistanceFromMainPath > NoiseSettings.MinDistFromMainPath);

        if (bInsertOverlay) {
            OutValue = N;
            return true;
        }
    }
    return false;
}


bool UGridFlowTaskTilemap_CreateOverlay::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_STRING(MarkerName)
    GRIDFLOWATTR_GET_BOOL(bOverlayBlocksTile)

    // Handle Noise Settings
    __GRIDFLOWATTR_GET_IMPL_EX(NoiseOctaves, NumberValue, NoiseSettings.NoiseOctaves)
    __GRIDFLOWATTR_GET_IMPL_EX(NoiseFrequency, NumberValue, NoiseSettings.NoiseFrequency)
    __GRIDFLOWATTR_GET_IMPL_EX(NoiseValuePower, NumberValue, NoiseSettings.NoiseValuePower)
    __GRIDFLOWATTR_GET_IMPL_EX(NoiseMinValue, NumberValue, NoiseSettings.NoiseMinValue)
    __GRIDFLOWATTR_GET_IMPL_EX(NoiseMaxValue, NumberValue, NoiseSettings.NoiseMaxValue)
    __GRIDFLOWATTR_GET_IMPL_EX(NoiseThreshold, NumberValue, NoiseSettings.NoiseThreshold)
    __GRIDFLOWATTR_GET_IMPL_EX(MinDistFromMainPath, NumberValue, NoiseSettings.MinDistFromMainPath)

    // Handle Merge Config
    __GRIDFLOWATTR_GET_IMPL_EX(MinHeight, NumberValue, MergeConfig.MinHeight)
    __GRIDFLOWATTR_GET_IMPL_EX(MaxHeight, NumberValue, MergeConfig.MaxHeight)
    __GRIDFLOWATTR_GET_IMPL_EX(MarkerHeightOffsetForLayoutTiles, NumberValue,
                               MergeConfig.MarkerHeightOffsetForLayoutTiles)
    __GRIDFLOWATTR_GET_IMPL_EX(MarkerHeightOffsetForNonLayoutTiles, NumberValue,
                               MergeConfig.MarkerHeightOffsetForNonLayoutTiles)
    __GRIDFLOWATTR_GET_IMPL_EX(RemoveElevationMarker, BoolValue, MergeConfig.RemoveElevationMarker)

    return false;
}

bool UGridFlowTaskTilemap_CreateOverlay::SetParameter(const FString& InParameterName,
                                                      const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_STRING(MarkerName)
    GRIDFLOWATTR_SET_BOOL(bOverlayBlocksTile)

    // Handle Noise Settings
    __GRIDFLOWATTR_SET_IMPL2(NoiseOctaves, NumberValue, NoiseSettings.NoiseOctaves)
    __GRIDFLOWATTR_SET_IMPL2(NoiseFrequency, NumberValue, NoiseSettings.NoiseFrequency)
    __GRIDFLOWATTR_SET_IMPL2(NoiseValuePower, NumberValue, NoiseSettings.NoiseValuePower)
    __GRIDFLOWATTR_SET_IMPL2(NoiseMinValue, NumberValue, NoiseSettings.NoiseMinValue)
    __GRIDFLOWATTR_SET_IMPL2(NoiseMaxValue, NumberValue, NoiseSettings.NoiseMaxValue)
    __GRIDFLOWATTR_SET_IMPL2(NoiseThreshold, NumberValue, NoiseSettings.NoiseThreshold)
    __GRIDFLOWATTR_SET_IMPL2(MinDistFromMainPath, NumberValue, NoiseSettings.MinDistFromMainPath)

    // Handle Merge Config
    __GRIDFLOWATTR_SET_IMPL2(MinHeight, NumberValue, MergeConfig.MinHeight)
    __GRIDFLOWATTR_SET_IMPL2(MaxHeight, NumberValue, MergeConfig.MaxHeight)
    __GRIDFLOWATTR_SET_IMPL2(MarkerHeightOffsetForLayoutTiles, NumberValue,
                             MergeConfig.MarkerHeightOffsetForLayoutTiles)
    __GRIDFLOWATTR_SET_IMPL2(MarkerHeightOffsetForNonLayoutTiles, NumberValue,
                             MergeConfig.MarkerHeightOffsetForNonLayoutTiles)
    __GRIDFLOWATTR_SET_IMPL2(RemoveElevationMarker, BoolValue, MergeConfig.RemoveElevationMarker)

    return false;
}

bool UGridFlowTaskTilemap_CreateOverlay::SetParameterSerialized(const FString& InParameterName,
                                                                const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_STRING(MarkerName)
    GRIDFLOWATTR_SET_PARSE_BOOL(bOverlayBlocksTile)

    // Handle Noise Settings
    GRIDFLOWATTR_SET_PARSEEX_INT(NoiseOctaves, NoiseSettings.NoiseOctaves)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(NoiseFrequency, NoiseSettings.NoiseFrequency)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(NoiseValuePower, NoiseSettings.NoiseValuePower)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(NoiseMinValue, NoiseSettings.NoiseMinValue)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(NoiseMaxValue, NoiseSettings.NoiseMaxValue)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(NoiseThreshold, NoiseSettings.NoiseThreshold)
    GRIDFLOWATTR_SET_PARSEEX_INT(MinDistFromMainPath, NoiseSettings.MinDistFromMainPath)

    // Handle Merge Config
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(MinHeight, MergeConfig.MinHeight)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(MaxHeight, MergeConfig.MaxHeight)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(MarkerHeightOffsetForLayoutTiles, MergeConfig.MarkerHeightOffsetForLayoutTiles)
    GRIDFLOWATTR_SET_PARSEEX_FLOAT(MarkerHeightOffsetForNonLayoutTiles, MergeConfig.MarkerHeightOffsetForNonLayoutTiles)
    GRIDFLOWATTR_SET_PARSEEX_BOOL(RemoveElevationMarker, MergeConfig.RemoveElevationMarker)

    return false;
}
