//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "GridFlowEditorSettings.generated.h"

UCLASS()
class UGridFlowEditorSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Category = "Dungeon")
    int32 Seed = 0;

    UPROPERTY(EditAnywhere, Category = "Dungeon")
    bool bRandomizeSeedOnBuild = true;

    UPROPERTY(EditAnywhere, Category = "Dungeon")
    TMap<FString, FString> ParameterOverrides;
};
