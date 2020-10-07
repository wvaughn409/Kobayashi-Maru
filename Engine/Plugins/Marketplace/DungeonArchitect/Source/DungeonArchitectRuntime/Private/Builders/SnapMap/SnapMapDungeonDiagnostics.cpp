//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/SnapMapDungeonDiagnostics.h"

#include "Builders/SnapMap/SnapMapDungeonConfig.h"

SnapMapDiagnostics::FDiagnostics::FDiagnostics() {

}

void SnapMapDiagnostics::FDiagnostics::LogMoveToNode(const FGuid& InNodeId) {
    TSharedPtr<FPayload_MoveToNode> Payload = MakeShareable(new FPayload_MoveToNode);
    Payload->NodeId = InNodeId;

    FDiagStep& Step = Steps.AddDefaulted_GetRef();
    Step.Function = EFunctionType::MoveToNode;
    Step.Payload = Payload;
}

void SnapMapDiagnostics::FDiagnostics::LogBacktrackFromNode(bool InbSuccess) {
    TSharedPtr<FPayload_BacktrackFromNode> Payload = MakeShareable(new FPayload_BacktrackFromNode);
    Payload->bSuccess = InbSuccess;

    FDiagStep& Step = Steps.AddDefaulted_GetRef();
    Step.Function = EFunctionType::BacktrackFromNode;
    Step.Payload = Payload;
}

void SnapMapDiagnostics::FDiagnostics::LogAssignModule(const FSnapMapModuleDatabaseItem& InModuleInfo,
                                                       const FTransform& InWorldTransform,
                                                       int32 InIncomingDoorIndex, int32 InRemoteDoorIndex,
                                                       const FGuid& InIncomingDoorId, const FGuid& InRemoteDoorId,
                                                       const FGuid& InNodeId, const FGuid& InRemoteNodeId,
                                                       const FBox& InIncomingDoorBounds) {
    TSharedPtr<FPayload_AssignModule> Payload = MakeShareable(new FPayload_AssignModule);
    Payload->ModuleInfo = InModuleInfo;
    Payload->WorldTransform = InWorldTransform;
    Payload->IncomingDoorId = InIncomingDoorId;
    Payload->RemoteDoorId = InRemoteDoorId;
    Payload->IncomingDoorIndex = InIncomingDoorIndex;
    Payload->RemoteDoorIndex = InRemoteDoorIndex;
    Payload->NodeId = InNodeId;
    Payload->RemoteNodeId = InRemoteNodeId;
    Payload->IncomingDoorBounds = InIncomingDoorBounds;

    FDiagStep& Step = Steps.AddDefaulted_GetRef();
    Step.Function = EFunctionType::AssignModule;
    Step.Payload = Payload;
}

void SnapMapDiagnostics::FDiagnostics::LogRejectModule(EModuleRejectReason InReason) {
    TSharedPtr<FPayload_RejectModule> Payload = MakeShareable(new FPayload_RejectModule);
    Payload->Reason = InReason;

    FDiagStep& Step = Steps.AddDefaulted_GetRef();
    Step.Function = EFunctionType::RejectModule;
    Step.Payload = Payload;
}

void SnapMapDiagnostics::FDiagnostics::LogTimeoutHalt() {
    TSharedPtr<FPayload_TimeoutHalt> Payload = MakeShareable(new FPayload_TimeoutHalt);

    FDiagStep& Step = Steps.AddDefaulted_GetRef();
    Step.Function = EFunctionType::TimeoutHalt;
    Step.Payload = Payload;
}

void SnapMapDiagnostics::FDiagnostics::Clear() {
    Steps.Reset();
}
