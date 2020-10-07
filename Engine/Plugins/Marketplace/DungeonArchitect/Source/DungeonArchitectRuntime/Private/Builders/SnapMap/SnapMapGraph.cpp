//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/SnapMapGraph.h"

#include "Builders/SnapMap/SnapMapDungeonDiagnostics.h"
#include "Core/Utils/MathUtils.h"
#include "Core/Volumes/DungeonNegationVolume.h"
#include "Frameworks/GraphGrammar/GraphGrammar.h"
#include "Frameworks/GraphGrammar/GraphGrammarProcessor.h"
#include "Frameworks/GraphGrammar/Script/GrammarRuleScript.h"

using namespace SnapMapGraph;

namespace {
    struct FGrowthInputState {
        TArray<FBox> OcclusionStack;
        FModuleDoorPtr RemoteIncomingDoor;
        int32 RemoteIncomingDoorIndex = -1;
    };

    struct FGrowthResult {
        bool bSuccess = false;
        FModuleNodePtr Node;
        FModuleDoorPtr IncomingDoor;
        TArray<FBox> BranchOcclusion;
    };

    class FBranchGrowthPermutations {
    private:
        TSharedPtr<FPermutation<UGrammarRuleScriptGraphNode*>> Permutation;
        TSharedPtr<FCombination<int32>> Combination;

        TArray<int32> OutgoingDoors;
        TArray<UGrammarRuleScriptGraphNode*> OutgoingNodes;

        TArray<int32> CurrentSelection;
    public:
        FBranchGrowthPermutations(const TArray<int32>& InOutgoingDoors,
                                  const TArray<UGrammarRuleScriptGraphNode*> InOutgoingNodes)
            : OutgoingDoors(InOutgoingDoors)
              , OutgoingNodes(InOutgoingNodes) {
            Permutation = MakeShareable(new FPermutation<UGrammarRuleScriptGraphNode*>(OutgoingNodes));
            Combination = MakeShareable(new FCombination<int32>(OutgoingDoors, OutgoingNodes.Num()));

            CurrentSelection = Combination->Execute();
        }

        FORCEINLINE bool CanRun() const { return Combination->CanRun() || Permutation->CanPermute(); }

        void Execute(TArray<int32>& OutDoors, TArray<UGrammarRuleScriptGraphNode*>& OutNodes) {
            if (!CanRun()) {
                return;
            }

            if (!Permutation->CanPermute()) {
                CurrentSelection = Combination->Execute();
                Permutation = MakeShareable(new FPermutation<UGrammarRuleScriptGraphNode*>(OutgoingNodes));
            }

            Permutation->Permutate();

            OutDoors = CurrentSelection;
            OutNodes = Permutation->Data;
        }
    };

    UGrammarRuleScriptGraphNode* GetRootNode(UGrammarScriptGraph* MissionGraph) {
        if (MissionGraph->Nodes.Num() == 0) {
            // No nodes exist
            return nullptr;
        }

        UGrammarRuleScriptGraphNode* Node = Cast<UGrammarRuleScriptGraphNode>(MissionGraph->Nodes[0]);
        TSet<UGrammarRuleScriptGraphNode*> Visited;
        while (true) {
            TArray<UGrammarScriptGraphNode*> IncomingNodes = Node->IncomingNodes;
            if (IncomingNodes.Num() == 0) {
                return Node;
            }
            Visited.Add(Node);

            UGrammarRuleScriptGraphNode* ParentNode = nullptr;
            for (UGrammarScriptGraphNode* IncomingNode : IncomingNodes) {
                UGrammarRuleScriptGraphNode* NextNode = Cast<UGrammarRuleScriptGraphNode>(IncomingNode);
                if (NextNode && !Visited.Contains(NextNode)) {
                    ParentNode = NextNode;
                    break;
                }
            }

            if (!ParentNode) {
                return nullptr;
            }
            Node = ParentNode;
        }
    }

    TArray<UGrammarRuleScriptGraphNode*> GetOutgoingNodes(UGrammarRuleScriptGraphNode* Node) {
        TArray<UGrammarRuleScriptGraphNode*> OutgoingNodes;
        for (UGrammarScriptGraphNode* OutgoingNode : Node->OutgoingNodes) {
            if (UGrammarRuleScriptGraphNode* OutgoingRuleNode = Cast<UGrammarRuleScriptGraphNode>(OutgoingNode)) {
                OutgoingNodes.Add(OutgoingRuleNode);
            }
        }
        return OutgoingNodes;
    }

