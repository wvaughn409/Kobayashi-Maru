/*=================================================
* Copyright notices:
* FileName: XmlElement.h
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
#include "XmlNode.h"
#include "XmlElement.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UNREALTINYXML_API UXmlElement : public UXmlNode
{
	GENERATED_BODY()

public:
	//Get the name of an element (which is the Value() of the node.)
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		FString Name();

	//Set the name of the element.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetName(const FString& str);

	//Given an attribute name, Attribute() returns the value for the attribute of that name, or null if none exists.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		FString Attribute(const FString& name);

	//Given an attribute name,returns the value of the attribute interpreted as an integer.The 0 will be returned if the attribute isn't present, or if there is an error.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		int IntAttribute(const FString& name);

	//See IntAttribute.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		bool BoolAttribute(const FString& name);

	//See IntAttribute.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		float FloatAttribute(const FString& name);

	//Sets the named attribute to string value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetAttribute(const FString& name,const FString& value);

	//Sets the named attribute to int value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetIntAttribute(const FString& name, int value);

	//Sets the named attribute to bool value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetBoolAttribute(const FString& name, bool value);

	//Sets the named attribute to float value.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetFloatAttribute(const FString& name, float value);

	//Delete an attribute.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void DeleteAttribute(const FString& name);

	//Convenience function for easy getting to the text inside an element.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		FString GetText();

	//Convenience function for easy getting to the text inside an element as Int.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		int IntText();

	//Convenience function for easy getting to the text inside an element as Bool.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		bool BoolText();

	//Convenience function for easy getting to the text inside an element as Float.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Element")
		float FloatText();

	//Convenience function for easy setting to the text inside an element
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetText(const FString& inText);

	//See SetText.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetIntText(int value);

	//See SetText.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetBoolText(bool value);

	//See SetText.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Element")
		void SetFloatText(float value);
};
