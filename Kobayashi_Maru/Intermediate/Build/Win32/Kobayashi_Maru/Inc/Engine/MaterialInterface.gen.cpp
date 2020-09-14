// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Materials/MaterialInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInterface() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialTextureInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialParameterAssociation();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USubsurfaceProfile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
// End Cross Module References
	static UEnum* EMaterialUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialUsage, Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialUsage"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialUsage>()
	{
		return EMaterialUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMaterialUsage(EMaterialUsage_StaticEnum, TEXT("/Script/Engine"), TEXT("EMaterialUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EMaterialUsage_Hash() { return 95876531U; }
	UEnum* Z_Construct_UEnum_Engine_EMaterialUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMaterialUsage"), 0, Get_Z_Construct_UEnum_Engine_EMaterialUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "MATUSAGE_SkeletalMesh", (int64)MATUSAGE_SkeletalMesh },
				{ "MATUSAGE_ParticleSprites", (int64)MATUSAGE_ParticleSprites },
				{ "MATUSAGE_BeamTrails", (int64)MATUSAGE_BeamTrails },
				{ "MATUSAGE_MeshParticles", (int64)MATUSAGE_MeshParticles },
				{ "MATUSAGE_StaticLighting", (int64)MATUSAGE_StaticLighting },
				{ "MATUSAGE_MorphTargets", (int64)MATUSAGE_MorphTargets },
				{ "MATUSAGE_SplineMesh", (int64)MATUSAGE_SplineMesh },
				{ "MATUSAGE_InstancedStaticMeshes", (int64)MATUSAGE_InstancedStaticMeshes },
				{ "MATUSAGE_GeometryCollections", (int64)MATUSAGE_GeometryCollections },
				{ "MATUSAGE_Clothing", (int64)MATUSAGE_Clothing },
				{ "MATUSAGE_NiagaraSprites", (int64)MATUSAGE_NiagaraSprites },
				{ "MATUSAGE_NiagaraRibbons", (int64)MATUSAGE_NiagaraRibbons },
				{ "MATUSAGE_NiagaraMeshParticles", (int64)MATUSAGE_NiagaraMeshParticles },
				{ "MATUSAGE_GeometryCache", (int64)MATUSAGE_GeometryCache },
				{ "MATUSAGE_Water", (int64)MATUSAGE_Water },
				{ "MATUSAGE_HairStrands", (int64)MATUSAGE_HairStrands },
				{ "MATUSAGE_LidarPointCloud", (int64)MATUSAGE_LidarPointCloud },
				{ "MATUSAGE_MAX", (int64)MATUSAGE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "MATUSAGE_BeamTrails.Name", "MATUSAGE_BeamTrails" },
				{ "MATUSAGE_Clothing.Name", "MATUSAGE_Clothing" },
				{ "MATUSAGE_GeometryCache.Name", "MATUSAGE_GeometryCache" },
				{ "MATUSAGE_GeometryCollections.Name", "MATUSAGE_GeometryCollections" },
				{ "MATUSAGE_HairStrands.Name", "MATUSAGE_HairStrands" },
				{ "MATUSAGE_InstancedStaticMeshes.Name", "MATUSAGE_InstancedStaticMeshes" },
				{ "MATUSAGE_LidarPointCloud.Name", "MATUSAGE_LidarPointCloud" },
				{ "MATUSAGE_MAX.Name", "MATUSAGE_MAX" },
				{ "MATUSAGE_MeshParticles.Name", "MATUSAGE_MeshParticles" },
				{ "MATUSAGE_MorphTargets.Name", "MATUSAGE_MorphTargets" },
				{ "MATUSAGE_NiagaraMeshParticles.Name", "MATUSAGE_NiagaraMeshParticles" },
				{ "MATUSAGE_NiagaraRibbons.Name", "MATUSAGE_NiagaraRibbons" },
				{ "MATUSAGE_NiagaraSprites.Name", "MATUSAGE_NiagaraSprites" },
				{ "MATUSAGE_ParticleSprites.Name", "MATUSAGE_ParticleSprites" },
				{ "MATUSAGE_SkeletalMesh.Name", "MATUSAGE_SkeletalMesh" },
				{ "MATUSAGE_SplineMesh.Name", "MATUSAGE_SplineMesh" },
				{ "MATUSAGE_StaticLighting.Name", "MATUSAGE_StaticLighting" },
				{ "MATUSAGE_Water.Name", "MATUSAGE_Water" },
				{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EMaterialUsage",
				"EMaterialUsage",
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
class UScriptStruct* FMaterialTextureInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialTextureInfo, Z_Construct_UPackage__Script_Engine(), TEXT("MaterialTextureInfo"), sizeof(FMaterialTextureInfo), Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialTextureInfo>()
{
	return FMaterialTextureInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMaterialTextureInfo(FMaterialTextureInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("MaterialTextureInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMaterialTextureInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFMaterialTextureInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MaterialTextureInfo")),new UScriptStruct::TCppStructOps<FMaterialTextureInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMaterialTextureInfo;
	struct Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureReference;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TextureName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UVChannelIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SamplingScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * This struct holds data about how a texture is sampled within a material.\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "This struct holds data about how a texture is sampled within a material." },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialTextureInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureIndex_MetaData[] = {
		{ "Comment", "/** \n\x09  * The texture index in the material resource the data was built from.\n\x09  * This must be transient as it depends on which shader map was used for the build.  \n\x09  */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The texture index in the material resource the data was built from.\nThis must be transient as it depends on which shader map was used for the build." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureIndex = { "TextureIndex", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialTextureInfo, TextureIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureReference_MetaData[] = {
		{ "Comment", "/** The reference to the texture, used to keep the TextureName valid even if it gets renamed. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The reference to the texture, used to keep the TextureName valid even if it gets renamed." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureReference = { "TextureReference", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialTextureInfo, TextureReference), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureReference_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureName_MetaData[] = {
		{ "Comment", "/** The texture name. Used for debugging and also to for quick matching of the entries. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The texture name. Used for debugging and also to for quick matching of the entries." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureName = { "TextureName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialTextureInfo, TextureName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_UVChannelIndex_MetaData[] = {
		{ "Comment", "/** The coordinate index used when sampling the texture */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The coordinate index used when sampling the texture" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_UVChannelIndex = { "UVChannelIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialTextureInfo, UVChannelIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_UVChannelIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_UVChannelIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_SamplingScale_MetaData[] = {
		{ "Comment", "/** The scale used when sampling the texture */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The scale used when sampling the texture" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_SamplingScale = { "SamplingScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMaterialTextureInfo, SamplingScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_SamplingScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_SamplingScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureReference,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_TextureName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_UVChannelIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::NewProp_SamplingScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialTextureInfo",
		sizeof(FMaterialTextureInfo),
		alignof(FMaterialTextureInfo),
		Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialTextureInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MaterialTextureInfo"), sizeof(FMaterialTextureInfo), Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialTextureInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMaterialTextureInfo_Hash() { return 4277466301U; }
class UScriptStruct* FLightmassMaterialInterfaceSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings, Z_Construct_UPackage__Script_Engine(), TEXT("LightmassMaterialInterfaceSettings"), sizeof(FLightmassMaterialInterfaceSettings), Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLightmassMaterialInterfaceSettings>()
{
	return FLightmassMaterialInterfaceSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLightmassMaterialInterfaceSettings(FLightmassMaterialInterfaceSettings::StaticStruct, TEXT("/Script/Engine"), TEXT("LightmassMaterialInterfaceSettings"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLightmassMaterialInterfaceSettings
{
	FScriptStruct_Engine_StaticRegisterNativesFLightmassMaterialInterfaceSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LightmassMaterialInterfaceSettings")),new UScriptStruct::TCppStructOps<FLightmassMaterialInterfaceSettings>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLightmassMaterialInterfaceSettings;
	struct Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideExportResolutionScale_MetaData[];
#endif
		static void NewProp_bOverrideExportResolutionScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideExportResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideDiffuseBoost_MetaData[];
#endif
		static void NewProp_bOverrideDiffuseBoost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideDiffuseBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideEmissiveBoost_MetaData[];
#endif
		static void NewProp_bOverrideEmissiveBoost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideEmissiveBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideCastShadowAsMasked_MetaData[];
#endif
		static void NewProp_bOverrideCastShadowAsMasked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideCastShadowAsMasked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsMasked_MetaData[];
#endif
		static void NewProp_bCastShadowAsMasked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsMasked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExportResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExportResolutionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffuseBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffuseBoost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmissiveBoost_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmissiveBoost;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09UMaterial interface settings for Lightmass\n */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "UMaterial interface settings for Lightmass" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLightmassMaterialInterfaceSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale_MetaData[] = {
		{ "Comment", "/** If true, override the export resolution scale setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the export resolution scale setting of the parent material." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale_SetBit(void* Obj)
	{
		((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideExportResolutionScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale = { "bOverrideExportResolutionScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost_MetaData[] = {
		{ "Comment", "/** If true, override the diffuse boost setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the diffuse boost setting of the parent material." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost_SetBit(void* Obj)
	{
		((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideDiffuseBoost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost = { "bOverrideDiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost_MetaData[] = {
		{ "Comment", "/** If true, override the emissive boost setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the emissive boost setting of the parent material." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost_SetBit(void* Obj)
	{
		((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideEmissiveBoost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost = { "bOverrideEmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked_MetaData[] = {
		{ "Comment", "/** If true, override the bCastShadowAsMasked setting of the parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, override the bCastShadowAsMasked setting of the parent material." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked_SetBit(void* Obj)
	{
		((FLightmassMaterialInterfaceSettings*)Obj)->bOverrideCastShadowAsMasked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked = { "bOverrideCastShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If true, forces translucency to cast static shadows as if the material were masked. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "If true, forces translucency to cast static shadows as if the material were masked." },
	};
#endif
	void Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked_SetBit(void* Obj)
	{
		((FLightmassMaterialInterfaceSettings*)Obj)->bCastShadowAsMasked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked = { "bCastShadowAsMasked", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FLightmassMaterialInterfaceSettings), &Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_ExportResolutionScale_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** \n\x09 * Scales the resolution that this material's attributes were exported at. \n\x09 * This is useful for increasing material resolution when details are needed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Scales the resolution that this material's attributes were exported at.\nThis is useful for increasing material resolution when details are needed." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_ExportResolutionScale = { "ExportResolutionScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, ExportResolutionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_ExportResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_ExportResolutionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_DiffuseBoost_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Scales the diffuse contribution of this material to static lighting. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Scales the diffuse contribution of this material to static lighting." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_DiffuseBoost = { "DiffuseBoost", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, DiffuseBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_DiffuseBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_DiffuseBoost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_EmissiveBoost_MetaData[] = {
		{ "Comment", "/** Scales the emissive contribution of this material to static lighting. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Scales the emissive contribution of this material to static lighting." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_EmissiveBoost = { "EmissiveBoost", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLightmassMaterialInterfaceSettings, EmissiveBoost), METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_EmissiveBoost_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_EmissiveBoost_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideExportResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideDiffuseBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideEmissiveBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bOverrideCastShadowAsMasked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_bCastShadowAsMasked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_ExportResolutionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_DiffuseBoost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::NewProp_EmissiveBoost,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LightmassMaterialInterfaceSettings",
		sizeof(FLightmassMaterialInterfaceSettings),
		alignof(FLightmassMaterialInterfaceSettings),
		Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LightmassMaterialInterfaceSettings"), sizeof(FLightmassMaterialInterfaceSettings), Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings_Hash() { return 2600382364U; }
	DEFINE_FUNCTION(UMaterialInterface::execSetForceMipLevelsToBeResident)
	{
		P_GET_UBOOL(Z_Param_OverrideForceMiplevelsToBeResident);
		P_GET_UBOOL(Z_Param_bForceMiplevelsToBeResidentValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForceDuration);
		P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
		P_GET_UBOOL(Z_Param_bFastResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetForceMipLevelsToBeResident(Z_Param_OverrideForceMiplevelsToBeResident,Z_Param_bForceMiplevelsToBeResidentValue,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups,Z_Param_bFastResponse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInterface::execGetParameterInfo)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Association);
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_OBJECT(UMaterialFunctionInterface,Z_Param_LayerFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMaterialParameterInfo*)Z_Param__Result=P_THIS->GetParameterInfo(EMaterialParameterAssociation(Z_Param_Association),Z_Param_ParameterName,Z_Param_LayerFunction);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInterface::execGetPhysicalMaterialFromMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicalMaterial**)Z_Param__Result=P_THIS->GetPhysicalMaterialFromMap(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInterface::execGetPhysicalMaterialMask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicalMaterialMask**)Z_Param__Result=P_THIS->GetPhysicalMaterialMask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInterface::execGetPhysicalMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPhysicalMaterial**)Z_Param__Result=P_THIS->GetPhysicalMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialInterface::execGetBaseMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterial**)Z_Param__Result=P_THIS->GetBaseMaterial();
		P_NATIVE_END;
	}
	void UMaterialInterface::StaticRegisterNativesUMaterialInterface()
	{
		UClass* Class = UMaterialInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBaseMaterial", &UMaterialInterface::execGetBaseMaterial },
			{ "GetParameterInfo", &UMaterialInterface::execGetParameterInfo },
			{ "GetPhysicalMaterial", &UMaterialInterface::execGetPhysicalMaterial },
			{ "GetPhysicalMaterialFromMap", &UMaterialInterface::execGetPhysicalMaterialFromMap },
			{ "GetPhysicalMaterialMask", &UMaterialInterface::execGetPhysicalMaterialMask },
			{ "SetForceMipLevelsToBeResident", &UMaterialInterface::execSetForceMipLevelsToBeResident },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics
	{
		struct MaterialInterface_eventGetBaseMaterial_Parms
		{
			UMaterial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetBaseMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Walks up parent chain and finds the base Material that this is an instance of. Just calls the virtual GetMaterial() */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Walks up parent chain and finds the base Material that this is an instance of. Just calls the virtual GetMaterial()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetBaseMaterial", nullptr, nullptr, sizeof(MaterialInterface_eventGetBaseMaterial_Parms), Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics
	{
		struct MaterialInterface_eventGetParameterInfo_Parms
		{
			TEnumAsByte<EMaterialParameterAssociation> Association;
			FName ParameterName;
			UMaterialFunctionInterface* LayerFunction;
			FMaterialParameterInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayerFunction;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ParameterName;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Association;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_LayerFunction = { "LayerFunction", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, LayerFunction), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, ParameterName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_Association = { "Association", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetParameterInfo_Parms, Association), Z_Construct_UEnum_Engine_EMaterialParameterAssociation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_LayerFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_ParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::NewProp_Association,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetParameterInfo", nullptr, nullptr, sizeof(MaterialInterface_eventGetParameterInfo_Parms), Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInterface_GetParameterInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetParameterInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics
	{
		struct MaterialInterface_eventGetPhysicalMaterial_Parms
		{
			UPhysicalMaterial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterial_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Material" },
		{ "Comment", "/**\n\x09* Return a pointer to the physical material used by this material instance.\n\x09* @return The physical material.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Return a pointer to the physical material used by this material instance.\n@return The physical material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetPhysicalMaterial", nullptr, nullptr, sizeof(MaterialInterface_eventGetPhysicalMaterial_Parms), Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics
	{
		struct MaterialInterface_eventGetPhysicalMaterialFromMap_Parms
		{
			int32 Index;
			UPhysicalMaterial* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterialFromMap_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterialFromMap_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Material" },
		{ "Comment", "/**\n\x09 * Return a pointer to the physical material from mask map at given index.\n\x09 * @return The physical material.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Return a pointer to the physical material from mask map at given index.\n@return The physical material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetPhysicalMaterialFromMap", nullptr, nullptr, sizeof(MaterialInterface_eventGetPhysicalMaterialFromMap_Parms), Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics
	{
		struct MaterialInterface_eventGetPhysicalMaterialMask_Parms
		{
			UPhysicalMaterialMask* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventGetPhysicalMaterialMask_Parms, ReturnValue), Z_Construct_UClass_UPhysicalMaterialMask_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics|Material" },
		{ "Comment", "/**\n\x09 * Return a pointer to the physical material mask used by this material instance.\n\x09 * @return The physical material.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Return a pointer to the physical material mask used by this material instance.\n@return The physical material." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "GetPhysicalMaterialMask", nullptr, nullptr, sizeof(MaterialInterface_eventGetPhysicalMaterialMask_Parms), Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics
	{
		struct MaterialInterface_eventSetForceMipLevelsToBeResident_Parms
		{
			bool OverrideForceMiplevelsToBeResident;
			bool bForceMiplevelsToBeResidentValue;
			float ForceDuration;
			int32 CinematicTextureGroups;
			bool bFastResponse;
		};
		static void NewProp_bFastResponse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFastResponse;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDuration;
		static void NewProp_bForceMiplevelsToBeResidentValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceMiplevelsToBeResidentValue;
		static void NewProp_OverrideForceMiplevelsToBeResident_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideForceMiplevelsToBeResident;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse_SetBit(void* Obj)
	{
		((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->bFastResponse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse = { "bFastResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration = { "ForceDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms, ForceDuration), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue_SetBit(void* Obj)
	{
		((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->bForceMiplevelsToBeResidentValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue = { "bForceMiplevelsToBeResidentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident_SetBit(void* Obj)
	{
		((MaterialInterface_eventSetForceMipLevelsToBeResident_Parms*)Obj)->OverrideForceMiplevelsToBeResident = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident = { "OverrideForceMiplevelsToBeResident", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bFastResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_bForceMiplevelsToBeResidentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::NewProp_OverrideForceMiplevelsToBeResident,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Force the streaming system to disregard the normal logic for the specified duration and\n\x09 * instead always load all mip-levels for all textures used by this material.\n\x09 *\n\x09 * @param OverrideForceMiplevelsToBeResident\x09- Whether to use (true) or ignore (false) the bForceMiplevelsToBeResidentValue parameter.\n\x09 * @param bForceMiplevelsToBeResidentValue\x09\x09- true forces all mips to stream in. false lets other factors decide what to do with the mips.\n\x09 * @param ForceDuration\x09\x09\x09\x09\x09\x09\x09- Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic. Negative value turns it off.\n\x09 * @param CinematicTextureGroups\x09\x09\x09\x09- Bitfield indicating texture groups that should use extra high-resolution mips\n\x09 * @param bFastResponse\x09\x09\x09\x09\x09\x09\x09- USE WITH EXTREME CAUTION! Fast response textures incur sizable GT overhead and disturb streaming metric calculation. Avoid whenever possible.\n\x09 */" },
		{ "CPP_Default_bFastResponse", "false" },
		{ "CPP_Default_CinematicTextureGroups", "0" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Force the streaming system to disregard the normal logic for the specified duration and\ninstead always load all mip-levels for all textures used by this material.\n\n@param OverrideForceMiplevelsToBeResident    - Whether to use (true) or ignore (false) the bForceMiplevelsToBeResidentValue parameter.\n@param bForceMiplevelsToBeResidentValue              - true forces all mips to stream in. false lets other factors decide what to do with the mips.\n@param ForceDuration                                                 - Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic. Negative value turns it off.\n@param CinematicTextureGroups                                - Bitfield indicating texture groups that should use extra high-resolution mips\n@param bFastResponse                                                 - USE WITH EXTREME CAUTION! Fast response textures incur sizable GT overhead and disturb streaming metric calculation. Avoid whenever possible." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInterface, nullptr, "SetForceMipLevelsToBeResident", nullptr, nullptr, sizeof(MaterialInterface_eventSetForceMipLevelsToBeResident_Parms), Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMaterialInterface_NoRegister()
	{
		return UMaterialInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightingGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightingGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParameterOverviewExpansion_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ParameterOverviewExpansion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ParameterOverviewExpansion_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ParameterOverviewExpansion_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerParameterExpansion_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LayerParameterExpansion;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LayerParameterExpansion_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LayerParameterExpansion_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingDataMissingEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingDataMissingEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureStreamingDataMissingEntries_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TextureStreamingData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextureStreamingData_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextureStreamingDataVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TextureStreamingDataVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTextureStreamingDataSorted_MetaData[];
#endif
		static void NewProp_bTextureStreamingDataSorted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTextureStreamingDataSorted;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SubsurfaceProfile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInterface_GetBaseMaterial, "GetBaseMaterial" }, // 2919710317
		{ &Z_Construct_UFunction_UMaterialInterface_GetParameterInfo, "GetParameterInfo" }, // 2535184576
		{ &Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterial, "GetPhysicalMaterial" }, // 3785214482
		{ &Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialFromMap, "GetPhysicalMaterialFromMap" }, // 3273583598
		{ &Z_Construct_UFunction_UMaterialInterface_GetPhysicalMaterialMask, "GetPhysicalMaterialMask" }, // 214584077
		{ &Z_Construct_UFunction_UMaterialInterface_SetForceMipLevelsToBeResident, "SetForceMipLevelsToBeResident" }, // 2109516027
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Thumbnail" },
		{ "IncludePath", "Materials/MaterialInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightingGuid_MetaData[] = {
		{ "Comment", "/** Unique ID for this material, used for caching during distributed lighting */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Unique ID for this material, used for caching during distributed lighting" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightingGuid = { "LightingGuid", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, LightingGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightingGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightingGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this material */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Importing data and options used for this material" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetImportData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion = { "ParameterOverviewExpansion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, ParameterOverviewExpansion), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_Key_KeyProp = { "ParameterOverviewExpansion_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_ValueProp = { "ParameterOverviewExpansion", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion = { "LayerParameterExpansion", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, LayerParameterExpansion), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_Key_KeyProp = { "LayerParameterExpansion_Key", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_ValueProp = { "LayerParameterExpansion", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120008000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "AllowedClasses", "StaticMesh,SkeletalMesh" },
		{ "Category", "Previewing" },
		{ "Comment", "/** The mesh used by the material editor to preview the material.*/" },
		{ "ExactClass", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The mesh used by the material editor to preview the material." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, PreviewMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries_MetaData[] = {
		{ "Comment", "/** List of all used but missing texture indices in TextureStreamingData. Used for visualization / debugging only. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "List of all used but missing texture indices in TextureStreamingData. Used for visualization / debugging only." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries = { "TextureStreamingDataMissingEntries", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, TextureStreamingDataMissingEntries), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries_Inner = { "TextureStreamingDataMissingEntries", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialTextureInfo, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00200c8000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData_MetaData[] = {
		{ "Comment", "/** Data used by the texture streaming to know how each texture is sampled by the material. Sorted by names for quick access. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Data used by the texture streaming to know how each texture is sampled by the material. Sorted by names for quick access." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData = { "TextureStreamingData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, TextureStreamingData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData_Inner = { "TextureStreamingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialTextureInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataVersion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataVersion = { "TextureStreamingDataVersion", nullptr, (EPropertyFlags)0x0020080800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, TextureStreamingDataVersion), METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted_MetaData[] = {
		{ "Comment", "/** Because of redirector, the texture names need to be resorted at each load in case they changed. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "Because of redirector, the texture names need to be resorted at each load in case they changed." },
	};
#endif
	void Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted_SetBit(void* Obj)
	{
		((UMaterialInterface*)Obj)->bTextureStreamingDataSorted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted = { "bTextureStreamingDataSorted", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMaterialInterface), &Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Lightmass" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, LightmassSettings), Z_Construct_UScriptStruct_FLightmassMaterialInterfaceSettings, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightmassSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightmassSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SubsurfaceProfile_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** SubsurfaceProfile, for Screen Space Subsurface Scattering */" },
		{ "DisplayName", "Subsurface Profile" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInterface.h" },
		{ "ToolTip", "SubsurfaceProfile, for Screen Space Subsurface Scattering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SubsurfaceProfile = { "SubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaterialInterface, SubsurfaceProfile), Z_Construct_UClass_USubsurfaceProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SubsurfaceProfile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SubsurfaceProfile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInterface_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightingGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetImportData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ParameterOverviewExpansion_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LayerParameterExpansion_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_PreviewMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataMissingEntries_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingData_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_TextureStreamingDataVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_bTextureStreamingDataSorted,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_LightmassSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInterface_Statics::NewProp_SubsurfaceProfile,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMaterialInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBlendableInterface_NoRegister, (int32)VTABLE_OFFSET(UMaterialInterface, IBlendableInterface), false },
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(UMaterialInterface, IInterface_AssetUserData), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInterface_Statics::ClassParams = {
		&UMaterialInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialInterface_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaterialInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaterialInterface, 497915134);
	template<> ENGINE_API UClass* StaticClass<UMaterialInterface>()
	{
		return UMaterialInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaterialInterface(Z_Construct_UClass_UMaterialInterface, &UMaterialInterface::StaticClass, TEXT("/Script/Engine"), TEXT("UMaterialInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
