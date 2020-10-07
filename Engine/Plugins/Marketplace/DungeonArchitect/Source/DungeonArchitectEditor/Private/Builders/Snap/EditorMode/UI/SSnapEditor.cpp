//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/Snap/EditorMode/UI/SSnapEditor.h"

#include "IDetailsView.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"

#define LOCTEXT_NAMESPACE "SnapEditMode"

void SSnapEditor::Construct(const FArguments& InArgs) {
    FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(
        "PropertyEditor");
    FDetailsViewArgs DetailsViewArgs(false, false, false, FDetailsViewArgs::HideNameArea);

    DetailsPanel = PropertyEditorModule.CreateDetailView(DetailsViewArgs);

    this->ChildSlot
    [
        SNew(SVerticalBox)

        + SVerticalBox::Slot()
        .AutoHeight()
        [
            DetailsPanel.ToSharedRef()
        ]
    ];
}

void SSnapEditor::SetSettingsObject(UObject* Object, bool bForceRefresh /*= false*/) {
    if (DetailsPanel.IsValid()) {
        DetailsPanel->SetObject(Object, bForceRefresh);
    }
}

#undef LOCTEXT_NAMESPACE
