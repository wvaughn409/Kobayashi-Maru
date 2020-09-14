// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/XmlDocument.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlDocument() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlDocument_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlDocument();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlNode();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlDeclaration_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlElement_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UXmlDocument::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execGetErrorLineNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetErrorLineNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execErrorName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->ErrorName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Error();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execNewDeclaration)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlDeclaration**)Z_Param__Result=P_THIS->NewDeclaration(Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execNewElement)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlElement**)Z_Param__Result=P_THIS->NewElement(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execRootElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlElement**)Z_Param__Result=P_THIS->RootElement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execSetBOM)
	{
		P_GET_UBOOL(Z_Param_useBOM);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBOM(Z_Param_useBOM);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execHasBOM)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBOM();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execSaveFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_GET_UBOOL(Z_Param_compact);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveFile(Z_Param_filename,Z_Param_compact);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execLoadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadFile(Z_Param_filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlDocument::execParse)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_xml);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Parse(Z_Param_xml);
		P_NATIVE_END;
	}
	void UXmlDocument::StaticRegisterNativesUXmlDocument()
	{
		UClass* Class = UXmlDocument::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UXmlDocument::execClear },
			{ "Error", &UXmlDocument::execError },
			{ "ErrorName", &UXmlDocument::execErrorName },
			{ "GetErrorLineNum", &UXmlDocument::execGetErrorLineNum },
			{ "HasBOM", &UXmlDocument::execHasBOM },
			{ "LoadFile", &UXmlDocument::execLoadFile },
			{ "NewDeclaration", &UXmlDocument::execNewDeclaration },
			{ "NewElement", &UXmlDocument::execNewElement },
			{ "Parse", &UXmlDocument::execParse },
			{ "RootElement", &UXmlDocument::execRootElement },
			{ "SaveFile", &UXmlDocument::execSaveFile },
			{ "SetBOM", &UXmlDocument::execSetBOM },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXmlDocument_Clear_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "// Clear the document, resetting it to the initial state.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Clear the document, resetting it to the initial state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_Error_Statics
	{
		struct XmlDocument_eventError_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlDocument_Error_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlDocument_eventError_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlDocument_Error_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlDocument_eventError_Parms), &Z_Construct_UFunction_UXmlDocument_Error_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_Error_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_Error_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_Error_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Return true if there was an error parsing the document.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Return true if there was an error parsing the document." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_Error_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "Error", nullptr, nullptr, sizeof(XmlDocument_eventError_Parms), Z_Construct_UFunction_UXmlDocument_Error_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_Error_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_Error_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_Error_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_Error()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_Error_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_ErrorName_Statics
	{
		struct XmlDocument_eventErrorName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventErrorName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Return the Error name.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Return the Error name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "ErrorName", nullptr, nullptr, sizeof(XmlDocument_eventErrorName_Parms), Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_ErrorName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_ErrorName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics
	{
		struct XmlDocument_eventGetErrorLineNum_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventGetErrorLineNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Return the line where the error occured, or zero if unknown.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Return the line where the error occured, or zero if unknown." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "GetErrorLineNum", nullptr, nullptr, sizeof(XmlDocument_eventGetErrorLineNum_Parms), Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_GetErrorLineNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_GetErrorLineNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_HasBOM_Statics
	{
		struct XmlDocument_eventHasBOM_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlDocument_eventHasBOM_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlDocument_eventHasBOM_Parms), &Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Returns true if this document has a leading Byte Order Mark of UTF8.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Returns true if this document has a leading Byte Order Mark of UTF8." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "HasBOM", nullptr, nullptr, sizeof(XmlDocument_eventHasBOM_Parms), Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_HasBOM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_HasBOM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_LoadFile_Statics
	{
		struct XmlDocument_eventLoadFile_Parms
		{
			FString filename;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlDocument_eventLoadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlDocument_eventLoadFile_Parms), &Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventLoadFile_Parms, filename), METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Load an XML file from disk. Returns true on success.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Load an XML file from disk. Returns true on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "LoadFile", nullptr, nullptr, sizeof(XmlDocument_eventLoadFile_Parms), Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics
	{
		struct XmlDocument_eventNewDeclaration_Parms
		{
			FString text;
			UXmlDeclaration* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventNewDeclaration_Parms, ReturnValue), Z_Construct_UClass_UXmlDeclaration_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventNewDeclaration_Parms, text), METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::NewProp_text_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::NewProp_text_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::NewProp_text,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "/**\n\x09""Create a new Declaration associated with\n\x09this Document. The memory for the object\n\x09is managed by the Document.\n\x09If the 'text' param is null, the standard\n\x09""declaration is used.:\n\x09@verbatim\n\x09<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n\x09@endverbatim\n\x09*/" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Create a new Declaration associated with\nthis Document. The memory for the object\nis managed by the Document.\nIf the 'text' param is null, the standard\ndeclaration is used.:\n@verbatim\n<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n@endverbatim" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "NewDeclaration", nullptr, nullptr, sizeof(XmlDocument_eventNewDeclaration_Parms), Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_NewDeclaration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_NewDeclaration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_NewElement_Statics
	{
		struct XmlDocument_eventNewElement_Parms
		{
			FString name;
			UXmlElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlDocument_NewElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventNewElement_Parms, ReturnValue), Z_Construct_UClass_UXmlElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_NewElement_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlDocument_NewElement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventNewElement_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_NewElement_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_NewElement_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_NewElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_NewElement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_NewElement_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_NewElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "/**\n\x09""Create a new Element associated with\n\x09this Document. The memory for the Element\n\x09is managed by the Document.\n\x09*/" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Create a new Element associated with\nthis Document. The memory for the Element\nis managed by the Document." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_NewElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "NewElement", nullptr, nullptr, sizeof(XmlDocument_eventNewElement_Parms), Z_Construct_UFunction_UXmlDocument_NewElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_NewElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_NewElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_NewElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_NewElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_NewElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_Parse_Statics
	{
		struct XmlDocument_eventParse_Parms
		{
			FString xml;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xml_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_xml;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlDocument_eventParse_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlDocument_eventParse_Parms), &Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_xml_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_xml = { "xml", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventParse_Parms, xml), METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_xml_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_xml_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_Parse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_Parse_Statics::NewProp_xml,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_Parse_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Parse an XML file from a character string. Returns true on success.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Parse an XML file from a character string. Returns true on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_Parse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "Parse", nullptr, nullptr, sizeof(XmlDocument_eventParse_Parms), Z_Construct_UFunction_UXmlDocument_Parse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_Parse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_Parse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_Parse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_Parse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_Parse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_RootElement_Statics
	{
		struct XmlDocument_eventRootElement_Parms
		{
			UXmlElement* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlDocument_RootElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventRootElement_Parms, ReturnValue), Z_Construct_UClass_UXmlElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_RootElement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_RootElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_RootElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Load an XML file from disk. Returns true on success.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Load an XML file from disk. Returns true on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_RootElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "RootElement", nullptr, nullptr, sizeof(XmlDocument_eventRootElement_Parms), Z_Construct_UFunction_UXmlDocument_RootElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_RootElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_RootElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_RootElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_RootElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_RootElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_SaveFile_Statics
	{
		struct XmlDocument_eventSaveFile_Parms
		{
			FString filename;
			bool compact;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_compact_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_compact;
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
	void Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlDocument_eventSaveFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlDocument_eventSaveFile_Parms), &Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_compact_SetBit(void* Obj)
	{
		((XmlDocument_eventSaveFile_Parms*)Obj)->compact = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_compact = { "compact", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlDocument_eventSaveFile_Parms), &Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_compact_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_filename = { "filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlDocument_eventSaveFile_Parms, filename), METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_compact,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::NewProp_filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Save the XML file to disk. Returns true on success.\n" },
		{ "CPP_Default_compact", "false" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Save the XML file to disk. Returns true on success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "SaveFile", nullptr, nullptr, sizeof(XmlDocument_eventSaveFile_Parms), Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_SaveFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_SaveFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlDocument_SetBOM_Statics
	{
		struct XmlDocument_eventSetBOM_Parms
		{
			bool useBOM;
		};
		static void NewProp_useBOM_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_useBOM;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::NewProp_useBOM_SetBit(void* Obj)
	{
		((XmlDocument_eventSetBOM_Parms*)Obj)->useBOM = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::NewProp_useBOM = { "useBOM", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlDocument_eventSetBOM_Parms), &Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::NewProp_useBOM_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::NewProp_useBOM,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "Comment", "//Sets whether to write the BOM when writing the file.\n" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
		{ "ToolTip", "Sets whether to write the BOM when writing the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlDocument, nullptr, "SetBOM", nullptr, nullptr, sizeof(XmlDocument_eventSetBOM_Parms), Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlDocument_SetBOM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlDocument_SetBOM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXmlDocument_NoRegister()
	{
		return UXmlDocument::StaticClass();
	}
	struct Z_Construct_UClass_UXmlDocument_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlDocument_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXmlNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXmlDocument_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXmlDocument_Clear, "Clear" }, // 1389812247
		{ &Z_Construct_UFunction_UXmlDocument_Error, "Error" }, // 2907503181
		{ &Z_Construct_UFunction_UXmlDocument_ErrorName, "ErrorName" }, // 3661842720
		{ &Z_Construct_UFunction_UXmlDocument_GetErrorLineNum, "GetErrorLineNum" }, // 4170684266
		{ &Z_Construct_UFunction_UXmlDocument_HasBOM, "HasBOM" }, // 2492789146
		{ &Z_Construct_UFunction_UXmlDocument_LoadFile, "LoadFile" }, // 3733488856
		{ &Z_Construct_UFunction_UXmlDocument_NewDeclaration, "NewDeclaration" }, // 1190793373
		{ &Z_Construct_UFunction_UXmlDocument_NewElement, "NewElement" }, // 3705843072
		{ &Z_Construct_UFunction_UXmlDocument_Parse, "Parse" }, // 96259267
		{ &Z_Construct_UFunction_UXmlDocument_RootElement, "RootElement" }, // 3579458872
		{ &Z_Construct_UFunction_UXmlDocument_SaveFile, "SaveFile" }, // 641284205
		{ &Z_Construct_UFunction_UXmlDocument_SetBOM, "SetBOM" }, // 3426294243
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlDocument_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XmlDocument.h" },
		{ "ModuleRelativePath", "Public/XmlDocument.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlDocument_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlDocument>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlDocument_Statics::ClassParams = {
		&UXmlDocument::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UXmlDocument_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlDocument_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlDocument()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlDocument_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlDocument, 3550773475);
	template<> UNREALTINYXML_API UClass* StaticClass<UXmlDocument>()
	{
		return UXmlDocument::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlDocument(Z_Construct_UClass_UXmlDocument, &UXmlDocument::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UXmlDocument"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlDocument);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
