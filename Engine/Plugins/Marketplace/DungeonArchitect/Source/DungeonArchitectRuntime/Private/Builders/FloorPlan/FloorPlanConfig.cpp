//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/FloorPlan/FloorPlanConfig.h"


DEFINE_LOG_CATEGORY(FloorPlanConfigLog);

UFloorPlanConfig::UFloorPlanConfig(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
      , BuildingSize(15, 20, 1)
      , GridSize(400, 400, 200)
      , MinRoomSize(1)
      , MaxRoomSize(2)
      , HallWidth(1)
      , MinRoomChunkArea(25)
      , RoomSplitProbabilityOffset(0.25f) {
}
