//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#pragma once
#include "CoreMinimal.h"

template <typename T>
class TGridFlowAttributeEntry {
public:
    TGridFlowAttributeEntry() {
    }

    TGridFlowAttributeEntry(const T& InValue) { Set(InValue); }

    void Set(const T& InValue) {
        Value = InValue;
        bIsSet = true;
    }

    T Get() const { return Value; }

    bool Get(T& OutValue) {
        if (bIsSet) {
            OutValue = Value;
        }
        return bIsSet;
    }

    bool IsSet() const { return bIsSet; }
    void Reset() { bIsSet = false; }

private:
    bool bIsSet = false;
    T Value;
};


struct DUNGEONARCHITECTRUNTIME_API FGridFlowAttribute {
    FGridFlowAttribute() {
    }

    FGridFlowAttribute(float InValue) : NumberValue(InValue) {
    }

    FGridFlowAttribute(int32 InValue) : NumberValue(InValue) {
    }

    FGridFlowAttribute(bool InValue) : BoolValue(InValue) {
    }

    FGridFlowAttribute(const FVector2D& InValue) : SizeValue(InValue) {
    }

    FGridFlowAttribute(const FString& InValue) : StringValue(InValue) {
    }

    FGridFlowAttribute(const TArray<FString>& InValue) : StringArrayValue(InValue) {
    }

    void Reset();


    static FGridFlowAttribute ParseNumber(const FString& InSerializedText);
    static FGridFlowAttribute ParseBool(const FString& InSerializedText);
    static FGridFlowAttribute ParseSize(const FString& InSerializedText);
    static FGridFlowAttribute ParseString(const FString& InSerializedText);
    static FGridFlowAttribute ParseStringArray(const FString& InSerializedText);

public:
    TGridFlowAttributeEntry<float> NumberValue;
    TGridFlowAttributeEntry<bool> BoolValue;
    TGridFlowAttributeEntry<FVector2D> SizeValue;
    TGridFlowAttributeEntry<FString> StringValue;
    TGridFlowAttributeEntry<TArray<FString>> StringArrayValue;
};

struct FGridFlowAttribute;

class DUNGEONARCHITECTRUNTIME_API FGridFlowAttributeList {
public:
    void Reset();
    bool SetAttribute(const FString& FullPath, const FGridFlowAttribute& InAttribute);

public:
    TMap<FString, TMap<FString, FGridFlowAttribute>> AttributesByNode;
};
