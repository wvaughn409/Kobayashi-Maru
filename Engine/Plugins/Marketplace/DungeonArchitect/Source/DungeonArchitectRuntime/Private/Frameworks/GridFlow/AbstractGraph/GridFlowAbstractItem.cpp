//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/AbstractGraph/GridFlowAbstractItem.h"


namespace {
    FGridFlowItemCustomInfo ItemCustomInfo_Enemy("E", FLinearColor::White, FLinearColor::Red);
    FGridFlowItemCustomInfo ItemCustomInfo_Key("K", FLinearColor::Black, FLinearColor::Yellow);
    FGridFlowItemCustomInfo ItemCustomInfo_Lock("L", FLinearColor::White, FLinearColor::Blue);
    FGridFlowItemCustomInfo ItemCustomInfo_Entrance("S", FLinearColor::Black, FLinearColor(0, 0.5f, 0));
    FGridFlowItemCustomInfo ItemCustomInfo_Exit("G", FLinearColor::White, FLinearColor::Black);
    FGridFlowItemCustomInfo ItemCustomInfo_Treasure("B", FLinearColor::White, FLinearColor(0.15f, 0.15f, 0.5f));

    FGridFlowItemCustomInfo GetItemCustomInfo(const FGridFlowItem& Item) {
        switch (Item.ItemType) {
        case EGridFlowItemType::Enemy: return ItemCustomInfo_Enemy;
        case EGridFlowItemType::Key: return ItemCustomInfo_Key;
        case EGridFlowItemType::Lock: return ItemCustomInfo_Lock;
        case EGridFlowItemType::Entrance: return ItemCustomInfo_Entrance;
        case EGridFlowItemType::Exit: return ItemCustomInfo_Exit;
        case EGridFlowItemType::Treasure: return ItemCustomInfo_Treasure;

        case EGridFlowItemType::Custom:
        default:
            return Item.CustomInfo;
        }
    }

    FLinearColor InvertColor(const FLinearColor& Color, float InvertStrength) {
        FLinearColor HSV = Color.LinearRGBToHSV();
        HSV.R = FMath::Fmod(HSV.R + 180, 360);
        //HSV.B = 1.0f - HSV.B;

        HSV.B -= 0.5f;
        HSV.B = -HSV.B;
        HSV.B *= InvertStrength;
        HSV.B += 0.5f;

        return HSV.HSVToLinearRGB();
    }
}

bool DUNGEONARCHITECTRUNTIME_API operator==(const FGridFlowItem& A, const FGridFlowItem& B) {
    return A.ItemId == B.ItemId;
}

FString FGridFlowItemVisuals::GetText(const FGridFlowItem& Item) {
    return GetItemCustomInfo(Item).PreviewText;
}

FLinearColor FGridFlowItemVisuals::GetTextColor(const FGridFlowItem& Item, bool bInvertColor) {
    FLinearColor Color = GetItemCustomInfo(Item).PreviewTextColor;
    return bInvertColor ? InvertColor(Color, 1.0f) : Color;
}

FLinearColor FGridFlowItemVisuals::GetBackgroundColor(const FGridFlowItem& Item, bool bInvertColor) {
    FLinearColor Color = GetItemCustomInfo(Item).PreviewBackgroundColor;
    return bInvertColor ? InvertColor(Color, 0.25f) : Color;
}
