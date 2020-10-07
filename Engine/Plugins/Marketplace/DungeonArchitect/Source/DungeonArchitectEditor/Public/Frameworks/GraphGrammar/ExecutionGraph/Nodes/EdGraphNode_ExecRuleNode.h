//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GraphGrammar/ExecutionGraph/Nodes/EdGraphNode_ExecNodeBase.h"
#include "Frameworks/GraphGrammar/Script/GrammarExecutionScript.h"
#include "EdGraphNode_ExecRuleNode.generated.h"

class UEdGraphPin;
class UGraphGrammarProduction;

UCLASS()
class DUNGEONARCHITECTEDITOR_API UEdGraphNode_ExecRuleNode : public UEdGraphNode_ExecNodeBase {
    GENERATED_UCLASS_BODY()
public:

#if WITH_EDITOR
    void AllocateDefaultPins() override;
    FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    void PinConnectionListChanged(UEdGraphPin* Pin) override;
    void AutowireNewNode(UEdGraphPin* FromPin) override;
#endif //WITH_EDITOR

    void InitializeNode_Runtime();

    UEdGraphPin* GetInputPin() const override;
    UEdGraphPin* GetOutputPin() const override;


private:
    void CreateNewGuid_Runtime();
    void AllocateDefaultPins_Runtime();
    UEdGraphPin* CreatePin_Runtime(EEdGraphPinDirection Dir, const FName& InPinCategory, const FName& PinName,
                                   int32 Index = INDEX_NONE);

public:
    UPROPERTY()
    TWeakObjectPtr<UGraphGrammarProduction> Rule;

    UPROPERTY(EditAnywhere, Category = "Grammar")
    ERuleNodeExecutionMode ExecutionMode;

    UPROPERTY()
    FRuleNodeExecutionModeConfig ExecutionConfig;

};
