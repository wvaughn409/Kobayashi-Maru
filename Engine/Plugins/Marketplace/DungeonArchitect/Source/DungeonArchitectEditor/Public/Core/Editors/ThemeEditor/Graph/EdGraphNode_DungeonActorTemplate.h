//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Core/Editors/ThemeEditor/Graph/EdGraphNode_DungeonActorBase.h"
#include "EdGraphNode_DungeonActorTemplate.generated.h"

UCLASS()
class DUNGEONARCHITECTEDITOR_API UEdGraphNode_DungeonActorTemplate : public UEdGraphNode_DungeonActorBase {
    GENERATED_BODY()

public:
    UObject* GetNodeAssetObject(UObject* Outer) override;

public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Dungeon, meta = (OnlyPlaceable, AllowPrivateAccess = "true",
        ForceRebuildProperty = "ActorTemplate"))
    TSubclassOf<AActor> ClassTemplate;

    /** Property to point to the template child actor for details panel purposes */
    UPROPERTY(VisibleDefaultsOnly, Export, Category = Dungeon, meta = (ShowInnerProperties))
    AActor* ActorTemplate;

    UObject* GetThumbnailAssetObject() override;

public:
    //~ Begin Object Interface.
#if WITH_EDITOR
    void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
    void OnThemeEditorLoaded() override;
#endif  // WITH_EDITOR
    //virtual void Serialize(FArchive& Ar) override;
    //~ End Object Interface.

    void SetTemplateClass(TSubclassOf<AActor> InClass);
    void SetTemplateFromAsset(UObject* AssetObject, class UActorFactory* ActorFactory);
};
