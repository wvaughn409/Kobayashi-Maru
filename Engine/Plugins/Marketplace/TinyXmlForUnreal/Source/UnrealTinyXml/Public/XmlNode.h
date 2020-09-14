/*=================================================
* Copyright notices:
* FileName: XmlNode.h
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
#include "XmlNode.generated.h"

class UXmlElement;

/**
 *
 */
UCLASS(BlueprintType)
class UNREALTINYXML_API UXmlNode : public UObject
{
	GENERATED_BODY()

public:
	tinyxml2::XMLNode *InnerNode = nullptr;

	UXmlNode* CreateNode(tinyxml2::XMLNode* InNode);

	UXmlElement* CreateElement(tinyxml2::XMLElement* InNode);

	//Safely cast to a Element, or null.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlElement* ToElement();

	//Set the Value of an XML node.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	FString Value();

	//Set the Value of an XML node.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Node")
	void SetValue(const FString& val);

	//Gets the line number the node is in, if the document was parsed from a file.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	int GetLineNum();

	//Get the parent of this node on the DOM.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlNode* Parent();

	// Returns true if this node has no children.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	bool NoChildren();

	//Get the first child node, or null if none exists.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlNode* FirstChild();

	//Get the "Index" child node, return last found child if none exists, return null if index is not valid!
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlNode* ChildByIndex(int index=1);

	//Get the "Index" child node, return last found child if none exists, return null if index is not valid!
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	TArray<UXmlNode*> AllChild();

    /** Get the first child element, or optionally the first child
        element with the specified name.
    */
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlElement* FirstChildElement(const FString& name);

	//Get the last child node, or null if none exists.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlNode* LastChild();

    /** Get the last child element or optionally the last child
        element with the specified name.
    */
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlElement* LastChildElement(const FString& name);

	//Get the previous (left) sibling node of this node.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlNode* PreviousSibling();

	//Get the previous (left) sibling element of this node, with an optionally supplied name.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlElement* PreviousSiblingElement(const FString& name);


	//Get the next (right) sibling node of this node.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlNode* NextSibling();

	//Get the next (right) sibling element of this node, with an optionally supplied name.
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|Node")
	UXmlElement* NextSiblingElement(const FString& name);

	//Add a child node as the last (right) child.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Node")
	bool InsertEndChild(UXmlNode* addThis);

	//Add a child node as the first (left) child.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Node")
	bool InsertFirstChild(UXmlNode* addThis);

	//Add a node after the specified child node.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Node")
	bool InsertAfterChild(UXmlNode* afterThis,UXmlNode* addThis);

	//Delete all the children of this node.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Node")
	void DeleteChildren();

	//Delete a child of this node.
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|Node")
	void DeleteChild(UXmlNode* node);

};
