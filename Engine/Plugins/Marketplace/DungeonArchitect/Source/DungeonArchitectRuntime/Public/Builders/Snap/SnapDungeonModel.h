//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/DungeonModel.h"
#include "SnapDungeonModel.generated.h"

USTRUCT(Blueprintable)
struct DUNGEONARCHITECTRUNTIME_API FSnapModule {
    GENERATED_USTRUCT_BODY()

    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    FName InstanceID;
};


/* Contains information about the connections of two doors of adjacent modules */
USTRUCT(Blueprintable)
struct DUNGEONARCHITECTRUNTIME_API FSnapModuleConnection {
    GENERATED_USTRUCT_BODY()

    /** The instance ID of the spawned module (See ModuleInstance structure) */
    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    FName ModuleAInstanceID;

    /** The index of the door(see ModuleInfo structure) */
    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    int32 DoorAIndex;

    /** The instance ID of the spawned module (See ModuleInstance structure) */
    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    FName ModuleBInstanceID;

    /** The index of the door(see ModuleInfo structure) */
    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    int32 DoorBIndex;
};


UCLASS(Blueprintable)
class DUNGEONARCHITECTRUNTIME_API USnapDungeonModel : public UDungeonModel {
    GENERATED_UCLASS_BODY()
public:

    void Cleanup() override;
    void Reset() override;

public:

    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    TArray<FSnapModule> Modules;

    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    TArray<FSnapModuleConnection> Connections;

};
