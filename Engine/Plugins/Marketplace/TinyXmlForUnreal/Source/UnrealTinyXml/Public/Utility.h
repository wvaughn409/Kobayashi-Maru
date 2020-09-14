/*=================================================
* Copyright notices:
* FileName: Utility.h
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Utility.generated.h"

class UXmlDocument;
/**
 * 
 */
UCLASS()
class UNREALTINYXML_API UUtility : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Utility")
	static FString GetProjectContentDir();

	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Utility")
	static FString GetProjectDir();

	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Utility")
	static FString GetProjectConfigDir();

	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Utility")
		static void SplitToStr(const FString& Str, const FString& Delimiter, TArray<FString>& out);
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Utility")
		static void SplitToInt(const FString& Str, const FString& Delimiter, TArray<int32>& out);
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Utility")
		static void SplitToFloat(const FString& Str, const FString& Delimiter, TArray<float>& out);

	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		static UXmlDocument* CreateXmlDocument();

};
