/*=================================================
* Copyright notices:
* FileName: XmlAttribute.h
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
#include "tinyxml2.h"
#include "XmlAttribute.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREALTINYXML_API UXmlAttribute : public UObject
{
	GENERATED_BODY()
private:
	tinyxml2::XMLAttribute *InnerAttribute = nullptr;

public:
	//The name of the attribute.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Attribute")
		FString Name();

	//The value of the attribute.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Attribute")
		FString Value();

	//Gets the line number the attribute is in, if the document was parsed from a file.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Attribute")
		int GetLineNum();

	/** IntValue interprets the attribute as an integer, and returns the value.
	If the value isn't an integer, 0 will be returned. 
	*/
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Attribute")
		int	IntValue();

	// Query as a boolean. See IntValue()
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Attribute")
		bool BoolValue();

	// Query as a float. See IntValue()
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Attribute")
		float FloatValue();

	// Set the attribute to a string value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Attribute")
		void SetAttribute(const FString& value);

	// Set the attribute to a string value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Attribute")
		void SetIntAttribute(int value);

	// Set the attribute to a string value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Attribute")
		void SetBoolAttribute(bool value);

	// Set the attribute to a string value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Attribute")
		void SetFloatAttribute(float value);
};
