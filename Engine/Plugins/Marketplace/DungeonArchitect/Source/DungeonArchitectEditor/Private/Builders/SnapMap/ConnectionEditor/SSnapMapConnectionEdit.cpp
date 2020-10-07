//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Builders/SnapMap/ConnectionEditor/SSnapMapConnectionEdit.h"

#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"
#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditorCommands.h"

#include "IDetailsView.h"
#include "Modules/ModuleManager.h"
#include "PropertyEditorModule.h"
#include "Widgets/Layout/SScrollBox.h"

void SSnapMapConnectionEdit::Construct(const FArguments& InArgs) {
    DoorEditorPtr = InArgs._SnapMapConnectionEditor;
    DoorAsset = InArgs._ObjectToEdit;

    // Everything (or almost) uses this padding, change it to expand the padding.
    FMargin StandardPadding(0.0f, 4.0f, 0.0f, 4.0f);

    UICommandList = MakeShareable(new FUICommandList);

    BindCommands();

    FPropertyEditorModule& PropertyEditorModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(
        "PropertyEditor");
    FDetailsViewArgs DetailsViewArgs(false, false, true, FDetailsViewArgs::HideNameArea);

    DetailsPanel = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
    DetailsPanel->OnFinishedChangingProperties().AddSP(this, &SSnapMapConnectionEdit::OnFinishedChangingProperties);

    TSharedRef<SWidget> DetailsPanelRef = DetailsPanel.ToSharedRef();

    this->ChildSlot
    [
        SNew(SOverlay)
        + SOverlay::Slot()
        [
            SNew(SScrollBox)
            + SScrollBox::Slot()
            .Padding(2.0f, 0)
            [
                SNew(SVerticalBox)
                + SVerticalBox::Slot()
                  .AutoHeight()
                  .Padding(StandardPadding)
                [
                    BuildToolBar()
                ]

                + SVerticalBox::Slot()
                .AutoHeight()
                [
                    DetailsPanelRef
                ]
            ]
        ]
    ];

    SwitchVisualMode(ESnapMapConnectionState::Door);
}

SSnapMapConnectionEdit::~SSnapMapConnectionEdit() {
}

TSharedRef<SWidget> SSnapMapConnectionEdit::BuildToolBar() {

    FToolBarBuilder Toolbar(UICommandList, FMultiBoxCustomization::None);
    {
        Toolbar.AddToolBarButton(FSnapMapConnectionEditorCommands::Get().ModeDoor);
        Toolbar.AddToolBarButton(FSnapMapConnectionEditorCommands::Get().ModeClosed);
    }

    return
        SNew(SHorizontalBox)

        + SHorizontalBox::Slot()
        .Padding(4, 0)
        [
            SNew(SOverlay)
            + SOverlay::Slot()
            [
                SNew(SBorder)
			.HAlign(HAlign_Center)
		.Padding(0)
		.BorderImage(FEditorStyle::GetBrush("NoBorder"))
		.IsEnabled(FSlateApplication::Get().GetNormalExecutionAttribute())
                [
                    Toolbar.MakeWidget()
                ]
            ]
        ];
}

void SSnapMapConnectionEdit::ClearAllToolSelection() {

}

void SSnapMapConnectionEdit::BindCommands() {
    const FSnapMapConnectionEditorCommands& Commands = FSnapMapConnectionEditorCommands::Get();

    UICommandList->MapAction(
        Commands.ModeDoor,
        FExecuteAction::CreateSP(this, &SSnapMapConnectionEdit::OnModeSelectedDoor),
        FCanExecuteAction(),
        FIsActionChecked::CreateSP(this, &SSnapMapConnectionEdit::IsModeActive_Door));

    UICommandList->MapAction(
        Commands.ModeClosed,
        FExecuteAction::CreateSP(this, &SSnapMapConnectionEdit::OnModeSelectedWall),
        FCanExecuteAction(),
        FIsActionChecked::CreateSP(this, &SSnapMapConnectionEdit::IsModeActive_Wall));

}

void SSnapMapConnectionEdit::OnModeSelectedDoor() {
    SwitchVisualMode(ESnapMapConnectionState::Door);
}

void SSnapMapConnectionEdit::OnModeSelectedWall() {
    SwitchVisualMode(ESnapMapConnectionState::Wall);
}

bool SSnapMapConnectionEdit::IsModeActive_Door() {
    return ActiveMode == ESnapMapConnectionState::Door;
}

bool SSnapMapConnectionEdit::IsModeActive_Wall() {
    return ActiveMode == ESnapMapConnectionState::Wall;
}


void SSnapMapConnectionEdit::SwitchVisualMode(ESnapMapConnectionState Mode) {
    ActiveMode = Mode;

    DoorAsset->bEditorPreviewDoor = (ActiveMode == ESnapMapConnectionState::Door);

    RefreshDetailsPanel(true);

    // Rebuild the door
    DoorEditorPtr.Pin()->RebuildDoor();
}

void SSnapMapConnectionEdit::RefreshDetailsPanel(bool bForceRefresh) {
    // Set the mesh info properties in the details panel
    if (DoorAsset) {
        DetailsPanel->SetObject(DoorAsset, bForceRefresh);
    }
}

void SSnapMapConnectionEdit::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime,
                                  const float InDeltaTime) {
}

void SSnapMapConnectionEdit::AddReferencedObjects(FReferenceCollector& Collector) {
    Collector.AddReferencedObject(DoorAsset);
}

void SSnapMapConnectionEdit::OnFinishedChangingProperties(const FPropertyChangedEvent& PropertyChangedEvent) {
    if (PropertyChangedEvent.Property) {
        FName PropertyName = *PropertyChangedEvent.Property->GetName();
        if (PropertyName == GET_MEMBER_NAME_CHECKED(FSnapMapConnectionVisualInfo, bStaticMesh)) {
            RefreshDetailsPanel(true);
        }
    }

    // Notify the host editor
    if (DoorEditorPtr.IsValid()) {
        DoorEditorPtr.Pin()->OnPropertyChanged(PropertyChangedEvent);
    }
}
