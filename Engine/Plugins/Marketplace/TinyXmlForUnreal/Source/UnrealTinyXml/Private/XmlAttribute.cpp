/*=================================================
* Copyright notices:
* FileName: XmlAttribute.cpp
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#include "XmlAttribute.h"

using namespace tinyxml2;
FString UXmlAttribute::Name()
{
	return UTF8_TO_TCHAR(this->InnerAttribute->Name());
}

FString UXmlAttribute::Value()
{
	return UTF8_TO_TCHAR(this->InnerAttribute->Value());

}

int UXmlAttribute::GetLineNum()
{
	return this->InnerAttribute->GetLineNum();
}


int UXmlAttribute::IntValue()
{
	return this->InnerAttribute->IntValue();
}

bool UXmlAttribute::BoolValue()
{
	return this->InnerAttribute->BoolValue();
}

float UXmlAttribute::FloatValue()
{
	return this->InnerAttribute->FloatValue();
}

void UXmlAttribute::SetAttribute(const FString& value)
{
	this->InnerAttribute->SetAttribute(TCHAR_TO_UTF8(*value));
}

void UXmlAttribute::SetIntAttribute(int value)
{
	this->InnerAttribute->SetAttribute(value);
}

void UXmlAttribute::SetBoolAttribute(bool value)
{
	this->InnerAttribute->SetAttribute(value);
}

void UXmlAttribute::SetFloatAttribute(float value)
{
	this->InnerAttribute->SetAttribute(value);
}
