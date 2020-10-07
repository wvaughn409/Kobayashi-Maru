//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionConstants.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"
#include "SnapMapConnectionComponent.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSnapMapConnection, Log, All);

UCLASS(Blueprintable, meta = (BlueprintSpawnableComponent))
class DUNGEONARCHITECTRUNTIME_API USnapMapConnectionComponent : public USceneComponent {
    GENERATED_UCLASS_BODY()
public:

    void OnRegister() override;


#if WITH_EDITOR
    void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

    void Serialize(FArchive& Ar) override;


public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    USnapMapConnectionInfo* ConnectionInfo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    ESnapMapConnectionState ConnectionState;

    UPROPERTY(EditAnywhere, Category = SnapMap)
    ESnapMapConnectionConstraint ConnectionConstraint;
};
