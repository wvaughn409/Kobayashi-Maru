/*=================================================
* Copyright notices:
* FileName: Utility.cpp
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#include "Utility.h"
#include "Misc/Paths.h"
#include "XmlDocument.h"


FString UUtility::GetProjectContentDir()
{
	return FPaths::ProjectContentDir();
}

FString UUtility::GetProjectDir()
{
	return FPaths::ProjectDir();
}

FString UUtility::GetProjectConfigDir()
{
	return FPaths::ProjectConfigDir();
}


void UUtility::SplitToStr(const FString& Str, const FString& Delimiter, TArray<FString>& out)
{
	out.Empty();

	FString sRight = Str;

	while (sRight.Len())
	{
		int32 InPos = sRight.Find(Delimiter);
		if (InPos > 0)
		{
			out.Add(sRight.Left(InPos));
			sRight = sRight.Mid(InPos + Delimiter.Len());
		}
		else if (InPos == 0)
		{
			sRight = sRight.Mid(InPos + Delimiter.Len());
		}
		else
		{
			out.Add(sRight);
			break;
		}
	}
}

void UUtility::SplitToInt(const FString& Str, const FString& Delimiter, TArray<int32>& out)
{
	out.Empty();

	FString sRight = Str;

	while (sRight.Len())
	{
		int32 InPos = sRight.Find(Delimiter);
		if (InPos > 0)
		{
			out.Add(FCString::Atoi(*(sRight.Left(InPos))));
			sRight = sRight.Mid(InPos + Delimiter.Len());
		}
		else if (InPos == 0)
		{
			sRight = sRight.Mid(InPos + Delimiter.Len());
		}
		else
		{
			out.Add(FCString::Atoi(*sRight));
			break;
		}
	}
}

void UUtility::SplitToFloat(const FString& Str, const FString& Delimiter, TArray<float>& out)
{
	out.Empty();

	FString sRight = Str;

	while (sRight.Len())
	{
		int32 InPos = sRight.Find(Delimiter);
		if (InPos > 0)
		{
			out.Add(FCString::Atof(*(sRight.Left(InPos))));
			sRight = sRight.Mid(InPos + Delimiter.Len());
		}
		else if (InPos == 0)
		{
			sRight = sRight.Mid(InPos + Delimiter.Len());
		}
		else
		{
			out.Add(FCString::Atof(*sRight));
			break;
		}
	}
}

UXmlDocument* UUtility::CreateXmlDocument()
{
	UXmlDocument* NewUXmlDocument = NewObject<UXmlDocument>();
	NewUXmlDocument->InnerNode = new tinyxml2::XMLDocument();
	return NewUXmlDocument;
}