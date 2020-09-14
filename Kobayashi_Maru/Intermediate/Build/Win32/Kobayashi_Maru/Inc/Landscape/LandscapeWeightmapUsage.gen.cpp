// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeWeightmapUsage.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeWeightmapUsage() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeWeightmapUsage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
// End Cross Module References
	void ULandscapeWeightmapUsage::StaticRegisterNativesULandscapeWeightmapUsage()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeWeightmapUsage_NoRegister()
	{
		return ULandscapeWeightmapUsage::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeWeightmapUsage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChannelUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChannelUsage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeWeightmapUsage.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid = { "LayerGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeWeightmapUsage, LayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/LandscapeWeightmapUsage.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage = { "ChannelUsage", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(ChannelUsage, ULandscapeWeightmapUsage), STRUCT_OFFSET(ULandscapeWeightmapUsage, ChannelUsage), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_LayerGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::NewProp_ChannelUsage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeWeightmapUsage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::ClassParams = {
		&ULandscapeWeightmapUsage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeWeightmapUsage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeWeightmapUsage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeWeightmapUsage, 2239084815);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeWeightmapUsage>()
	{
		return ULandscapeWeightmapUsage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeWeightmapUsage(Z_Construct_UClass_ULandscapeWeightmapUsage, &ULandscapeWeightmapUsage::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeWeightmapUsage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeWeightmapUsage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
