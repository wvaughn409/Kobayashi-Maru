//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Asset/Connection/SnapMapConnectionActorFactory.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"

#include "AssetData.h"

USnapMapConnectionActorFactory::USnapMapConnectionActorFactory(const FObjectInitializer& ObjectInitializer) : Super(
    ObjectInitializer) {
    DisplayName = NSLOCTEXT("SnapMapConnection", "SnapMapConnectionFactoryDisplayName", "Add SnapMap Connection");
    NewActorClass = ASnapMapConnectionActor::StaticClass();
}

UObject* USnapMapConnectionActorFactory::GetAssetFromActorInstance(AActor* ActorInstance) {
    ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(ActorInstance);
    return ConnectionActor ? ConnectionActor->ConnectionComponent->ConnectionInfo : nullptr;
}

AActor* USnapMapConnectionActorFactory::SpawnActor(UObject* Asset, ULevel* InLevel, const FTransform& Transform,
                                                   EObjectFlags InObjectFlags, const FName Name) {
    AActor* Actor = UActorFactory::SpawnActor(Asset, InLevel, Transform, InObjectFlags, Name);
    ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(Actor);
    if (ConnectionActor) {
        ConnectionActor->ConnectionComponent->ConnectionInfo = Cast<USnapMapConnectionInfo>(Asset);
        //ConnectionActor->BuildConnection(InLevel->GetWorld());
    }
    return Actor;
}

void USnapMapConnectionActorFactory::PostSpawnActor(UObject* Asset, AActor* NewActor) {
    ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(NewActor);
    if (ConnectionActor && ConnectionActor->ConnectionComponent) {
        ConnectionActor->ConnectionComponent->ConnectionInfo = Cast<USnapMapConnectionInfo>(Asset);
    }
}

void USnapMapConnectionActorFactory::PostCreateBlueprint(UObject* Asset, AActor* CDO) {
    ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(CDO);
    if (ConnectionActor && ConnectionActor->ConnectionComponent) {
        ConnectionActor->ConnectionComponent->ConnectionInfo = Cast<USnapMapConnectionInfo>(Asset);
    }
}

bool USnapMapConnectionActorFactory::CanCreateActorFrom(const FAssetData& AssetData, FText& OutErrorMsg) {
    if (AssetData.IsValid() && AssetData.GetClass()->IsChildOf(USnapMapConnectionInfo::StaticClass())) {
        return true;
    }
    OutErrorMsg = NSLOCTEXT("SnapMapConnection", "SnapMapConnectionFactoryDisplayName",
                            "No connection info was specified.");
    return false;
}
