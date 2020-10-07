//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/SnapDungeonConfig.h"


DEFINE_LOG_CATEGORY(SnapDungeonConfigLog);


USnapDungeonConfig::USnapDungeonConfig(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
      , MainBranchSize(30)
      , SideBranchSize(6)
      , SideBranchProbability(0.5f)
      , CollisionTestContraction(100)
      , MaxProcessingPower(1000000) {
}