    bool ModuleOccludes(const FBox& Bounds, const TArray<FBox>& OcclusionList,
                        const TArray<FSnapNegationVolumeState>& NegationVolumes, float BoundsContraction) {
        // Make sure the negation volume constraints are satisfied
        for (const FSnapNegationVolumeState& NegationVolume : NegationVolumes) {
            if (NegationVolume.bInverse) {
                // The module should be completely inside this 
                if (!NegationVolume.Bounds.IsInside(Bounds)) {
                    return true;
                }
            }
            else {
                // We should not intersect with the negation volume
                if (Bounds.Intersect(NegationVolume.Bounds)) {
                    return true;
                }
            }
        }

        FBox TestingBounds = Bounds.ExpandBy(-BoundsContraction);
        for (const FBox& Occlusion : OcclusionList) {
            if (TestingBounds.Intersect(Occlusion)) {
                return true;
            }
        }
        return false;
    }

    FModuleNodePtr GetConnectedModule(FModuleDoorPtr Door) {
        if (Door.IsValid() && Door->ConnectedDoor.IsValid()) {
            FModuleDoorPtr OtherDoor = Door->ConnectedDoor;
            if (OtherDoor->Owner.IsValid()) {
                return OtherDoor->Owner;
            }
        }
        return nullptr;
    }

    FModuleNodePtr CreateModuleNode(const FSnapMapModuleDatabaseItem& ModuleItem, const FGuid& InNodeId) {
        FModuleNodePtr Node = MakeShareable(new FModuleNode);
        Node->ModuleInstanceId = InNodeId;
        Node->ModuleDBInfo = ModuleItem;

        for (const FSnapMapModuleDatabaseConnectionInfo& DoorInfo : ModuleItem.Connections) {
            FModuleDoorPtr Door = MakeShareable(new FModuleDoor);
            Door->ConnectionId = DoorInfo.ConnectionId;
            Door->ConnectionInfo = DoorInfo.ConnectionInfo;
            Door->ConnectionConstraint = DoorInfo.ConnectionConstraint;
            Door->LocalTransform = DoorInfo.Transform;
            Door->Owner = Node;
            Node->Doors.Add(Door);
        }

        return Node;
    }

    bool CanConnectDoors(FModuleDoorPtr A, FModuleDoorPtr B, bool bAllowRotation) {
        if (!A.IsValid() || !B.IsValid() || A->Owner == B->Owner) return false;

        if (A->ConnectionInfo != B->ConnectionInfo) {
            // Different door assets used
            return false;
        }

        bool bHasMale = A->ConnectionConstraint == ESnapMapConnectionConstraint::PlugMale
            || B->ConnectionConstraint == ESnapMapConnectionConstraint::PlugMale;

        bool bHasFemale = A->ConnectionConstraint == ESnapMapConnectionConstraint::PlugFemale
            || B->ConnectionConstraint == ESnapMapConnectionConstraint::PlugFemale;

        if ((bHasFemale && !bHasMale) || (bHasMale && !bHasFemale)) {
            return false;
        }

        if (!bAllowRotation) {
            // Make sure the doors are facing the opposite directions
            FVector DoorForwardA = A->LocalTransform.GetRotation().GetForwardVector();
            FVector DoorForwardB = B->LocalTransform.GetRotation().GetForwardVector();
            float Dot = FVector::DotProduct(DoorForwardA, DoorForwardB);
            if (!FMath::IsNearlyEqual(Dot, -1, 1e-4f)) {
                return false;
            }
        }

        return true;
    }
    
