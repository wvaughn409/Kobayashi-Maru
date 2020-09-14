// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/XmlAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlAttribute() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlAttribute_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlAttribute();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
// End Cross Module References
	DEFINE_FUNCTION(UXmlAttribute::execSetFloatAttribute)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatAttribute(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execSetBoolAttribute)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolAttribute(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execSetIntAttribute)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntAttribute(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execSetAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttribute(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execFloatValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->FloatValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execBoolValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BoolValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execIntValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IntValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execGetLineNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLineNum();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Value();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlAttribute::execName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Name();
		P_NATIVE_END;
	}
	void UXmlAttribute::StaticRegisterNativesUXmlAttribute()
	{
		UClass* Class = UXmlAttribute::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoolValue", &UXmlAttribute::execBoolValue },
			{ "FloatValue", &UXmlAttribute::execFloatValue },
			{ "GetLineNum", &UXmlAttribute::execGetLineNum },
			{ "IntValue", &UXmlAttribute::execIntValue },
			{ "Name", &UXmlAttribute::execName },
			{ "SetAttribute", &UXmlAttribute::execSetAttribute },
			{ "SetBoolAttribute", &UXmlAttribute::execSetBoolAttribute },
			{ "SetFloatAttribute", &UXmlAttribute::execSetFloatAttribute },
			{ "SetIntAttribute", &UXmlAttribute::execSetIntAttribute },
			{ "Value", &UXmlAttribute::execValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics
	{
		struct XmlAttribute_eventBoolValue_Parms
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
	void Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlAttribute_eventBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlAttribute_eventBoolValue_Parms), &Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "// Query as a boolean. See IntValue()\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "Query as a boolean. See IntValue()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "BoolValue", nullptr, nullptr, sizeof(XmlAttribute_eventBoolValue_Parms), Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_BoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_BoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics
	{
		struct XmlAttribute_eventFloatValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "// Query as a float. See IntValue()\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "Query as a float. See IntValue()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "FloatValue", nullptr, nullptr, sizeof(XmlAttribute_eventFloatValue_Parms), Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_FloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_FloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics
	{
		struct XmlAttribute_eventGetLineNum_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventGetLineNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "//Gets the line number the attribute is in, if the document was parsed from a file.\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "Gets the line number the attribute is in, if the document was parsed from a file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "GetLineNum", nullptr, nullptr, sizeof(XmlAttribute_eventGetLineNum_Parms), Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_GetLineNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_GetLineNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_IntValue_Statics
	{
		struct XmlAttribute_eventIntValue_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventIntValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "/** IntValue interprets the attribute as an integer, and returns the value.\n\x09If the value isn't an integer, 0 will be returned. \n\x09*/" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "IntValue interprets the attribute as an integer, and returns the value.\n      If the value isn't an integer, 0 will be returned." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "IntValue", nullptr, nullptr, sizeof(XmlAttribute_eventIntValue_Parms), Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_IntValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_IntValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_Name_Statics
	{
		struct XmlAttribute_eventName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlAttribute_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_Name_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "//The name of the attribute.\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "The name of the attribute." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "Name", nullptr, nullptr, sizeof(XmlAttribute_eventName_Parms), Z_Construct_UFunction_UXmlAttribute_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics
	{
		struct XmlAttribute_eventSetAttribute_Parms
		{
			FString value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventSetAttribute_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "// Set the attribute to a string value.\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "Set the attribute to a string value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "SetAttribute", nullptr, nullptr, sizeof(XmlAttribute_eventSetAttribute_Parms), Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_SetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_SetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics
	{
		struct XmlAttribute_eventSetBoolAttribute_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::NewProp_value_SetBit(void* Obj)
	{
		((XmlAttribute_eventSetBoolAttribute_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlAttribute_eventSetBoolAttribute_Parms), &Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "// Set the attribute to a string value.\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "Set the attribute to a string value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "SetBoolAttribute", nullptr, nullptr, sizeof(XmlAttribute_eventSetBoolAttribute_Parms), Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics
	{
		struct XmlAttribute_eventSetFloatAttribute_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventSetFloatAttribute_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "// Set the attribute to a string value.\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "Set the attribute to a string value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "SetFloatAttribute", nullptr, nullptr, sizeof(XmlAttribute_eventSetFloatAttribute_Parms), Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics
	{
		struct XmlAttribute_eventSetIntAttribute_Parms
		{
			int32 value;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventSetIntAttribute_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "// Set the attribute to a string value.\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "Set the attribute to a string value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "SetIntAttribute", nullptr, nullptr, sizeof(XmlAttribute_eventSetIntAttribute_Parms), Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_SetIntAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_SetIntAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlAttribute_Value_Statics
	{
		struct XmlAttribute_eventValue_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlAttribute_Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlAttribute_eventValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlAttribute_Value_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlAttribute_Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlAttribute_Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Attribute" },
		{ "Comment", "//The value of the attribute.\n" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
		{ "ToolTip", "The value of the attribute." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlAttribute_Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlAttribute, nullptr, "Value", nullptr, nullptr, sizeof(XmlAttribute_eventValue_Parms), Z_Construct_UFunction_UXmlAttribute_Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlAttribute_Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlAttribute_Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlAttribute_Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlAttribute_Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXmlAttribute_NoRegister()
	{
		return UXmlAttribute::StaticClass();
	}
	struct Z_Construct_UClass_UXmlAttribute_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlAttribute_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXmlAttribute_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXmlAttribute_BoolValue, "BoolValue" }, // 22719892
		{ &Z_Construct_UFunction_UXmlAttribute_FloatValue, "FloatValue" }, // 2213132677
		{ &Z_Construct_UFunction_UXmlAttribute_GetLineNum, "GetLineNum" }, // 1792387632
		{ &Z_Construct_UFunction_UXmlAttribute_IntValue, "IntValue" }, // 4225615836
		{ &Z_Construct_UFunction_UXmlAttribute_Name, "Name" }, // 4051301384
		{ &Z_Construct_UFunction_UXmlAttribute_SetAttribute, "SetAttribute" }, // 2367822185
		{ &Z_Construct_UFunction_UXmlAttribute_SetBoolAttribute, "SetBoolAttribute" }, // 2049326427
		{ &Z_Construct_UFunction_UXmlAttribute_SetFloatAttribute, "SetFloatAttribute" }, // 1438802371
		{ &Z_Construct_UFunction_UXmlAttribute_SetIntAttribute, "SetIntAttribute" }, // 2991462585
		{ &Z_Construct_UFunction_UXmlAttribute_Value, "Value" }, // 1381472629
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlAttribute_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XmlAttribute.h" },
		{ "ModuleRelativePath", "Public/XmlAttribute.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlAttribute_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlAttribute>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlAttribute_Statics::ClassParams = {
		&UXmlAttribute::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXmlAttribute_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlAttribute_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlAttribute()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlAttribute_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlAttribute, 398461210);
	template<> UNREALTINYXML_API UClass* StaticClass<UXmlAttribute>()
	{
		return UXmlAttribute::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlAttribute(Z_Construct_UClass_UXmlAttribute, &UXmlAttribute::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UXmlAttribute"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlAttribute);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
