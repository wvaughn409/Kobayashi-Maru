// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Animation/AnimationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSettings() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UAnimationSettings::StaticRegisterNativesUAnimationSettings()
	{
	}
	UClass* Z_Construct_UClass_UAnimationSettings_NoRegister()
	{
		return UAnimationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickAnimationOnSkeletalMeshInit_MetaData[];
#endif
		static void NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickAnimationOnSkeletalMeshInit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStripAnimationDataOnDedicatedServer_MetaData[];
#endif
		static void NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStripAnimationDataOnDedicatedServer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePerformanceLog_MetaData[];
#endif
		static void NewProp_bEnablePerformanceLog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePerformanceLog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRaiseMaxErrorToExisting_MetaData[];
#endif
		static void NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRaiseMaxErrorToExisting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[];
#endif
		static void NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstRecompressUsingCurrentOrDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceBelowThreshold_MetaData[];
#endif
		static void NewProp_bForceBelowThreshold_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceBelowThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData[];
#endif
		static void NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyCheckForMissingSkeletalMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceRecompression_MetaData[];
#endif
		static void NewProp_ForceRecompression_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceRecompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyEndEffectorsMatchNameArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyEndEffectorsMatchNameArray;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyEndEffectorsMatchNameArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressCommandletVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CompressCommandletVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Default animation settings.\n */" },
		{ "DisplayName", "Animation" },
		{ "IncludePath", "Animation/AnimationSettings.h" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "Default animation settings." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, pre-4.19 behavior of zero-ticking animations during skeletal mesh init" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bTickAnimationOnSkeletalMeshInit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit = { "bTickAnimationOnSkeletalMeshInit", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData[] = {
		{ "Category", "Performance" },
		{ "Comment", "/** If true, animation track data will be stripped from dedicated server cooked data */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, animation track data will be stripped from dedicated server cooked data" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bStripAnimationDataOnDedicatedServer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer = { "bStripAnimationDataOnDedicatedServer", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bEnablePerformanceLog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog = { "bEnablePerformanceLog", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true and the existing compression error is greater than Alternative Compression Threshold, then Alternative Compression Threshold will be effectively raised to the existing error level */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then Alternative Compression Threshold will be effectively raised to the existing error level" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bRaiseMaxErrorToExisting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting = { "bRaiseMaxErrorToExisting", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini) \n\x09* Also known as \"Run Current Default Compressor\"\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true, then the animation will be first recompressed with it's current compressor if non-NULL, or with the global default compressor (specified in the engine ini)\nAlso known as \"Run Current Default Compressor\"" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bFirstRecompressUsingCurrentOrDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault = { "bFirstRecompressUsingCurrentOrDefault", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "/** If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "If true and the existing compression error is greater than Alternative Compression Threshold, then any compression technique (even one that increases the size) with a lower error will be used until it falls below the threshold" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bForceBelowThreshold = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold = { "bForceBelowThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->bOnlyCheckForMissingSkeletalMeshes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes = { "bOnlyCheckForMissingSkeletalMeshes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit(void* Obj)
	{
		((UAnimationSettings*)Obj)->ForceRecompression = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression = { "ForceRecompression", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimationSettings), &Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData[] = {
		{ "Category", "Compression" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, KeyEndEffectorsMatchNameArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner = { "KeyEndEffectorsMatchNameArray", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData[] = {
		{ "Category", "Compression" },
		{ "Comment", "// compression upgrade version\n" },
		{ "ModuleRelativePath", "Classes/Animation/AnimationSettings.h" },
		{ "ToolTip", "compression upgrade version" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion = { "CompressCommandletVersion", nullptr, (EPropertyFlags)0x0010000000024001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSettings, CompressCommandletVersion), METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bTickAnimationOnSkeletalMeshInit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bStripAnimationDataOnDedicatedServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bEnablePerformanceLog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bRaiseMaxErrorToExisting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bFirstRecompressUsingCurrentOrDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bForceBelowThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_bOnlyCheckForMissingSkeletalMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_ForceRecompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_KeyEndEffectorsMatchNameArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSettings_Statics::NewProp_CompressCommandletVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSettings_Statics::ClassParams = {
		&UAnimationSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationSettings, 1523520731);
	template<> ENGINE_API UClass* StaticClass<UAnimationSettings>()
	{
		return UAnimationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationSettings(Z_Construct_UClass_UAnimationSettings, &UAnimationSettings::StaticClass, TEXT("/Script/Engine"), TEXT("UAnimationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