    bool GetDoorFitConfiguration(FModuleDoorPtr RemoteDoor, FModuleDoorPtr DoorToFit, bool bAllowModuleRotation,
                                 FTransform& OutNewTransform) {
        if (!RemoteDoor.IsValid()) {
            // No incoming door. This is the first node in the graph
            OutNewTransform = FTransform::Identity;
            return true;
        }

        if (!CanConnectDoors(RemoteDoor, DoorToFit, bAllowModuleRotation)) {
            return false;
        }

        if (!RemoteDoor->Owner.IsValid()) {
            return false;
        }

        FTransform AttachmentDoorTransform = DoorToFit->LocalTransform;

        if (bAllowModuleRotation) {
            FTransform DesiredDoorTransform = FTransform(FQuat::MakeFromEuler(FVector(0, 0, 180))) * RemoteDoor->
                LocalTransform * RemoteDoor->Owner->WorldTransform;
            // Calculate the rotation
            FQuat DesiredRotation;
            {
                FVector TargetVector = DesiredDoorTransform.GetRotation().Vector();
                FVector SourceVector = AttachmentDoorTransform.GetRotation().Vector();
                DesiredRotation = FQuat::FindBetween(SourceVector, TargetVector);
            }

            // Calculate the translation
            FVector DesiredOffset;
            {
                FVector TargetOffset = DesiredDoorTransform.GetLocation();
                FVector SourceOffset = AttachmentDoorTransform.GetLocation();
                SourceOffset = DesiredRotation * SourceOffset;
                DesiredOffset = TargetOffset - SourceOffset;
            }

            OutNewTransform = FTransform(DesiredRotation, DesiredOffset);
        }
        else {

            FTransform DesiredDoorTransform = RemoteDoor->LocalTransform * RemoteDoor->Owner->WorldTransform;

            // Calculate the translation
            FVector DesiredOffset;
            {
                FVector TargetOffset = DesiredDoorTransform.GetLocation();
                FVector SourceOffset = AttachmentDoorTransform.GetLocation();
                DesiredOffset = TargetOffset - SourceOffset;
            }

            OutNewTransform = FTransform(FQuat::Identity, DesiredOffset);
        }
        return true;
    }

    // Get all the possible modules defined by this node's category
    void GetPossibleModules(UGrammarRuleScriptGraphNode* Node, const FGrowthStaticState& StaticState,
                            TArray<FSnapMapModuleDatabaseItem>& OutModules) {
        if (!Node) return;

        FName ModuleCategory = Node->TypeInfo->TypeName;
        const TArray<FSnapMapModuleDatabaseItem>* SearchResult = StaticState.ModulesByCategory.Find(ModuleCategory);
        if (SearchResult) {
            OutModules.Append(*SearchResult);
        }
    }

#define DIAGNOSIC_LOG(Func, ...) if (StaticState.Diagnostics.IsValid()) StaticState.Diagnostics->Log##Func(__VA_ARGS__);

