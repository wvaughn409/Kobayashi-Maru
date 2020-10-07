//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/GridFlowExecEdGraphSchema.h"

#include "Core/Utils/DungeonGraphUtils.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecConnectionDrawingPolicy.h"
#include "Frameworks/GridFlow/ExecGraph/GridFlowExecEdGraph.h"
#include "Frameworks/GridFlow/ExecGraph/Nodes/GridFlowExecEdGraphNodes.h"
#include "Frameworks/GridFlow/ExecGraph/Tasks/Tilemap/GridFlowTaskTilemap_Initialize.h"

#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "UObject/UObjectIterator.h"

#define LOCTEXT_NAMESPACE "GridFlowExecEdGraphSchema"

UGridFlowExecEdGraphSchema::UGridFlowExecEdGraphSchema(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
}

void UGridFlowExecEdGraphSchema::GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const {
    const UGridFlowExecEdGraph* Graph = Cast<UGridFlowExecEdGraph>(ContextMenuBuilder.CurrentGraph);

    TArray<TSharedPtr<FEdGraphSchemaAction>> Actions;
    GetActionList(Actions, Graph, ContextMenuBuilder.OwnerOfTemporaries);

    for (TSharedPtr<FEdGraphSchemaAction> Action : Actions) {
        ContextMenuBuilder.AddAction(Action);
    }
}

namespace {
    template <typename TTask>
    void AddTaskContextAction(const FText& Category, const FText& Title, const FText& Tooltip,
                              TArray<TSharedPtr<FEdGraphSchemaAction>>& OutActions, UEdGraph* OwnerOfTemporaries) {
        AddTaskContextAction(TTask::StaticClass(), Category, Title, Tooltip, OutActions, OwnerOfTemporaries);
    }

    void AddTaskContextAction(UClass* Class, const FText& Category, const FText& Title, const FText& Tooltip,
                              TArray<TSharedPtr<FEdGraphSchemaAction>>& OutActions, UEdGraph* OwnerOfTemporaries) {
        TSharedPtr<FDungeonSchemaAction_NewNode> NewActorNodeAction = FDungeonSchemaUtils::AddNewNodeAction(
            OutActions, Category, Title, Tooltip);
        UGridFlowExecEdGraphNode_Task* TaskNodeTemplate = NewObject<UGridFlowExecEdGraphNode_Task>(OwnerOfTemporaries);
        TaskNodeTemplate->TaskTemplate = NewObject<UGridFlowExecTask>(TaskNodeTemplate, Class);
        NewActorNodeAction->NodeTemplate = TaskNodeTemplate;
    }
}

void UGridFlowExecEdGraphSchema::GetActionList(TArray<TSharedPtr<FEdGraphSchemaAction>>& OutActions,
                                               const UEdGraph* Graph, UEdGraph* OwnerOfTemporaries) const {
    FText CategoryAbstract = LOCTEXT("MenuCategoryAbstract", "Layout Graph");
    FText CategoryTilemap = LOCTEXT("MenuCategoryTilemap", "Tilemap");

    struct FTaskClassInfo {
        UClass* Class;
        FText Title;
        FText Tooltip;
        FText Category;
        int32 Priority;
    };
    TArray<FTaskClassInfo> TaskClasses;

    for (TObjectIterator<UClass> It; It; ++It) {
        UClass* Class = *It;
        if (!Class || !Class->IsChildOf(UGridFlowExecTask::StaticClass())) {
            continue;
        }

        FText Category;
        if (Class->HasMetaData("AbstractTask")) {
            Category = CategoryAbstract;
        }
        else if (Class->HasMetaData("TilemapTask")) {
            Category = CategoryTilemap;
        }
        else {
            continue;
        }

        FTaskClassInfo ClassInfo;
        ClassInfo.Class = Class;
        ClassInfo.Category = Category;
        ClassInfo.Title = FText::FromString(Class->GetMetaData("Title"));
        ClassInfo.Tooltip = FText::FromString(Class->GetMetaData("Tooltip"));
        ClassInfo.Priority = Class->GetIntMetaData("MenuPriority");
        TaskClasses.Add(ClassInfo);
    }

    TaskClasses.Sort([&](const FTaskClassInfo& A, const FTaskClassInfo& B) {
        return A.Priority < B.Priority;
    });

    for (const FTaskClassInfo& ClassInfo : TaskClasses) {
        AddTaskContextAction(ClassInfo.Class, ClassInfo.Category, ClassInfo.Title, ClassInfo.Tooltip, OutActions,
                             OwnerOfTemporaries);
    }
}

