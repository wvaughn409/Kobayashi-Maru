//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/LaunchPad/Widgets/SLaunchPadCategories.h"

#include "Core/Editors/LaunchPad/Data/LaunchPadData.h"
#include "Core/Editors/LaunchPad/Data/LaunchPadDataParsers.h"
#include "Core/Editors/LaunchPad/Data/LaunchPadResource.h"

void SLaunchPadCategories::Construct(const FArguments& Args) {
    SListView::Construct
    (
        SListView::FArguments()
        .ListItemsSource(&Categories)
        .OnGenerateRow(this, &SLaunchPadCategories::GenerateCategoryRowWidget)
        .OnSelectionChanged(Args._OnSelectionChanged)
        .ItemHeight(24)
    );

}

void SLaunchPadCategories::Refresh(ILaunchPadDataSourcePtr InDataSource) {
    Categories.Reset();
    FLaunchPadTextResourcePtr Resource = InDataSource->GetText("sidebar.json");
    if (Resource.IsValid()) {
        FLaunchPadCategories CategoryStruct;

        TSharedPtr<FJsonObject> JsonObject = FLaunchPadDataParser::ParseJson(Resource->Value);
        if (JsonObject.IsValid()) {
            if (FLaunchPadDataParser::Parse(JsonObject, CategoryStruct)) {
                for (const FLaunchPadCategoryItem& Item : CategoryStruct.Items) {
                    Categories.Add(MakeShareable(new FLaunchPadCategoryItem(Item)));
                }
            }
        }
    }

    // Select the first item
    if (Categories.Num() > 0) {
        SetItemSelection(Categories[0], true, ESelectInfo::Direct);
    }
}

TSharedRef<class ITableRow> SLaunchPadCategories::GenerateCategoryRowWidget(
    TSharedPtr<FLaunchPadCategoryItem> InItem, const TSharedRef<class STableViewBase>& OwnerTable) {
    static const FSlateFontInfo Font = FCoreStyle::GetDefaultFontStyle("Regular", 12);
    return SNew(STableRow<TSharedPtr<FLaunchPadCategoryItem>>, OwnerTable)
    [
        SNew(STextBlock)
			.Text(FText::FromString(InItem->Title))
			.Margin(FMargin(5))
			.Font(Font)
    ];

}
