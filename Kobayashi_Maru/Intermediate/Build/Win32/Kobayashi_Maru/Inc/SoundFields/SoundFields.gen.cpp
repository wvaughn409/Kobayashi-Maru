// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundFields/Public/SoundFields.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundFields() {}
// Cross Module References
	SOUNDFIELDS_API UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister();
	SOUNDFIELDS_API UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	UPackage* Z_Construct_UPackage__Script_SoundFields();
// End Cross Module References
	void UAmbisonicsEncodingSettings::StaticRegisterNativesUAmbisonicsEncodingSettings()
	{
	}
	UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings_NoRegister()
	{
		return UAmbisonicsEncodingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbisonicsOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmbisonicsOrder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundfieldEncodingSettingsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundFields,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SoundFields.h" },
		{ "ModuleRelativePath", "Public/SoundFields.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder_MetaData[] = {
		{ "Category", "EncodingSettings" },
		{ "ClampMax", "5" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SoundFields.h" },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder = { "AmbisonicsOrder", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAmbisonicsEncodingSettings, AmbisonicsOrder), METADATA_PARAMS(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::NewProp_AmbisonicsOrder,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAmbisonicsEncodingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::ClassParams = {
		&UAmbisonicsEncodingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAmbisonicsEncodingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAmbisonicsEncodingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAmbisonicsEncodingSettings, 4224840016);
	template<> SOUNDFIELDS_API UClass* StaticClass<UAmbisonicsEncodingSettings>()
	{
		return UAmbisonicsEncodingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAmbisonicsEncodingSettings(Z_Construct_UClass_UAmbisonicsEncodingSettings, &UAmbisonicsEncodingSettings::StaticClass, TEXT("/Script/SoundFields"), TEXT("UAmbisonicsEncodingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAmbisonicsEncodingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
