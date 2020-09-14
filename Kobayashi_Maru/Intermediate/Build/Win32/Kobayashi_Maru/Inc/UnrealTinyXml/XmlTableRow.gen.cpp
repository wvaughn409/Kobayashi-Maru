// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealTinyXml/Public/XmlTableRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeXmlTableRow() {}
// Cross Module References
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlTableRow_NoRegister();
	UNREALTINYXML_API UClass* Z_Construct_UClass_UXmlTableRow();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealTinyXml();
// End Cross Module References
	DEFINE_FUNCTION(UXmlTableRow::execStrField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutStr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StrField(Z_Param_name,Z_Param_Out_OutStr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlTableRow::execFloatField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutFloat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FloatField(Z_Param_name,Z_Param_Out_OutFloat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlTableRow::execIntField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutInt);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IntField(Z_Param_name,Z_Param_Out_OutInt);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlTableRow::execBoolField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL_REF(Z_Param_Out_OutBool);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BoolField(Z_Param_name,Z_Param_Out_OutBool);
		P_NATIVE_END;
	}
	void UXmlTableRow::StaticRegisterNativesUXmlTableRow()
	{
		UClass* Class = UXmlTableRow::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BoolField", &UXmlTableRow::execBoolField },
			{ "FloatField", &UXmlTableRow::execFloatField },
			{ "IntField", &UXmlTableRow::execIntField },
			{ "StrField", &UXmlTableRow::execStrField },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXmlTableRow_BoolField_Statics
	{
		struct XmlTableRow_eventBoolField_Parms
		{
			FString name;
			bool OutBool;
		};
		static void NewProp_OutBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OutBool;
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
	void Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_OutBool_SetBit(void* Obj)
	{
		((XmlTableRow_eventBoolField_Parms*)Obj)->OutBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_OutBool = { "OutBool", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(XmlTableRow_eventBoolField_Parms), &Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_OutBool_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlTableRow_eventBoolField_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_OutBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlTable" },
		{ "ModuleRelativePath", "Public/XmlTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlTableRow, nullptr, "BoolField", nullptr, nullptr, sizeof(XmlTableRow_eventBoolField_Parms), Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlTableRow_BoolField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlTableRow_BoolField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlTableRow_FloatField_Statics
	{
		struct XmlTableRow_eventFloatField_Parms
		{
			FString name;
			float OutFloat;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OutFloat;
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::NewProp_OutFloat = { "OutFloat", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlTableRow_eventFloatField_Parms, OutFloat), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlTableRow_eventFloatField_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::NewProp_OutFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlTable" },
		{ "ModuleRelativePath", "Public/XmlTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlTableRow, nullptr, "FloatField", nullptr, nullptr, sizeof(XmlTableRow_eventFloatField_Parms), Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlTableRow_FloatField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlTableRow_FloatField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlTableRow_IntField_Statics
	{
		struct XmlTableRow_eventIntField_Parms
		{
			FString name;
			int32 OutInt;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OutInt;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UXmlTableRow_IntField_Statics::NewProp_OutInt = { "OutInt", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlTableRow_eventIntField_Parms, OutInt), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_IntField_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlTableRow_IntField_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlTableRow_eventIntField_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_IntField_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_IntField_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlTableRow_IntField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_IntField_Statics::NewProp_OutInt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_IntField_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_IntField_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlTable" },
		{ "ModuleRelativePath", "Public/XmlTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlTableRow_IntField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlTableRow, nullptr, "IntField", nullptr, nullptr, sizeof(XmlTableRow_eventIntField_Parms), Z_Construct_UFunction_UXmlTableRow_IntField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_IntField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_IntField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_IntField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlTableRow_IntField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlTableRow_IntField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlTableRow_StrField_Statics
	{
		struct XmlTableRow_eventStrField_Parms
		{
			FString name;
			FString OutStr;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutStr;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlTableRow_StrField_Statics::NewProp_OutStr = { "OutStr", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlTableRow_eventStrField_Parms, OutStr), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_StrField_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlTableRow_StrField_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(XmlTableRow_eventStrField_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_StrField_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_StrField_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlTableRow_StrField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_StrField_Statics::NewProp_OutStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlTableRow_StrField_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlTableRow_StrField_Statics::Function_MetaDataParams[] = {
		{ "Category", "UnrealTinyXml|XmlTable" },
		{ "ModuleRelativePath", "Public/XmlTableRow.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlTableRow_StrField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlTableRow, nullptr, "StrField", nullptr, nullptr, sizeof(XmlTableRow_eventStrField_Parms), Z_Construct_UFunction_UXmlTableRow_StrField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_StrField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UXmlTableRow_StrField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlTableRow_StrField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UXmlTableRow_StrField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UXmlTableRow_StrField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UXmlTableRow_NoRegister()
	{
		return UXmlTableRow::StaticClass();
	}
	struct Z_Construct_UClass_UXmlTableRow_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlTableRow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealTinyXml,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UXmlTableRow_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXmlTableRow_BoolField, "BoolField" }, // 1504742942
		{ &Z_Construct_UFunction_UXmlTableRow_FloatField, "FloatField" }, // 704458401
		{ &Z_Construct_UFunction_UXmlTableRow_IntField, "IntField" }, // 277089105
		{ &Z_Construct_UFunction_UXmlTableRow_StrField, "StrField" }, // 4199048401
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlTableRow_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "XmlTableRow.h" },
		{ "ModuleRelativePath", "Public/XmlTableRow.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlTableRow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlTableRow>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UXmlTableRow_Statics::ClassParams = {
		&UXmlTableRow::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UXmlTableRow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UXmlTableRow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UXmlTableRow()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UXmlTableRow_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UXmlTableRow, 4204384775);
	template<> UNREALTINYXML_API UClass* StaticClass<UXmlTableRow>()
	{
		return UXmlTableRow::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UXmlTableRow(Z_Construct_UClass_UXmlTableRow, &UXmlTableRow::StaticClass, TEXT("/Script/UnrealTinyXml"), TEXT("UXmlTableRow"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlTableRow);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
