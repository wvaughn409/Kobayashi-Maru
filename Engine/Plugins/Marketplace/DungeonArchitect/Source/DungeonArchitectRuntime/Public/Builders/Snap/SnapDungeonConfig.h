//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/DungeonConfig.h"
#include "SnapDungeonConfig.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SnapDungeonConfigLog, Log, All);


UCLASS(Blueprintable)
class DUNGEONARCHITECTRUNTIME_API USnapDungeonConfig : public UDungeonConfig {
    GENERATED_UCLASS_BODY()

public:
    /** Specify the list of modules here.  These modules would be stitched together to create your level */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon, meta = (AllowedClasses = "World"))
    TArray<TAssetSubclassOf<AActor>> Modules;

    /** A optional starting module. If specified, this module would be first spawned.  Leave it blank to pick a random module from the Modules list */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon, meta = (AllowedClasses = "World"))
    TArray<TAssetSubclassOf<AActor>> StartModules;

    /** A optional end module. If specified, this module would be last room.  Leave it blank to pick a random module from the Modules list */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon, meta = (AllowedClasses = "World"))
    TArray<TAssetSubclassOf<AActor>> EndModules;

    /** A optional end module of a branch coming out of the main path.  Leave it blank to pick a random module from the Modules list */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon, meta = (AllowedClasses = "World"))
    TArray<TAssetSubclassOf<AActor>> BranchEndModules;

    /** 
    Controls how deep the modules should go from the start point.  Once reached, it would stop growing 
    and branch out from earlier points
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    int32 MainBranchSize;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    int32 SideBranchSize;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    float SideBranchProbability;

    /**
     When modules are stitched together, the builder makes sure they do not overlap.  This parameter is used to 
     control the tolerance level.  If set to 0, even the slightest overlap with a nearby module would not create an adjacent module
     Leaving to a small number like 100, would tolerate an overlap with nearby module by 100 unreal units.
     Adjust this depending on your art asset
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    int32 CollisionTestContraction;

    /**
    Sometimes, the search space is too large (with billions of possibilities) and if a valid path cannot be easily found
    (e.g. due to existing occluded geometry) the search would take too long.  This value makes sure the build doesn't
    hang and bails out early with the best result it has found till that point.
    Increase the value to have better quality result in those cases. Decrease if you notice the build taking too long
    or if build speed is a priority (e.g. if you are building during runtime).   A good value is ~1000000
    */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon)
    int32 MaxProcessingPower;
};
