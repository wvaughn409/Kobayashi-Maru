//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GraphGrammar/RuleGraph/Nodes/EdGraphNode_GrammarBase.h"
#include "EdGraphNode_GrammarNode.generated.h"

class UEdGraphPin;
class UGrammarNodeType;

UCLASS()
class DUNGEONARCHITECTEDITOR_API UEdGraphNode_GrammarNode : public UEdGraphNode_GrammarBase {
    GENERATED_UCLASS_BODY()
public:

#if WITH_EDITOR
    void AllocateDefaultPins() override;
    FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
    void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    void AssignNextAvailableNodeIndex();
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
    TWeakObjectPtr<UGrammarNodeType> TypeInfo;

    UPROPERTY(EditAnywhere, Category = "Grammar")
    int32 Index;

    UPROPERTY(EditAnywhere, Category = "Grammar")
    bool bDisplayIndex;

    UPROPERTY()
    FGuid NodeId;

    /** The nodes in this list will be dependent on this node to be processed first */
    UPROPERTY()
    TSet<FGuid> DependentNodes;
};
