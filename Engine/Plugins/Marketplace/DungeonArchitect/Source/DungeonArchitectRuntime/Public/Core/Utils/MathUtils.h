//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

class UGrammarRuleScriptGraphNode;
int32 PermuteCompareTo(const UGrammarRuleScriptGraphNode* A, const UGrammarRuleScriptGraphNode* B);

class DUNGEONARCHITECTRUNTIME_API FMathUtils {
public:
    static FORCEINLINE FVector ToVector(const FIntVector& value) {
        return FVector(value.X, value.Y, value.Z);
    }

    static FIntVector ToIntVector(const FVector& value, bool bRound = false) {
        if (bRound) {
            return FIntVector(
                FMath::RoundToInt(value.X),
                FMath::RoundToInt(value.Y),
                FMath::RoundToInt(value.Z));
        }
        return FIntVector(
            FMath::FloorToInt(value.X),
            FMath::FloorToInt(value.Y),
            FMath::FloorToInt(value.Z));
    }

    static FORCEINLINE FVector2D GetRandomDirection2D(FRandomStream& Random) {
        float Angle = Random.FRand() * PI * 2;
        return FVector2D(FMath::Cos(Angle), FMath::Sin(Angle));
    }

    static TArray<int32> GetShuffledIndices(int32 Count, const FRandomStream& Random);

    template <typename T>
    static T GetRandomItem(TArray<T>& Array, FRandomStream& Random) {
        return Array[Random.RandRange(0, Array.Num() - 1)];
    }

    template <typename T>
    static void Shuffle(TArray<T>& Array, const FRandomStream& Random) {
        int32 Count = Array.Num();
        for (int i = 0; i < Count; i++) {
            int32 j = Random.RandRange(0, Count - 1);
            T Temp = Array[i];
            Array[i] = Array[j];
            Array[j] = Temp;
        }
    }
};

// Blur algorithm from: http://blog.ivank.net/fastest-gaussian-blur.html (MIT License)
class DUNGEONARCHITECTRUNTIME_API BlurUtils {
public:

    static void boxBlurH_4(float* scl, float* tcl, float* weights, int32 w, int32 h, int32 r);
    static void boxBlurT_4(float* scl, float* tcl, float* weights, int32 w, int32 h, int32 r);
    static void boxBlur_4(float* scl, float* tcl, float* weights, int32 w, int32 h, int32 r);
    static TArray<int32> boxesForGauss(float sigma, float n); // standard deviation, number of boxes
    static void gaussBlur_4(float* scl, float* tcl, float* weights, int32 w, int32 h, int32 r);
    FORCEINLINE static float BlurRound(float Value) {
        return Value;
    }
};

class DUNGEONARCHITECTRUNTIME_API FColorUtils {
public:
    static FLinearColor BrightenColor(const FLinearColor& InColor, float SaturationMultiplier,
                                      float BrightnessMultiplier);
};

/////////////////
template <typename T>
class FCombination {
private:
    TArray<T> data;
    int selectionCount;

    struct FStackState {
        TArray<T> buffer;
        int startIndex;

        FStackState() : startIndex(0) {
        }

        FStackState(const TArray<T>& InBuffer, int32 InStartIndex)
            : buffer(InBuffer)
              , startIndex(InStartIndex) {
        }
    };

    TArray<FStackState> stack;

public:
    FORCEINLINE bool CanRun() const { return stack.Num() > 0; }

    FCombination(const TArray<T>& InData, int InSelectionCount) {
        data = InData;
        selectionCount = InSelectionCount;

        stack.Push(FStackState());
    }

    TArray<T> Execute() {
        while (stack.Num() > 0) {
            FStackState top = stack.Pop();
            if (top.buffer.Num() == selectionCount) {
                return top.buffer;
            }
            int bufferLength = top.buffer.Num();
            int itemsLeft = selectionCount - bufferLength - 1;
            int endIndex = data.Num() - itemsLeft;
            for (int i = top.startIndex; i < endIndex; ++i) {
                TArray<T> nextBuffer = TArray<T>(top.buffer);
                nextBuffer.Add(data[i]);

                stack.Push(FStackState(nextBuffer, i + 1));
            }
        }
        return TArray<T>();
    }
};

template <typename T>
class FPermutation {
private:
    int K = -1;
    int L = -1;
    bool first = true;

public:
    TArray<T> Data;

    // Assumes data is sorted
    FPermutation(const TArray<T>& InData) {
        Data = InData;
    }

    FORCEINLINE bool CanPermute() const { return first || K >= 0; }

    void Permutate() {
        if (first) {
            first = false;
            FindIndices();
            return;
        }

        if (!CanPermute()) {
            return;
        }

        Swap(K, L);
        Reverse(K + 1, Data.Num() - 1);
        FindIndices();
    }

private:
    void FindIndices() {
        K = -1;
        for (int k = 0; k + 1 < Data.Num(); k++) {
            if (PermuteCompareTo(Data[k], Data[k + 1]) < 0) {
                K = k;
            }
        }

        if (K >= 0) {
            for (int l = K + 1; l < Data.Num(); l++) {
                if (PermuteCompareTo(Data[K], Data[l]) < 0) {
                    L = l;
                }
            }
        }
    }

    void Reverse(int a, int b) {
        while (a < b) {
            Swap(a, b);
            a++;
            b--;
        }
    }

    void Swap(int a, int b) {
        T t = Data[a];
        Data[a] = Data[b];
        Data[b] = t;
    }
};
