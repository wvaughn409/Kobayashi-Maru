// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaAssets/Public/MediaSource.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaSource() {}
// Cross Module References
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSource();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionString)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_PROPERTY(FStrProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionString(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionInt64)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_PROPERTY(FInt64Property,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionInt64(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionFloat)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionFloat(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execSetMediaOptionBool)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Key);
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMediaOptionBool(Z_Param_Out_Key,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execValidate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Validate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaSource::execGetUrl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetUrl();
		P_NATIVE_END;
	}
	void UMediaSource::StaticRegisterNativesUMediaSource()
	{
		UClass* Class = UMediaSource::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUrl", &UMediaSource::execGetUrl },
			{ "SetMediaOptionBool", &UMediaSource::execSetMediaOptionBool },
			{ "SetMediaOptionFloat", &UMediaSource::execSetMediaOptionFloat },
			{ "SetMediaOptionInt64", &UMediaSource::execSetMediaOptionInt64 },
			{ "SetMediaOptionString", &UMediaSource::execSetMediaOptionString },
			{ "Validate", &UMediaSource::execValidate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaSource_GetUrl_Statics
	{
		struct MediaSource_eventGetUrl_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventGetUrl_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_GetUrl_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/**\n\x09 * Get the media source's URL string (must be implemented in child classes).\n\x09 *\n\x09 * @return The media URL.\n\x09 * @see GetProxies\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Get the media source's URL string (must be implemented in child classes).\n\n@return The media URL.\n@see GetProxies" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "GetUrl", nullptr, nullptr, sizeof(MediaSource_eventGetUrl_Parms), Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_GetUrl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_GetUrl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_GetUrl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics
	{
		struct MediaSource_eventSetMediaOptionBool_Parms
		{
			FName Key;
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((MediaSource_eventSetMediaOptionBool_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaSource_eventSetMediaOptionBool_Parms), &Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionBool_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a boolean parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (boolean)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a boolean parameter to pass to the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionBool", nullptr, nullptr, sizeof(MediaSource_eventSetMediaOptionBool_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics
	{
		struct MediaSource_eventSetMediaOptionFloat_Parms
		{
			FName Key;
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionFloat_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionFloat_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a float parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (float)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a float parameter to pass to the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionFloat", nullptr, nullptr, sizeof(MediaSource_eventSetMediaOptionFloat_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics
	{
		struct MediaSource_eventSetMediaOptionInt64_Parms
		{
			FName Key;
			int64 Value;
		};
		static const UE4CodeGen_Private::FInt64PropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionInt64_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionInt64_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set an integer64 parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (integer64)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set an integer64 parameter to pass to the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionInt64", nullptr, nullptr, sizeof(MediaSource_eventSetMediaOptionInt64_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics
	{
		struct MediaSource_eventSetMediaOptionString_Parms
		{
			FName Key;
			FString Value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionString_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MediaSource_eventSetMediaOptionString_Parms, Key), METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/** Set a string parameter to pass to the player. */" },
		{ "DisplayName", "SetMediaOption (string)" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Set a string parameter to pass to the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "SetMediaOptionString", nullptr, nullptr, sizeof(MediaSource_eventSetMediaOptionString_Parms), Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_SetMediaOptionString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_SetMediaOptionString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaSource_Validate_Statics
	{
		struct MediaSource_eventValidate_Parms
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
	void Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MediaSource_eventValidate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MediaSource_eventValidate_Parms), &Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaSource_Validate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media|MediaSource" },
		{ "Comment", "/**\n\x09 * Validate the media source settings (must be implemented in child classes).\n\x09 *\n\x09 * @return true if validation passed, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Validate the media source settings (must be implemented in child classes).\n\n@return true if validation passed, false otherwise." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaSource, nullptr, "Validate", nullptr, nullptr, sizeof(MediaSource_eventValidate_Parms), Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaSource_Validate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaSource_Validate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMediaSource_Validate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMediaSource_NoRegister()
	{
		return UMediaSource::StaticClass();
	}
	struct Z_Construct_UClass_UMediaSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaSource_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaSource_GetUrl, "GetUrl" }, // 2272039718
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionBool, "SetMediaOptionBool" }, // 4087527013
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionFloat, "SetMediaOptionFloat" }, // 487587488
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionInt64, "SetMediaOptionInt64" }, // 464219938
		{ &Z_Construct_UFunction_UMediaSource_SetMediaOptionString, "SetMediaOptionString" }, // 3886525793
		{ &Z_Construct_UFunction_UMediaSource_Validate, "Validate" }, // 482393198
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract base class for media sources.\n *\n * Media sources describe the location and/or settings of media objects that can\n * be played in a media player, such as a video file on disk, a video stream on\n * the internet, or a web cam attached to or built into the target device. The\n * location is encoded as a media URL string, whose URI scheme and optional file\n * extension will be used to locate a suitable media player.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "MediaSource.h" },
		{ "ModuleRelativePath", "Public/MediaSource.h" },
		{ "ToolTip", "Abstract base class for media sources.\n\nMedia sources describe the location and/or settings of media objects that can\nbe played in a media player, such as a video file on disk, a video stream on\nthe internet, or a web cam attached to or built into the target device. The\nlocation is encoded as a media URL string, whose URI scheme and optional file\nextension will be used to locate a suitable media player." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaSource>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMediaSource_Statics::ClassParams = {
		&UMediaSource::StaticClass,
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
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaSource()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMediaSource_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMediaSource, 3715432451);
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaSource>()
	{
		return UMediaSource::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMediaSource(Z_Construct_UClass_UMediaSource, &UMediaSource::StaticClass, TEXT("/Script/MediaAssets"), TEXT("UMediaSource"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaSource);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