    void GrowNode(UGrammarRuleScriptGraphNode* MissionNode, const FGrowthInputState& InputState,
                  const FGrowthStaticState& StaticState, FGrowthResult& OutResult) {
        DIAGNOSIC_LOG(MoveToNode, MissionNode->NodeId);

        // Check if we've taken too much time to process this
        {
            // TODO: This will cause timeouts when debugging with breakpoints, find a better way
            double CurrentTimeSecs = FPlatformTime::Seconds();
            if (CurrentTimeSecs >= StaticState.StartTimeSecs + StaticState.MaxProcessingTimeSecs) {
                OutResult.bSuccess = false;
                OutResult.Node = nullptr;
                OutResult.BranchOcclusion.Reset();

                DIAGNOSIC_LOG(TimeoutHalt);
                return;
            }
        }

        TArray<UGrammarRuleScriptGraphNode*> OutgoingNodes = GetOutgoingNodes(MissionNode);
        // TODO: Cache the sort in a memo
        OutgoingNodes.Sort([](const UGrammarRuleScriptGraphNode& A, const UGrammarRuleScriptGraphNode& B) -> bool {
            if (!A.TypeInfo.IsValid() || B.TypeInfo.IsValid()) return false;
            const FName& NameA = A.TypeInfo->TypeName;
            const FName& NameB = B.TypeInfo->TypeName;
            return NameA.FastLess(NameB);
        });

        TArray<FSnapMapModuleDatabaseItem> PossibleModules;
        GetPossibleModules(MissionNode, StaticState, PossibleModules);

        // Try to fit a module with the incoming door
        TArray<int32> ShuffledModuleIndices = FMathUtils::GetShuffledIndices(PossibleModules.Num(), StaticState.Random);
        for (int32 ModuleIdxRef = 0; ModuleIdxRef < PossibleModules.Num(); ModuleIdxRef++) {
            int32 ModuleIdx = ShuffledModuleIndices[ModuleIdxRef];
            const FSnapMapModuleDatabaseItem& ModuleItem = PossibleModules[ModuleIdx];
            FModuleNodePtr ModuleNode = CreateModuleNode(ModuleItem, MissionNode->NodeId);
            if (!ModuleNode.IsValid()) {
                continue;
            }

            FModuleDoorPtr RemoteIncomingDoor = InputState.RemoteIncomingDoor;
            TArray<int32> ShuffledDoorIndices = FMathUtils::GetShuffledIndices(
                ModuleNode->Doors.Num(), StaticState.Random);
            for (int32 DoorIdxRef = 0; DoorIdxRef < ModuleNode->Doors.Num(); DoorIdxRef++) {
                int32 DoorIdx = ShuffledDoorIndices[DoorIdxRef];
                FModuleDoorPtr IncomingDoor = ModuleNode->Doors[DoorIdx];
                FTransform NewModuleTransform;
                if (GetDoorFitConfiguration(RemoteIncomingDoor, IncomingDoor, StaticState.bAllowModuleRotations,
                                            NewModuleTransform)) {
                    if (!RemoteIncomingDoor.IsValid()) {
                        NewModuleTransform = StaticState.DungeonBaseTransform;
                    }
                    ModuleNode->WorldTransform = NewModuleTransform;

                    // Add diagnostic information if available
                    if (StaticState.Diagnostics.IsValid()) {
                        const FGuid& NodeId = MissionNode->NodeId;
                        const FGuid& RemoteNodeId = RemoteIncomingDoor.IsValid()
                                                        ? RemoteIncomingDoor->Owner->ModuleInstanceId
                                                        : FGuid();
                        const FGuid& DoorId = IncomingDoor->ConnectionId;
                        const FGuid& RemoteDoorId = RemoteIncomingDoor.IsValid()
                                                        ? RemoteIncomingDoor->ConnectionId
                                                        : FGuid();
                        int32 DoorIndex = DoorIdx;
                        int32 RemoteDoorIndex = InputState.RemoteIncomingDoorIndex;
                        FTransform DoorWorldTransform = RemoteIncomingDoor.IsValid()
                                                            ? RemoteIncomingDoor->LocalTransform * RemoteIncomingDoor
                                                                                                   ->Owner->
                                                                                                   WorldTransform
                                                            : FTransform::Identity;
                        FBox DoorLocalBounds = FBox(FVector(-200, -50, 0), FVector(200, 50, 400));
                        FBox DoorWorldBounds = DoorLocalBounds.TransformBy(DoorWorldTransform);
                        DIAGNOSIC_LOG(AssignModule, ModuleItem, ModuleNode->WorldTransform, DoorIndex, RemoteDoorIndex,
                                      DoorId, RemoteDoorId, NodeId, RemoteNodeId, DoorWorldBounds);
                    }

                    FBox NodeBounds = ModuleNode->GetModuleBounds();
                    if (ModuleOccludes(NodeBounds, InputState.OcclusionStack, StaticState.NegationVolumes,
                                       StaticState.BoundsContraction)) {
                        DIAGNOSIC_LOG(RejectModule, SnapMapDiagnostics::EModuleRejectReason::BoundsCollide);
                        continue;
                    }

                    // We have a module that fits without occluding
                    // Start permutation of each door / outgoing node configuration and try to grow outward
                    TArray<int32> OutgoingDoorIndices;
                    for (int i = 0; i < ModuleNode->Doors.Num(); i++) {
                        if (RemoteIncomingDoor.IsValid() && i == DoorIdx) {
                            continue;
                        }
                        OutgoingDoorIndices.Add(i);
                    }
                    FMathUtils::Shuffle(OutgoingDoorIndices, StaticState.Random);

                    if (OutgoingNodes.Num() > OutgoingDoorIndices.Num()) {
                        // Too few available doors in this module to grow 
                        DIAGNOSIC_LOG(RejectModule, SnapMapDiagnostics::EModuleRejectReason::NotEnoughDoorsAvailable);
                        break;
                    }

                    // Create permutation engine and iterate each permutation
                    FBranchGrowthPermutations PermutationEngine(OutgoingDoorIndices, OutgoingNodes);
                    while (PermutationEngine.CanRun()) {
                        bool bAllBranchesSuccessful = true;
                        TArray<FBox> BranchOcclusion;
                        BranchOcclusion.Add(NodeBounds);

                        TArray<int32> Doors;
                        TArray<UGrammarRuleScriptGraphNode*> Nodes;
                        PermutationEngine.Execute(Doors, Nodes);
                        ModuleNode->Outgoing.Reset();
                        for (int i = 0; i < Doors.Num(); i++) {
                            int32 OutgoingDoorIdx = Doors[i];
                            FModuleDoorPtr OutgoingDoor = ModuleNode->Doors[OutgoingDoorIdx];
                            UGrammarRuleScriptGraphNode* OutgoingNode = Nodes[i];

                            FGrowthInputState ChildInputState = InputState;
                            ChildInputState.OcclusionStack.Append(BranchOcclusion);
                            ChildInputState.RemoteIncomingDoor = OutgoingDoor;
                            ChildInputState.RemoteIncomingDoorIndex = OutgoingDoorIdx;

                            FGrowthResult ChildResult;
                            GrowNode(OutgoingNode, ChildInputState, StaticState, ChildResult);
                            if (!ChildResult.bSuccess) {
                                bAllBranchesSuccessful = false;
                                break;
                            }

                            OutgoingDoor->ConnectedDoor = ChildResult.IncomingDoor;
                            ChildResult.IncomingDoor->ConnectedDoor = OutgoingDoor->ConnectedDoor;

                            ModuleNode->Outgoing.Add(OutgoingDoor);
                            BranchOcclusion.Append(ChildResult.BranchOcclusion);
                        }

                        if (bAllBranchesSuccessful) {
                            ModuleNode->Incoming = IncomingDoor;

                            OutResult.bSuccess = true;
                            OutResult.Node = ModuleNode;
                            OutResult.IncomingDoor = IncomingDoor;
                            OutResult.BranchOcclusion = BranchOcclusion;
                            DIAGNOSIC_LOG(BacktrackFromNode, true);
                            return;
                        }
                    }

                    DIAGNOSIC_LOG(RejectModule, SnapMapDiagnostics::EModuleRejectReason::CannotBuildSubTree);
                }
            }
        }

        OutResult.bSuccess = false;
        OutResult.Node = nullptr;
        OutResult.BranchOcclusion.Reset();

        DIAGNOSIC_LOG(BacktrackFromNode, false);
    }
#undef DIAGNOSIC_LOG
    
