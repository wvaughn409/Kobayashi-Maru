//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Core/DungeonModel.h"

#include "UObject/SoftObjectPtr.h"
#include "SnapMapDungeonModel.generated.h"

class UGrammarScriptGraph;
class USnapMapDungeonLevelLoadHandler;


USTRUCT()
struct DUNGEONARCHITECTRUNTIME_API FSnapMapConnectionInstance {
    GENERATED_USTRUCT_BODY()

    UPROPERTY()
    FGuid ModuleA;

    UPROPERTY()
    FGuid DoorA;

    UPROPERTY()
    FGuid ModuleB;

    UPROPERTY()
    FGuid DoorB;

    UPROPERTY()
    FTransform WorldTransform;

    UPROPERTY()
    TWeakObjectPtr<AActor> PersistentDoorActor;
};

USTRUCT()
struct DUNGEONARCHITECTRUNTIME_API FSnapMapModuleInstanceSerializedData {
    GENERATED_USTRUCT_BODY()

    UPROPERTY()
    FGuid ModuleInstanceId;

    UPROPERTY()
    FTransform WorldTransform;

    UPROPERTY()
    TSoftObjectPtr<UWorld> Level;

    UPROPERTY()
    FName Category;

    UPROPERTY()
    FBox ModuleBounds;
};

UCLASS(Blueprintable)
class DUNGEONARCHITECTRUNTIME_API USnapMapDungeonModel : public UDungeonModel {
    GENERATED_UCLASS_BODY()

public:
    void Cleanup() override;
    void Reset() override;
    void GenerateLayoutData(class FDungeonLayoutData& OutLayout) override;

    bool SearchModuleInstance(const FGuid& InNodeId, FSnapMapModuleInstanceSerializedData& OutModuleData);

public:
    UPROPERTY()
    TArray<FSnapMapConnectionInstance> Connections;

    UPROPERTY()
    TArray<FSnapMapModuleInstanceSerializedData> ModuleInstances;

    UPROPERTY(Transient)
    TArray<FGuid> VisibleModules;

    UPROPERTY()
    UGrammarScriptGraph* MissionGraph;
};
