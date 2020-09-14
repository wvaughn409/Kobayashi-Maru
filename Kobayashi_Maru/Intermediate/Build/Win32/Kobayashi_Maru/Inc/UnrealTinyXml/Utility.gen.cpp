// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/Utility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtility() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UUtility_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UUtility();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlDocument_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUtility::execCreateXmlDocument)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlDocument**)Z_Param__Result=UUtility::CreateXmlDocument();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtility::execSplitToFloat)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_GET_PROPERTY(FStrProperty,Z_Param_Delimiter);
		P_GET_TARRAY_REF(float,Z_Param_Out_out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtility::SplitToFloat(Z_Param_Str,Z_Param_Delimiter,Z_Param_Out_out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtility::execSplitToInt)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_GET_PROPERTY(FStrProperty,Z_Param_Delimiter);
		P_GET_TARRAY_REF(int32,Z_Param_Out_out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtility::SplitToInt(Z_Param_Str,Z_Param_Delimiter,Z_Param_Out_out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtility::execSplitToStr)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Str);
		P_GET_PROPERTY(FStrProperty,Z_Param_Delimiter);
		P_GET_TARRAY_REF(FString,Z_Param_Out_out);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUtility::SplitToStr(Z_Param_Str,Z_Param_Delimiter,Z_Param_Out_out);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtility::execGetProjectConfigDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtility::GetProjectConfigDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtility::execGetProjectDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtility::GetProjectDir();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUtility::execGetProjectContentDir)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UUtility::GetProjectContentDir();
		P_NATIVE_END;
	}
	void UUtility::StaticRegisterNativesUUtility()
	{
		UClass* Class = UUtility::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateXmlDocument", &UUtility::execCreateXmlDocument },
			{ "GetProjectConfigDir", &UUtility::execGetProjectConfigDir },
			{ "GetProjectContentDir", &UUtility::execGetProjectContentDir },
			{ "GetProjectDir", &UUtility::execGetProjectDir },
			{ "SplitToFloat", &UUtility::execSplitToFloat },
			{ "SplitToInt", &UUtility::execSplitToInt },
			{ "SplitToStr", &UUtility::execSplitToStr },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics
	{
		struct Utility_eventCreateXmlDocument_Parms
		{
			UXmlDocument* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventCreateXmlDocument_Parms, ReturnValue), Z_Construct_UClass_UXmlDocument_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlDocument" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtility, nullptr, "CreateXmlDocument", nullptr, nullptr, sizeof(Utility_eventCreateXmlDocument_Parms), Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtility_CreateXmlDocument()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtility_CreateXmlDocument_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics
	{
		struct Utility_eventGetProjectConfigDir_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventGetProjectConfigDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Utility" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtility, nullptr, "GetProjectConfigDir", nullptr, nullptr, sizeof(Utility_eventGetProjectConfigDir_Parms), Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtility_GetProjectConfigDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtility_GetProjectConfigDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics
	{
		struct Utility_eventGetProjectContentDir_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventGetProjectContentDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Utility" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtility, nullptr, "GetProjectContentDir", nullptr, nullptr, sizeof(Utility_eventGetProjectContentDir_Parms), Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtility_GetProjectContentDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtility_GetProjectContentDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtility_GetProjectDir_Statics
	{
		struct Utility_eventGetProjectDir_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_GetProjectDir_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventGetProjectDir_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtility_GetProjectDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_GetProjectDir_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_GetProjectDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Utility" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtility_GetProjectDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtility, nullptr, "GetProjectDir", nullptr, nullptr, sizeof(Utility_eventGetProjectDir_Parms), Z_Construct_UFunction_UUtility_GetProjectDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_GetProjectDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtility_GetProjectDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_GetProjectDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtility_GetProjectDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtility_GetProjectDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtility_SplitToFloat_Statics
	{
		struct Utility_eventSplitToFloat_Parms
		{
			FString Str;
			FString Delimiter;
			TArray<float> out;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_out_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delimiter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Delimiter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_out = { "out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToFloat_Parms, out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_out_Inner = { "out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Delimiter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Delimiter = { "Delimiter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToFloat_Parms, Delimiter), METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Delimiter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Delimiter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToFloat_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Str_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtility_SplitToFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Delimiter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToFloat_Statics::NewProp_Str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Utility" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtility_SplitToFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtility, nullptr, "SplitToFloat", nullptr, nullptr, sizeof(Utility_eventSplitToFloat_Parms), Z_Construct_UFunction_UUtility_SplitToFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtility_SplitToFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtility_SplitToFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtility_SplitToInt_Statics
	{
		struct Utility_eventSplitToInt_Parms
		{
			FString Str;
			FString Delimiter;
			TArray<int32> out;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_out_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delimiter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Delimiter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_out = { "out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToInt_Parms, out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_out_Inner = { "out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Delimiter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Delimiter = { "Delimiter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToInt_Parms, Delimiter), METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Delimiter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Delimiter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToInt_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Str_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtility_SplitToInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Delimiter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToInt_Statics::NewProp_Str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Utility" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtility_SplitToInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtility, nullptr, "SplitToInt", nullptr, nullptr, sizeof(Utility_eventSplitToInt_Parms), Z_Construct_UFunction_UUtility_SplitToInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtility_SplitToInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtility_SplitToInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUtility_SplitToStr_Statics
	{
		struct Utility_eventSplitToStr_Parms
		{
			FString Str;
			FString Delimiter;
			TArray<FString> out;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_out;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_out_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delimiter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Delimiter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_out = { "out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToStr_Parms, out), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_out_Inner = { "out", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Delimiter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Delimiter = { "Delimiter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToStr_Parms, Delimiter), METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Delimiter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Delimiter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Str = { "Str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Utility_eventSplitToStr_Parms, Str), METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Str_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUtility_SplitToStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_out_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Delimiter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUtility_SplitToStr_Statics::NewProp_Str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUtility_SplitToStr_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Utility" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUtility_SplitToStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUtility, nullptr, "SplitToStr", nullptr, nullptr, sizeof(Utility_eventSplitToStr_Parms), Z_Construct_UFunction_UUtility_SplitToStr_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUtility_SplitToStr_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUtility_SplitToStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUtility_SplitToStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUtility_SplitToStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUtility_NoRegister()
	{
		return UUtility::StaticClass();
	}
	struct Z_Construct_UClass_UUtility_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUtility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUtility_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUtility_CreateXmlDocument, "CreateXmlDocument" }, // 241621092
		{ &Z_Construct_UFunction_UUtility_GetProjectConfigDir, "GetProjectConfigDir" }, // 2763142637
		{ &Z_Construct_UFunction_UUtility_GetProjectContentDir, "GetProjectContentDir" }, // 1199832922
		{ &Z_Construct_UFunction_UUtility_GetProjectDir, "GetProjectDir" }, // 107317322
		{ &Z_Construct_UFunction_UUtility_SplitToFloat, "SplitToFloat" }, // 4037254120
		{ &Z_Construct_UFunction_UUtility_SplitToInt, "SplitToInt" }, // 1924973495
		{ &Z_Construct_UFunction_UUtility_SplitToStr, "SplitToStr" }, // 281892238
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUtility_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Utility.h" },
		{ "ModuleRelativePath", "Public/Utility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUtility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUtility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUtility_Statics::ClassParams = {
		&UUtility::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUtility_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUtility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUtility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUtility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUtility, 905883332);
	template<> UNREALTINYXML_API UClass* StaticClass<UUtility>()
	{
		return UUtility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUtility(Z_Construct_UClass_UUtility, &UUtility::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UUtility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUtility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
