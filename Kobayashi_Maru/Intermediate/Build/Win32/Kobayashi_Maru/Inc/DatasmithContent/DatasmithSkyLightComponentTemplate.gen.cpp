// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithSkyLightComponentTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyLightSourceType();
// End Cross Module References
	void UDatasmithSkyLightComponentTemplate::StaticRegisterNativesUDatasmithSkyLightComponentTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_NoRegister()
	{
		return UDatasmithSkyLightComponentTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubemapResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CubemapResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SourceType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap = { "Cubemap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, Cubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution = { "CubemapResolution", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, CubemapResolution), METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithSkyLightComponentTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType = { "SourceType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithSkyLightComponentTemplate, SourceType), Z_Construct_UEnum_Engine_ESkyLightSourceType, METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_Cubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_CubemapResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::NewProp_SourceType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithSkyLightComponentTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::ClassParams = {
		&UDatasmithSkyLightComponentTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithSkyLightComponentTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithSkyLightComponentTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithSkyLightComponentTemplate, 3466963214);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithSkyLightComponentTemplate>()
	{
		return UDatasmithSkyLightComponentTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithSkyLightComponentTemplate(Z_Construct_UClass_UDatasmithSkyLightComponentTemplate, &UDatasmithSkyLightComponentTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithSkyLightComponentTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithSkyLightComponentTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
