//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/GraphGrammar/RuleGraph/EdGraph_Grammar.h"
#include "EdGraph_DebugGrammar.generated.h"

class UGrammarNodeType;
class UEdGraph_DebugGrammar;
class UEdGraphNode_DebugGrammarNode;
struct FSnapMapModuleDatabaseItem;

namespace SnapMapDiagnostics {
    class FDiagnostics;
    struct FDiagStep;
    struct FPayload_MoveToNode;
    struct FPayload_BacktrackFromNode;
    struct FPayload_AssignModule;
    struct FPayload_RejectModule;
    struct FPayload_TimeoutHalt;
}

struct FFlowDebugGraphExecState {
    int32 StepIndex = -1;
    TArray<FGuid> NodeStack;
    TWeakObjectPtr<UEdGraphNode_DebugGrammarNode> CurrentNode;
};

DECLARE_DELEGATE_ThreeParams(FOnSnapMapDiagVisLoadLevel, const FGuid& /* InNodeId */,
                             const FSnapMapModuleDatabaseItem& /* InModuleInfo */,
                             const FTransform& /* InWorldTransform */);
DECLARE_DELEGATE_OneParam(FOnSnapMapDiagVisUnloadLevel, const FGuid& /* InNodeId */);
DECLARE_DELEGATE_ThreeParams(FOnSnapMapDiagVisSetConnectionState, const FGuid& /* InNodeId */,
                             const FGuid& /* InConnectionId */, bool /* bIsDoor */);
DECLARE_DELEGATE_TwoParams(FOnSnapMapDiagVisSetDebugBox, const FBox& /* InWorldBounds */, const FColor& /* InColor */);

UCLASS()
class DUNGEONARCHITECTEDITOR_API UEdGraph_DebugGrammar : public UEdGraph_Grammar {
    GENERATED_BODY()
public:
    UEdGraph_DebugGrammar();
    void ResetDebugState();
    void OnDebugGraphGenerated();

    void ExecuteStep();
    void Rewind();
    UEdGraphNode_DebugGrammarNode* GetCurrentNode();
    TSharedPtr<SnapMapDiagnostics::FDiagnostics> GetDiagnostics() const { return Diagnostics; }

    void LayoutGraph(int32 HorizontalSpacing = 150, int32 VerticalSpacing = 100) override;

    FOnSnapMapDiagVisLoadLevel& GetOnVisualizeLoadLevel() { return OnVisualizeLoadLevel; }
    FOnSnapMapDiagVisUnloadLevel& GetOnVisualizeUnloadLevel() { return OnVisualizeUnloadLevel; }
    FOnSnapMapDiagVisSetConnectionState& GetOnVisualizeSetConnectionState() { return OnVisualizeSetConnectionState; }
    FOnSnapMapDiagVisSetDebugBox& GetOnSnapMapDiagVisSetDebugBox() { return OnVisualizeSetDebugBox; }
private:
    void UpdateCurrentNodeFromStack();
    void ClearCurrentNodeStatusMessage();
    void SetCurrentNodeStatusMessage(const FString& InMessage);
    void HilightCurrentNode(const FColor& InColor);

    UEdGraphNode_DebugGrammarNode* GetNode(const FGuid& InNodeId);

    void ProcessMoveToNode(TSharedPtr<SnapMapDiagnostics::FPayload_MoveToNode> InPayload);
    void ProcessBacktrack(TSharedPtr<SnapMapDiagnostics::FPayload_BacktrackFromNode> InPayload);
    void ProcessAssignModule(TSharedPtr<SnapMapDiagnostics::FPayload_AssignModule> InPayload);
    void ProcessRejectModule(TSharedPtr<SnapMapDiagnostics::FPayload_RejectModule> InPayload);
    void TraverseSubTree(UEdGraphNode_DebugGrammarNode* RootNode, bool bVisitRootNode,
                         TFunction<void(UEdGraphNode_DebugGrammarNode*)> Visit);
private:
    TSharedPtr<SnapMapDiagnostics::FDiagnostics> Diagnostics;
    TMap<FGuid, TWeakObjectPtr<UEdGraphNode_DebugGrammarNode>> NodeMap;
    FFlowDebugGraphExecState State;

    FOnSnapMapDiagVisLoadLevel OnVisualizeLoadLevel;
    FOnSnapMapDiagVisUnloadLevel OnVisualizeUnloadLevel;
    FOnSnapMapDiagVisSetConnectionState OnVisualizeSetConnectionState;
    FOnSnapMapDiagVisSetDebugBox OnVisualizeSetDebugBox;
};
