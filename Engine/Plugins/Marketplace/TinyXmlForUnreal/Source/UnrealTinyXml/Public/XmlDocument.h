/*=================================================
* Copyright notices:
* FileName: XmlDocument.h
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
#include "XmlDocument.generated.h"


class UXmlDeclaration;
class UXmlElement;
/**
 * 
 */
UCLASS(BlueprintType)
class UNREALTINYXML_API UXmlDocument : public UXmlNode
{
	GENERATED_BODY()
public:



	//Parse an XML file from a character string. Returns true on success.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		bool Parse(const FString& xml);

	//Load an XML file from disk. Returns true on success.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		bool LoadFile(const FString& filename);

	//Save the XML file to disk. Returns true on success.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		bool SaveFile(const FString& filename, bool compact = false);

	//Returns true if this document has a leading Byte Order Mark of UTF8.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlDocument")
		bool HasBOM();

	//Sets whether to write the BOM when writing the file.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		void SetBOM(bool useBOM);

	//Load an XML file from disk. Returns true on success.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlDocument")
		UXmlElement* RootElement();
	
	/**
	Create a new Element associated with
	this Document. The memory for the Element
	is managed by the Document.
	*/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		UXmlElement* NewElement(const FString& name);

	/**
	Create a new Declaration associated with
	this Document. The memory for the object
	is managed by the Document.
	If the 'text' param is null, the standard
	declaration is used.:
	@verbatim
	<?xml version="1.0" encoding="UTF-8"?>
	@endverbatim
	*/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		UXmlDeclaration* NewDeclaration(const FString& text);

	//Return true if there was an error parsing the document.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlDocument")
		bool Error();

	//Return the Error name.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlDocument")
		FString ErrorName();

	//Return the line where the error occured, or zero if unknown.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|XmlDocument")
		int GetErrorLineNum();

	// Clear the document, resetting it to the initial state.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|XmlDocument")
		void Clear();
};
