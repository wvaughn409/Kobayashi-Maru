//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTask.h"
#include "GridFlowTaskAbstract_CreateKeyLock.generated.h"

class FGridFlowAbstractGraphQuery;

UCLASS(Meta = (AbstractTask, Title = "Create Key/Lock", Tooltip = "Creates a Key/Lock along a path", MenuPriority = 1400
))
class DUNGEONARCHITECTRUNTIME_API UGridFlowTaskAbstract_CreateKeyLock : public UGridFlowExecTask {
    GENERATED_BODY()
public:
    /**
        The path where the key resides

        Variable Name: KeyPath
    */
    UPROPERTY(EditAnywhere, Category = "Create Key-Lock")
    FString KeyPath = "main";

    /**
        The path where the lock resides

        Variable Name: LockPath
    */
    UPROPERTY(EditAnywhere, Category = "Create Key-Lock")
    FString LockPath = "main";

    /**
        The Key marker name.  Create this marker in the theme file and add your key asset

        Variable Name: KeyMarkerName
    */
    UPROPERTY(EditAnywhere, Category = "Create Key-Lock")
    FString KeyMarkerName = "Key";

    /**
        The Lock marker name.  Create this marker in the theme file and add your locked door asset

        Variable Name: LockMarkerName
    */
    UPROPERTY(EditAnywhere, Category = "Create Key-Lock")
    FString LockMarkerName = "Lock";

public:
    void Execute(const FGridFlowExecutionInput& Input, FGridFlowExecutionOutput& Output) override;
    bool GetParameter(const FString& InParameterName, FGridFlowAttribute& OutValue) override;
    bool SetParameter(const FString& InParameterName, const FGridFlowAttribute& InValue) override;
    bool SetParameterSerialized(const FString& InParameterName, const FString& InSerializedText) override;

private:
    bool FindKeyLockNodes(const FGridFlowAbstractGraphQuery& GraphQuery, const FRandomStream& Random,
                          FGuid& OutKeyNodeId, FGuid& OutLockNodeId, FString& OutErrorMessage);
};
