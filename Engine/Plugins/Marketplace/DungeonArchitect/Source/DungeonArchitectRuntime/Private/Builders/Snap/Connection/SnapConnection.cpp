//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/Connection/SnapConnection.h"

#include "Builders/Snap/Module/SnapModuleState.h"

DEFINE_LOG_CATEGORY(LogSnapConnection);

ASnapConnection::ASnapConnection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    SceneComponent = ObjectInitializer.CreateDefaultSubobject<USceneComponent>(this, "SceneRoot");
    if ((GetFlags() & RF_ArchetypeObject) == 0) {
        SetRootComponent(SceneComponent);
    }

    SceneComponent->SetMobility(EComponentMobility::Static);

    WallComponent = ObjectInitializer.CreateDefaultSubobject<UChildActorComponent>(this, "Wall");
    WallComponent->SetMobility(EComponentMobility::Static);
    WallComponent->SetupAttachment(RootComponent);

    DoorComponent = ObjectInitializer.CreateDefaultSubobject<UChildActorComponent>(this, "Door");
    DoorComponent->SetMobility(EComponentMobility::Static);
    DoorComponent->SetupAttachment(RootComponent);

    ArrowComponent = ObjectInitializer.CreateDefaultSubobject<UArrowComponent>(this, "Arrow");
    ArrowComponent->SetMobility(EComponentMobility::Static);
    ArrowComponent->SetupAttachment(RootComponent);
    ArrowComponent->SetHiddenInGame(true);

    ConnectionState = ESnapConnectionState::Door;
}

void ASnapConnection::OnConstruction(const FTransform& Transform) {
    Super::OnConstruction(Transform);

    BuildConnection();
}

void ASnapConnection::BuildConnection() {
    // Grab the connection state from the module state component if it is present
    AActor* ParentActor = GetParentActor();
    if (ParentActor) {
        USnapModuleState* ModuleState = Cast<USnapModuleState>(
            ParentActor->GetComponentByClass(USnapModuleState::StaticClass()));
        if (ModuleState) {
            // Check if we have a registered state for this connection instance
            if (ModuleState->ConnectionStates.Contains(InstanceId)) {
                ConnectionState = ModuleState->ConnectionStates[InstanceId];
            }
        }
    }

    switch (ConnectionState) {
    case ESnapConnectionState::Door:
        DoorComponent->SetChildActorClass(DoorClass);

        WallComponent->DestroyChildActor();
        WallComponent->SetChildActorClass(nullptr);
        break;

    case ESnapConnectionState::Wall:
        WallComponent->SetChildActorClass(WallClass);

        DoorComponent->DestroyChildActor();
        DoorComponent->SetChildActorClass(nullptr);
        break;

    case ESnapConnectionState::Unknown:
    default:
        UE_LOG(LogSnapConnection, Warning,
               TEXT("Invalid door state.  This should be set before the actor is spawned on to the scene"));
        break;
    }
}

#if WITH_EDITOR
void ASnapConnection::PostEditChangeProperty(FPropertyChangedEvent& e) {
    FName PropertyName = (e.Property != nullptr) ? e.Property->GetFName() : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(ASnapConnection, WallClass)) {
        WallComponent->SetChildActorClass(WallClass);
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(ASnapConnection, DoorClass)) {
        DoorComponent->SetChildActorClass(DoorClass);
    }
    Super::PostEditChangeProperty(e);
}
#endif
