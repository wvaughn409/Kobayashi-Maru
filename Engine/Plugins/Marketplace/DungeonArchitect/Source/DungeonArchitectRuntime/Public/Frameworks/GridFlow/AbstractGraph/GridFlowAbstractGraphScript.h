//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "GridFlowAbstractGraphScript.generated.h"

class UGridFlowAbstractGraph;
class UGridFlowAbstractTask;


UCLASS()
class DUNGEONARCHITECTRUNTIME_API UGridFlowAbstractScript : public UObject {
    GENERATED_BODY()

public:
    UGridFlowAbstractScript();

public:
    UPROPERTY()
    UGridFlowAbstractGraph* Graph;

};
