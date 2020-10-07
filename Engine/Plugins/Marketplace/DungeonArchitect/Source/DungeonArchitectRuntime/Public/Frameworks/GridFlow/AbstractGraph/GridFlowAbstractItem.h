//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "GridFlowAbstractItem.generated.h"

UENUM()
enum class EGridFlowItemType : uint8 {
    Enemy,
    Key,
    Lock,
    Entrance,
    Exit,
    Treasure,
    Custom
};

USTRUCT()
struct DUNGEONARCHITECTRUNTIME_API FGridFlowItemCustomInfo {
    GENERATED_BODY()

    FGridFlowItemCustomInfo() {
    }

    FGridFlowItemCustomInfo(const FString& InPreviewText, const FLinearColor& InPreviewTextColor,
                            const FLinearColor InPreviewBackgroundColor)
        : PreviewText(InPreviewText)
          , PreviewTextColor(InPreviewTextColor)
          , PreviewBackgroundColor(InPreviewBackgroundColor) {
    }

    UPROPERTY(EditAnywhere, Category="Dungeon")
    FString PreviewText = "X";

    UPROPERTY(EditAnywhere, Category = "Dungeon")
    FLinearColor PreviewTextColor = FLinearColor::Black;

    UPROPERTY(EditAnywhere, Category = "Dungeon")
    FLinearColor PreviewBackgroundColor = FLinearColor::White;

    UPROPERTY(EditAnywhere, Category = "Dungeon")
    float FontScale = 1.0f;
};

USTRUCT(BlueprintType)
struct DUNGEONARCHITECTRUNTIME_API FGridFlowItem {
    GENERATED_BODY()

    FGridFlowItem() {
        ItemId = FGuid::NewGuid();
    }

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dungeon")
    FGuid ItemId = FGuid();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dungeon")
    EGridFlowItemType ItemType = EGridFlowItemType::Enemy;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dungeon")
    FString MarkerName;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dungeon")
    TArray<FGuid> ReferencedItemIds;

    UPROPERTY()
    bool bEditorSelected = false;

    UPROPERTY()
    FGridFlowItemCustomInfo CustomInfo;
};

bool DUNGEONARCHITECTRUNTIME_API operator==(const FGridFlowItem& A, const FGridFlowItem& B);

class DUNGEONARCHITECTRUNTIME_API FGridFlowItemVisuals {
public:
    static FString GetText(const FGridFlowItem& Item);
    static FLinearColor GetTextColor(const FGridFlowItem& Item, bool bInvertColor = false);
    static FLinearColor GetBackgroundColor(const FGridFlowItem& Item, bool bInvertColor = false);
};
