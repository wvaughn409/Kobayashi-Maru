// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioExtensions/Public/ISoundfieldFormat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISoundfieldFormat() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEffectBase();
// End Cross Module References
	void USoundfieldEncodingSettingsBase::StaticRegisterNativesUSoundfieldEncodingSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase_NoRegister()
	{
		return USoundfieldEncodingSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n * This opaque class should be used for specifying settings for how audio should be encoded\n * to your soundfield format for a given submix or file.\n */" },
		{ "IncludePath", "ISoundfieldFormat.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be encoded\nto your soundfield format for a given submix or file." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEncodingSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::ClassParams = {
		&USoundfieldEncodingSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEncodingSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundfieldEncodingSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundfieldEncodingSettingsBase, 91743600);
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEncodingSettingsBase>()
	{
		return USoundfieldEncodingSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundfieldEncodingSettingsBase(Z_Construct_UClass_USoundfieldEncodingSettingsBase, &USoundfieldEncodingSettingsBase::StaticClass, TEXT("/Script/AudioExtensions"), TEXT("USoundfieldEncodingSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEncodingSettingsBase);
	void USoundfieldEffectSettingsBase::StaticRegisterNativesUSoundfieldEffectSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister()
	{
		return USoundfieldEffectSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ISoundfieldFormat.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEffectSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::ClassParams = {
		&USoundfieldEffectSettingsBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEffectSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundfieldEffectSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundfieldEffectSettingsBase, 1017821778);
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEffectSettingsBase>()
	{
		return USoundfieldEffectSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundfieldEffectSettingsBase(Z_Construct_UClass_USoundfieldEffectSettingsBase, &USoundfieldEffectSettingsBase::StaticClass, TEXT("/Script/AudioExtensions"), TEXT("USoundfieldEffectSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEffectSettingsBase);
	void USoundfieldEffectBase::StaticRegisterNativesUSoundfieldEffectBase()
	{
	}
	UClass* Z_Construct_UClass_USoundfieldEffectBase_NoRegister()
	{
		return USoundfieldEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be encoded\n * to your soundfield format for a given submix or file.\n */" },
		{ "IncludePath", "ISoundfieldFormat.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be encoded\nto your soundfield format for a given submix or file." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "EffectPreset" },
		{ "Comment", "/**\n\x09 * TODO: Filter classes settable on here by GetSettingsClass.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ISoundfieldFormat.h" },
		{ "ToolTip", "TODO: Filter classes settable on here by GetSettingsClass." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USoundfieldEffectBase, Settings), Z_Construct_UClass_USoundfieldEffectSettingsBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundfieldEffectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundfieldEffectBase_Statics::NewProp_Settings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEffectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEffectBase_Statics::ClassParams = {
		&USoundfieldEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USoundfieldEffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectBase_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEffectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundfieldEffectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundfieldEffectBase, 3591368139);
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEffectBase>()
	{
		return USoundfieldEffectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundfieldEffectBase(Z_Construct_UClass_USoundfieldEffectBase, &USoundfieldEffectBase::StaticClass, TEXT("/Script/AudioExtensions"), TEXT("USoundfieldEffectBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEffectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
