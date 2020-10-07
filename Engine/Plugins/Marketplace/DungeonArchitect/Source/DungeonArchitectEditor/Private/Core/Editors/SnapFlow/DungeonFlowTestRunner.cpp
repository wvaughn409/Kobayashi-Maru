//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/SnapFlow/DungeonFlowTestRunner.h"

#include "Builders/SnapMap/SnapMapDungeonConfig.h"
#include "Builders/SnapMap/SnapMapGraph.h"
#include "Core/DungeonFlow/DungeonFlow.h"
#include "Frameworks/GraphGrammar/Script/GrammarScriptGraph.h"

#define LOCTEXT_NAMESPACE "SSnapFlowPerfEditor"
DEFINE_LOG_CATEGORY_STATIC(LogSnapFlowTestRunner, Log, All);


//////////////////// Test Task //////////////////// 

void FSnapFlowTestRunnerTask::Execute(const FSnapFlowTestRunnerSettings& InSettings,
                                      FSnapFlowTestRunnerStats& InOutStats) {
    UDungeonFlow* FlowAsset = InSettings.FlowAsset.Get();
    if (!FlowAsset) {
        return;
    }

    FRandomStream RandomStream;
    RandomStream.GenerateNewSeed();

    const int32 MAX_RETRIES = FMath::Max(1, InSettings.MaxTries);
    int32 NumTries = 0;
    while (NumTries < MAX_RETRIES) {
        NumTries++;

        UGrammarScriptGraph* MissionGraph = NewObject<UGrammarScriptGraph>();
        UGraphGrammar* MissionGrammar = FlowAsset->MissionGrammar;

        SnapMapGraph::FGrowthStaticState StaticState;
        StaticState.Random = RandomStream;
        StaticState.BoundsContraction = InSettings.CollisionTestContraction;
        StaticState.ModuleDatabase = InSettings.ModuleDatabase.Get();
        StaticState.DungeonBaseTransform = FTransform::Identity;
        StaticState.StartTimeSecs = FPlatformTime::Seconds();
        StaticState.MaxProcessingTimeSecs = InSettings.MaxProcessingTimeSecs;
        StaticState.bAllowModuleRotations = InSettings.bAllowModuleRotations;

        for (const FSnapMapModuleDatabaseItem& ModuleInfo : StaticState.ModuleDatabase->Modules) {
            TArray<FSnapMapModuleDatabaseItem>& CategoryModuleNames = StaticState.ModulesByCategory.FindOrAdd(
                ModuleInfo.Category);
            CategoryModuleNames.Add(ModuleInfo);
        }

        int32 Seed = RandomStream.RandRange(0, MAX_int32 - 1);
        SnapMapGraph::FModuleNodePtr RootNode = SnapMapGraph::FSnapMapGraphGenerator::Generate(Seed, MissionGrammar, MissionGraph, StaticState);
        bool bSuccess = RootNode.IsValid();
        if (bSuccess) break;
    }

    int32& Count = InOutStats.NumTriesCount.FindOrAdd(NumTries);
    Count++;

}

//////////////////// Test Runner Widget //////////////////// 

void SSnapFlowTestRunner::Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab,
                                    const TSharedPtr<SWindow>& ConstructUnderWindow,
                                    TWeakObjectPtr<UDungeonFlow> InFlowAsset) {
    OnServiceStarted = InArgs._OnServiceStarted;
    OnServiceStopped = InArgs._OnServiceStopped;

    FlowAsset = InFlowAsset;
    Settings = NewObject<USnapFlowPerfEditorSettings>();
    Histogram = SNew(SDATestRunnerHistogram, SharedThis(this));

    SDATestRunner::Construct(SDATestRunner::FArguments(), ConstructUnderMajorTab, ConstructUnderWindow);
}


UObject* SSnapFlowTestRunner::GetSettingsObject() {
    return Settings;
}

FText SSnapFlowTestRunner::GetStatusText() const {
    FSnapFlowTestRunnerStats Stats = TestRunner.GetStats();
    return FText::FromString(FString::Printf(
        TEXT("Pass [%d], Warn [%d], Fail [%d]"), HistogramData.NumPass, HistogramData.NumWarn, HistogramData.NumFail));
}

void SSnapFlowTestRunner::StartService() {
    OnServiceStarted.ExecuteIfBound();
    
    Settings->WarningRetryThreshold = FMath::Min(Settings->WarningRetryThreshold, Settings->MaxRetries);
    Settings->PassRetryThreshold = FMath::Min(Settings->PassRetryThreshold, Settings->WarningRetryThreshold);

    Settings->MaxRetries = FMath::Max(1, Settings->MaxRetries);
    Settings->PassRetryThreshold = FMath::Max(1, Settings->PassRetryThreshold);
    Settings->WarningRetryThreshold = FMath::Max(1, Settings->WarningRetryThreshold);

    FSnapFlowTestRunnerSettings TestSettings;
    TestSettings.MaxTries = Settings->MaxRetries;
    TestSettings.ModuleDatabase = Settings->ModuleDatabase;
    TestSettings.FlowAsset = FlowAsset;
    TestSettings.bAllowModuleRotations = Settings->bAllowModuleRotations;
    TestSettings.MaxProcessingTimeSecs = Settings->MaxProcessingTimeSecs;
    TestSettings.CollisionTestContraction = Settings->CollisionTestContraction;

    Settings->GarbageCollectEveryNTests = FMath::Max(1, Settings->GarbageCollectEveryNTests);
    GarbageCollectedAtTestNumber = 0;
    RunGC();

    TestRunner.StartService(Settings->NumTests, TestSettings);
}

