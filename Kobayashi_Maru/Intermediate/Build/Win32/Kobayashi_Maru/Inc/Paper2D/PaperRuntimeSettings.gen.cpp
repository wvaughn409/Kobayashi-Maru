// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperRuntimeSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperRuntimeSettings() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperRuntimeSettings_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperRuntimeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void UPaperRuntimeSettings::StaticRegisterNativesUPaperRuntimeSettings()
	{
	}
	UClass* Z_Construct_UClass_UPaperRuntimeSettings_NoRegister()
	{
		return UPaperRuntimeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UPaperRuntimeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResizeSpriteDataToMatchTextures_MetaData[];
#endif
		static void NewProp_bResizeSpriteDataToMatchTextures_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResizeSpriteDataToMatchTextures;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTerrainSplineEditing_MetaData[];
#endif
		static void NewProp_bEnableTerrainSplineEditing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTerrainSplineEditing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSpriteAtlasGroups_MetaData[];
#endif
		static void NewProp_bEnableSpriteAtlasGroups_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSpriteAtlasGroups;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperRuntimeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements the settings for the Paper2D plugin.\n */" },
		{ "IncludePath", "PaperRuntimeSettings.h" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Implements the settings for the Paper2D plugin." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Enables automatic resizing of various sprite data that is authored in texture space if the source texture gets resized (sockets, the pivot, render and collision geometry, etc...)\n" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables automatic resizing of various sprite data that is authored in texture space if the source texture gets resized (sockets, the pivot, render and collision geometry, etc...)" },
	};
#endif
	void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_SetBit(void* Obj)
	{
		((UPaperRuntimeSettings*)Obj)->bResizeSpriteDataToMatchTextures = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures = { "bResizeSpriteDataToMatchTextures", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "// Enables experimental *incomplete and unsupported* 2D terrain spline editing. Note: You need to restart the editor when enabling this setting for the change to fully take effect.\n" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables experimental *incomplete and unsupported* 2D terrain spline editing. Note: You need to restart the editor when enabling this setting for the change to fully take effect." },
	};
#endif
	void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_SetBit(void* Obj)
	{
		((UPaperRuntimeSettings*)Obj)->bEnableTerrainSplineEditing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing = { "bEnableTerrainSplineEditing", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_MetaData[] = {
		{ "Category", "Experimental" },
		{ "Comment", "// Enables experimental *incomplete and unsupported* texture atlas groups that sprites can be assigned to\n" },
		{ "ModuleRelativePath", "Classes/PaperRuntimeSettings.h" },
		{ "ToolTip", "Enables experimental *incomplete and unsupported* texture atlas groups that sprites can be assigned to" },
	};
#endif
	void Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_SetBit(void* Obj)
	{
		((UPaperRuntimeSettings*)Obj)->bEnableSpriteAtlasGroups = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups = { "bEnableSpriteAtlasGroups", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperRuntimeSettings), &Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bResizeSpriteDataToMatchTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableTerrainSplineEditing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperRuntimeSettings_Statics::NewProp_bEnableSpriteAtlasGroups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperRuntimeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperRuntimeSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperRuntimeSettings_Statics::ClassParams = {
		&UPaperRuntimeSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperRuntimeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperRuntimeSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperRuntimeSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperRuntimeSettings, 515400996);
	template<> PAPER2D_API UClass* StaticClass<UPaperRuntimeSettings>()
	{
		return UPaperRuntimeSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperRuntimeSettings(Z_Construct_UClass_UPaperRuntimeSettings, &UPaperRuntimeSettings::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperRuntimeSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperRuntimeSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
