//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "SnapMapConnectionConstants.generated.h"

UENUM(BlueprintType)
enum class ESnapMapConnectionState : uint8 {
    Unknown UMETA(DisplayName = "Unknown"),
    Door UMETA(DisplayName = "Door"),
    Wall UMETA(DisplayName = "Wall")
};


UENUM(BlueprintType)
enum class ESnapMapConnectionConstraint : uint8 {
    Magnet = 0 UMETA(DisplayName = "Magnet (connect to other Magnets)"),
    PlugMale = 1 UMETA(DisplayName = "Plug Male (connect to other Female Plugs)"),
    PlugFemale = 2 UMETA(DisplayName = "Plug Female (connect to other Male Plugs)")
};
