//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Components/ArrowComponent.h"
#include "SnapConnection.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSnapConnection, Log, All);

UENUM(BlueprintType)
enum class ESnapConnectionState : uint8 {
    Unknown UMETA(DisplayName = "Unknown"),
    Door UMETA(DisplayName = "Door"),
    Wall UMETA(DisplayName = "Wall")
};

UCLASS(Blueprintable)
class DUNGEONARCHITECTRUNTIME_API ASnapConnection : public AActor {
    GENERATED_UCLASS_BODY()
public:
    void OnConstruction(const FTransform& Transform) override;

    void BuildConnection();

#if WITH_EDITOR
    void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif // WITH_EDITOR

    UPROPERTY()
    FGuid InstanceId;

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Snap)
    TSubclassOf<AActor> WallClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Snap)
    TSubclassOf<AActor> DoorClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Snap)
    UChildActorComponent* WallComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Snap)
    UChildActorComponent* DoorComponent;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Snap)
    ESnapConnectionState ConnectionState;

    UPROPERTY()
    UArrowComponent* ArrowComponent;

    UPROPERTY()
    USceneComponent* SceneComponent;
};
