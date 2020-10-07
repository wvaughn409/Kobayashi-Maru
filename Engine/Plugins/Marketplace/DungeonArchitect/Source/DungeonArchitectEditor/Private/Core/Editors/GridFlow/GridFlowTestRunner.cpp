//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Core/Editors/GridFlow/GridFlowTestRunner.h"

#include "Frameworks/GridFlow/GridFlowAsset.h"
#include "Frameworks/GridFlow/Processor/GridFlowProcessor.h"
#include "Frameworks/TestRunner/Widgets/SDATestRunnerHistogram.h"

#include "UObject/UObjectGlobals.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "SGridFlowPerfEditor"
DEFINE_LOG_CATEGORY_STATIC(LogGridFlowTestRunner, Log, All);

//////////////////// Test Task //////////////////// 

void FGridFlowTestRunnerTask::Execute(const FGridFlowTestRunnerSettings& InSettings,
                                      FGridFlowTestRunnerStats& InOutStats) {
    UGridFlowAsset* GridFlowAsset = InSettings.FlowAsset.Get();
    if (!GridFlowAsset) {
        return;
    }

    FRandomStream RandomStream;
    RandomStream.GenerateNewSeed();

    FGridFlowProcessor GridFlowProcessor;
    const int32 MAX_RETRIES = FMath::Max(1, InSettings.MaxTries);
    int32 NumTries = 0;
    EGridFlowTaskExecutionResult ExecResult = EGridFlowTaskExecutionResult::FailHalt;

    while (NumTries < MAX_RETRIES) {
        FGridFlowProcessorSettings GridFlowProcessorSettings;
        GridFlowProcessorSettings.SerializedAttributeList = InSettings.ParameterOverrides;
        ExecResult = GridFlowProcessor.Process(GridFlowAsset->ExecScript, RandomStream, GridFlowProcessorSettings);
        NumTries++;
        if (ExecResult == EGridFlowTaskExecutionResult::Success || ExecResult == EGridFlowTaskExecutionResult::FailHalt
        ) {
            break;
        }
    }
    int32& Count = InOutStats.NumTriesCount.FindOrAdd(NumTries);
    Count++;
}

//////////////////// Test Runner Widget //////////////////// 

void SGridFlowTestRunner::Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab,
                                    const TSharedPtr<SWindow>& ConstructUnderWindow,
                                    TWeakObjectPtr<UGridFlowAsset> InFlowAsset) {
    OnServiceStarted = InArgs._OnServiceStarted;
    OnServiceStopped = InArgs._OnServiceStopped;

    FlowAsset = InFlowAsset;
    Settings = NewObject<UGridFlowPerfEditorSettings>();
    Histogram = SNew(SDATestRunnerHistogram, SharedThis(this));

    SDATestRunner::Construct(SDATestRunner::FArguments(), ConstructUnderMajorTab, ConstructUnderWindow);
}


UObject* SGridFlowTestRunner::GetSettingsObject() {
    return Settings;
}

FText SGridFlowTestRunner::GetStatusText() const {
    FGridFlowTestRunnerStats Stats = TestRunner.GetStats();
    return FText::FromString(FString::Printf(
        TEXT("Pass [%d], Warn [%d], Fail [%d]"), HistogramData.NumPass, HistogramData.NumWarn, HistogramData.NumFail));
}

void SGridFlowTestRunner::StartService() {
    OnServiceStarted.ExecuteIfBound();

    Settings->WarningRetryThreshold = FMath::Min(Settings->WarningRetryThreshold, Settings->MaxRetries);
    Settings->PassRetryThreshold = FMath::Min(Settings->PassRetryThreshold, Settings->WarningRetryThreshold);

    Settings->MaxRetries = FMath::Max(1, Settings->MaxRetries);
    Settings->PassRetryThreshold = FMath::Max(1, Settings->PassRetryThreshold);
    Settings->WarningRetryThreshold = FMath::Max(1, Settings->WarningRetryThreshold);

    FGridFlowTestRunnerSettings TestSettings;
    TestSettings.MaxTries = Settings->MaxRetries;
    TestSettings.ParameterOverrides = Settings->ParameterOverrides;
    TestSettings.FlowAsset = FlowAsset;

    Settings->GarbageCollectEveryNTests = FMath::Max(1, Settings->GarbageCollectEveryNTests);
    GarbageCollectedAtTestNumber = 0;
    RunGC();

    TestRunner.StartService(Settings->NumTests, TestSettings);
}

void SGridFlowTestRunner::StopService() {
    TestRunner.StopService();

    RunGC();

    OnServiceStopped.ExecuteIfBound();
}

void SGridFlowTestRunner::TickService() {
    TestRunner.Tick();
    BuildHistogramData();

    if (GarbageCollectedAtTestNumber + Settings->GarbageCollectEveryNTests < TestRunner.GetCompletedTasks()) {
        RunGC();
        GarbageCollectedAtTestNumber = TestRunner.GetCompletedTasks();
    }
}

bool SGridFlowTestRunner::IsServiceRunning() const {
    return TestRunner.IsRunning();
}

void SGridFlowTestRunner::NotifyTestsComplete() {
    SDATestRunner::NotifyTestsComplete();

    RunGC();
}

TSharedRef<SWidget> SGridFlowTestRunner::GetHistogramWidget() const {
    TSharedRef<SWidget> HistogramWidget = Histogram.IsValid()
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

void SGridFlowTestRunner::AddReferencedObjects(FReferenceCollector& Collector) {
    if (Settings) {
        Collector.AddReferencedObject(Settings);
    }
}

int32 SGridFlowTestRunner::GetNumBars() {
    return HistogramData.BarValues.Num();
}

float SGridFlowTestRunner::GetTotalValue() {
    return HistogramData.MaxValue;
}

float SGridFlowTestRunner::GetMinValue() {
    return 0;
}

float SGridFlowTestRunner::GetBarValue(int32 Index) {
    return Index < HistogramData.BarValues.Num() ? HistogramData.BarValues[Index] : 0;
}

FString SGridFlowTestRunner::GetBarText(int32 Index) {
    return Index < HistogramData.BarTexts.Num() ? HistogramData.BarTexts[Index] : "";
}

FLinearColor SGridFlowTestRunner::GetBarColor(int32 Index) {
    return Index < HistogramData.BarColors.Num() ? HistogramData.BarColors[Index] : FLinearColor::White;
}

void SGridFlowTestRunner::RunGC() {
    // Collect garbage to clear out the destroyed level
    CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
}

void SGridFlowTestRunner::BuildHistogramData() {
    FGridFlowTestRunnerStats Stats = TestRunner.GetStats();
    int32 NumBars = 0;
    HistogramData = FGridFlowTestRunnerHistogramData();
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
