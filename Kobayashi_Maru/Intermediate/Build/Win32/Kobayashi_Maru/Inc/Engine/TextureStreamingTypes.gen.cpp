// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/TextureStreamingTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureStreamingTypes() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FStreamingTextureBuildInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StreamingTextureBuildInfo"), sizeof(FStreamingTextureBuildInfo), Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingTextureBuildInfo>()
{
	return FStreamingTextureBuildInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingTextureBuildInfo(FStreamingTextureBuildInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamingTextureBuildInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingTextureBuildInfo")),new UScriptStruct::TCppStructOps<FStreamingTextureBuildInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamingTextureBuildInfo;
	struct Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureLevelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureLevelIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * This struct holds the result of TextureStreaming Build for each component texture, as referred by its used materials.\n * It is possible that the entry referred by this data is not actually relevant in a given quality / target.\n * It is also possible that some texture are not referred, and will then fall on fallbacks computation.\n * Because each component holds its precomputed data for each texture, this struct is designed to be as compact as possible.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "This struct holds the result of TextureStreaming Build for each component texture, as referred by its used materials.\nIt is possible that the entry referred by this data is not actually relevant in a given quality / target.\nIt is also possible that some texture are not referred, and will then fall on fallbacks computation.\nBecause each component holds its precomputed data for each texture, this struct is designed to be as compact as possible." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingTextureBuildInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor_MetaData[] = {
		{ "Comment", "/** \n\x09 * The texel factor for this texture. This represent the world size a texture square holding with unit UVs.\n\x09 * This value is a combination of the TexelFactor from the mesh and also the material scale.\n\x09 * It does not take into consideration StreamingDistanceMultiplier, or texture group scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The texel factor for this texture. This represent the world size a texture square holding with unit UVs.\nThis value is a combination of the TexelFactor from the mesh and also the material scale.\nIt does not take into consideration StreamingDistanceMultiplier, or texture group scale." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, TexelFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex_MetaData[] = {
		{ "Comment", "/** \n\x09 * The level scope identifier of the texture. When building the texture streaming data, each level holds a list of all referred texture Guids.\n\x09 * This is required to prevent loading textures on platforms which would not require the texture to be loaded, and is a consequence of the texture\n\x09 * streaming build not being platform specific (the same streaming data is build for every platform target). Could also apply to quality level.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The level scope identifier of the texture. When building the texture streaming data, each level holds a list of all referred texture Guids.\nThis is required to prevent loading textures on platforms which would not require the texture to be loaded, and is a consequence of the texture\nstreaming build not being platform specific (the same streaming data is build for every platform target). Could also apply to quality level." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex = { "TextureLevelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, TextureLevelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox_MetaData[] = {
		{ "Comment", "/** \n\x09 * The relative bounding box for this entry. The relative bounds is a bound equal or smaller than the component bounds and represent\n\x09 * the merged LOD section bounds of all LOD section referencing the given texture. When the level transform is modified following\n\x09 * a call to ApplyLevelTransform, this relative bound becomes deprecated as it was computed from the transform at build time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The relative bounding box for this entry. The relative bounds is a bound equal or smaller than the component bounds and represent\nthe merged LOD section bounds of all LOD section referencing the given texture. When the level transform is modified following\na call to ApplyLevelTransform, this relative bound becomes deprecated as it was computed from the transform at build time." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox = { "PackedRelativeBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingTextureBuildInfo, PackedRelativeBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TexelFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_TextureLevelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::NewProp_PackedRelativeBox,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamingTextureBuildInfo",
		sizeof(FStreamingTextureBuildInfo),
		alignof(FStreamingTextureBuildInfo),
		Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingTextureBuildInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingTextureBuildInfo"), sizeof(FStreamingTextureBuildInfo), Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingTextureBuildInfo_Hash() { return 3711106214U; }
class UScriptStruct* FStreamingRenderAssetPrimitiveInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo, Z_Construct_UPackage__Script_Engine(), TEXT("StreamingRenderAssetPrimitiveInfo"), sizeof(FStreamingRenderAssetPrimitiveInfo), Get_Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamingRenderAssetPrimitiveInfo>()
{
	return FStreamingRenderAssetPrimitiveInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo(FStreamingRenderAssetPrimitiveInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("StreamingRenderAssetPrimitiveInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFStreamingRenderAssetPrimitiveInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFStreamingRenderAssetPrimitiveInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StreamingRenderAssetPrimitiveInfo")),new UScriptStruct::TCppStructOps<FStreamingRenderAssetPrimitiveInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFStreamingRenderAssetPrimitiveInfo;
	struct Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowInvalidTexelFactorWhenUnregistered_MetaData[];
#endif
		static void NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowInvalidTexelFactorWhenUnregistered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackedRelativeBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PackedRelativeBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TexelFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TexelFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Bounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenderAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about a streaming texture/mesh that a primitive uses for rendering. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "Information about a streaming texture/mesh that a primitive uses for rendering." },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamingRenderAssetPrimitiveInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered_MetaData[] = {
		{ "Comment", "/** For mesh components, texel factors are their sphere bound diameters that are 0 when unregistered */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "For mesh components, texel factors are their sphere bound diameters that are 0 when unregistered" },
	};
#endif
	void Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit(void* Obj)
	{
		((FStreamingRenderAssetPrimitiveInfo*)Obj)->bAllowInvalidTexelFactorWhenUnregistered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered = { "bAllowInvalidTexelFactorWhenUnregistered", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FStreamingRenderAssetPrimitiveInfo), &Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_PackedRelativeBox_MetaData[] = {
		{ "Comment", "/** \n\x09 * When non zero, this represents the relative box used to compute Bounds, using the component bounds as reference.\n\x09 * If available, this allows the renderable asset streamer to generate the level streaming data before the level gets visible.\n\x09 * At that point, the component are not yet registered, and the bounds are unknown, but the precompiled build data is still available.\n\x09 * Also allows to update the relative bounds after a level get moved around from ApplyWorldOffset.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "When non zero, this represents the relative box used to compute Bounds, using the component bounds as reference.\nIf available, this allows the renderable asset streamer to generate the level streaming data before the level gets visible.\nAt that point, the component are not yet registered, and the bounds are unknown, but the precompiled build data is still available.\nAlso allows to update the relative bounds after a level get moved around from ApplyWorldOffset." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_PackedRelativeBox = { "PackedRelativeBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, PackedRelativeBox), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_PackedRelativeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_PackedRelativeBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_TexelFactor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_TexelFactor = { "TexelFactor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, TexelFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_TexelFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_TexelFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_Bounds_MetaData[] = {
		{ "Comment", "/** \n\x09 * The streaming bounds of the texture/mesh, usually the component material bounds. \n\x09 * Usually only valid for registered component, as component bounds are only updated when the components are registered.\n\x09 * otherwise only PackedRelativeBox can be used.Irrelevant when the component is not registered, as the component could be moved by ULevel::ApplyWorldOffset()\n\x09 * In that case, only PackedRelativeBox is meaningful.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
		{ "ToolTip", "The streaming bounds of the texture/mesh, usually the component material bounds.\nUsually only valid for registered component, as component bounds are only updated when the components are registered.\notherwise only PackedRelativeBox can be used.Irrelevant when the component is not registered, as the component could be moved by ULevel::ApplyWorldOffset()\nIn that case, only PackedRelativeBox is meaningful." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_Bounds = { "Bounds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, Bounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_Bounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_Bounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_RenderAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/TextureStreamingTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_RenderAsset = { "RenderAsset", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStreamingRenderAssetPrimitiveInfo, RenderAsset), Z_Construct_UClass_UStreamableRenderAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_RenderAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_RenderAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_bAllowInvalidTexelFactorWhenUnregistered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_PackedRelativeBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_TexelFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_Bounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::NewProp_RenderAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamingRenderAssetPrimitiveInfo",
		sizeof(FStreamingRenderAssetPrimitiveInfo),
		alignof(FStreamingRenderAssetPrimitiveInfo),
		Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StreamingRenderAssetPrimitiveInfo"), sizeof(FStreamingRenderAssetPrimitiveInfo), Get_Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStreamingRenderAssetPrimitiveInfo_Hash() { return 2078375809U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
