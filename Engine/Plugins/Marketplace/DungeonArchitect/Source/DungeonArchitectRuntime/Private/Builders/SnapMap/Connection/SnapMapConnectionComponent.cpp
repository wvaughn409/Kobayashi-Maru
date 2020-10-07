//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"

DEFINE_LOG_CATEGORY(LogSnapMapConnection);

USnapMapConnectionComponent::USnapMapConnectionComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer) {
    ConnectionState = ESnapMapConnectionState::Door;
}

void USnapMapConnectionComponent::OnRegister() {
    Super::OnRegister();

    CreationMethod = EComponentCreationMethod::Instance;
}


void USnapMapConnectionComponent::Serialize(FArchive& Ar) {
    Super::Serialize(Ar);

    Ar << ConnectionState;
}


#if WITH_EDITOR
void USnapMapConnectionComponent::PostEditChangeProperty(FPropertyChangedEvent& e) {
    FName PropertyName = (e.Property != nullptr) ? e.Property->GetFName() : NAME_None;
    bool bRebuildConnection = false;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(USnapMapConnectionComponent, ConnectionInfo)) {
        bRebuildConnection = true;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(USnapMapConnectionComponent, ConnectionState)) {
        bRebuildConnection = true;
    }
    else if (PropertyName == GET_MEMBER_NAME_CHECKED(USnapMapConnectionComponent, ConnectionConstraint)) {
        ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(GetOwner());
        if (ConnectionActor) {
            ConnectionActor->UpdateConstraintIcon();
        }
    }

    if (bRebuildConnection) {
        ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(GetOwner());
        if (ConnectionActor) {
            //ConnectionActor->BuildConnection(GetWorld());
        }
    }


    Super::PostEditChangeProperty(e);
}
#endif
