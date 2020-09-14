// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBoneCompressionSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister();
// End Cross Module References
	void UAnimBoneCompressionSettings::StaticRegisterNativesUAnimBoneCompressionSettings()
	{
	}
	UClass* Z_Construct_UClass_UAnimBoneCompressionSettings_NoRegister()
	{
		return UAnimBoneCompressionSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBoneCompressionSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceBelowThreshold_MetaData[];
#endif
		static void NewProp_bForceBelowThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceBelowThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ErrorThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ErrorThreshold;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Codecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Codecs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Codecs_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Codecs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n * This object is used to wrap a bone compression codec. It allows a clean integration in the editor by avoiding the need\n * to create asset types and factory wrappers for every codec.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimBoneCompressionSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "ToolTip", "* This object is used to wrap a bone compression codec. It allows a clean integration in the editor by avoiding the need\n* to create asset types and factory wrappers for every codec." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** Any codec (even one that increases the size) with a lower error will be used until it falls below the threshold. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "ToolTip", "Any codec (even one that increases the size) with a lower error will be used until it falls below the threshold." },
	};
#endif
	void Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_SetBit(void* Obj)
	{
		((UAnimBoneCompressionSettings*)Obj)->bForceBelowThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold = { "bForceBelowThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimBoneCompressionSettings), &Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "ClampMin", "0" },
		{ "Comment", "/** When compressing, the best codec below this error threshold will be used. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "ToolTip", "When compressing, the best codec below this error threshold will be used." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold = { "ErrorThreshold", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionSettings, ErrorThreshold), METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs = { "Codecs", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimBoneCompressionSettings, Codecs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimBoneCompressionSettings.h" },
		{ "NoElementDuplicate", "" },
		{ "ToolTip", "A list of animation bone compression codecs to try. Empty entries are ignored but the array cannot be empty." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner = { "Codecs", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimBoneCompressionCodec_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_bForceBelowThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_ErrorThreshold,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::NewProp_Codecs_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBoneCompressionSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::ClassParams = {
		&UAnimBoneCompressionSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBoneCompressionSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimBoneCompressionSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimBoneCompressionSettings, 131592868);
	template<> ENGINE_API UClass* StaticClass<UAnimBoneCompressionSettings>()
	{
		return UAnimBoneCompressionSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimBoneCompressionSettings(Z_Construct_UClass_UAnimBoneCompressionSettings, &UAnimBoneCompressionSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimBoneCompressionSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBoneCompressionSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
