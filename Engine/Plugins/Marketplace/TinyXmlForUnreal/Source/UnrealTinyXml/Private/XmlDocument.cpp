/*=================================================
* Copyright notices:
* FileName: XmlDocument.cpp
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#include "XmlDocument.h"
#include "XmlElement.h"
#include "XmlDeclaration.h"
#include "Misc/Paths.h"



bool UXmlDocument::Parse(const FString& xml)
{
	if (this->InnerNode == nullptr)
		return false;
	this->InnerNode->ToDocument()->Parse(TCHAR_TO_UTF8(*xml), xml.Len());
	if (this->InnerNode->ToDocument()->Error())
		return false;
	else
		return true;
}


bool UXmlDocument::LoadFile(const FString& filename)
{
	this->InnerNode->ToDocument()->LoadFile(TCHAR_TO_UTF8(*filename));
	
	if (this->InnerNode->ToDocument()->Error())
		return false;
	else
		return true;
}

bool UXmlDocument::SaveFile(const FString& filename, bool compact /*= false*/)
{
	this->InnerNode->ToDocument()->SaveFile(TCHAR_TO_UTF8(*filename), compact);

	if (this->InnerNode->ToDocument()->Error())
		return false;
	else
		return true;
}

bool UXmlDocument::HasBOM()
{
	return this->InnerNode->ToDocument()->HasBOM();
}

void UXmlDocument::SetBOM(bool useBOM)
{
	this->InnerNode->ToDocument()->SetBOM(useBOM);
}

UXmlElement* UXmlDocument::RootElement()
{
	UXmlElement *NewUElement = NewObject<UXmlElement>();
	NewUElement->InnerNode = this->InnerNode->ToDocument()->RootElement();
	return NewUElement;
}

UXmlElement* UXmlDocument::NewElement(const FString& name)
{
	UXmlElement* NewUXmlElement = NewObject<UXmlElement>();
	NewUXmlElement->InnerNode = this->InnerNode->ToDocument()->NewElement(TCHAR_TO_UTF8(*name));
	return NewUXmlElement;
}

UXmlDeclaration* UXmlDocument::NewDeclaration(const FString& text)
{
	UXmlDeclaration* NewDeclaration = NewObject<UXmlDeclaration>();

	if(text.IsEmpty())
		NewDeclaration->InnerNode = this->InnerNode->ToDocument()->NewDeclaration();
	else
		NewDeclaration->InnerNode = this->InnerNode->ToDocument()->NewDeclaration(TCHAR_TO_UTF8(*text));
	
	return NewDeclaration;
}

bool UXmlDocument::Error()
{
	return this->InnerNode->ToDocument()->Error();
}

FString UXmlDocument::ErrorName()
{
	return UTF8_TO_TCHAR(this->InnerNode->ToDocument()->ErrorName());
}

int UXmlDocument::GetErrorLineNum()
{
	return this->InnerNode->ToDocument()->GetErrorLineNum();
}

void UXmlDocument::Clear()
{
	this->InnerNode->ToDocument()->Clear();
}

