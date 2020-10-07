//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMesh.h"
#include "GameFramework/Actor.h"
#include "Materials/MaterialInterface.h"
#include "SnapMapConnectionInfo.generated.h"

USTRUCT(Blueprintable)
struct DUNGEONARCHITECTRUNTIME_API FSnapMapConnectionVisualMeshInfo {
    GENERATED_USTRUCT_BODY()

    FSnapMapConnectionVisualMeshInfo() : StaticMesh(nullptr), MaterialOverride(nullptr), Offset(FTransform::Identity) {
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    UStaticMesh* StaticMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    UMaterialInterface* MaterialOverride;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    FTransform Offset;
};

USTRUCT(Blueprintable)
struct DUNGEONARCHITECTRUNTIME_API FSnapMapConnectionVisualBlueprintInfo {
    GENERATED_USTRUCT_BODY()

    FSnapMapConnectionVisualBlueprintInfo() : Offset(FTransform::Identity) {
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    TSubclassOf<AActor> BlueprintClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    FTransform Offset;
};

USTRUCT(Blueprintable)
struct DUNGEONARCHITECTRUNTIME_API FSnapMapConnectionVisualInfo {
    GENERATED_USTRUCT_BODY()

    FSnapMapConnectionVisualInfo() : bStaticMesh(true) {
    }

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    bool bStaticMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    FSnapMapConnectionVisualMeshInfo MeshInfo;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    FSnapMapConnectionVisualBlueprintInfo BlueprintInfo;
};


UCLASS(Blueprintable)
class DUNGEONARCHITECTRUNTIME_API USnapMapConnectionInfo : public UObject {
    GENERATED_UCLASS_BODY()

public:
#if WITH_EDITORONLY_DATA
    UPROPERTY()
    bool bEditorPreviewDoor;
#endif

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = SnapMap)
    FName ConnectionCategory;

    UPROPERTY()
    FSnapMapConnectionVisualInfo DoorVisuals;

    UPROPERTY()
    FSnapMapConnectionVisualInfo WallVisuals;
};
