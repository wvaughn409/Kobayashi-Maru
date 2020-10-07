//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "IDetailCustomization.h"
#include "IPropertyChangeListener.h"

DECLARE_LOG_CATEGORY_EXTERN(LogDungeonCustomization, Log, All);

class FDungeonArchitectEditorCustomization : public IDetailCustomization {
public:
    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static TSharedRef<IDetailCustomization> MakeInstance();

    static FReply RebuildDungeon(IDetailLayoutBuilder* DetailBuilder);
    static FReply DestroyDungeon(IDetailLayoutBuilder* DetailBuilder);
    static FReply RandomizeSeed(IDetailLayoutBuilder* DetailBuilder);
    static FReply OpenHelpSystem(IDetailLayoutBuilder* DetailBuilder);
};

class FSnapModuleDatabaseCustomization : public IDetailCustomization {
public:
    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static TSharedRef<IDetailCustomization> MakeInstance();
    static FReply BuildDatabaseCache(IDetailLayoutBuilder* DetailBuilder);
};

class FDungeonArchitectMeshNodeCustomization : public IDetailCustomization {
public:
    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static FReply EditAdvancedOptions(IDetailLayoutBuilder* DetailBuilder);
};


class FDungeonEditorViewportPropertiesCustomization : public IDetailCustomization {
public:
    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static TSharedRef<IDetailCustomization> MakeInstance();
};

class FDungeonArchitectVolumeCustomization : public IDetailCustomization {
public:
    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static TSharedRef<IDetailCustomization> MakeInstance();

    static FReply RebuildDungeon(IDetailLayoutBuilder* DetailBuilder);
};

class FDAExecRuleNodeCustomization : public IDetailCustomization {
public:
    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    void CustomizeDetails(const TSharedPtr<IDetailLayoutBuilder>& DetailBuilder) override;
    // End of IDetailCustomization interface

    void OnExecutionModeChanged(class UEdGraphNode_ExecRuleNode* Node);

    static TSharedRef<IDetailCustomization> MakeInstance();
private:
    TWeakPtr<IDetailLayoutBuilder> CachedDetailBuilder;
};


class FDungeonPropertyChangeListener : public TSharedFromThis<FDungeonPropertyChangeListener> {
public:
    void Initialize();
    void OnPropertyChanged(UObject* Object, struct FPropertyChangedEvent& Event);

private:
    TSharedPtr<IPropertyChangeListener> PropertyChangeListener;
};


class FDungeonDebugCustomization : public IDetailCustomization {
public:
    // IDetailCustomization interface
    void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;
    // End of IDetailCustomization interface

    static TSharedRef<IDetailCustomization> MakeInstance();

    static FReply ExecuteCommand(IDetailLayoutBuilder* DetailBuilder, int32 CommandID);
};
