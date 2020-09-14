/*=================================================
* Copyright notices:
* FileName: ExcelBasedXml.h
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
#include "ExcelBasedXml.generated.h"

/**
*This class provide Excel based xml parsing.
*/
UCLASS(BlueprintType)
class UExcelBasedXml : public UObject
{
	GENERATED_BODY()

private:
	int Col;
	int Row;
	TMap<FString, int32> FieldNames;
	TArray<FString>		 Datas;
	static UExcelBasedXml* TableMapping(tinyxml2::XMLDocument& document);

public:

	/**
	* Open a Excel based xml file, must assign to an var, and must call close() after used.
	*/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	static UExcelBasedXml* OpenXmlTable(const FString& filename);

	/**
	* Open a Excel based xml file from buffers, must assign to an var, and must call close() after used.
	*/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	static UExcelBasedXml* OpenXmlTableFromBuff(const TArray<uint8>& Buffers);

	/**
	* Clear and close this table.
	*/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	void Close();

	/**
	*Find a certain row by row number. return null if not found or row number is not valid.
	**/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	UXmlTableRow * FindRow(int RowNum);

	/**
	*Find a certain row by int. return null if not found or row number is not valid.
	**/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	UXmlTableRow* FindRowByInt(const FString& key, int32 value);

	/**
	*Find a certain row by string. return null if not found or row number is not valid.
	**/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	UXmlTableRow* FindRowByStr(const FString& key, const FString& value);

	/**
	*Find a certain row by two string. return null if not found or row number is not valid.
	**/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	UXmlTableRow* FindRowByTwoStr(const FString& firstkey, const FString& firstvalue, const FString& secondkey, const FString& secondvalue);

	/**
	*Find a certain row by two int. return null if not found or row number is not valid.
	**/
	UFUNCTION(BlueprintCallable, Category = "UnrealTinyXml|ExcelBasedXml")
	UXmlTableRow* FindRowByTwoInt(const FString& firstkey, int32 firstvalue, const FString& secondkey, int32 secondvalue);

	/**
	* Get how many rows of this table.
	*/
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|ExcelBasedXml")
	int32 GetRow();

	/**
	* Get how many columns of this table.
	*/
	UFUNCTION(BlueprintPure, Category = "UnrealTinyXml|ExcelBasedXml")
	int32 GetColumn();
};