const FPinConnectionResponse UGridFlowExecEdGraphSchema::CanCreateConnection(
    const UEdGraphPin* A, const UEdGraphPin* B) const {
    // Make sure the data types match
    if (A->PinType.PinCategory != B->PinType.PinCategory) {
        return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("Not allowed"));
    }
    // Make sure they are not the same pins
    if (A->GetOwningNode() == B->GetOwningNode()) {
        return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("Not allowed"));
    }

    // Constrain result node direction
    if (A->GetOwningNode()->IsA<UGridFlowExecEdGraphNode_Result>()) {
        return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("Not allowed"));
    }

    return FPinConnectionResponse(CONNECT_RESPONSE_MAKE, TEXT(""));
}

FLinearColor UGridFlowExecEdGraphSchema::GetPinTypeColor(const FEdGraphPinType& PinType) const {
    return FColor::Yellow;
}

bool UGridFlowExecEdGraphSchema::ShouldHidePinDefaultValue(UEdGraphPin* Pin) const {
    return false;
}

FConnectionDrawingPolicy* UGridFlowExecEdGraphSchema::CreateConnectionDrawingPolicy(
    int32 InBackLayerID, int32 InFrontLayerID, float InZoomFactor, const FSlateRect& InClippingRect,
    class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const {
    return new FGridFlowExecConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, InZoomFactor, InClippingRect,
                                                    InDrawElements, InGraphObj);
}

#if WITH_EDITOR
bool UGridFlowExecEdGraphSchema::TryCreateConnection(UEdGraphPin* A, UEdGraphPin* B) const {
    UGridFlowExecEdGraphNodeBase* NodeA = Cast<UGridFlowExecEdGraphNodeBase>(A->GetOwningNode());
    UGridFlowExecEdGraphNodeBase* NodeB = Cast<UGridFlowExecEdGraphNodeBase>(B->GetOwningNode());
    UEdGraphPin* OutputA = NodeA->GetOutputPin();
    UEdGraphPin* InputB = NodeB->GetInputPin();
    if (!OutputA || !InputB) {
        return false;
    }

    bool bSourceIsTilemapCreateNode = false;
    {
        if (UGridFlowExecEdGraphNode_Task* TaskNodeA = Cast<UGridFlowExecEdGraphNode_Task>(NodeA)) {
            bSourceIsTilemapCreateNode = TaskNodeA->TaskTemplate && TaskNodeA
                                                                    ->TaskTemplate->IsA<UGridFlowTaskTilemap_Initialize
                                                                    >();
        }
    }
    bool bConnectionMade = UEdGraphSchema::TryCreateConnection(OutputA, InputB);
    if (bConnectionMade && OutputA && InputB) {
        if (!bSourceIsTilemapCreateNode) {
            // Allow only one outgoing link
            TArray<UEdGraphPin*> LinkedPins = A->LinkedTo;
            for (UEdGraphPin* LinkedPin : LinkedPins) {
                if (LinkedPin != InputB) {
                    // Break this pin
                    OutputA->BreakLinkTo(LinkedPin);
                }
            }
            // Break a reverse link, if it exists
            {
                UEdGraphPin* InputA = NodeA->GetInputPin();
                UEdGraphPin* OutputB = NodeB->GetOutputPin();
                if (InputA && OutputB) {
                    OutputB->BreakLinkTo(InputA);
                }
            }

            UEdGraph* Graph = A->GetOwningNode()->GetGraph();
            Graph->NotifyGraphChanged();
        }
    }
    return bConnectionMade;
}

void UGridFlowExecEdGraphSchema::BreakPinLinks(UEdGraphPin& TargetPin, bool bSendsNodeNotifcation) const {
    UEdGraphSchema::BreakPinLinks(TargetPin, bSendsNodeNotifcation);
    TargetPin.GetOwningNode()->GetGraph()->NotifyGraphChanged();
}

void UGridFlowExecEdGraphSchema::BreakSinglePinLink(UEdGraphPin* SourcePin, UEdGraphPin* TargetPin) const {
    UEdGraphSchema::BreakSinglePinLink(SourcePin, TargetPin);
    SourcePin->GetOwningNode()->GetGraph()->NotifyGraphChanged();
}

void UGridFlowExecEdGraphSchema::BreakNodeLinks(UEdGraphNode& TargetNode) const {
    UEdGraphSchema::BreakNodeLinks(TargetNode);
    TargetNode.GetGraph()->NotifyGraphChanged();
}
#endif // WITH_EDITOR

//////////////////////////////////////// FFlowExecSchemaAction_NewNode ////////////////////////////////////////
UEdGraphNode* FGridFlowExecSchemaAction_NewNode::PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin,
                                                               const FVector2D Location,
                                                               bool bSelectNewNode /*= true*/) {
    UEdGraphNode* NewNode = FDungeonSchemaAction_NewNode::PerformAction(ParentGraph, FromPin, Location, bSelectNewNode);

    if (UGridFlowExecEdGraphNode_Task* TaskNode = Cast<UGridFlowExecEdGraphNode_Task>(NewNode)) {
        // TODO: Initialize me
    }

    return NewNode;
}

#undef LOCTEXT_NAMESPACE
