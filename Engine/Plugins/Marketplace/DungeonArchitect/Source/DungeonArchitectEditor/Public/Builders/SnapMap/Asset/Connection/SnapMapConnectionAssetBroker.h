//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"

#include "ComponentAssetBroker.h"

class FSnapMapConnectionAssetBroker : public IComponentAssetBroker {
public:

    UClass* GetSupportedAssetClass() override {
        return USnapMapConnectionInfo::StaticClass();
    }

    bool AssignAssetToComponent(UActorComponent* InComponent, UObject* InAsset) override {
        if (USnapMapConnectionComponent* ConnectionComponent = Cast<USnapMapConnectionComponent>(InComponent)) {
            USnapMapConnectionInfo* ConnectionAsset = Cast<USnapMapConnectionInfo>(InAsset);

            if ((ConnectionAsset != nullptr) || (ConnectionComponent == nullptr)) {
                ConnectionComponent->ConnectionInfo = ConnectionAsset;

                //ASnapMapConnectionActor* ConnectionActor = Cast<ASnapMapConnectionActor>(ConnectionComponent->GetOwner());
                //ConnectionActor->BuildConnection(ConnectionActor->GetWorld());
                return true;
            }
        }

        return false;
    }

    UObject* GetAssetFromComponent(UActorComponent* InComponent) override {
        if (USnapMapConnectionComponent* ConnectionComponent = Cast<USnapMapConnectionComponent>(InComponent)) {
            return ConnectionComponent->ConnectionInfo;
        }
        return nullptr;
    }

};
