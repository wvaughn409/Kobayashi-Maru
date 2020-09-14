// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Lightmass/VolumetricLightmapDensityVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVolumetricLightmapDensityVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
// End Cross Module References
	void AVolumetricLightmapDensityVolume::StaticRegisterNativesAVolumetricLightmapDensityVolume()
	{
	}
	UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume_NoRegister()
	{
		return AVolumetricLightmapDensityVolume::StaticClass();
	}
	struct Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedMipLevelRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AllowedMipLevelRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Provides local control over volumetric lightmap density.  Only convex shapes supported. */" },
		{ "HideCategories", "Collision Brush Attachment Physics Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Lightmass/VolumetricLightmapDensityVolume.h" },
		{ "ModuleRelativePath", "Classes/Lightmass/VolumetricLightmapDensityVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Provides local control over volumetric lightmap density.  Only convex shapes supported." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::NewProp_AllowedMipLevelRange_MetaData[] = {
		{ "Category", "VolumetricLightmapDensityVolume" },
		{ "Comment", "/**\n\x09 * The Volumetric Lightmap has 3 mipmaps, where the highest density mipmap (mip0) corresponds to VolumetricLightmapDetailCellSize.\n\x09 * mip0: DetailCellSize\n\x09 * mip1: DetailCellSize * 4\n\x09 * mip2: DetailCellSize * 16\n\x09 * \n\x09 * By default, highest density will be placed around static geometry and static lights, but AllowedMipLevelRange can be used to override this behavior. \n\x09 * Examples:\n\x09 * [0, 3] = Volume does nothing\n\x09 * [1, 3] = Volume removes highest density mip, even near static geometry, which can be useful to save memory ('stat MapBuildData')\n\x09 * [0, 0] = Volume forces highest density.  Warning: using this on a large area can greatly increase memory and build times!\n\x09 * When multiple volumes overlap, the smallest (highest density) values will be used.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Lightmass/VolumetricLightmapDensityVolume.h" },
		{ "ToolTip", "The Volumetric Lightmap has 3 mipmaps, where the highest density mipmap (mip0) corresponds to VolumetricLightmapDetailCellSize.\nmip0: DetailCellSize\nmip1: DetailCellSize * 4\nmip2: DetailCellSize * 16\n\nBy default, highest density will be placed around static geometry and static lights, but AllowedMipLevelRange can be used to override this behavior.\nExamples:\n[0, 3] = Volume does nothing\n[1, 3] = Volume removes highest density mip, even near static geometry, which can be useful to save memory ('stat MapBuildData')\n[0, 0] = Volume forces highest density.  Warning: using this on a large area can greatly increase memory and build times!\nWhen multiple volumes overlap, the smallest (highest density) values will be used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::NewProp_AllowedMipLevelRange = { "AllowedMipLevelRange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVolumetricLightmapDensityVolume, AllowedMipLevelRange), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::NewProp_AllowedMipLevelRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::NewProp_AllowedMipLevelRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::NewProp_AllowedMipLevelRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVolumetricLightmapDensityVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::ClassParams = {
		&AVolumetricLightmapDensityVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVolumetricLightmapDensityVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVolumetricLightmapDensityVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVolumetricLightmapDensityVolume, 3004667418);
	template<> ENGINE_API UClass* StaticClass<AVolumetricLightmapDensityVolume>()
	{
		return AVolumetricLightmapDensityVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVolumetricLightmapDensityVolume(Z_Construct_UClass_AVolumetricLightmapDensityVolume, &AVolumetricLightmapDensityVolume::StaticClass, TEXT("/Script/Engine"), TEXT("AVolumetricLightmapDensityVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVolumetricLightmapDensityVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
