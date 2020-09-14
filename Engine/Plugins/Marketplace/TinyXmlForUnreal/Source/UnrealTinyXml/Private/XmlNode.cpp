/*=================================================
* Copyright notices:
* FileName: XmlNode.cpp
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#include "XmlNode.h"
#include "XmlElement.h"

UXmlNode* UXmlNode::CreateNode(tinyxml2::XMLNode* InNode)
{
	if (!InNode)
		return nullptr;

	UXmlNode* NewUNode = NewObject<UXmlNode>();
	NewUNode->InnerNode = InNode;
	return NewUNode;
}

UXmlElement* UXmlNode::CreateElement(tinyxml2::XMLElement* InNode)
{
	if (!InNode)
		return nullptr;

	UXmlElement* NewUElement = NewObject<UXmlElement>();
	NewUElement->InnerNode = InNode;
	return NewUElement;
}

UXmlElement* UXmlNode::ToElement()
{
	return CreateElement(this->InnerNode->ToElement());
}

FString UXmlNode::Value()
{
	return UTF8_TO_TCHAR(InnerNode->Value());
}

void UXmlNode::SetValue(const FString& val)
{
	InnerNode->SetValue(TCHAR_TO_UTF8(*val));
}

int UXmlNode::GetLineNum()
{
	return InnerNode->GetLineNum();
}

UXmlNode* UXmlNode::Parent()
{
	return CreateNode(this->InnerNode->Parent());
}

bool UXmlNode::NoChildren()
{
	return this->InnerNode->NoChildren();
}

UXmlNode* UXmlNode::FirstChild()
{
	return CreateNode(this->InnerNode->FirstChild());
}


UXmlNode* UXmlNode::ChildByIndex(int index/*=1*/)
{
	if (index < 1)
		return nullptr;

	tinyxml2::XMLNode *child = this->InnerNode->FirstChild();

	if (index == 1)
		return CreateNode(child);

	for (int i=1;i<index;i++)
	{
		if (child->NextSibling())
		{
			child = child->NextSibling();
		}
	}

	return CreateNode(child);
}

TArray<UXmlNode*> UXmlNode::AllChild()
{
	TArray<UXmlNode*> nodes;
	for (tinyxml2::XMLNode* child = this->InnerNode->FirstChild() ; child != nullptr; child = child->NextSibling())
	{
		nodes.Add(CreateNode(child));
	}
	return nodes;
}

UXmlElement* UXmlNode::FirstChildElement(const FString& name)
{
	return CreateElement(this->InnerNode->FirstChildElement(TCHAR_TO_UTF8(*name)));
}

UXmlNode* UXmlNode::LastChild()
{
	return CreateNode(this->InnerNode->LastChild());
}

UXmlElement* UXmlNode::LastChildElement(const FString& name)
{
	return CreateElement(this->InnerNode->LastChildElement(TCHAR_TO_UTF8(*name)));
}

UXmlNode* UXmlNode::PreviousSibling()
{
	return CreateNode(this->InnerNode->PreviousSibling());
}


UXmlElement* UXmlNode::PreviousSiblingElement(const FString& name)
{
	return CreateElement(this->InnerNode->PreviousSiblingElement(TCHAR_TO_UTF8(*name)));
}

UXmlNode* UXmlNode::NextSibling()
{
	return CreateNode(this->InnerNode->NextSibling());
}


UXmlElement* UXmlNode::NextSiblingElement(const FString& name)
{
	return CreateElement(this->InnerNode->NextSiblingElement(TCHAR_TO_UTF8(*name)));
}

bool UXmlNode::InsertEndChild(UXmlNode* addThis)
{
	if (this->InnerNode->InsertEndChild(addThis->InnerNode))
		return true;
	else
		return false;
}

bool UXmlNode::InsertFirstChild(UXmlNode* addThis)
{
	if (this->InnerNode->InsertFirstChild(addThis->InnerNode))
		return true;
	else
		return false;
}

bool UXmlNode::InsertAfterChild(UXmlNode* afterThis, UXmlNode* addThis)
{
	if (this->InnerNode->InsertAfterChild(afterThis->InnerNode, addThis->InnerNode))
		return true;
	else
		return false;
}

void UXmlNode::DeleteChildren()
{
	this->InnerNode->DeleteChildren();
}

void UXmlNode::DeleteChild(UXmlNode* node)
{
	this->InnerNode->DeleteChild(node->InnerNode);
}

