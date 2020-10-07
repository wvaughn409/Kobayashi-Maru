//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionConstants.h"
#include "Builders/SnapMap/Connection/SnapMapConnectionInfo.h"
#include "Builders/SnapMap/ConnectionEditor/SnapMapConnectionEditor.h"

class USnapMapConnectionInfo;

class SSnapMapConnectionEdit : public SCompoundWidget, public FGCObject {
public:
SLATE_BEGIN_ARGS(SSnapMapConnectionEdit) {
        }

        SLATE_ARGUMENT(TWeakPtr<FSnapMapConnectionEditor>, SnapMapConnectionEditor)
        SLATE_ARGUMENT(USnapMapConnectionInfo*, ObjectToEdit)
    SLATE_END_ARGS()

public:
    /** SCompoundWidget functions */
    void Construct(const FArguments& InArgs);

    ~SSnapMapConnectionEdit();

    // SWidget interface
    void Tick(const FGeometry& AllottedGeometry, double InCurrentTime, float InDeltaTime) override;
    // End of SWidget interface

    // FGCObject interface
    void AddReferencedObjects(FReferenceCollector& Collector) override;
    // End of FGCObject interface

    void OnFinishedChangingProperties(const FPropertyChangedEvent& PropertyChangedEvent);

    FORCEINLINE ESnapMapConnectionState GetDoorVisualMode() const { return ActiveMode; }

private:
    /** Clears all the tools selection by setting them to false. */
    void ClearAllToolSelection();

    /** Binds UI commands for the toolbar. */
    void BindCommands();

    void OnModeSelectedDoor();
    void OnModeSelectedWall();

    bool IsModeActive_Door();
    bool IsModeActive_Wall();

    void SwitchVisualMode(ESnapMapConnectionState Mode);
    void RefreshDetailsPanel(bool bForceRefresh);

    TSharedRef<SWidget> BuildToolBar();

private:
    /** Command list for binding functions for the toolbar. */
    TSharedPtr<FUICommandList> UICommandList;
    ESnapMapConnectionState ActiveMode;
    TSharedPtr<class IDetailsView> DetailsPanel;

    TWeakPtr<FSnapMapConnectionEditor> DoorEditorPtr;
    USnapMapConnectionInfo* DoorAsset;
};
