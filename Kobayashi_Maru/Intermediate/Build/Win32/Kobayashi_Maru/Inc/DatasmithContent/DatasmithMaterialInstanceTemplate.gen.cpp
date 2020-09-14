// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithMaterialInstanceTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FDatasmithStaticParameterSetTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithStaticParameterSetTemplate"), sizeof(FDatasmithStaticParameterSetTemplate), Get_Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithStaticParameterSetTemplate>()
{
	return FDatasmithStaticParameterSetTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithStaticParameterSetTemplate(FDatasmithStaticParameterSetTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithStaticParameterSetTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticParameterSetTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticParameterSetTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithStaticParameterSetTemplate")),new UScriptStruct::TCppStructOps<FDatasmithStaticParameterSetTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithStaticParameterSetTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StaticSwitchParameters;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StaticSwitchParameters_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StaticSwitchParameters_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithStaticParameterSetTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters = { "StaticSwitchParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithStaticParameterSetTemplate, StaticSwitchParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_Key_KeyProp = { "StaticSwitchParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_ValueProp = { "StaticSwitchParameters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::NewProp_StaticSwitchParameters_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithStaticParameterSetTemplate",
		sizeof(FDatasmithStaticParameterSetTemplate),
		alignof(FDatasmithStaticParameterSetTemplate),
		Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithStaticParameterSetTemplate"), sizeof(FDatasmithStaticParameterSetTemplate), Get_Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate_Hash() { return 1410577124U; }
	void UDatasmithMaterialInstanceTemplate::StaticRegisterNativesUDatasmithMaterialInstanceTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_NoRegister()
	{
		return UDatasmithMaterialInstanceTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticParameters_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_TextureParameterValues;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureParameterValues_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_TextureParameterValues_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VectorParameterValues;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VectorParameterValues_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ScalarParameterValues;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ScalarParameterValues_Key_KeyProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalarParameterValues_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParentMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Applies material instance data to a material instance if it hasn't changed since the last time we've applied a template.\n * Supports Scalar parameters, Vector parameters, Texture parameters and Static parameters\n */" },
		{ "IncludePath", "ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
		{ "ToolTip", "Applies material instance data to a material instance if it hasn't changed since the last time we've applied a template.\nSupports Scalar parameters, Vector parameters, Texture parameters and Static parameters" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_StaticParameters_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_StaticParameters = { "StaticParameters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, StaticParameters), Z_Construct_UScriptStruct_FDatasmithStaticParameterSetTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_StaticParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_StaticParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, TextureParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_Key_KeyProp = { "TextureParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_ValueProp = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, VectorParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_Key_KeyProp = { "VectorParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_ValueProp = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, ScalarParameterValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_Key_KeyProp = { "ScalarParameterValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_ValueProp = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ParentMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithMaterialInstanceTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ParentMaterial = { "ParentMaterial", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithMaterialInstanceTemplate, ParentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ParentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ParentMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_StaticParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_TextureParameterValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_VectorParameterValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ScalarParameterValues_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::NewProp_ParentMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithMaterialInstanceTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::ClassParams = {
		&UDatasmithMaterialInstanceTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithMaterialInstanceTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithMaterialInstanceTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithMaterialInstanceTemplate, 1393210423);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithMaterialInstanceTemplate>()
	{
		return UDatasmithMaterialInstanceTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithMaterialInstanceTemplate(Z_Construct_UClass_UDatasmithMaterialInstanceTemplate, &UDatasmithMaterialInstanceTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithMaterialInstanceTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithMaterialInstanceTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
