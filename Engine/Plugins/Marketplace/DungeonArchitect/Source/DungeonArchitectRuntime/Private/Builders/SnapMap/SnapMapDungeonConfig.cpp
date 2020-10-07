//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/SnapMapDungeonConfig.h"

#include "InstancedFoliageActor.h"

DEFINE_LOG_CATEGORY(SnapMapDungeonConfigLog);


USnapMapDungeonConfig::USnapMapDungeonConfig(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
      , CollisionTestContraction(100) {
}

uint32 GetTypeHash(const FSnapMapModuleDatabaseItem& A) {
    return HashCombine(GetTypeHash(A.Level), GetTypeHash(A.Category));
}
