//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/Snap/Connection/SnapConnection.h"
#include "SnapModuleState.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSnapModuleState, Log, All);

UCLASS(Blueprintable)
class DUNGEONARCHITECTRUNTIME_API USnapModuleState : public USceneComponent {
    GENERATED_BODY()
public:

    UPROPERTY()
    FName ModuleInstanceId;

    UPROPERTY()
    TMap<FGuid, ESnapConnectionState> ConnectionStates;
};
