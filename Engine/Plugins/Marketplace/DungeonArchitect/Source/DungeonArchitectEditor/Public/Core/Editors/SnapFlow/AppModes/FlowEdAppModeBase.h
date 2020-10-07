//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "WorkflowOrientedApp/ApplicationMode.h"

class FFlowEdAppModeBase
    : public FApplicationMode {
public:
    FFlowEdAppModeBase(FName InModeName);
    virtual void Tick(float DeltaTime);
    virtual void OnAssetSave();
};
