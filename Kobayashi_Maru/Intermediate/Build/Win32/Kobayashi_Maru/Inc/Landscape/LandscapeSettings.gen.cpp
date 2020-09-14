// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Public/LandscapeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeSettings() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSettings_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void ULandscapeSettings::StaticRegisterNativesULandscapeSettings()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeSettings_NoRegister()
	{
		return ULandscapeSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfLayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Landscape" },
		{ "IncludePath", "LandscapeSettings.h" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers_MetaData[] = {
		{ "Category", "Layers" },
		{ "ClampMax", "32" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/LandscapeSettings.h" },
		{ "ToolTip", "This option controls the maximum editing layers that can be added to a Landscape" },
		{ "UIMax", "32" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers = { "MaxNumberOfLayers", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeSettings, MaxNumberOfLayers), METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeSettings_Statics::NewProp_MaxNumberOfLayers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeSettings_Statics::ClassParams = {
		&ULandscapeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeSettings, 4231417613);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeSettings>()
	{
		return ULandscapeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeSettings(Z_Construct_UClass_ULandscapeSettings, &ULandscapeSettings::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
