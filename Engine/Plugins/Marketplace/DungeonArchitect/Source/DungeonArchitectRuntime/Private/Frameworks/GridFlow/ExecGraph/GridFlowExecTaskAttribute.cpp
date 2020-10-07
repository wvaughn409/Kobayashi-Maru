//$ Copyright 2015-20, Code Respawn Technologies Pvt Ltd - All Rights Reserved $//

#include "Frameworks/GridFlow/ExecGraph/GridFlowExecTaskAttribute.h"


void FGridFlowAttribute::Reset() {
    NumberValue.Reset();
    BoolValue.Reset();
    SizeValue.Reset();
    StringValue.Reset();
    StringArrayValue.Reset();
}


FGridFlowAttribute FGridFlowAttribute::ParseNumber(const FString& InSerializedText) {
    return FGridFlowAttribute(FCString::Atof(*InSerializedText));
}

FGridFlowAttribute FGridFlowAttribute::ParseBool(const FString& InSerializedText) {
    return FGridFlowAttribute(FCString::ToBool(*InSerializedText));
}

FGridFlowAttribute FGridFlowAttribute::ParseSize(const FString& InSerializedText) {
    float X = 0;
    float Y = 0;
    FString StrX, StrY;
    if (InSerializedText.Split(",", &StrX, &StrY)) {
        X = FCString::Atof(*StrX);
        Y = FCString::Atof(*StrY);
    }
    return FGridFlowAttribute(FVector2D(X, Y));
}

FGridFlowAttribute FGridFlowAttribute::ParseString(const FString& InSerializedText) {
    return FGridFlowAttribute(InSerializedText);
}

FGridFlowAttribute FGridFlowAttribute::ParseStringArray(const FString& InSerializedText) {
    TArray<FString> Array;
    //if (Array.Num() > 0) 
    {
        FString Paths = InSerializedText;
        FString Left;
        FString Right;
        while (Paths.Split(",", &Left, &Right, ESearchCase::CaseSensitive, ESearchDir::FromStart)) {
            if (Left.Len() > 0) {
                Array.Add(Left);
            }
            Paths = Right;
        }
        if (Paths.Len() > 0) {
            Array.Add(Paths);
        }
    }
    return FGridFlowAttribute(Array);
}

void FGridFlowAttributeList::Reset() {
    AttributesByNode.Reset();
}

bool FGridFlowAttributeList::SetAttribute(const FString& FullPath, const FGridFlowAttribute& InAttribute) {
    int32 DotIndex;
    FullPath.FindChar('.', DotIndex);
    if (DotIndex == INDEX_NONE) {
        return false;
    }
    FString NodeName = FullPath.Mid(0, DotIndex);
    FString VariableName = FullPath.Mid(DotIndex + 1);
    if (NodeName.Len() == 0 || VariableName.Len() == 0) {
        return false;
    }

    TMap<FString, FGridFlowAttribute>& Attributes = AttributesByNode.FindOrAdd(NodeName);
    FGridFlowAttribute& Attribute = Attributes.FindOrAdd(VariableName);
    Attribute = InAttribute;
    return true;
}
