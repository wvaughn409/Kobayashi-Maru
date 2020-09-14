// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AvfMediaFactory/Public/AvfMediaSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvfMediaSettings() {}
// Cross Module References
	AVFMEDIAFACTORY_API UClass* Z_Construct_UClass_UAvfMediaSettings_NoRegister();
	AVFMEDIAFACTORY_API UClass* Z_Construct_UClass_UAvfMediaSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AvfMediaFactory();
// End Cross Module References
	void UAvfMediaSettings::StaticRegisterNativesUAvfMediaSettings()
	{
	}
	UClass* Z_Construct_UClass_UAvfMediaSettings_NoRegister()
	{
		return UAvfMediaSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAvfMediaSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NativeAudioOut_MetaData[];
#endif
		static void NewProp_NativeAudioOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NativeAudioOut;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvfMediaSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AvfMediaFactory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the AvfMedia plug-in.\n */" },
		{ "IncludePath", "AvfMediaSettings.h" },
		{ "ModuleRelativePath", "Public/AvfMediaSettings.h" },
		{ "ToolTip", "Settings for the AvfMedia plug-in." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Play audio tracks via the operating system's native sound mixer. */" },
		{ "ModuleRelativePath", "Public/AvfMediaSettings.h" },
		{ "ToolTip", "Play audio tracks via the operating system's native sound mixer." },
	};
#endif
	void Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit(void* Obj)
	{
		((UAvfMediaSettings*)Obj)->NativeAudioOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut = { "NativeAudioOut", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAvfMediaSettings), &Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvfMediaSettings_Statics::NewProp_NativeAudioOut,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvfMediaSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvfMediaSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvfMediaSettings_Statics::ClassParams = {
		&UAvfMediaSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvfMediaSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvfMediaSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvfMediaSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvfMediaSettings, 135183639);
	template<> AVFMEDIAFACTORY_API UClass* StaticClass<UAvfMediaSettings>()
	{
		return UAvfMediaSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvfMediaSettings(Z_Construct_UClass_UAvfMediaSettings, &UAvfMediaSettings::StaticClass, TEXT("/Script/AvfMediaFactory"), TEXT("UAvfMediaSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvfMediaSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
