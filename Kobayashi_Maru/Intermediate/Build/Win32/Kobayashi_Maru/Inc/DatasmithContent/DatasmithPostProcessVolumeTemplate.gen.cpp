// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithPostProcessVolumeTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate();
// End Cross Module References
	void UDatasmithPostProcessVolumeTemplate::StaticRegisterNativesUDatasmithPostProcessVolumeTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_NoRegister()
	{
		return UDatasmithPostProcessVolumeTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUnbound_MetaData[];
#endif
		static void NewProp_bUnbound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUnbound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents an APostProcessVolume\n */" },
		{ "IncludePath", "ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
		{ "ToolTip", "Represents an APostProcessVolume" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_SetBit(void* Obj)
	{
		((UDatasmithPostProcessVolumeTemplate*)Obj)->bUnbound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound = { "bUnbound", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDatasmithPostProcessVolumeTemplate), &Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
#endif
	void Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((UDatasmithPostProcessVolumeTemplate*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UDatasmithPostProcessVolumeTemplate), &Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithPostProcessVolumeTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithPostProcessVolumeTemplate, Settings), Z_Construct_UScriptStruct_FDatasmithPostProcessSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bUnbound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithPostProcessVolumeTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::ClassParams = {
		&UDatasmithPostProcessVolumeTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithPostProcessVolumeTemplate, 1543664144);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithPostProcessVolumeTemplate>()
	{
		return UDatasmithPostProcessVolumeTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithPostProcessVolumeTemplate(Z_Construct_UClass_UDatasmithPostProcessVolumeTemplate, &UDatasmithPostProcessVolumeTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithPostProcessVolumeTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithPostProcessVolumeTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
