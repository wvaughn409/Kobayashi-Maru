//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Toolkits/BaseToolkit.h"

class SWidget;
class FEdMode;

class FDungeonEdModeToolkit : public FModeToolkit {
public:
    void RegisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;
    void UnregisterTabSpawners(const TSharedRef<class FTabManager>& TabManager) override;

    /** Initializes the dungeon mode toolkit */
    virtual void Init(const TSharedPtr<class IToolkitHost>& InitToolkitHost) override;

    /** IToolkit interface */
    FName GetToolkitFName() const override;
    FText GetBaseToolkitName() const override;
    FEdMode* GetEditorMode() const override;
    TSharedPtr<SWidget> GetInlineContent() const override;

    void SetInlineContent(TSharedPtr<SWidget> Widget);

private:
    TSharedPtr<SWidget> DungeonEdWidget;
};
