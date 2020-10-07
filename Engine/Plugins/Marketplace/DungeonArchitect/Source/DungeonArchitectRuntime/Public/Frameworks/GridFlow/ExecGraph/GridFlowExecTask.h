//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskStructs.h"

#include "UObject/GCObject.h"
#include "GridFlowExecTask.generated.h"

struct FGridFlowAttribute;
class UGridFlowAbstractGraph;
class UGridFlowTilemap;

typedef TSharedPtr<class FGridFlowExecutionNodeState> FGridFlowExecutionNodeStatePtr;

class DUNGEONARCHITECTRUNTIME_API FGridFlowExecutionNodeState
    : public FGCObject {
public:
    FGridFlowExecutionNodeState();
    FGridFlowExecutionNodeStatePtr Clone(bool bCloneLayoutGraph = true, bool bCloneTilemap = true);
    void AddReferencedObjects(FReferenceCollector& Collector) override;

public:
    UGridFlowAbstractGraph* AbstractGraph;
    UGridFlowTilemap* Tilemap;
};

UCLASS()
class DUNGEONARCHITECTRUNTIME_API UGridFlowExecTask : public UObject {
    GENERATED_BODY()

public:
    virtual void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output);
    virtual bool GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) { return false; }
    virtual bool SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) { return false; }

    virtual bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) {
        return false;
    }

public:
    UPROPERTY(EditAnywhere, Category = "Node")
    FString Description;

    /**
       The variable name of the node. Use this to set the values of the node attributes in the form [NODE_NAME].[PARAMETER_NAME]

       For e.g. If this node is named "createTreasurePath" and there's a parameter named "pathSize" in the node (find this name by hovering over the parameter)
       then the parameter can be referenced like this "createTreasurePath.pathSize"
    */
    UPROPERTY(EditAnywhere, Category = "Advanced")
    FString NodeVariableName;
};
