//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Rules/DungeonTransformLogic.h"
#include "SnapDungeonTransformLogic.generated.h"

struct FCell;
class USnapDungeonModel;

/**
*
*/
UCLASS(Blueprintable, HideDropDown)
class DUNGEONARCHITECTRUNTIME_API USnapDungeonTransformLogic : public UDungeonTransformLogic {
    GENERATED_BODY()

public:

    UFUNCTION(BlueprintNativeEvent, Category = "Dungeon")
    void GetNodeOffset(USnapDungeonModel* Model, FTransform& Offset);
    virtual void GetNodeOffset_Implementation(USnapDungeonModel* Model, FTransform& Offset);

};
