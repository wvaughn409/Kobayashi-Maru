//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/Tasks/Tilemap/GridFlowTaskTilemap_CreateElevations.h"

#include "Core/Utils/Noise/Noise.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttributeMacros.h"
#include "Frameworks/GridFlow/Tilemap/GridFlowTilemap.h"

void UGridFlowTaskTilemap_CreateElevations::Execute(const FGridFlowExecutionInput& Input,
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

    const FRandomStream& Random = *Input.Random;
    FGradientNoiseTable NoiseTable;
    NoiseTable.Init(128, Random);

    for (int y = 0; y < Tilemap->GetHeight(); y++) {
        for (int x = 0; x < Tilemap->GetWidth(); x++) {
            FGridFlowTilemapCell& Cell = Tilemap->Get(x, y);
            float cellHeight = 0;
            if (Cell.CellType == EGridFlowTilemapCellType::Empty) {
                FVector2D Position = FVector2D(x, y) * NoiseFrequency;
                float Noise = NoiseTable.GetFbmNoise(Position, NoiseOctaves);
                if (NoiseValuePower > 1e-6f) {
                    Noise = FMath::Pow(Noise, NoiseValuePower);
                }
                Noise = FMath::FloorToInt(Noise * NumSteps) / static_cast<float>(NumSteps);
                cellHeight = MinHeight + Noise * (MaxHeight - MinHeight);
            }

            Cell.CellType = EGridFlowTilemapCellType::Custom;
            Cell.CustomCellInfo.MarkerName = MarkerName;
            Cell.Height = cellHeight;
            FLinearColor color = (Cell.Height <= SeaLevel) ? SeaColor : LandColor;
            FLinearColor minColor = color * MinColorMultiplier;
            float colorBrightness = 1.0f;
            if (FMath::Abs(MaxHeight - MinHeight) > 1e-6f) {
                colorBrightness = (Cell.Height - MinHeight) / (MaxHeight - MinHeight);
            }
            Cell.CustomCellInfo.DefaultColor = FMath::Lerp(minColor, color, colorBrightness);
        }
    }

    Output.ExecutionResult = EGridFlowTaskExecutionResult::Success;
}

bool UGridFlowTaskTilemap_CreateElevations::GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) {
    GRIDFLOWATTR_GET_INT(NoiseOctaves);
    GRIDFLOWATTR_GET_FLOAT(NoiseFrequency);
    GRIDFLOWATTR_GET_FLOAT(NoiseValuePower);
    GRIDFLOWATTR_GET_INT(NumSteps);
    GRIDFLOWATTR_GET_STRING(MarkerName);
    GRIDFLOWATTR_GET_FLOAT(MinHeight);
    GRIDFLOWATTR_GET_FLOAT(MaxHeight);
    GRIDFLOWATTR_GET_FLOAT(SeaLevel);

    return false;
}

bool UGridFlowTaskTilemap_CreateElevations::SetParameter(const FString& InParameterName,
                                                         const FGridFlowAttribute& InValue) {
    GRIDFLOWATTR_SET_INT(NoiseOctaves);
    GRIDFLOWATTR_SET_FLOAT(NoiseFrequency);
    GRIDFLOWATTR_SET_FLOAT(NoiseValuePower);
    GRIDFLOWATTR_SET_INT(NumSteps);
    GRIDFLOWATTR_SET_STRING(MarkerName);
    GRIDFLOWATTR_SET_FLOAT(MinHeight);
    GRIDFLOWATTR_SET_FLOAT(MaxHeight);
    GRIDFLOWATTR_SET_FLOAT(SeaLevel);

    return false;
}

bool UGridFlowTaskTilemap_CreateElevations::SetParameterSerialized(const FString& InParameterName,
                                                                   const FString& InSerializedText) {
    GRIDFLOWATTR_SET_PARSE_INT(NoiseOctaves);
    GRIDFLOWATTR_SET_PARSE_FLOAT(NoiseFrequency);
    GRIDFLOWATTR_SET_PARSE_FLOAT(NoiseValuePower);
    GRIDFLOWATTR_SET_PARSE_INT(NumSteps);
    GRIDFLOWATTR_SET_PARSE_STRING(MarkerName);
    GRIDFLOWATTR_SET_PARSE_FLOAT(MinHeight);
    GRIDFLOWATTR_SET_PARSE_FLOAT(MaxHeight);
    GRIDFLOWATTR_SET_PARSE_FLOAT(SeaLevel);

    return false;
}
