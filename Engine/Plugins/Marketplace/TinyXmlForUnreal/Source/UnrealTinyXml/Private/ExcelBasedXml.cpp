/*=================================================
* Copyright notices:
* FileName: ExcelBasedXml.cpp
* Created by: luochuanyuewu / JinSheng Liu
* Created on: 2018/04/2
* PluginName:UnrealTinyXml
* Example Project:https://github.com/luochuanyuewu/UnrealTinyXmlExample
* This plugin is a Tinyxml2(https://github.com/leethomason/tinyxml2) integration work for Unreal engine.
* This plugin provide most of functionality powered by tinyxml2 as blueprint nodes.
* This plugin also provide additional excel based xml file parsing node(table mapping.) under category "UnrealTinyXml|Excel Based Xml".
* Discord Support:https://discordapp.com/invite/xMRXAB2
* =================================================*/

#include "ExcelBasedXml.h"
#include "XmlTableRow.h"

using namespace tinyxml2;


UExcelBasedXml* UExcelBasedXml::TableMapping(tinyxml2::XMLDocument& document)
{
	UExcelBasedXml* xmlTable = nullptr;

	const char* WORKSHEET = "Worksheet";
	const char* TABLE = "Table";
	const char* ROW = "Row";
	const char* CELL = "Cell";
	const char* DATA = "Data";

	XMLElement* pTable = document.RootElement()->FirstChildElement(WORKSHEET)->FirstChildElement(TABLE);

	int tableRow = 0;

	for (XMLElement* pRow = pTable->FirstChildElement(ROW); pRow; pRow = pRow->NextSiblingElement(ROW))
	{
		tableRow++;
	}


	if (tableRow > 1)
	{
		XMLElement* row = pTable->FirstChildElement(ROW);

		int tableCol = 0;

		for (XMLElement* pCell = row->FirstChildElement(CELL); pCell; pCell = pCell->NextSiblingElement(CELL))
		{
			tableCol++;
		}

		xmlTable = NewObject<UExcelBasedXml>();
		xmlTable->Col = tableCol;
		//first row which is fields.
		xmlTable->Row = tableRow - 1;

		xmlTable->Datas.Empty(tableCol * tableRow);
		xmlTable->Datas.AddDefaulted(tableCol * tableRow);

		int tempRow = 0;
		for (; row; row = row->NextSiblingElement(ROW))
		{
			int tempCol = 0;
			for (XMLElement* cell = row->FirstChildElement(CELL); cell; cell = cell->NextSiblingElement(CELL))
			{
				XMLElement* data = cell->FirstChildElement(DATA);
				if (data)
					xmlTable->Datas[tempRow*tableCol + tempCol] = UTF8_TO_TCHAR(data->GetText());
				tempCol++;
				if (tempCol > tableCol) break;
			}

			tempRow++;
			if (tempRow > tableRow) break;
		}

		for (int i = 0; i < xmlTable->Col; i++)
		{
			xmlTable->FieldNames.Add(xmlTable->Datas[i], i);
		}
	}

	return xmlTable;
}


UExcelBasedXml* UExcelBasedXml::OpenXmlTable(const FString& filename)
{
	UExcelBasedXml* xmlTable = nullptr;
	XMLDocument doc;

	doc.LoadFile(TCHAR_TO_UTF8(*filename));
	if (doc.Error()) return nullptr;

	xmlTable = TableMapping(doc);

	doc.Clear();

	return xmlTable;
}

UExcelBasedXml* UExcelBasedXml::OpenXmlTableFromBuff(const TArray<uint8>& Buffers)
{
	UExcelBasedXml* xmlTable = nullptr;
	XMLDocument doc;

	doc.Parse((char*)&Buffers[0], Buffers.Num());
	if (doc.Error()) return nullptr;

	xmlTable = TableMapping(doc);

	doc.Clear();

	return xmlTable;
}


void UExcelBasedXml::Close()
{
	this->FieldNames.Empty();
	this->Datas.Empty();
	
	if (this->IsValidLowLevel())
	{
		this->ConditionalBeginDestroy();
	}

}



UXmlTableRow * UExcelBasedXml::FindRow(int RowNum)
{
	if (RowNum > 0 && RowNum <= this->Row)
	{
		TMap<FString, FString> data;
		int tempCol = 0;
		for (auto& Elem : this->FieldNames)
		{
			data.Add(Elem.Key, this->Datas[RowNum*this->Col + tempCol++]);
		}

		UXmlTableRow* DataRow = NewObject<UXmlTableRow>();
		DataRow->Init(data);

		return DataRow;
	}
	else
		return nullptr;
}

UXmlTableRow* UExcelBasedXml::FindRowByInt(const FString& key, int32 value)
{
	return this->FindRowByStr(key, FString::FromInt(value));
}

UXmlTableRow* UExcelBasedXml::FindRowByStr(const FString& key, const FString& value)
{
	int32* whichCol = this->FieldNames.Find(key);

	if (whichCol == nullptr) return nullptr;

	for (int row = 1; row <= this->Row; row++)
	{
		if (this->Datas[row*this->Col + *whichCol] == value)
		{
			return this->FindRow(row);
		}
	}

	return nullptr;
}

UXmlTableRow* UExcelBasedXml::FindRowByTwoStr(const FString& firstkey, const FString& firstvalue, const FString& secondkey, const FString& secondvalue)
{
	int32* whichCol1 = this->FieldNames.Find(firstkey);
	int32* whichCol2 = this->FieldNames.Find(secondkey);

	if (whichCol1 == nullptr || whichCol2 == nullptr) return nullptr;

	for (int row = 1; row <= this->Row; row++)
	{
		if (this->Datas[row*this->Col + *whichCol1] == firstvalue
			&& this->Datas[row*this->Col + *whichCol2] == secondvalue)
		{
			return this->FindRow(row);
		}
	}

	return nullptr;
}

UXmlTableRow* UExcelBasedXml::FindRowByTwoInt(const FString& firstkey, int32 firstvalue, const FString& secondkey, int32 secondvalue)
{
	return this->FindRowByTwoStr(firstkey, FString::FromInt(firstvalue), secondkey, FString::FromInt(secondvalue));
}

int32 UExcelBasedXml::GetRow()
{
	return this->Row;
}

int32 UExcelBasedXml::GetColumn()
{
	return this->Col;
}

