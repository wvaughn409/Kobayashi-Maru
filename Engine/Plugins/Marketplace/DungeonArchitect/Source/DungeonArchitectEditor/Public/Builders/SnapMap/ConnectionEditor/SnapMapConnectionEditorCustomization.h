//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "IDetailCustomization.h"

class FSnapMapConnectionMeshInfoCustomization : public IDetailCustomization {
public:

    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static TSharedRef<IDetailCustomization> MakeInstance();

};

class FSnapMapConnectionActorCustomization : public IDetailCustomization {
public:

    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static TSharedRef<IDetailCustomization> MakeInstance();

};
