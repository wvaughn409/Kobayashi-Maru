/*=================================================
* Copyright notices:
* FileName: XmlTableRow.cpp
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/12
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#include "XmlTableRow.h"

void UXmlTableRow::Init(TMap<FString, FString>& indata)
{
	this->data = indata;
}

void UXmlTableRow::BoolField(const FString& name, bool& OutBool)
{
	FString* value = this->data.Find(name);
	OutBool = value->ToBool();

}

void UXmlTableRow::IntField(const FString& name, int& OutInt)
{
	FString* value = this->data.Find(name);
	if (value == nullptr)
		OutInt = -1;
	else
		OutInt = FCString::Atoi(**value);
}

void UXmlTableRow::FloatField(const FString& name, float& OutFloat)
{
	FString* value = this->data.Find(name);
	if (value == nullptr)
		OutFloat = -1;
	else
		OutFloat = FCString::Atof(**value);
}


void UXmlTableRow::StrField(const FString& name, FString &OutStr)
{
	FString* value = this->data.Find(name);
	if (value == nullptr)
		OutStr = "NULL";
	else
		OutStr = **value;


}