    void AssignNetworkNodeIds(FModuleNodePtr Node) {
        uint32 IdCounter = 0;
        TSet<FModuleNodePtr> Visited;
        TArray<FModuleNodePtr> Stack;
        Stack.Push(Node);
        while (Stack.Num() > 0) {
            FModuleNodePtr Top = Stack.Pop();
            if (Visited.Contains(Top)) {
                continue;
            }
            Visited.Add(Top);

            Top->NetworkId = IdCounter;
            IdCounter++;

            for (FModuleDoorPtr Door : Top->Outgoing) {
                if (Door.IsValid() && Door->ConnectedDoor.IsValid() && Door->ConnectedDoor->Owner.IsValid()) {
                    FModuleNodePtr Child = Door->ConnectedDoor->Owner;
                    Stack.Push(Child);
                }
            }
        }
    }


}

class UGrammarScriptGraph;

FBox FModuleNode::GetModuleBounds() const {
    return ModuleDBInfo.ModuleBounds.TransformBy(WorldTransform);
}

FModuleNodePtr FSnapMapGraphGenerator::Generate(int32 Seed, UGraphGrammar* MissionGrammar, UGrammarScriptGraph* MissionGraph,
                                                const FGrowthStaticState& StaticState) {

    // build the mission graph from the mission grammar rules
    {
        FGraphGrammarProcessor GraphGrammarProcessor;
        GraphGrammarProcessor.Initialize(MissionGraph, MissionGrammar, Seed);
        GraphGrammarProcessor.Execute(MissionGraph, MissionGrammar);
    }

    // The mission graph is ready. Now build the level as per the mission graph
    UGrammarRuleScriptGraphNode* StartMissionNode = GetRootNode(MissionGraph);

    if (!StartMissionNode) {
        return nullptr;
    }

    FGrowthResult Result;
    GrowNode(StartMissionNode, FGrowthInputState(), StaticState, Result);

    if (!Result.bSuccess) {
        return nullptr;
    }

    AssignNetworkNodeIds(Result.Node);
    return Result.Node;
}

