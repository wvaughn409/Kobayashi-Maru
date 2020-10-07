//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SnapLayoutStrategy.generated.h"

typedef TSharedPtr<struct FSnapMapModuleBuildNode> FSnapMapModuleBuildNodePtr;

UINTERFACE()
class DUNGEONARCHITECTRUNTIME_API USnapLayoutStrategyInterface : public UInterface {
    GENERATED_UINTERFACE_BODY()
};


class DUNGEONARCHITECTRUNTIME_API ISnapLayoutStrategyInterface {
    GENERATED_IINTERFACE_BODY()

public:
    virtual FSnapMapModuleBuildNodePtr GenerateLayout() PURE_VIRTUAL(ISnapLayoutStrategyInterface::GenerateLayout,
                                                                     return nullptr;);

};
