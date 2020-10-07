//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

enum class EGridFlowTaskExecutionResult : uint8 {
    Success,
    FailRetry,
    FailHalt
};

enum class EGridFlowTaskExecutionStage : uint8 {
    NotExecuted,
    WaitingToExecute,
    Executed
};

typedef TSharedPtr<class FGridFlowExecutionNodeState> FGridFlowExecutionNodeStatePtr;

struct DUNGEONARCHITECTRUNTIME_API FGridFlowExecutionOutput {
    EGridFlowTaskExecutionResult ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
    FGridFlowExecutionNodeStatePtr State;
    FString ErrorMessage;
};

struct DUNGEONARCHITECTRUNTIME_API FGridFlowExecutionInput {
    TArray<FGridFlowExecutionOutput> IncomingNodeOutputs;
    const FRandomStream* Random = nullptr;
};
