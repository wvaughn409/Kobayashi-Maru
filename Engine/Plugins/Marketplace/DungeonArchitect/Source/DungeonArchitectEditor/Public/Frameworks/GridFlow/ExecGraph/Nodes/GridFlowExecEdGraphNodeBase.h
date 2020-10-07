//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskStructs.h"

#include "EdGraph/EdGraphNode.h"
#include "GridFlowExecEdGraphNodeBase.generated.h"

class UEdGraphPin;

UCLASS()
class DUNGEONARCHITECTEDITOR_API UGridFlowExecEdGraphNodeBase : public UEdGraphNode {
    GENERATED_UCLASS_BODY()

public:
#if WITH_EDITOR
    void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
    void NodeConnectionListChanged() override;
    void AllocateDefaultPins() override;
    FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    void PinConnectionListChanged(UEdGraphPin* Pin) override;
    void AutowireNewNode(UEdGraphPin* FromPin) override;
    UEdGraphPin* CreatePin(EEdGraphPinDirection Dir, const FName& InPinCategory, const FName& PinName,
                           int32 Index = INDEX_NONE);
#endif // WITH_EDITOR

public:
    virtual UEdGraphPin* GetInputPin() const;
    virtual UEdGraphPin* GetOutputPin() const;
    virtual void InitializeNode();

protected:
    UEdGraphPin* GetPin(const FGuid& PinId) const;

public:
    EGridFlowTaskExecutionStage ExecutionStage = EGridFlowTaskExecutionStage::NotExecuted;
    EGridFlowTaskExecutionResult ExecutionResult = EGridFlowTaskExecutionResult::FailHalt;
    FString ErrorMessage;
};
