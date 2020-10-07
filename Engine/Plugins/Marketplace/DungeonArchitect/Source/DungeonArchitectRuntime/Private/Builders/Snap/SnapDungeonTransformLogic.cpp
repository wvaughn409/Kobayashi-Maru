//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/SnapDungeonTransformLogic.h"

#include "Builders/Snap/SnapDungeonModel.h"

void USnapDungeonTransformLogic::GetNodeOffset_Implementation(USnapDungeonModel* Model, FTransform& Offset) {
    Offset = FTransform::Identity;
}
