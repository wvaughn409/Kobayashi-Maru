//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionComponent.h"

#include "GameFramework/Actor.h"
#include "UObject/WeakObjectPtrTemplates.h"
#include "SnapMapConnectionActor.generated.h"

class UArrowComponent;
class UDecalComponent;

UCLASS(Blueprintable, ConversionRoot, ComponentWrapperClass)
class DUNGEONARCHITECTRUNTIME_API ASnapMapConnectionActor : public AActor {
    GENERATED_UCLASS_BODY()

public:
    UPROPERTY()
    USnapMapConnectionComponent* ConnectionComponent;

    UPROPERTY(BlueprintReadOnly, Category = Dungeon)
    TWeakObjectPtr<AActor> SpawnedInstance;

private:
    UPROPERTY()
    FGuid ConnectionId;

public:
    void PostLoad() override;
    void PostActorCreated() override;
    bool IsLevelBoundsRelevant() const override { return false; }
    void PostDuplicate(EDuplicateMode::Type DuplicateMode) override;

    FGuid GetConnectionId() const { return ConnectionId; }

#if WITH_EDITOR
    void PostEditChangeProperty(struct FPropertyChangedEvent& e) override;
#endif

#if WITH_EDITORONLY_DATA
    UTexture2D* GetConstraintTexture(ESnapMapConnectionConstraint ConnectionConstraint);
    void UpdateConstraintIcon();
    void UpdateConstraintDecal();
#endif	// WITH_EDITORONLY_DATA


public:
    AActor* BuildConnectionInstance(ULevel* HostLevel = nullptr);

private:
    void Initialize();
    AActor* CreateInstance(const FSnapMapConnectionVisualInfo& VisualInfo, ULevel* HostLevel = nullptr);


private:
#if WITH_EDITORONLY_DATA
    UPROPERTY()
    UBillboardComponent* DoorSpriteComponent;

    UPROPERTY()
    UBillboardComponent* ConnectionConstraintSpriteComponent;

    UPROPERTY()
    UDecalComponent* ConstraintDebugDecal;

    UPROPERTY(Transient)
    UArrowComponent* ArrowComponent;

    UPROPERTY(Transient)
    UTexture2D* IconConstraintMagnet;

    UPROPERTY(Transient)
    UTexture2D* IconConstraintPlugMale;

    UPROPERTY(Transient)
    UTexture2D* IconConstraintPlugFemale;

    UPROPERTY(Transient)
    UMaterialInterface* MaterialDebugDecal;

    UPROPERTY(Transient)
    UMaterialInstanceDynamic* MaterialDebugDecalInstance;


#endif //WITH_EDITORONLY_DATA
};
