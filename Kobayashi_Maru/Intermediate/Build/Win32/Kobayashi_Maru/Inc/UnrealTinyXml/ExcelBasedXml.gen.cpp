// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/ExcelBasedXml.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExcelBasedXml() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UExcelBasedXml_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UExcelBasedXml();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlTableRow_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UExcelBasedXml::execGetColumn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetColumn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execGetRow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execFindRowByTwoInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_firstkey);
		P_GET_PROPERTY(FIntProperty,Z_Param_firstvalue);
		P_GET_PROPERTY(FStrProperty,Z_Param_secondkey);
		P_GET_PROPERTY(FIntProperty,Z_Param_secondvalue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlTableRow**)Z_Param__Result=P_THIS->FindRowByTwoInt(Z_Param_firstkey,Z_Param_firstvalue,Z_Param_secondkey,Z_Param_secondvalue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execFindRowByTwoStr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_firstkey);
		P_GET_PROPERTY(FStrProperty,Z_Param_firstvalue);
		P_GET_PROPERTY(FStrProperty,Z_Param_secondkey);
		P_GET_PROPERTY(FStrProperty,Z_Param_secondvalue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlTableRow**)Z_Param__Result=P_THIS->FindRowByTwoStr(Z_Param_firstkey,Z_Param_firstvalue,Z_Param_secondkey,Z_Param_secondvalue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execFindRowByStr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlTableRow**)Z_Param__Result=P_THIS->FindRowByStr(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execFindRowByInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlTableRow**)Z_Param__Result=P_THIS->FindRowByInt(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execFindRow)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RowNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlTableRow**)Z_Param__Result=P_THIS->FindRow(Z_Param_RowNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execClose)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Close();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execOpenXmlTableFromBuff)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_Buffers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExcelBasedXml**)Z_Param__Result=UExcelBasedXml::OpenXmlTableFromBuff(Z_Param_Out_Buffers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExcelBasedXml::execOpenXmlTable)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UExcelBasedXml**)Z_Param__Result=UExcelBasedXml::OpenXmlTable(Z_Param_filename);
		P_NATIVE_END;
	}
	void UExcelBasedXml::StaticRegisterNativesUExcelBasedXml()
	{
		UClass* Class = UExcelBasedXml::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Close", &UExcelBasedXml::execClose },
			{ "FindRow", &UExcelBasedXml::execFindRow },
			{ "FindRowByInt", &UExcelBasedXml::execFindRowByInt },
			{ "FindRowByStr", &UExcelBasedXml::execFindRowByStr },
			{ "FindRowByTwoInt", &UExcelBasedXml::execFindRowByTwoInt },
			{ "FindRowByTwoStr", &UExcelBasedXml::execFindRowByTwoStr },
			{ "GetColumn", &UExcelBasedXml::execGetColumn },
			{ "GetRow", &UExcelBasedXml::execGetRow },
			{ "OpenXmlTable", &UExcelBasedXml::execOpenXmlTable },
			{ "OpenXmlTableFromBuff", &UExcelBasedXml::execOpenXmlTableFromBuff },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExcelBasedXml_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_Close_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09* Clear and close this table.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Clear and close this table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics
	{
		struct ExcelBasedXml_eventFindRow_Parms
		{
			int32 RowNum;
			UXmlTableRow* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RowNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRow_Parms, ReturnValue), Z_Construct_UClass_UXmlTableRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::NewProp_RowNum = { "RowNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRow_Parms, RowNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::NewProp_RowNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09*Find a certain row by row number. return null if not found or row number is not valid.\n\x09**/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Find a certain row by row number. return null if not found or row number is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "FindRow", nullptr, nullptr, sizeof(ExcelBasedXml_eventFindRow_Parms), Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_FindRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_FindRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics
	{
		struct ExcelBasedXml_eventFindRowByInt_Parms
		{
			FString key;
			int32 value;
			UXmlTableRow* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByInt_Parms, ReturnValue), Z_Construct_UClass_UXmlTableRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByInt_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09*Find a certain row by int. return null if not found or row number is not valid.\n\x09**/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Find a certain row by int. return null if not found or row number is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "FindRowByInt", nullptr, nullptr, sizeof(ExcelBasedXml_eventFindRowByInt_Parms), Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_FindRowByInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_FindRowByInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics
	{
		struct ExcelBasedXml_eventFindRowByStr_Parms
		{
			FString key;
			FString value;
			UXmlTableRow* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByStr_Parms, ReturnValue), Z_Construct_UClass_UXmlTableRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByStr_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByStr_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09*Find a certain row by string. return null if not found or row number is not valid.\n\x09**/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Find a certain row by string. return null if not found or row number is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "FindRowByStr", nullptr, nullptr, sizeof(ExcelBasedXml_eventFindRowByStr_Parms), Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_FindRowByStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_FindRowByStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics
	{
		struct ExcelBasedXml_eventFindRowByTwoInt_Parms
		{
			FString firstkey;
			int32 firstvalue;
			FString secondkey;
			int32 secondvalue;
			UXmlTableRow* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_secondvalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secondkey;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_firstvalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_firstkey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoInt_Parms, ReturnValue), Z_Construct_UClass_UXmlTableRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_secondvalue = { "secondvalue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoInt_Parms, secondvalue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_secondkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_secondkey = { "secondkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoInt_Parms, secondkey), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_secondkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_secondkey_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_firstvalue = { "firstvalue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoInt_Parms, firstvalue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_firstkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_firstkey = { "firstkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoInt_Parms, firstkey), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_firstkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_firstkey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_secondvalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_secondkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_firstvalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::NewProp_firstkey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09*Find a certain row by two int. return null if not found or row number is not valid.\n\x09**/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Find a certain row by two int. return null if not found or row number is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "FindRowByTwoInt", nullptr, nullptr, sizeof(ExcelBasedXml_eventFindRowByTwoInt_Parms), Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics
	{
		struct ExcelBasedXml_eventFindRowByTwoStr_Parms
		{
			FString firstkey;
			FString firstvalue;
			FString secondkey;
			FString secondvalue;
			UXmlTableRow* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secondvalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secondkey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstvalue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_firstvalue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstkey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_firstkey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoStr_Parms, ReturnValue), Z_Construct_UClass_UXmlTableRow_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondvalue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondvalue = { "secondvalue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoStr_Parms, secondvalue), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondvalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondvalue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondkey = { "secondkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoStr_Parms, secondkey), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondkey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstvalue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstvalue = { "firstvalue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoStr_Parms, firstvalue), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstvalue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstvalue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstkey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstkey = { "firstkey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventFindRowByTwoStr_Parms, firstkey), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstkey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstkey_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondvalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_secondkey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstvalue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::NewProp_firstkey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09*Find a certain row by two string. return null if not found or row number is not valid.\n\x09**/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Find a certain row by two string. return null if not found or row number is not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "FindRowByTwoStr", nullptr, nullptr, sizeof(ExcelBasedXml_eventFindRowByTwoStr_Parms), Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics
	{
		struct ExcelBasedXml_eventGetColumn_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventGetColumn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09* Get how many columns of this table.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Get how many columns of this table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "GetColumn", nullptr, nullptr, sizeof(ExcelBasedXml_eventGetColumn_Parms), Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_GetColumn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_GetColumn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics
	{
		struct ExcelBasedXml_eventGetRow_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventGetRow_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09* Get how many rows of this table.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Get how many rows of this table." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "GetRow", nullptr, nullptr, sizeof(ExcelBasedXml_eventGetRow_Parms), Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_GetRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_GetRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics
	{
		struct ExcelBasedXml_eventOpenXmlTable_Parms
		{
			FString filename;
			UExcelBasedXml* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventOpenXmlTable_Parms, ReturnValue), Z_Construct_UClass_UExcelBasedXml_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::NewProp_filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventOpenXmlTable_Parms, filename), METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::NewProp_filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::NewProp_filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09* Open a Excel based xml file, must assign to an var, and must call close() after used.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Open a Excel based xml file, must assign to an var, and must call close() after used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "OpenXmlTable", nullptr, nullptr, sizeof(ExcelBasedXml_eventOpenXmlTable_Parms), Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics
	{
		struct ExcelBasedXml_eventOpenXmlTableFromBuff_Parms
		{
			TArray<uint8> Buffers;
			UExcelBasedXml* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Buffers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Buffers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Buffers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventOpenXmlTableFromBuff_Parms, ReturnValue), Z_Construct_UClass_UExcelBasedXml_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_Buffers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_Buffers = { "Buffers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExcelBasedXml_eventOpenXmlTableFromBuff_Parms, Buffers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_Buffers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_Buffers_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_Buffers_Inner = { "Buffers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_Buffers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::NewProp_Buffers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|ExcelBasedXml" },
		{ "Comment", "/**\n\x09* Open a Excel based xml file from buffers, must assign to an var, and must call close() after used.\n\x09*/" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "Open a Excel based xml file from buffers, must assign to an var, and must call close() after used." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExcelBasedXml, nullptr, "OpenXmlTableFromBuff", nullptr, nullptr, sizeof(ExcelBasedXml_eventOpenXmlTableFromBuff_Parms), Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExcelBasedXml_NoRegister()
	{
		return UExcelBasedXml::StaticClass();
	}
	struct Z_Construct_UClass_UExcelBasedXml_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExcelBasedXml_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExcelBasedXml_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExcelBasedXml_Close, "Close" }, // 2109224788
		{ &Z_Construct_UFunction_UExcelBasedXml_FindRow, "FindRow" }, // 605807806
		{ &Z_Construct_UFunction_UExcelBasedXml_FindRowByInt, "FindRowByInt" }, // 203256197
		{ &Z_Construct_UFunction_UExcelBasedXml_FindRowByStr, "FindRowByStr" }, // 2359340097
		{ &Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoInt, "FindRowByTwoInt" }, // 2132661138
		{ &Z_Construct_UFunction_UExcelBasedXml_FindRowByTwoStr, "FindRowByTwoStr" }, // 3303040420
		{ &Z_Construct_UFunction_UExcelBasedXml_GetColumn, "GetColumn" }, // 2939883547
		{ &Z_Construct_UFunction_UExcelBasedXml_GetRow, "GetRow" }, // 1891783032
		{ &Z_Construct_UFunction_UExcelBasedXml_OpenXmlTable, "OpenXmlTable" }, // 3129826275
		{ &Z_Construct_UFunction_UExcelBasedXml_OpenXmlTableFromBuff, "OpenXmlTableFromBuff" }, // 1270981514
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExcelBasedXml_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*This class provide Excel based xml parsing.\n*/" },
		{ "IncludePath", "ExcelBasedXml.h" },
		{ "ModuleRelativePath", "Public/ExcelBasedXml.h" },
		{ "ToolTip", "This class provide Excel based xml parsing." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExcelBasedXml_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExcelBasedXml>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExcelBasedXml_Statics::ClassParams = {
		&UExcelBasedXml::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UExcelBasedXml_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExcelBasedXml_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExcelBasedXml()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExcelBasedXml_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExcelBasedXml, 1576192284);
	template<> UNREALTINYXML_API UClass* StaticClass<UExcelBasedXml>()
	{
		return UExcelBasedXml::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExcelBasedXml(Z_Construct_UClass_UExcelBasedXml, &UExcelBasedXml::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UExcelBasedXml"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExcelBasedXml);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