void SSnapFlowTestRunner::StopService() {
    TestRunner.StopService();

    RunGC();

    OnServiceStopped.ExecuteIfBound();
}

void SSnapFlowTestRunner::TickService() {
    TestRunner.Tick();
    BuildHistogramData();

    if (GarbageCollectedAtTestNumber + Settings->GarbageCollectEveryNTests < TestRunner.GetCompletedTasks()) {
        RunGC();
        GarbageCollectedAtTestNumber = TestRunner.GetCompletedTasks();
    }
}

bool SSnapFlowTestRunner::IsServiceRunning() const {
    return TestRunner.IsRunning();
}

void SSnapFlowTestRunner::NotifyTestsComplete() {
    SDATestRunner::NotifyTestsComplete();

    RunGC();
}

TSharedRef<SWidget> SSnapFlowTestRunner::GetHistogramWidget() const {
    const TSharedRef<SWidget> HistogramWidget = Histogram.IsValid()
                                                    ? Histogram.ToSharedRef()
                                                    : SNullWidget::NullWidget;

    return SNew(SVerticalBox)
        + SVerticalBox::Slot()
        .AutoHeight()
        [
            SNew(STextBlock)
			.Justification(ETextJustify::Center)
			.Text(LOCTEXT("HistogramLabel", "X = Num Retries, Y = Num Test Cases"))
        ]
        + SVerticalBox::Slot()
        [
            HistogramWidget
        ];

}

void SSnapFlowTestRunner::AddReferencedObjects(FReferenceCollector& Collector) {
    if (Settings) {
        Collector.AddReferencedObject(Settings);
    }
}

bool SSnapFlowTestRunner::ValidateConfiguration(FText& OutErrorMessage) {
    if (!Settings->ModuleDatabase) {
        OutErrorMessage = LOCTEXT("ErrorNoModule", "Missing Module Database reference in settings");
        return false;
    }
    return true;
}

int32 SSnapFlowTestRunner::GetNumBars() {
    return HistogramData.BarValues.Num();
}

float SSnapFlowTestRunner::GetTotalValue() {
    return HistogramData.MaxValue;
}

float SSnapFlowTestRunner::GetMinValue() {
    return 0;
}

float SSnapFlowTestRunner::GetBarValue(int32 Index) {
    return Index < HistogramData.BarValues.Num() ? HistogramData.BarValues[Index] : 0;
}

FString SSnapFlowTestRunner::GetBarText(int32 Index) {
    return Index < HistogramData.BarTexts.Num() ? HistogramData.BarTexts[Index] : "";
}

FLinearColor SSnapFlowTestRunner::GetBarColor(int32 Index) {
    return Index < HistogramData.BarColors.Num() ? HistogramData.BarColors[Index] : FLinearColor::White;
}

void SSnapFlowTestRunner::RunGC() {
    // Collect garbage to clear out the destroyed level
    CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
}

void SSnapFlowTestRunner::BuildHistogramData() {
    FSnapFlowTestRunnerStats Stats = TestRunner.GetStats();
    int32 NumBars = 0;
    HistogramData = FSnapFlowTestRunnerHistogramData();
    if (Stats.NumTriesCount.Num() > 0) {
        for (auto& Entry : Stats.NumTriesCount) {
            int32 NumTries = Entry.Key;
            int32 Count = Entry.Value;

            NumBars = FMath::Max(NumBars, NumTries);
            if (NumTries <= Settings->PassRetryThreshold) {
                HistogramData.NumPass += Count;
            }
            else if (NumTries <= Settings->WarningRetryThreshold) {
                HistogramData.NumWarn += Count;
            }
            else {
                HistogramData.NumFail += Count;
            }

        }
    }

    for (int i = 0; i < NumBars; i++) {
        int32 NumTries = i + 1;

        // Set the Bar Value
        int32& BarValue = Stats.NumTriesCount.FindOrAdd(NumTries);
        HistogramData.BarValues.Add(BarValue);

        // Set the Bar Text
        FString BarText = FString::FromInt(NumTries);
        if (NumTries == Settings->MaxRetries) {
            BarText += "+";
        }
        HistogramData.BarTexts.Add(BarText);

        // Set the Bar Color
        FLinearColor BarColor;
        if (NumTries <= Settings->PassRetryThreshold) {
            BarColor = FLinearColor::Green;
        }
        else if (NumTries <= Settings->WarningRetryThreshold) {
            BarColor = FLinearColor(1.0f, 0.25f, 0.0f, 1.0f);
        }
        else {
            BarColor = FLinearColor::Red;
        }
        HistogramData.BarColors.Add(BarColor);
        HistogramData.MaxValue = FMath::Max(HistogramData.MaxValue, BarValue);
    }
}

#undef LOCTEXT_NAMESPACE

