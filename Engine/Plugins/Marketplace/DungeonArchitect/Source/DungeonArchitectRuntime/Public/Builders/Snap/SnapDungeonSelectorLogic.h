//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/Snap/SnapDungeonModel.h"
#include "Core/Rules/DungeonSelectorLogic.h"
#include "SnapDungeonSelectorLogic.generated.h"

/**
*
*/
UCLASS(Blueprintable, HideDropDown)
class DUNGEONARCHITECTRUNTIME_API USnapDungeonSelectorLogic : public UDungeonSelectorLogic {
    GENERATED_BODY()

public:

    /** called when something enters the sphere component */
    UFUNCTION(BlueprintNativeEvent, Category = "Dungeon")
    bool SelectNode(USnapDungeonModel* Model);
    virtual bool SelectNode_Implementation(USnapDungeonModel* Model);


};
