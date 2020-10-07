//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"
#include "Frameworks/TestRunner/DATestRunner.h"

template <typename TTask, typename TSettings, typename TStats>
class TDATestRunnerGameThread
    : public IDATestRunner<TSettings, TStats> {
public:
    TDATestRunnerGameThread(float InTimePerFrameInSeconds = 0.05f) {
        TimePerFrameInSeconds = InTimePerFrameInSeconds;
    }

    void StartService(int32 InNumTasks, const TSettings& InSettings) override {
        NumTasks = InNumTasks;
        Settings = InSettings;
        Stats = TStats();
        NumCompletedTasks = 0;
        bIsRunning = true;
    }

    void StopService() override {
        bIsRunning = false;
    }

    TStats GetStats() const override { return Stats; }
    bool IsRunning() const override { return bIsRunning; }
    int32 GetCompletedTasks() const override { return NumCompletedTasks; }
    int32 GetTotalTasks() const override { return NumTasks; }

    void Tick() override {
        if (NumCompletedTasks >= NumTasks) {
            bIsRunning = false;
        }

        if (bIsRunning) {

            double StartTime = FPlatformTime::Seconds();
            double CurrentTime = StartTime;
            while (bIsRunning && NumCompletedTasks < NumTasks && CurrentTime - StartTime <= TimePerFrameInSeconds) {
                TTask Task;
                Task.Execute(Settings, Stats);
                NumCompletedTasks++;
                CurrentTime = FPlatformTime::Seconds();
            }

            if (NumCompletedTasks >= NumTasks) {
                bIsRunning = false;
            }
        }
    }

protected:
    float TimePerFrameInSeconds;
    int32 NumCompletedTasks = 0;
    bool bIsRunning = false;

    int32 NumTasks = 0;
    TSettings Settings;
    TStats Stats;
};
