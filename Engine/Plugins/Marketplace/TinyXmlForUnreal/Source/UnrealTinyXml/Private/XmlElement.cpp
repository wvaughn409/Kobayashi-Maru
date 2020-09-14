/*=================================================
* Copyright notices:
* FileName: XmlElement.cpp
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#include "XmlElement.h"

FString UXmlElement::Name()
{
	return this->InnerNode->ToElement()->Value();
}

void UXmlElement::SetName(const FString& str)
{
	this->InnerNode->ToElement()->SetValue(TCHAR_TO_UTF8(*str));
}

FString UXmlElement::Attribute(const FString& name)
{
	const char* val = this->InnerNode->ToElement()->Attribute(TCHAR_TO_UTF8(*name));
	return  UTF8_TO_TCHAR(val);
}

int UXmlElement::IntAttribute(const FString& name)
{
	return this->InnerNode->ToElement()->IntAttribute(TCHAR_TO_UTF8(*name));
}

bool UXmlElement::BoolAttribute(const FString& name)
{
	return this->InnerNode->ToElement()->BoolAttribute(TCHAR_TO_UTF8(*name));
}

float UXmlElement::FloatAttribute(const FString& name)
{
	return this->InnerNode->ToElement()->FloatAttribute(TCHAR_TO_UTF8(*name));
}

void UXmlElement::SetAttribute(const FString& name, const FString& value)
{
	this->InnerNode->ToElement()->SetAttribute(TCHAR_TO_UTF8(*name), TCHAR_TO_UTF8(*value));
}

void UXmlElement::SetIntAttribute(const FString& name, int value)
{
	this->InnerNode->ToElement()->SetAttribute(TCHAR_TO_UTF8(*name),value);
}

void UXmlElement::SetBoolAttribute(const FString& name, bool value)
{
	this->InnerNode->ToElement()->SetAttribute(TCHAR_TO_UTF8(*name), value);
}

void UXmlElement::SetFloatAttribute(const FString& name, float value)
{
	this->InnerNode->ToElement()->SetAttribute(TCHAR_TO_UTF8(*name), value);
}

void UXmlElement::DeleteAttribute(const FString& name)
{
	this->InnerNode->ToElement()->DeleteAttribute(TCHAR_TO_UTF8(*name));
}


FString UXmlElement::GetText()
{
	return UTF8_TO_TCHAR(this->InnerNode->ToElement()->GetText());
}

int UXmlElement::IntText()
{
	return this->InnerNode->ToElement()->IntText();
}

bool UXmlElement::BoolText()
{
	return this->InnerNode->ToElement()->BoolText();
}

float UXmlElement::FloatText()
{
	return this->InnerNode->ToElement()->FloatText();
}

void UXmlElement::SetText(const FString& inText)
{
	this->InnerNode->ToElement()->SetText(TCHAR_TO_UTF8(*inText));
}

void UXmlElement::SetIntText(int value)
{
	this->InnerNode->ToElement()->SetText(value);
}

void UXmlElement::SetBoolText(bool value)
{
	this->InnerNode->ToElement()->SetText(value);
}

void UXmlElement::SetFloatText(float value)
{
	this->InnerNode->ToElement()->SetText(value);
}

