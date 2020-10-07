//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/TestRunner/DATestRunnerGameThread.h"
#include "Frameworks/TestRunner/Widgets/SDATestRunner.h"
#include "Frameworks/TestRunner/Widgets/SDATestRunnerHistogram.h"

#include "UObject/GCObject.h"
#include "GridFlowTestRunner.generated.h"

class UGridFlowAsset;
class SDockTab;
class SWindow;
class FTabManager;
class FMenuBuilder;
class SDATestRunnerHistogram;

///////////////////// Grid Flow Test Runner Framework ///////////////////// 

UCLASS()
class UGridFlowPerfEditorSettings : public UObject {
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, Category = "Settings")
    int32 NumTests = 300;

    UPROPERTY(EditAnywhere, Category = "Settings")
    int32 MaxRetries = 50;

    UPROPERTY(EditAnywhere, Category = "Settings")
    int32 PassRetryThreshold = 10;

    UPROPERTY(EditAnywhere, Category = "Settings")
    int32 WarningRetryThreshold = 30;

    UPROPERTY(EditAnywhere, Category = "Settings")
    TMap<FString, FString> ParameterOverrides;

    /** 
     Have the editor free up resources after every N tests
     If you run a total of 2000 tests, and the specified value is 100,
     the memory will be freed up at test number 100, 200, 300, and so on
    */
    UPROPERTY(EditAnywhere, Category = "Advanced")
    int32 GarbageCollectEveryNTests = 100;
};

struct FGridFlowTestRunnerSettings {
    int32 MaxTries = 0;
    TMap<FString, FString> ParameterOverrides;
    TWeakObjectPtr<UGridFlowAsset> FlowAsset;
};

struct FGridFlowTestRunnerStats {
    TMap<int32, int32> NumTriesCount; // NumTriesForBuild, TestCount
};

class FGridFlowTestRunnerTask {
public:
    void Execute(const FGridFlowTestRunnerSettings& InSettings, FGridFlowTestRunnerStats& InOutStats);
};

///////////////////// Grid Flow Test Runner Widget ///////////////////// 
struct FGridFlowTestRunnerHistogramData {
    TArray<int32> BarValues;
    TArray<FString> BarTexts;
    TArray<FLinearColor> BarColors;
    int32 MinValue = 0;
    int32 MaxValue = 0;

    int32 NumPass = 0;
    int32 NumWarn = 0;
    int32 NumFail = 0;
};


typedef TDATestRunnerGameThread<FGridFlowTestRunnerTask, FGridFlowTestRunnerSettings, FGridFlowTestRunnerStats> FGridFlowTestRunner;

DECLARE_DELEGATE(FGridFlowTestRunnerServiceEvent);

class SGridFlowTestRunner
    : public SDATestRunner
     , public FGCObject
     , public IDATestRunnerHistogramDataSource
{
public:
    
    SLATE_BEGIN_ARGS(SGridFlowTestRunner) { }
        SLATE_EVENT(FGridFlowTestRunnerServiceEvent, OnServiceStarted)
        SLATE_EVENT(FGridFlowTestRunnerServiceEvent, OnServiceStopped)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs, const TSharedRef<SDockTab>& ConstructUnderMajorTab,
                   const TSharedPtr<SWindow>& ConstructUnderWindow, TWeakObjectPtr<UGridFlowAsset> FlowAsset);

    UObject* GetSettingsObject() override;
    virtual FText GetStatusText() const override;

    void StartService() override;
    void StopService() override;
    bool IsServiceRunning() const override;
    void TickService() override;
    void NotifyTestsComplete() override;
    TSharedRef<SWidget> GetHistogramWidget() const override;

    void AddReferencedObjects(FReferenceCollector& Collector) override;


    //~ Begin IDATestRunnerHistogramDataSource Interface
    int32 GetNumBars() override;
    float GetTotalValue() override;
    float GetMinValue() override;
    float GetBarValue(int32 Index) override;
    FString GetBarText(int32 Index) override;
    FLinearColor GetBarColor(int32 Index) override;
    //~ End IDATestRunnerHistogramDataSource Interface

private:
    void RunGC();
    void BuildHistogramData();

private:
    TWeakObjectPtr<UGridFlowAsset> FlowAsset;
    TSharedPtr<SDATestRunnerHistogram> Histogram;

    UGridFlowPerfEditorSettings* Settings = nullptr;
    FGridFlowTestRunner TestRunner;
    int32 GarbageCollectedAtTestNumber = 0;
    FGridFlowTestRunnerHistogramData HistogramData;

    FGridFlowTestRunnerServiceEvent OnServiceStarted;
    FGridFlowTestRunnerServiceEvent OnServiceStopped;
};
