//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/AppModes/FlowEdAppModeBase.h"

#include "Core/Editors/SnapFlow/DungeonFlowEditor.h"

FFlowEdAppModeBase::FFlowEdAppModeBase(FName InModeName)
    : FApplicationMode(InModeName, FDungeonFlowEditor::GetLocalizedMode) {
}

void FFlowEdAppModeBase::Tick(float DeltaTime) {

}

void FFlowEdAppModeBase::OnAssetSave() {

}
