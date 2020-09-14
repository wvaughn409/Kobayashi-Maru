// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudioExtensions/Public/ISoundfieldEndpoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISoundfieldEndpoint() {}
// Cross Module References
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister();
	AUDIOEXTENSIONS_API UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AudioExtensions();
// End Cross Module References
	void USoundfieldEndpointSettingsBase::StaticRegisterNativesUSoundfieldEndpointSettingsBase()
	{
	}
	UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase_NoRegister()
	{
		return USoundfieldEndpointSettingsBase::StaticClass();
	}
	struct Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AudioExtensions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This opaque class should be used for specifying settings for how audio should be\n * send to an external endpoint.\n */" },
		{ "IncludePath", "ISoundfieldEndpoint.h" },
		{ "ModuleRelativePath", "Public/ISoundfieldEndpoint.h" },
		{ "ToolTip", "This opaque class should be used for specifying settings for how audio should be\nsend to an external endpoint." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundfieldEndpointSettingsBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::ClassParams = {
		&USoundfieldEndpointSettingsBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundfieldEndpointSettingsBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundfieldEndpointSettingsBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundfieldEndpointSettingsBase, 4285985889);
	template<> AUDIOEXTENSIONS_API UClass* StaticClass<USoundfieldEndpointSettingsBase>()
	{
		return USoundfieldEndpointSettingsBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundfieldEndpointSettingsBase(Z_Construct_UClass_USoundfieldEndpointSettingsBase, &USoundfieldEndpointSettingsBase::StaticClass, TEXT("/Script/AudioExtensions"), TEXT("USoundfieldEndpointSettingsBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundfieldEndpointSettingsBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
