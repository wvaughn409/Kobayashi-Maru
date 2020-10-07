//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/Connection/SnapMapConnectionActor.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"

#include "Components/ArrowComponent.h"
#include "Components/BillboardComponent.h"
#include "Components/DecalComponent.h"
#include "Engine/StaticMeshActor.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "UObject/ConstructorHelpers.h"

ASnapMapConnectionActor::ASnapMapConnectionActor(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
      , SpawnedInstance(nullptr) {
    ConnectionId = FGuid::NewGuid();
    ConnectionComponent = ObjectInitializer.CreateDefaultSubobject<USnapMapConnectionComponent>(this, "Connection");
    RootComponent = ConnectionComponent;
#if WITH_EDITORONLY_DATA
    ArrowComponent = ObjectInitializer.CreateEditorOnlyDefaultSubobject<UArrowComponent>(this, TEXT("Arrow"));
    DoorSpriteComponent = ObjectInitializer.CreateEditorOnlyDefaultSubobject<UBillboardComponent>(
        this, TEXT("DoorSprite"));
    ConnectionConstraintSpriteComponent = ObjectInitializer.CreateEditorOnlyDefaultSubobject<UBillboardComponent>(
        this, TEXT("ConstraintSprite"));
    //ConstraintDebugDecal = ObjectInitializer.CreateEditorOnlyDefaultSubobject<UDecalComponent>(this, TEXT("ConstraintDebugDecal"));

    if (!IsRunningCommandlet()) {
        const TCHAR* PathName = TEXT("/DungeonArchitect/Core/Textures/S_SnapDoor");
        // Structure to hold one-time initialization
        struct FConstructorStatics {
            ConstructorHelpers::FObjectFinderOptional<UTexture2D> IconDoor;
            ConstructorHelpers::FObjectFinderOptional<UTexture2D> IconMagnet;
            ConstructorHelpers::FObjectFinderOptional<UTexture2D> IconPlugMale;
            ConstructorHelpers::FObjectFinderOptional<UTexture2D> IconPlugFemale;
            ConstructorHelpers::FObjectFinderOptional<UMaterialInterface> MaterialDebugDecal;

            FConstructorStatics()
                : IconDoor(TEXT("/DungeonArchitect/Core/Textures/S_SnapDoor"))
                  , IconMagnet(TEXT("/DungeonArchitect/Core/Textures/icon_Magnet_256x"))
                  , IconPlugMale(TEXT("/DungeonArchitect/Core/Textures/icon_PlugMale_256x"))
                  , IconPlugFemale(TEXT("/DungeonArchitect/Core/Textures/icon_PlugFemale_256x"))
                  , MaterialDebugDecal(TEXT("/DungeonArchitect/Core/Materials/Snap/Decals/M_SnapDecalBase")) {
            }
        };
        static FConstructorStatics ConstructorStatics;

        if (ArrowComponent) {
            ArrowComponent->SetMobility(EComponentMobility::Movable);
            ArrowComponent->SetupAttachment(RootComponent);
            ArrowComponent->SetHiddenInGame(true);
        }

        if (DoorSpriteComponent) {
            DoorSpriteComponent->SetMobility(EComponentMobility::Movable);
            DoorSpriteComponent->SetupAttachment(RootComponent);
            DoorSpriteComponent->Sprite = ConstructorStatics.IconDoor.Get();
            DoorSpriteComponent->SetRelativeLocation(FVector(0, 0, 40));
            DoorSpriteComponent->SetRelativeScale3D(FVector(1, 1, 1));
        }

        if (ConnectionConstraintSpriteComponent) {
            ConnectionConstraintSpriteComponent->SetMobility(EComponentMobility::Movable);
            ConnectionConstraintSpriteComponent->SetupAttachment(RootComponent);
        }
        /*
        if (ConstraintDebugDecal) {
            ConstraintDebugDecal->SetMobility(EComponentMobility::Movable);
            ConstraintDebugDecal->SetupAttachment(RootComponent);
            ConstraintDebugDecal->SetRelativeLocation(FVector(-200, 0, 0));
            ConstraintDebugDecal->SetRelativeRotation(FQuat::MakeFromEuler(FVector(0, 90, 180)));
            ConstraintDebugDecal->DecalSize = FVector(100, 100, 100);
        }
        */

        if (ConnectionConstraintSpriteComponent) {
            ConnectionConstraintSpriteComponent->SetRelativeLocation(FVector(0, 0, 100));
            ConnectionConstraintSpriteComponent->SetRelativeScale3D(FVector(0.45f, 0.45f, 0.45f));
        }

        IconConstraintMagnet = ConstructorStatics.IconMagnet.Get();
        IconConstraintPlugMale = ConstructorStatics.IconPlugMale.Get();
        IconConstraintPlugFemale = ConstructorStatics.IconPlugFemale.Get();
        MaterialDebugDecal = ConstructorStatics.MaterialDebugDecal.Get();

        if (MaterialDebugDecal) {
            MaterialDebugDecalInstance = UMaterialInstanceDynamic::Create(MaterialDebugDecal, GetTransientPackage());
        }
    }

#endif //WITH_EDITORONLY_DATA
}

void ASnapMapConnectionActor::PostLoad() {
    Super::PostLoad();

    Initialize();
}


void ASnapMapConnectionActor::PostActorCreated() {
    Super::PostActorCreated();

    Initialize();
}

void ASnapMapConnectionActor::PostDuplicate(EDuplicateMode::Type DuplicateMode) {
    Super::PostDuplicate(DuplicateMode);

    if (DuplicateMode == EDuplicateMode::Normal) {
        ConnectionId = FGuid::NewGuid();
    }
}

void ASnapMapConnectionActor::Initialize() {
    //BuildConnection(GetWorld());

#if WITH_EDITORONLY_DATA
    UpdateConstraintIcon();
#endif	// WITH_EDITORONLY_DATA
}


#if WITH_EDITOR

void ASnapMapConnectionActor::PostEditChangeProperty(struct FPropertyChangedEvent& e) {
    FName PropertyName = (e.Property != nullptr) ? e.Property->GetFName() : NAME_None;
    if (PropertyName == GET_MEMBER_NAME_CHECKED(ASnapMapConnectionActor, ConnectionComponent)) {
        //BuildConnection(GetWorld());
    }
    Super::PostEditChangeProperty(e);
}

#endif


#if WITH_EDITORONLY_DATA

UTexture2D* ASnapMapConnectionActor::GetConstraintTexture(ESnapMapConnectionConstraint ConnectionConstraint) {
    switch (ConnectionComponent->ConnectionConstraint) {
    case ESnapMapConnectionConstraint::Magnet:
        return IconConstraintMagnet;

    case ESnapMapConnectionConstraint::PlugMale:
        return IconConstraintPlugMale;

    case ESnapMapConnectionConstraint::PlugFemale:
        return IconConstraintPlugFemale;

    default:
        return nullptr;
    }
}


void ASnapMapConnectionActor::UpdateConstraintIcon() {
    if (!ConnectionConstraintSpriteComponent) return;

    UTexture2D* Sprite = ConnectionComponent
                             ? GetConstraintTexture(ConnectionComponent->ConnectionConstraint)
                             : nullptr;
    ConnectionConstraintSpriteComponent->SetSprite(Sprite);

    UpdateConstraintDecal();
}

void ASnapMapConnectionActor::UpdateConstraintDecal() {
    if (!ConstraintDebugDecal) return;

    bool bIsDoor = (ConnectionComponent->ConnectionState == ESnapMapConnectionState::Door);
    if (bIsDoor && MaterialDebugDecalInstance) {
        UTexture2D* Sprite = ConnectionComponent
                                 ? GetConstraintTexture(ConnectionComponent->ConnectionConstraint)
                                 : nullptr;
        MaterialDebugDecalInstance->SetTextureParameterValue("Texture", Sprite);
        ConstraintDebugDecal->SetDecalMaterial(MaterialDebugDecalInstance);
        ConstraintDebugDecal->SetVisibility(true);
    }
    else {
        ConstraintDebugDecal->SetDecalMaterial(nullptr);
        ConstraintDebugDecal->SetVisibility(false);
    }
}

#endif	// WITH_EDITORONLY_DATA


AActor* ASnapMapConnectionActor::CreateInstance(const FSnapMapConnectionVisualInfo& VisualInfo, ULevel* HostLevel) {
    UWorld* World = GetWorld();
    if (!World) {
        return nullptr;
    }

    FActorSpawnParameters SpawnParams;
    SpawnParams.ObjectFlags = RF_Transient;
    SpawnParams.OverrideLevel = HostLevel;
    SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

    AActor* InstanceActor = nullptr;
    if (VisualInfo.bStaticMesh) {
        AStaticMeshActor* MeshActor = World->SpawnActor<AStaticMeshActor>(SpawnParams);
        if (MeshActor) {
            UStaticMeshComponent* MeshComponent = MeshActor->GetStaticMeshComponent();
            MeshComponent->SetMobility(EComponentMobility::Movable);
            MeshActor->SetActorRelativeTransform(VisualInfo.MeshInfo.Offset);
            MeshComponent->SetStaticMesh(VisualInfo.MeshInfo.StaticMesh);
            if (VisualInfo.MeshInfo.MaterialOverride) {
                MeshComponent->SetMaterial(0, VisualInfo.MeshInfo.MaterialOverride);
            }

            InstanceActor = MeshActor;
        }
    }
    else {
        AActor* BPActor = World->SpawnActor<AActor>(VisualInfo.BlueprintInfo.BlueprintClass, SpawnParams);
        if (BPActor) {
            BPActor->GetRootComponent()->SetMobility(EComponentMobility::Movable);
            BPActor->SetActorRelativeTransform(VisualInfo.BlueprintInfo.Offset);

            InstanceActor = BPActor;
        }
    }

    if (!InstanceActor) {
        return nullptr;
    }

    FAttachmentTransformRules AttachmentRules(EAttachmentRule::KeepRelative, false);
    InstanceActor->AttachToActor(this, AttachmentRules);

#if WITH_EDITORONLY_DATA
    UpdateConstraintDecal();
#endif // WITH_EDITORONLY_DATA

    return InstanceActor;
}

AActor* ASnapMapConnectionActor::BuildConnectionInstance(ULevel* HostLevel) {
    if (!ConnectionComponent) {
        return nullptr;
    }

    USnapMapConnectionInfo* ConnectionInfo = ConnectionComponent->ConnectionInfo;
    ESnapMapConnectionState ConnectionState = ConnectionComponent->ConnectionState;

    if (!ConnectionInfo) {
        //UE_LOG(LogSnapMapConnection, Error, TEXT("No connection asset assigned to the connection component. Component cannot build the connection visuals"));
        return nullptr;
    }

    switch (ConnectionState) {
    case ESnapMapConnectionState::Door:
        return CreateInstance(ConnectionInfo->DoorVisuals, HostLevel);

    case ESnapMapConnectionState::Wall:
        return CreateInstance(ConnectionInfo->WallVisuals, HostLevel);

    case ESnapMapConnectionState::Unknown:
    default:
        UE_LOG(LogSnapMapConnection, Warning,
               TEXT("Invalid door state.  This should be set before the actor is spawned on to the scene"));
        return nullptr;
    }
}
