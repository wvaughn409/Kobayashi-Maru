//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/SnapDungeonModel.h"


USnapDungeonModel::USnapDungeonModel(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}

void USnapDungeonModel::Cleanup() {
    Modules.Reset();
    Connections.Reset();
}

void USnapDungeonModel::Reset() {
    Cleanup();
}
