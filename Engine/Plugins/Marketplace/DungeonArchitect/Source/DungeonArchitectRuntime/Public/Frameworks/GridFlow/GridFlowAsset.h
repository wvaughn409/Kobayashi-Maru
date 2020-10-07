//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "GridFlowAsset.generated.h"

class UEdGraph;
class UGridFlowExecScript;

UCLASS()
class DUNGEONARCHITECTRUNTIME_API UGridFlowAsset : public UObject {
    GENERATED_BODY()

public:
    UPROPERTY()
    UGridFlowExecScript* ExecScript;


#if WITH_EDITORONLY_DATA
    UPROPERTY()
    UEdGraph* ExecEdGraph;
#endif // WITH_EDITORONLY_DATA

    static void AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector);
};
