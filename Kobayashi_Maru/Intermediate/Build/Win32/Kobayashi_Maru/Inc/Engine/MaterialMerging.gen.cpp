// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/MaterialMerging.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialMerging() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialMergeType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureSizingType();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
// End Cross Module References
	static UEnum* EMaterialMergeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialMergeType, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialMergeType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialMergeType>()
	{
		return EMaterialMergeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialMergeType(EMaterialMergeType_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialMergeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialMergeType_Hash() { return 3191777782U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialMergeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialMergeType"), 0, Get_Z_Construct_UEnum_Engine_EMaterialMergeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MaterialMergeType_Default", (int64)MaterialMergeType_Default },
				{ "MaterialMergeType_Simplygon", (int64)MaterialMergeType_Simplygon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "MaterialMergeType_Default.Name", "MaterialMergeType_Default" },
				{ "MaterialMergeType_Simplygon.Name", "MaterialMergeType_Simplygon" },
				{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialMergeType",
				"EMaterialMergeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETextureSizingType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureSizingType, Z_Construct_UPackage__Script_Engine(), TEXT("ETextureSizingType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ETextureSizingType>()
	{
		return ETextureSizingType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextureSizingType(ETextureSizingType_StaticEnum, TEXT("/Script/Engine"), TEXT("ETextureSizingType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ETextureSizingType_Hash() { return 480859870U; }
	UEnum* Z_Construct_UEnum_Engine_ETextureSizingType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextureSizingType"), 0, Get_Z_Construct_UEnum_Engine_ETextureSizingType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "TextureSizingType_UseSingleTextureSize", (int64)TextureSizingType_UseSingleTextureSize },
				{ "TextureSizingType_UseAutomaticBiasedSizes", (int64)TextureSizingType_UseAutomaticBiasedSizes },
				{ "TextureSizingType_UseManualOverrideTextureSize", (int64)TextureSizingType_UseManualOverrideTextureSize },
				{ "TextureSizingType_UseSimplygonAutomaticSizing", (int64)TextureSizingType_UseSimplygonAutomaticSizing },
				{ "TextureSizingType_MAX", (int64)TextureSizingType_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
				{ "TextureSizingType_MAX.Name", "TextureSizingType_MAX" },
				{ "TextureSizingType_UseAutomaticBiasedSizes.DisplayName", "Use automatically biased texture sizes based on TextureSize" },
				{ "TextureSizingType_UseAutomaticBiasedSizes.Name", "TextureSizingType_UseAutomaticBiasedSizes" },
				{ "TextureSizingType_UseManualOverrideTextureSize.DisplayName", "Use per property manually overriden texture sizes" },
				{ "TextureSizingType_UseManualOverrideTextureSize.Name", "TextureSizingType_UseManualOverrideTextureSize" },
				{ "TextureSizingType_UseSimplygonAutomaticSizing.DisplayName", "Use Simplygon's automatic texture sizing" },
				{ "TextureSizingType_UseSimplygonAutomaticSizing.Name", "TextureSizingType_UseSimplygonAutomaticSizing" },
				{ "TextureSizingType_UseSingleTextureSize.DisplayName", "Use TextureSize for all material properties" },
				{ "TextureSizingType_UseSingleTextureSize.Name", "TextureSizingType_UseSingleTextureSize" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ETextureSizingType",
				"ETextureSizingType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMaterialProxySettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialProxySettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialProxySettings, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialProxySettings"), sizeof(FMaterialProxySettings), Get_Z_Construct_UScriptStruct_FMaterialProxySettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialProxySettings>()
{
	return FMaterialProxySettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialProxySettings(FMaterialProxySettings::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialProxySettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialProxySettings
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialProxySettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialProxySettings")),new UScriptStruct::TCppStructOps<FMaterialProxySettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialProxySettings;
	struct Z_Construct_UScriptStruct_FMaterialProxySettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusionTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityMaskTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OpacityTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmissiveTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpecularTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnisotropyTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnisotropyTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughnessTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoughnessTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetallicTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MetallicTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseTextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DiffuseTextureSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAmbientOcclusionMap_MetaData[];
#endif
		static void NewProp_bAmbientOcclusionMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAmbientOcclusionMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpacityMaskMap_MetaData[];
#endif
		static void NewProp_bOpacityMaskMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpacityMaskMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOpacityMap_MetaData[];
#endif
		static void NewProp_bOpacityMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOpacityMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEmissiveMap_MetaData[];
#endif
		static void NewProp_bEmissiveMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEmissiveMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpecularMap_MetaData[];
#endif
		static void NewProp_bSpecularMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpecularMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnisotropyMap_MetaData[];
#endif
		static void NewProp_bAnisotropyMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnisotropyMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRoughnessMap_MetaData[];
#endif
		static void NewProp_bRoughnessMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRoughnessMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMetallicMap_MetaData[];
#endif
		static void NewProp_bMetallicMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMetallicMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTangentMap_MetaData[];
#endif
		static void NewProp_bTangentMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTangentMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNormalMap_MetaData[];
#endif
		static void NewProp_bNormalMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNormalMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowTwoSidedMaterial_MetaData[];
#endif
		static void NewProp_bAllowTwoSidedMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowTwoSidedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialMergeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialMergeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSizingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TextureSizingType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusionConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientOcclusionConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OpacityConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecularConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpecularConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnisotropyConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnisotropyConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoughnessConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RoughnessConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetallicConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MetallicConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GutterSpace_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GutterSpace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialProxySettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Ambient Occlusion texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Ambient Occlusion texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize = { "AmbientOcclusionTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, AmbientOcclusionTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Opacity Mask texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Opacity Mask texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize = { "OpacityMaskTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityMaskTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Opacity texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Opacity texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize = { "OpacityTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Emissive texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Emissive texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize = { "EmissiveTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, EmissiveTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Specular texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Specular texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize = { "SpecularTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, SpecularTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Anisotropy texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Anisotropy texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyTextureSize = { "AnisotropyTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, AnisotropyTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Roughness texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Roughness texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize = { "RoughnessTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, RoughnessTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Metallic texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Metallic texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize = { "MetallicTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, MetallicTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TangentTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Tangent texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Tangent texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TangentTextureSize = { "TangentTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, TangentTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TangentTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TangentTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Normal texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Normal texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize = { "NormalTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, NormalTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Override Diffuse texture size\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Override Diffuse texture size" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize = { "DiffuseTextureSize", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, DiffuseTextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Ambient Occlusion property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Ambient Occlusion property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bAmbientOcclusionMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap = { "bAmbientOcclusionMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Opacity Mask property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Opacity Mask property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bOpacityMaskMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap = { "bOpacityMaskMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Opacity property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Opacity property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bOpacityMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap = { "bOpacityMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Emissive property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Emissive property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bEmissiveMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap = { "bEmissiveMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Specular property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Specular property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bSpecularMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap = { "bSpecularMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Anisotropy property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Anisotropy property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bAnisotropyMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap = { "bAnisotropyMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Roughness property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Roughness property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bRoughnessMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap = { "bRoughnessMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Metallic property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Metallic property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bMetallicMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap = { "bMetallicMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Tangent property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Tangent property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bTangentMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap = { "bTangentMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether to generate a texture for the Normal property\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether to generate a texture for the Normal property" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bNormalMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap = { "bNormalMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Whether or not to allow the generated material can be two-sided\n" },
		{ "DisplayAfter", "BlendMode" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Whether or not to allow the generated material can be two-sided" },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_SetBit(void* Obj)
	{
		((FMaterialProxySettings*)Obj)->bAllowTwoSidedMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial = { "bAllowTwoSidedMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FMaterialProxySettings), &Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Target blend mode for the generated material\n" },
		{ "DisplayAfter", "AmbientOcclusionTextureSize" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Target blend mode for the generated material" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType = { "MaterialMergeType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, MaterialMergeType), Z_Construct_UEnum_Engine_EMaterialMergeType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Method that should be used to generate the sizes of the output textures\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Method that should be used to generate the sizes of the output textures" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType = { "TextureSizingType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, TextureSizingType), Z_Construct_UEnum_Engine_ETextureSizingType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Ambient Occlusion property\n" },
		{ "DisplayAfter", "bAmbientOcclusionMap" },
		{ "editcondition", "!bAmbientOcclusionMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Ambient Occlusion property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant = { "AmbientOcclusionConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, AmbientOcclusionConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Opacity mask property\n" },
		{ "DisplayAfter", "bOpacityMaskMap" },
		{ "editcondition", "!bOpacityMaskMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Opacity mask property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant = { "OpacityMaskConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityMaskConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Opacity property\n" },
		{ "DisplayAfter", "bOpacityMap" },
		{ "editcondition", "!bOpacityMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Opacity property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant = { "OpacityConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, OpacityConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Specular property\n" },
		{ "DisplayAfter", "bSpecularMap" },
		{ "editcondition", "!bSpecularMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Specular property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant = { "SpecularConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, SpecularConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "Comment", "// Constant value to use for the Anisotropy property\n" },
		{ "DisplayAfter", "bAnisotropyMap" },
		{ "editcondition", "!bAnisotropyMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Anisotropy property" },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyConstant = { "AnisotropyConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, AnisotropyConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Roughness property\n" },
		{ "DisplayAfter", "bRoughnessMap" },
		{ "editcondition", "!bRoughnessMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Roughness property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant = { "RoughnessConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, RoughnessConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "// Constant value to use for the Metallic property\n" },
		{ "DisplayAfter", "bMetallicMap" },
		{ "editcondition", "!bMetallicMap" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Constant value to use for the Metallic property" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant = { "MetallicConstant", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, MetallicConstant), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "// Gutter space to take into account \n" },
		{ "DisplayAfter", "TextureSizingType" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Gutter space to take into account" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace = { "GutterSpace", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, GutterSpace), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "1" },
		{ "Comment", "// Size of generated BaseColor map\n" },
		{ "ModuleRelativePath", "Classes/Engine/MaterialMerging.h" },
		{ "ToolTip", "Size of generated BaseColor map" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialProxySettings, TextureSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_EmissiveTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TangentTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_NormalTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_DiffuseTextureSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAmbientOcclusionMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMaskMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bOpacityMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bEmissiveMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bSpecularMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAnisotropyMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bRoughnessMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bMetallicMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bTangentMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bNormalMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_bAllowTwoSidedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MaterialMergeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSizingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AmbientOcclusionConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityMaskConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_OpacityConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_SpecularConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_AnisotropyConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_RoughnessConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_MetallicConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_GutterSpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::NewProp_TextureSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialProxySettings",
		sizeof(FMaterialProxySettings),
		alignof(FMaterialProxySettings),
		Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialProxySettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialProxySettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialProxySettings"), sizeof(FMaterialProxySettings), Get_Z_Construct_UScriptStruct_FMaterialProxySettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialProxySettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialProxySettings_Hash() { return 3565018018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
