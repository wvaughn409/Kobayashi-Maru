// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/XmlElement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlElement() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlElement_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlElement();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlNode();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
// End Cross Module References
	DEFINE_FUNCTION(UXmlElement::execSetFloatText)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatText(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetBoolText)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolText(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetIntText)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntText(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_inText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetText(Z_Param_inText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execFloatText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->FloatText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execBoolText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BoolText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execIntText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IntText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execGetText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execDeleteAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeleteAttribute(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetFloatAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatAttribute(Z_Param_name,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetBoolAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolAttribute(Z_Param_name,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetIntAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntAttribute(Z_Param_name,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttribute(Z_Param_name,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execFloatAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->FloatAttribute(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execBoolAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BoolAttribute(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execIntAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IntAttribute(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Attribute(Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_str);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param_str);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlElement::execName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->Name();
		P_NATIVE_END;
	}
	void UXmlElement::StaticRegisterNativesUXmlElement()
	{
		UClass* Class = UXmlElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attribute", &UXmlElement::execAttribute },
			{ "BoolAttribute", &UXmlElement::execBoolAttribute },
			{ "BoolText", &UXmlElement::execBoolText },
			{ "DeleteAttribute", &UXmlElement::execDeleteAttribute },
			{ "FloatAttribute", &UXmlElement::execFloatAttribute },
			{ "FloatText", &UXmlElement::execFloatText },
			{ "GetText", &UXmlElement::execGetText },
			{ "IntAttribute", &UXmlElement::execIntAttribute },
			{ "IntText", &UXmlElement::execIntText },
			{ "Name", &UXmlElement::execName },
			{ "SetAttribute", &UXmlElement::execSetAttribute },
			{ "SetBoolAttribute", &UXmlElement::execSetBoolAttribute },
			{ "SetBoolText", &UXmlElement::execSetBoolText },
			{ "SetFloatAttribute", &UXmlElement::execSetFloatAttribute },
			{ "SetFloatText", &UXmlElement::execSetFloatText },
			{ "SetIntAttribute", &UXmlElement::execSetIntAttribute },
			{ "SetIntText", &UXmlElement::execSetIntText },
			{ "SetName", &UXmlElement::execSetName },
			{ "SetText", &UXmlElement::execSetText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXmlElement_Attribute_Statics
	{
		struct XmlElement_eventAttribute_Parms
		{
			FString name;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_Attribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_Attribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_Attribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_Attribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_Attribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_Attribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_Attribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_Attribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_Attribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Given an attribute name, Attribute() returns the value for the attribute of that name, or null if none exists.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Given an attribute name, Attribute() returns the value for the attribute of that name, or null if none exists." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_Attribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "Attribute", nullptr, nullptr, sizeof(XmlElement_eventAttribute_Parms), Z_Construct_UFunction_UXmlElement_Attribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_Attribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_Attribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_Attribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_Attribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_Attribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics
	{
		struct XmlElement_eventBoolAttribute_Parms
		{
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
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
	void Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlElement_eventBoolAttribute_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlElement_eventBoolAttribute_Parms), &Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventBoolAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//See IntAttribute.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "See IntAttribute." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "BoolAttribute", nullptr, nullptr, sizeof(XmlElement_eventBoolAttribute_Parms), Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_BoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_BoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_BoolText_Statics
	{
		struct XmlElement_eventBoolText_Parms
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
	void Z_Construct_UFunction_UXmlElement_BoolText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlElement_eventBoolText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlElement_BoolText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlElement_eventBoolText_Parms), &Z_Construct_UFunction_UXmlElement_BoolText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_BoolText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_BoolText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_BoolText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Convenience function for easy getting to the text inside an element as Bool.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Convenience function for easy getting to the text inside an element as Bool." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_BoolText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "BoolText", nullptr, nullptr, sizeof(XmlElement_eventBoolText_Parms), Z_Construct_UFunction_UXmlElement_BoolText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_BoolText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_BoolText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_BoolText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_BoolText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_BoolText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics
	{
		struct XmlElement_eventDeleteAttribute_Parms
		{
			FString name;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventDeleteAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Delete an attribute.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Delete an attribute." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "DeleteAttribute", nullptr, nullptr, sizeof(XmlElement_eventDeleteAttribute_Parms), Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_DeleteAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_DeleteAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics
	{
		struct XmlElement_eventFloatAttribute_Parms
		{
			FString name;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventFloatAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventFloatAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//See IntAttribute.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "See IntAttribute." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "FloatAttribute", nullptr, nullptr, sizeof(XmlElement_eventFloatAttribute_Parms), Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_FloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_FloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_FloatText_Statics
	{
		struct XmlElement_eventFloatText_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXmlElement_FloatText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventFloatText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_FloatText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_FloatText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_FloatText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Convenience function for easy getting to the text inside an element as Float.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Convenience function for easy getting to the text inside an element as Float." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_FloatText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "FloatText", nullptr, nullptr, sizeof(XmlElement_eventFloatText_Parms), Z_Construct_UFunction_UXmlElement_FloatText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_FloatText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_FloatText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_FloatText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_FloatText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_FloatText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_GetText_Statics
	{
		struct XmlElement_eventGetText_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_GetText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventGetText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_GetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_GetText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_GetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Convenience function for easy getting to the text inside an element.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Convenience function for easy getting to the text inside an element." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_GetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "GetText", nullptr, nullptr, sizeof(XmlElement_eventGetText_Parms), Z_Construct_UFunction_UXmlElement_GetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_GetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_GetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_GetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_GetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_GetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_IntAttribute_Statics
	{
		struct XmlElement_eventIntAttribute_Parms
		{
			FString name;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventIntAttribute_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventIntAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Given an attribute name,returns the value of the attribute interpreted as an integer.The 0 will be returned if the attribute isn't present, or if there is an error.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Given an attribute name,returns the value of the attribute interpreted as an integer.The 0 will be returned if the attribute isn't present, or if there is an error." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "IntAttribute", nullptr, nullptr, sizeof(XmlElement_eventIntAttribute_Parms), Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_IntAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_IntAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_IntText_Statics
	{
		struct XmlElement_eventIntText_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlElement_IntText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventIntText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_IntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_IntText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_IntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Convenience function for easy getting to the text inside an element as Int.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Convenience function for easy getting to the text inside an element as Int." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_IntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "IntText", nullptr, nullptr, sizeof(XmlElement_eventIntText_Parms), Z_Construct_UFunction_UXmlElement_IntText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_IntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_IntText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_IntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_IntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_IntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_Name_Statics
	{
		struct XmlElement_eventName_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_Name_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_Name_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_Name_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_Name_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Get the name of an element (which is the Value() of the node.)\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Get the name of an element (which is the Value() of the node.)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_Name_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "Name", nullptr, nullptr, sizeof(XmlElement_eventName_Parms), Z_Construct_UFunction_UXmlElement_Name_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_Name_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_Name_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_Name_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_Name()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_Name_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetAttribute_Statics
	{
		struct XmlElement_eventSetAttribute_Parms
		{
			FString name;
			FString value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetAttribute_Parms, value), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Sets the named attribute to string value.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Sets the named attribute to string value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetAttribute", nullptr, nullptr, sizeof(XmlElement_eventSetAttribute_Parms), Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics
	{
		struct XmlElement_eventSetBoolAttribute_Parms
		{
			FString name;
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
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
	void Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_value_SetBit(void* Obj)
	{
		((XmlElement_eventSetBoolAttribute_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlElement_eventSetBoolAttribute_Parms), &Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetBoolAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Sets the named attribute to bool value.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Sets the named attribute to bool value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetBoolAttribute", nullptr, nullptr, sizeof(XmlElement_eventSetBoolAttribute_Parms), Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetBoolAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetBoolAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetBoolText_Statics
	{
		struct XmlElement_eventSetBoolText_Parms
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
	void Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::NewProp_value_SetBit(void* Obj)
	{
		((XmlElement_eventSetBoolText_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlElement_eventSetBoolText_Parms), &Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//See SetText.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "See SetText." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetBoolText", nullptr, nullptr, sizeof(XmlElement_eventSetBoolText_Parms), Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetBoolText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetBoolText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics
	{
		struct XmlElement_eventSetFloatAttribute_Parms
		{
			FString name;
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetFloatAttribute_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetFloatAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Sets the named attribute to float value.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Sets the named attribute to float value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetFloatAttribute", nullptr, nullptr, sizeof(XmlElement_eventSetFloatAttribute_Parms), Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetFloatAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetFloatAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetFloatText_Statics
	{
		struct XmlElement_eventSetFloatText_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetFloatText_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//See SetText.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "See SetText." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetFloatText", nullptr, nullptr, sizeof(XmlElement_eventSetFloatText_Parms), Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetFloatText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetFloatText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics
	{
		struct XmlElement_eventSetIntAttribute_Parms
		{
			FString name;
			int32 value;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_value;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetIntAttribute_Parms, value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetIntAttribute_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Sets the named attribute to int value.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Sets the named attribute to int value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetIntAttribute", nullptr, nullptr, sizeof(XmlElement_eventSetIntAttribute_Parms), Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetIntAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetIntAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetIntText_Statics
	{
		struct XmlElement_eventSetIntText_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlElement_SetIntText_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetIntText_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetIntText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetIntText_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetIntText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//See SetText.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "See SetText." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetIntText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetIntText", nullptr, nullptr, sizeof(XmlElement_eventSetIntText_Parms), Z_Construct_UFunction_UXmlElement_SetIntText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetIntText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetIntText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetIntText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetIntText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetIntText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetName_Statics
	{
		struct XmlElement_eventSetName_Parms
		{
			FString str;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_str_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_str;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetName_Statics::NewProp_str_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_SetName_Statics::NewProp_str = { "str", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetName_Parms, str), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetName_Statics::NewProp_str_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetName_Statics::NewProp_str_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetName_Statics::NewProp_str,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Set the name of the element.\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Set the name of the element." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetName", nullptr, nullptr, sizeof(XmlElement_eventSetName_Parms), Z_Construct_UFunction_UXmlElement_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlElement_SetText_Statics
	{
		struct XmlElement_eventSetText_Parms
		{
			FString inText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_inText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetText_Statics::NewProp_inText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlElement_SetText_Statics::NewProp_inText = { "inText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlElement_eventSetText_Parms, inText), METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetText_Statics::NewProp_inText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetText_Statics::NewProp_inText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlElement_SetText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlElement_SetText_Statics::NewProp_inText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlElement_SetText_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|Element" },
		{ "Comment", "//Convenience function for easy setting to the text inside an element\n" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
		{ "ToolTip", "Convenience function for easy setting to the text inside an element" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlElement_SetText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlElement, nullptr, "SetText", nullptr, nullptr, sizeof(XmlElement_eventSetText_Parms), Z_Construct_UFunction_UXmlElement_SetText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlElement_SetText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlElement_SetText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlElement_SetText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlElement_SetText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXmlElement_NoRegister()
	{
		return UXmlElement::StaticClass();
	}
	struct Z_Construct_UClass_UXmlElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UXmlNode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXmlElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXmlElement_Attribute, "Attribute" }, // 486281454
		{ &Z_Construct_UFunction_UXmlElement_BoolAttribute, "BoolAttribute" }, // 2214583068
		{ &Z_Construct_UFunction_UXmlElement_BoolText, "BoolText" }, // 2821812892
		{ &Z_Construct_UFunction_UXmlElement_DeleteAttribute, "DeleteAttribute" }, // 2064875091
		{ &Z_Construct_UFunction_UXmlElement_FloatAttribute, "FloatAttribute" }, // 2231201942
		{ &Z_Construct_UFunction_UXmlElement_FloatText, "FloatText" }, // 1209261987
		{ &Z_Construct_UFunction_UXmlElement_GetText, "GetText" }, // 3776318161
		{ &Z_Construct_UFunction_UXmlElement_IntAttribute, "IntAttribute" }, // 2355797970
		{ &Z_Construct_UFunction_UXmlElement_IntText, "IntText" }, // 1202874723
		{ &Z_Construct_UFunction_UXmlElement_Name, "Name" }, // 1079197292
		{ &Z_Construct_UFunction_UXmlElement_SetAttribute, "SetAttribute" }, // 3183936776
		{ &Z_Construct_UFunction_UXmlElement_SetBoolAttribute, "SetBoolAttribute" }, // 561242284
		{ &Z_Construct_UFunction_UXmlElement_SetBoolText, "SetBoolText" }, // 3415293033
		{ &Z_Construct_UFunction_UXmlElement_SetFloatAttribute, "SetFloatAttribute" }, // 1509537252
		{ &Z_Construct_UFunction_UXmlElement_SetFloatText, "SetFloatText" }, // 2772621572
		{ &Z_Construct_UFunction_UXmlElement_SetIntAttribute, "SetIntAttribute" }, // 1617519973
		{ &Z_Construct_UFunction_UXmlElement_SetIntText, "SetIntText" }, // 176435034
		{ &Z_Construct_UFunction_UXmlElement_SetName, "SetName" }, // 866555843
		{ &Z_Construct_UFunction_UXmlElement_SetText, "SetText" }, // 3636062664
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlElement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "XmlElement.h" },
		{ "ModuleRelativePath", "Public/XmlElement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlElement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlElement_Statics::ClassParams = {
		&UXmlElement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXmlElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlElement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlElement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlElement, 4102335580);
	template<> UNREALTINYXML_API UClass* StaticClass<UXmlElement>()
	{
		return UXmlElement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlElement(Z_Construct_UClass_UXmlElement, &UXmlElement::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UXmlElement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlElement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
