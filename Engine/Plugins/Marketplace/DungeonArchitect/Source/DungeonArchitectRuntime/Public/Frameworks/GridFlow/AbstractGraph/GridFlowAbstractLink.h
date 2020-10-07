//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"
#include "GridFlowAbstractLink.generated.h"

UENUM()
enum class EGridFlowAbstractLinkType : uint8 {
    Unconnected,
    Connected,
    OneWay
};

USTRUCT()
struct DUNGEONARCHITECTRUNTIME_API FGridFlowAbstractLinkState {
    GENERATED_BODY()

    UPROPERTY()
    EGridFlowAbstractLinkType Type = EGridFlowAbstractLinkType::Unconnected;

    UPROPERTY()
    TArray<FGridFlowItem> Items;
};


USTRUCT()
struct DUNGEONARCHITECTRUNTIME_API FGridFlowAbstractLink {
    GENERATED_BODY()

    UPROPERTY()
    FGuid LinkId;

    UPROPERTY()
    FGuid Source;

    UPROPERTY()
    FGuid Destination;

    UPROPERTY()
    FGridFlowAbstractLinkState State;
};
