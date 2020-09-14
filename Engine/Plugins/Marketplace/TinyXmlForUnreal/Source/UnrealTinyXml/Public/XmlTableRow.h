/*=================================================
* Copyright notices:
* FileName: XmlTableRow.h
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/12
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/
#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "XmlTableRow.generated.h"

UCLASS(BlueprintType)
class UXmlTableRow : public UObject
{
	GENERATED_BODY()
private:
	TMap<FString, FString> data;
public:
	void Init(TMap<FString, FString>& indata);
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlTable")
		void BoolField(const FString& name, bool& OutBool);
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlTable")
		void IntField(const FString& name, int& OutInt);
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlTable")
		void FloatField(const FString& name, float& OutFloat);
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlTable")
		void StrField(const FString& name, FString &OutStr);
};