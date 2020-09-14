// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SkeletalMesh.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMesh() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshUVChannelInfo();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EAxis();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStreamableRenderAsset();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshSocket_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkinWeightProfileInfo();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMorphTarget_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPreviewAssetAttachContainer();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetImportData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshEditorData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister();
// End Cross Module References
	static UEnum* ESkinCacheDefaultBehavior_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior, Z_Construct_UPackage__Script_Engine(), TEXT("ESkinCacheDefaultBehavior"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkinCacheDefaultBehavior>()
	{
		return ESkinCacheDefaultBehavior_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkinCacheDefaultBehavior(ESkinCacheDefaultBehavior_StaticEnum, TEXT("/Script/Engine"), TEXT("ESkinCacheDefaultBehavior"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Hash() { return 241419419U; }
	UEnum* Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkinCacheDefaultBehavior"), 0, Get_Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkinCacheDefaultBehavior::Exclusive", (int64)ESkinCacheDefaultBehavior::Exclusive },
				{ "ESkinCacheDefaultBehavior::Inclusive", (int64)ESkinCacheDefaultBehavior::Inclusive },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Exclusive.Comment", "// All skeletal meshes are excluded from the skin cache. Each must opt in individually. If Ray Tracing is enabled, will imply Inclusive\n" },
				{ "Exclusive.Name", "ESkinCacheDefaultBehavior::Exclusive" },
				{ "Exclusive.ToolTip", "All skeletal meshes are excluded from the skin cache. Each must opt in individually. If Ray Tracing is enabled, will imply Inclusive" },
				{ "Inclusive.Comment", "// All skeletal meshes are included into the skin cache. Each must opt out individually\n" },
				{ "Inclusive.Name", "ESkinCacheDefaultBehavior::Inclusive" },
				{ "Inclusive.ToolTip", "All skeletal meshes are included into the skin cache. Each must opt out individually" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESkinCacheDefaultBehavior",
				"ESkinCacheDefaultBehavior",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESkinCacheUsage_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkinCacheUsage, Z_Construct_UPackage__Script_Engine(), TEXT("ESkinCacheUsage"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkinCacheUsage>()
	{
		return ESkinCacheUsage_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkinCacheUsage(ESkinCacheUsage_StaticEnum, TEXT("/Script/Engine"), TEXT("ESkinCacheUsage"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESkinCacheUsage_Hash() { return 3306927096U; }
	UEnum* Z_Construct_UEnum_Engine_ESkinCacheUsage()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkinCacheUsage"), 0, Get_Z_Construct_UEnum_Engine_ESkinCacheUsage_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkinCacheUsage::Auto", (int64)ESkinCacheUsage::Auto },
				{ "ESkinCacheUsage::Disabled", (int64)ESkinCacheUsage::Disabled },
				{ "ESkinCacheUsage::Enabled", (int64)ESkinCacheUsage::Enabled },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Comment", "// Auto will defer to child or global behavior based on context. If Ray Tracing is enabled, will imply Enabled\n" },
				{ "Auto.Name", "ESkinCacheUsage::Auto" },
				{ "Auto.ToolTip", "Auto will defer to child or global behavior based on context. If Ray Tracing is enabled, will imply Enabled" },
				{ "Disabled.Comment", "// Mesh will not use the skin cache. If Ray Tracing is enabled, will imply Enabled\n" },
				{ "Disabled.Name", "ESkinCacheUsage::Disabled" },
				{ "Disabled.ToolTip", "Mesh will not use the skin cache. If Ray Tracing is enabled, will imply Enabled" },
				{ "Enabled.Comment", "// Mesh will use the skin cache\n" },
				{ "Enabled.Name", "ESkinCacheUsage::Enabled" },
				{ "Enabled.ToolTip", "Mesh will use the skin cache" },
				{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESkinCacheUsage",
				"ESkinCacheUsage",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSkeletalMaterial::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMaterial_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMaterial, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMaterial"), sizeof(FSkeletalMaterial), Get_Z_Construct_UScriptStruct_FSkeletalMaterial_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMaterial>()
{
	return FSkeletalMaterial::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMaterial(FSkeletalMaterial::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMaterial"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMaterial
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMaterial()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMaterial")),new UScriptStruct::TCppStructOps<FSkeletalMaterial>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMaterial;
	struct Z_Construct_UScriptStruct_FSkeletalMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVChannelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVChannelData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedMaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ImportedMaterialSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRecomputeTangent_MetaData[];
#endif
		static void NewProp_bRecomputeTangent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRecomputeTangent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShadowCasting_MetaData[];
#endif
		static void NewProp_bEnableShadowCasting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShadowCasting;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialSlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MaterialInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//~ Begin Material Interface for USkeletalMesh - contains a material and a shadow casting flag\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMaterial>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_UVChannelData_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Data used for texture streaming relative to each UV channels. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Data used for texture streaming relative to each UV channels." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_UVChannelData = { "UVChannelData", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMaterial, UVChannelData), Z_Construct_UScriptStruct_FMeshUVChannelInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_UVChannelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_UVChannelData_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/*This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "This name should be use when we re-import a skeletal mesh so we can order the Materials array like it should be" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_ImportedMaterialSlotName = { "ImportedMaterialSlotName", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMaterial, ImportedMaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_ImportedMaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent_SetBit(void* Obj)
	{
		((FSkeletalMaterial*)Obj)->bRecomputeTangent_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent = { "bRecomputeTangent", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkeletalMaterial), &Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting_SetBit(void* Obj)
	{
		((FSkeletalMaterial*)Obj)->bEnableShadowCasting_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting = { "bEnableShadowCasting", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkeletalMaterial), &Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialSlotName_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/*This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "This name should be use by the gameplay to avoid error if the skeletal mesh Materials array topology change" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMaterial, MaterialSlotName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialSlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialSlotName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialInterface_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialInterface = { "MaterialInterface", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMaterial, MaterialInterface), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialInterface_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_UVChannelData,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_ImportedMaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bRecomputeTangent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_bEnableShadowCasting,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialSlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::NewProp_MaterialInterface,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMaterial",
		sizeof(FSkeletalMaterial),
		alignof(FSkeletalMaterial),
		Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMaterial()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMaterial_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMaterial"), sizeof(FSkeletalMaterial), Get_Z_Construct_UScriptStruct_FSkeletalMaterial_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMaterial_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMaterial_Hash() { return 2316210178U; }
class UScriptStruct* FClothingAssetData_Legacy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothingAssetData_Legacy, Z_Construct_UPackage__Script_Engine(), TEXT("ClothingAssetData_Legacy"), sizeof(FClothingAssetData_Legacy), Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClothingAssetData_Legacy>()
{
	return FClothingAssetData_Legacy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothingAssetData_Legacy(FClothingAssetData_Legacy::StaticStruct, TEXT("/Script/Engine"), TEXT("ClothingAssetData_Legacy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClothingAssetData_Legacy
{
	FScriptStruct_Engine_StaticRegisterNativesFClothingAssetData_Legacy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothingAssetData_Legacy")),new UScriptStruct::TCppStructOps<FClothingAssetData_Legacy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClothingAssetData_Legacy;
	struct Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PhysicsProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClothPropertiesChanged_MetaData[];
#endif
		static void NewProp_bClothPropertiesChanged_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClothPropertiesChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ApexFileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ApexFileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AssetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Legacy struct for handling back compat serialization\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy struct for handling back compat serialization" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothingAssetData_Legacy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties = { "PhysicsProperties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothingAssetData_Legacy, PhysicsProperties), Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_SetBit(void* Obj)
	{
		((FClothingAssetData_Legacy*)Obj)->bClothPropertiesChanged = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged = { "bClothPropertiesChanged", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClothingAssetData_Legacy), &Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName = { "ApexFileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothingAssetData_Legacy, ApexFileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothingAssetData_Legacy, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_PhysicsProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_bClothPropertiesChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_ApexFileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::NewProp_AssetName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClothingAssetData_Legacy",
		sizeof(FClothingAssetData_Legacy),
		alignof(FClothingAssetData_Legacy),
		Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothingAssetData_Legacy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothingAssetData_Legacy"), sizeof(FClothingAssetData_Legacy), Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothingAssetData_Legacy_Hash() { return 910176247U; }
class UScriptStruct* FClothPhysicsProperties_Legacy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy, Z_Construct_UPackage__Script_Engine(), TEXT("ClothPhysicsProperties_Legacy"), sizeof(FClothPhysicsProperties_Legacy), Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClothPhysicsProperties_Legacy>()
{
	return FClothPhysicsProperties_Legacy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClothPhysicsProperties_Legacy(FClothPhysicsProperties_Legacy::StaticStruct, TEXT("/Script/Engine"), TEXT("ClothPhysicsProperties_Legacy"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFClothPhysicsProperties_Legacy
{
	FScriptStruct_Engine_StaticRegisterNativesFClothPhysicsProperties_Legacy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClothPhysicsProperties_Legacy")),new UScriptStruct::TCppStructOps<FClothPhysicsProperties_Legacy>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFClothPhysicsProperties_Legacy;
	struct Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiberResistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiberResistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiberExpansion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiberExpansion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiberCompression_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiberCompression;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SolverFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SolverFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionSquashScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionSquashScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionThickness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SelfCollisionThickness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InertiaBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InertiaBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MassScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MassScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StiffnessFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StiffnessFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Drag_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Drag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TetherStiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TetherStiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Friction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Friction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShearResistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShearResistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BendResistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BendResistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalResistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalResistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalResistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalResistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Legacy object for back-compat loading, no longer used by clothing system\n */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy object for back-compat loading, no longer used by clothing system" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothPhysicsProperties_Legacy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance = { "FiberResistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion = { "FiberExpansion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberExpansion), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression = { "FiberCompression", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, FiberCompression), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency = { "SolverFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SolverFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness = { "SelfCollisionStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale = { "SelfCollisionSquashScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionSquashScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness = { "SelfCollisionThickness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, SelfCollisionThickness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend = { "InertiaBlend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, InertiaBlend), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale = { "MassScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, MassScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, GravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency = { "StiffnessFrequency", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, StiffnessFrequency), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag = { "Drag", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Drag), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit = { "TetherLimit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness = { "TetherStiffness", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, TetherStiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Damping), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction = { "Friction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, Friction), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance = { "ShearResistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, ShearResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance = { "BendResistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, BendResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance = { "HorizontalResistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, HorizontalResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance = { "VerticalResistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClothPhysicsProperties_Legacy, VerticalResistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberResistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberExpansion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_FiberCompression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SolverFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionSquashScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_SelfCollisionThickness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_InertiaBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_MassScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_StiffnessFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Drag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_TetherStiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Damping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_Friction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_ShearResistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_BendResistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_HorizontalResistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::NewProp_VerticalResistance,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClothPhysicsProperties_Legacy",
		sizeof(FClothPhysicsProperties_Legacy),
		alignof(FClothPhysicsProperties_Legacy),
		Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClothPhysicsProperties_Legacy"), sizeof(FClothPhysicsProperties_Legacy), Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClothPhysicsProperties_Legacy_Hash() { return 2009454716U; }
class UScriptStruct* FSkeletalMeshLODInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshLODInfo"), sizeof(FSkeletalMeshLODInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshLODInfo>()
{
	return FSkeletalMeshLODInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshLODInfo(FSkeletalMeshLODInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshLODInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshLODInfo")),new UScriptStruct::TCppStructOps<FSkeletalMeshLODInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshLODInfo;
	struct Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bImportWithBaseMesh_MetaData[];
#endif
		static void NewProp_bImportWithBaseMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImportWithBaseMesh;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportUniformlyDistributedSampling_MetaData[];
#endif
		static void NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSupportUniformlyDistributedSampling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCPUAccess_MetaData[];
#endif
		static void NewProp_bAllowCPUAccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCPUAccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasPerLODVertexColors_MetaData[];
#endif
		static void NewProp_bHasPerLODVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasPerLODVertexColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSimplified_MetaData[];
#endif
		static void NewProp_bHasBeenSimplified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSimplified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinCacheUsage_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SkinCacheUsage;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkinCacheUsage_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceImportFilename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceImportFilename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakePoseOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakePoseOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BakePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BakePose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightOfPrioritization_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightOfPrioritization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToPrioritize_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToPrioritize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToPrioritize_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonesToRemove_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BonesToRemove;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BonesToRemove_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReductionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReductionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuildSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BuildSettings;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedBones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedBones;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RemovedBones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableShadowCasting_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bEnableShadowCasting;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableShadowCasting_Inner;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODMaterialMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODMaterialMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODMaterialMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODHysteresis_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LODHysteresis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing information for a particular LOD level, such as materials and info for when to use it. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Struct containing information for a particular LOD level, such as materials and info for when to use it." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshLODInfo>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh_MetaData[] = {
		{ "Comment", "/*\n\x09 * This boolean specify if the LOD was imported with the base mesh or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "* This boolean specify if the LOD was imported with the base mesh or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh_SetBit(void* Obj)
	{
		((FSkeletalMeshLODInfo*)Obj)->bImportWithBaseMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh = { "bImportWithBaseMesh", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/**\n\x09Mesh supports uniformly distributed sampling in constant time.\n\x09Memory cost is 8 bytes per triangle.\n\x09""Example usage is uniform spawning of particles.\n\x09*/" },
		{ "EditCondition", "bAllowCPUAccess" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Mesh supports uniformly distributed sampling in constant time.\nMemory cost is 8 bytes per triangle.\nExample usage is uniform spawning of particles." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit(void* Obj)
	{
		((FSkeletalMeshLODInfo*)Obj)->bSupportUniformlyDistributedSampling = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling = { "bSupportUniformlyDistributedSampling", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** Keeps this LODs data on the CPU so it can be used for things such as sampling in FX. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Keeps this LODs data on the CPU so it can be used for things such as sampling in FX." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_SetBit(void* Obj)
	{
		((FSkeletalMeshLODInfo*)Obj)->bAllowCPUAccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess = { "bAllowCPUAccess", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_SetBit(void* Obj)
	{
		((FSkeletalMeshLODInfo*)Obj)->bHasPerLODVertexColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors = { "bHasPerLODVertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_MetaData[] = {
		{ "Comment", "/** Whether to disable morph targets for this LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Whether to disable morph targets for this LOD." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_SetBit(void* Obj)
	{
		((FSkeletalMeshLODInfo*)Obj)->bHasBeenSimplified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified = { "bHasBeenSimplified", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FSkeletalMeshLODInfo), &Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/**\n\x09 * How this LOD uses the skin cache feature. Auto will defer to the default project global option. If Ray Tracing is enabled, will imply Enabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "How this LOD uses the skin cache feature. Auto will defer to the default project global option. If Ray Tracing is enabled, will imply Enabled" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage = { "SkinCacheUsage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, SkinCacheUsage), Z_Construct_UEnum_Engine_ESkinCacheUsage, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SourceImportFilename_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** The filename of the file tha was used to import this LOD if it was not auto generated. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "The filename of the file tha was used to import this LOD if it was not auto generated." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SourceImportFilename = { "SourceImportFilename", nullptr, (EPropertyFlags)0x0010040000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, SourceImportFilename), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SourceImportFilename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SourceImportFilename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePoseOverride_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** This is used when you are sharing the LOD settings, but you'd like to override the BasePose. This precedes prior to BakePose*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "This is used when you are sharing the LOD settings, but you'd like to override the BasePose. This precedes prior to BakePose" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePoseOverride = { "BakePoseOverride", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BakePoseOverride), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePoseOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePoseOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePose_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Pose which should be used to reskin vertex influences for which the bones will be removed in this LOD level, uses ref-pose by default" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePose = { "BakePose", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BakePose), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_WeightOfPrioritization_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How much to consideration to give BonesToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "How much to consideration to give BonesToPrioritize.  The weight is an additional vertex simplification penalty where 0 means nothing." },
		{ "UIMin", "0.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_WeightOfPrioritization = { "WeightOfPrioritization", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, WeightOfPrioritization), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_WeightOfPrioritization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_WeightOfPrioritization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Bones which should be prioritized for the quality, this will be weighted toward keeping source data. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Bones which should be prioritized for the quality, this will be weighted toward keeping source data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BonesToPrioritize), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize_Inner = { "BonesToPrioritize", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Bones which should be removed from the skeleton for the LOD level */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Bones which should be removed from the skeleton for the LOD level" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove = { "BonesToRemove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BonesToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove_Inner = { "BonesToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ReductionSettings_MetaData[] = {
		{ "Category", "ReductionSettings" },
		{ "Comment", "/** Reduction settings to apply when building render data. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Reduction settings to apply when building render data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ReductionSettings = { "ReductionSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, ReductionSettings), Z_Construct_UScriptStruct_FSkeletalMeshOptimizationSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ReductionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ReductionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BuildSettings_MetaData[] = {
		{ "Category", "BuildSettings" },
		{ "Comment", "/** build settings to apply when building render data. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "build settings to apply when building render data." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BuildSettings = { "BuildSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, BuildSettings), Z_Construct_UScriptStruct_FSkeletalMeshBuildSettings, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BuildSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BuildSettings_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones_MetaData[] = {
		{ "Comment", "/** This has been removed in editor. We could re-apply this in import time or by mesh reduction utilities*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "This has been removed in editor. We could re-apply this in import time or by mesh reduction utilities" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones = { "RemovedBones", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, RemovedBones_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones_Inner = { "RemovedBones", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting_MetaData[] = {
		{ "Comment", "/** Per-section control over whether to enable shadow casting. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Per-section control over whether to enable shadow casting." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting = { "bEnableShadowCasting", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, bEnableShadowCasting_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting_MetaData)) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting_Inner = { "bEnableShadowCasting", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap_MetaData[] = {
		{ "Comment", "/** Mapping table from this LOD's materials to the USkeletalMesh materials array.\n\x09 * section index is the key\n\x09 * remapped material index is the value, can be INDEX_NONE for no remapping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Mapping table from this LOD's materials to the USkeletalMesh materials array.\nsection index is the key\nremapped material index is the value, can be INDEX_NONE for no remapping" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap = { "LODMaterialMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, LODMaterialMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap_Inner = { "LODMaterialMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODHysteresis_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/**\x09Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple. */" },
		{ "DisplayName", "LOD Hysteresis" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Used to avoid 'flickering' when on LOD boundary. Only taken into account when moving from complex->simple." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODHysteresis = { "LODHysteresis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, LODHysteresis), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODHysteresis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODHysteresis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "SkeletalMeshLODInfo" },
		{ "Comment", "/** \n\x09 * ScreenSize to display this LOD.\n\x09 * The screen size is based around the projected diameter of the bounding\n\x09 * sphere of the model. i.e. 0.5 means half the screen's maximum dimension.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "ScreenSize to display this LOD.\nThe screen size is based around the projected diameter of the bounding\nsphere of the model. i.e. 0.5 means half the screen's maximum dimension." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshLODInfo, ScreenSize), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ScreenSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ScreenSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bImportWithBaseMesh,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bSupportUniformlyDistributedSampling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bAllowCPUAccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasPerLODVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bHasBeenSimplified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SkinCacheUsage_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_SourceImportFilename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePoseOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BakePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_WeightOfPrioritization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToPrioritize_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BonesToRemove_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ReductionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_BuildSettings,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_RemovedBones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_bEnableShadowCasting_Inner,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODMaterialMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_LODHysteresis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::NewProp_ScreenSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshLODInfo",
		sizeof(FSkeletalMeshLODInfo),
		alignof(FSkeletalMeshLODInfo),
		Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshLODInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshLODInfo"), sizeof(FSkeletalMeshLODInfo), Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshLODInfo_Hash() { return 2587008712U; }
class UScriptStruct* FSkeletalMeshClothBuildParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams, Z_Construct_UPackage__Script_Engine(), TEXT("SkeletalMeshClothBuildParams"), sizeof(FSkeletalMeshClothBuildParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSkeletalMeshClothBuildParams>()
{
	return FSkeletalMeshClothBuildParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkeletalMeshClothBuildParams(FSkeletalMeshClothBuildParams::StaticStruct, TEXT("/Script/Engine"), TEXT("SkeletalMeshClothBuildParams"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshClothBuildParams
{
	FScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshClothBuildParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkeletalMeshClothBuildParams")),new UScriptStruct::TCppStructOps<FSkeletalMeshClothBuildParams>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFSkeletalMeshClothBuildParams;
	struct Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveFromMesh_MetaData[];
#endif
		static void NewProp_bRemoveFromMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveFromMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceSection_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceSection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LodIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemapParameters_MetaData[];
#endif
		static void NewProp_bRemapParameters_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemapParameters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLod_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TargetLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_TargetAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct holding parameters needed when creating a new clothing asset or sub asset (LOD) */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Struct holding parameters needed when creating a new clothing asset or sub asset (LOD)" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkeletalMeshClothBuildParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "// Physics asset to extract collisions from, note this will only extract spheres and Sphyls, as that is what the simulation supports.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Physics asset to extract collisions from, note this will only extract spheres and Sphyls, as that is what the simulation supports." },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Whether or not to leave this section behind (if driving a mesh with itself). Enable this if driving a high poly mesh with a low poly\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Whether or not to leave this section behind (if driving a mesh with itself). Enable this if driving a high poly mesh with a low poly" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_SetBit(void* Obj)
	{
		((FSkeletalMeshClothBuildParams*)Obj)->bRemoveFromMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh = { "bRemoveFromMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkeletalMeshClothBuildParams), &Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Section within the specified LOD to extract\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Section within the specified LOD to extract" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection = { "SourceSection", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, SourceSection), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// LOD to extract the section from\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "LOD to extract the section from" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex = { "LodIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, LodIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "Basic" },
		{ "Comment", "// Name of the clothing asset \n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Name of the clothing asset" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, AssetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// If reimporting, this will map the old LOD parameters to the new LOD mesh.\n// If adding a new LOD this will map the parameters from the preceeding LOD.\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If reimporting, this will map the old LOD parameters to the new LOD mesh.\nIf adding a new LOD this will map the parameters from the preceeding LOD." },
	};
#endif
	void Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_SetBit(void* Obj)
	{
		((FSkeletalMeshClothBuildParams*)Obj)->bRemapParameters = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters = { "bRemapParameters", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkeletalMeshClothBuildParams), &Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Target LOD to import to when importing LODs\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Target LOD to import to when importing LODs" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod = { "TargetLod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetLod), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset_MetaData[] = {
		{ "Category", "Target" },
		{ "Comment", "// Target asset when importing LODs\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Target asset when importing LODs" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset = { "TargetAsset", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkeletalMeshClothBuildParams, TargetAsset), Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemoveFromMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_SourceSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_LodIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_bRemapParameters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::NewProp_TargetAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"SkeletalMeshClothBuildParams",
		sizeof(FSkeletalMeshClothBuildParams),
		alignof(FSkeletalMeshClothBuildParams),
		Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkeletalMeshClothBuildParams"), sizeof(FSkeletalMeshClothBuildParams), Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkeletalMeshClothBuildParams_Hash() { return 3740866884U; }
class UScriptStruct* FBoneMirrorExport::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorExport_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorExport, Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorExport"), sizeof(FBoneMirrorExport), Get_Z_Construct_UScriptStruct_FBoneMirrorExport_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneMirrorExport>()
{
	return FBoneMirrorExport::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneMirrorExport(FBoneMirrorExport::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneMirrorExport"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorExport
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorExport()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneMirrorExport")),new UScriptStruct::TCppStructOps<FBoneMirrorExport>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneMirrorExport;
	struct Z_Construct_UScriptStruct_FBoneMirrorExport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SourceBoneName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Structure to export/import bone mirroring information */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Structure to export/import bone mirroring information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorExport>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis = { "BoneFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneMirrorExport, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName = { "SourceBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneMirrorExport, SourceBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "BoneMirrorExport" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneMirrorExport, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneFlipAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_SourceBoneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneMirrorExport",
		sizeof(FBoneMirrorExport),
		alignof(FBoneMirrorExport),
		Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorExport()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorExport_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneMirrorExport"), sizeof(FBoneMirrorExport), Get_Z_Construct_UScriptStruct_FBoneMirrorExport_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneMirrorExport_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorExport_Hash() { return 245737718U; }
class UScriptStruct* FBoneMirrorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoneMirrorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("BoneMirrorInfo"), sizeof(FBoneMirrorInfo), Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FBoneMirrorInfo>()
{
	return FBoneMirrorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoneMirrorInfo(FBoneMirrorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("BoneMirrorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFBoneMirrorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoneMirrorInfo")),new UScriptStruct::TCppStructOps<FBoneMirrorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFBoneMirrorInfo;
	struct Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneFlipAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BoneFlipAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SourceIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoneMirrorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis_MetaData[] = {
		{ "Category", "BoneMirrorInfo" },
		{ "Comment", "/** Axis the bone is mirrored across. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Axis the bone is mirrored across." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis = { "BoneFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneMirrorInfo, BoneFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex_MetaData[] = {
		{ "ArrayClamp", "RefSkeleton" },
		{ "Category", "BoneMirrorInfo" },
		{ "Comment", "/** The bone to mirror. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "The bone to mirror." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex = { "SourceIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoneMirrorInfo, SourceIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_BoneFlipAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::NewProp_SourceIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"BoneMirrorInfo",
		sizeof(FBoneMirrorInfo),
		alignof(FBoneMirrorInfo),
		Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoneMirrorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoneMirrorInfo"), sizeof(FBoneMirrorInfo), Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoneMirrorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoneMirrorInfo_Hash() { return 2137009294U; }
	DEFINE_FUNCTION(USkeletalMesh::execIsSectionUsingCloth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSectionIndex);
		P_GET_UBOOL(Z_Param_bCheckCorrespondingSections);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSectionUsingCloth(Z_Param_InSectionIndex,Z_Param_bCheckCorrespondingSections);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetSocketByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->GetSocketByIndex(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execNumSockets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->NumSockets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execFindSocketInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutTransform);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutBoneIndex);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketInfo(Z_Param_InSocketName,Z_Param_Out_OutTransform,Z_Param_Out_OutBoneIndex,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execFindSocketAndIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocketAndIndex(Z_Param_InSocketName,Z_Param_Out_OutIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execFindSocket)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMeshSocket**)Z_Param__Result=P_THIS->FindSocket(Z_Param_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execK2_GetAllMorphTargetNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=P_THIS->K2_GetAllMorphTargetNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetNodeMappingContainer)
	{
		P_GET_OBJECT(UBlueprint,Z_Param_SourceAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UNodeMappingContainer**)Z_Param__Result=P_THIS->GetNodeMappingContainer(Z_Param_SourceAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execSetLODSettings)
	{
		P_GET_OBJECT(USkeletalMeshLODSettings,Z_Param_InLODSettings);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLODSettings(Z_Param_InLODSettings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetImportedBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetImportedBounds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkeletalMesh::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FBoxSphereBounds*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	void USkeletalMesh::StaticRegisterNativesUSkeletalMesh()
	{
		UClass* Class = USkeletalMesh::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindSocket", &USkeletalMesh::execFindSocket },
			{ "FindSocketAndIndex", &USkeletalMesh::execFindSocketAndIndex },
			{ "FindSocketInfo", &USkeletalMesh::execFindSocketInfo },
			{ "GetBounds", &USkeletalMesh::execGetBounds },
			{ "GetImportedBounds", &USkeletalMesh::execGetImportedBounds },
			{ "GetNodeMappingContainer", &USkeletalMesh::execGetNodeMappingContainer },
			{ "GetSocketByIndex", &USkeletalMesh::execGetSocketByIndex },
			{ "IsSectionUsingCloth", &USkeletalMesh::execIsSectionUsingCloth },
			{ "K2_GetAllMorphTargetNames", &USkeletalMesh::execK2_GetAllMorphTargetNames },
			{ "NumSockets", &USkeletalMesh::execNumSockets },
			{ "SetLODSettings", &USkeletalMesh::execSetLODSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics
	{
		struct SkeletalMesh_eventFindSocket_Parms
		{
			FName InSocketName;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocket_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocket_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** \n\x09 *\x09""Find a socket object in this SkeletalMesh by name. \n\x09 *\x09""Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "FindSocket", nullptr, nullptr, sizeof(SkeletalMesh_eventFindSocket_Parms), Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_FindSocket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics
	{
		struct SkeletalMesh_eventFindSocketAndIndex_Parms
		{
			FName InSocketName;
			int32 OutIndex;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketAndIndex_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_OutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09*\x09""Find a socket object in this SkeletalMesh by name.\n\x09*\x09""Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09*   Also returns the index for the socket allowing for future fast access via GetSocketByIndex()\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Find a socket object in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\nAlso returns the index for the socket allowing for future fast access via GetSocketByIndex()" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "FindSocketAndIndex", nullptr, nullptr, sizeof(SkeletalMesh_eventFindSocketAndIndex_Parms), Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics
	{
		struct SkeletalMesh_eventFindSocketInfo_Parms
		{
			FName InSocketName;
			FTransform OutTransform;
			int32 OutBoneIndex;
			int32 OutIndex;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OutBoneIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutTransform;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketInfo_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_OutIndex = { "OutIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketInfo_Parms, OutIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_OutBoneIndex = { "OutBoneIndex", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketInfo_Parms, OutBoneIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_OutTransform = { "OutTransform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketInfo_Parms, OutTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventFindSocketInfo_Parms, InSocketName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_OutIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_OutBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_OutTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::NewProp_InSocketName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/**\n\x09*\x09""Find a socket object and asscociated info in this SkeletalMesh by name.\n\x09*\x09""Entering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\n\x09*\x09""Also returns the index for the socket allowing for future fast access via GetSocketByIndex()\n\x09*\x09""Also rteturns the socket loca transform and the bone index (if any)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Find a socket object and asscociated info in this SkeletalMesh by name.\nEntering NAME_None will return NULL. If there are multiple sockets with the same name, will return the first one.\nAlso returns the index for the socket allowing for future fast access via GetSocketByIndex()\nAlso rteturns the socket loca transform and the bone index (if any)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "FindSocketInfo", nullptr, nullptr, sizeof(SkeletalMesh_eventFindSocketInfo_Parms), Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_FindSocketInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_FindSocketInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics
	{
		struct SkeletalMesh_eventGetBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventGetBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Get the extended bounds of this mesh (imported bounds plus bounds extension) */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the extended bounds of this mesh (imported bounds plus bounds extension)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetBounds", nullptr, nullptr, sizeof(SkeletalMesh_eventGetBounds_Parms), Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics
	{
		struct SkeletalMesh_eventGetImportedBounds_Parms
		{
			FBoxSphereBounds ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventGetImportedBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Get the original imported bounds of the skel mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Get the original imported bounds of the skel mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetImportedBounds", nullptr, nullptr, sizeof(SkeletalMesh_eventGetImportedBounds_Parms), Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetImportedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetImportedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics
	{
		struct SkeletalMesh_eventGetNodeMappingContainer_Parms
		{
			UBlueprint* SourceAsset;
			UNodeMappingContainer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, ReturnValue), Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_SourceAsset = { "SourceAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventGetNodeMappingContainer_Parms, SourceAsset), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::NewProp_SourceAsset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetNodeMappingContainer", nullptr, nullptr, sizeof(SkeletalMesh_eventGetNodeMappingContainer_Parms), Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics
	{
		struct SkeletalMesh_eventGetSocketByIndex_Parms
		{
			int32 Index;
			USkeletalMeshSocket* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, ReturnValue), Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventGetSocketByIndex_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons.  */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Returns a socket by index. Max index is NumSockets(). The meshes sockets are accessed first, then the skeletons." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "GetSocketByIndex", nullptr, nullptr, sizeof(SkeletalMesh_eventGetSocketByIndex_Parms), Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics
	{
		struct SkeletalMesh_eventIsSectionUsingCloth_Parms
		{
			int32 InSectionIndex;
			bool bCheckCorrespondingSections;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bCheckCorrespondingSections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckCorrespondingSections;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InSectionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections_SetBit(void* Obj)
	{
		((SkeletalMesh_eventIsSectionUsingCloth_Parms*)Obj)->bCheckCorrespondingSections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections = { "bCheckCorrespondingSections", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_InSectionIndex = { "InSectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventIsSectionUsingCloth_Parms, InSectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_bCheckCorrespondingSections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::NewProp_InSectionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Clothing Simulation" },
		{ "Comment", "/** \n\x09 * Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true\n\x09 * disabled sections will defer to correspond sections to see if they use cloth (non-cloth sections\n\x09 * are disabled and another section added when cloth is enabled, using this flag allows for a check\n\x09 * on the original section to succeed)\n\x09 * @param InSectionIndex Index to check\n\x09 * @param bCheckCorrespondingSections Whether to check corresponding sections for disabled sections\n\x09 */" },
		{ "CPP_Default_bCheckCorrespondingSections", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Checks whether the provided section is using APEX cloth. if bCheckCorrespondingSections is true\ndisabled sections will defer to correspond sections to see if they use cloth (non-cloth sections\nare disabled and another section added when cloth is enabled, using this flag allows for a check\non the original section to succeed)\n@param InSectionIndex Index to check\n@param bCheckCorrespondingSections Whether to check corresponding sections for disabled sections" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "IsSectionUsingCloth", nullptr, nullptr, sizeof(SkeletalMesh_eventIsSectionUsingCloth_Parms), Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics
	{
		struct SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 *\x09Returns the list of all morph targets of this skeletal mesh\n\x09 *  @return\x09The list of morph targets\n\x09 */" },
		{ "DisplayName", "Get All Morph Target Names" },
		{ "Keywords", "morph shape" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ScriptName", "GetAllMorphTargetNames" },
		{ "ToolTip", "Returns the list of all morph targets of this skeletal mesh\n@return     The list of morph targets" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "K2_GetAllMorphTargetNames", nullptr, nullptr, sizeof(SkeletalMesh_eventK2_GetAllMorphTargetNames_Parms), Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics
	{
		struct SkeletalMesh_eventNumSockets_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventNumSockets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Returns the number of sockets available. Both on this mesh and it's skeleton. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Returns the number of sockets available. Both on this mesh and it's skeleton." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "NumSockets", nullptr, nullptr, sizeof(SkeletalMesh_eventNumSockets_Parms), Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_NumSockets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_NumSockets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics
	{
		struct SkeletalMesh_eventSetLODSettings_Parms
		{
			USkeletalMeshLODSettings* InLODSettings;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InLODSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::NewProp_InLODSettings = { "InLODSettings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkeletalMesh_eventSetLODSettings_Parms, InLODSettings), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::NewProp_InLODSettings,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkeletalMesh, nullptr, "SetLODSettings", nullptr, nullptr, sizeof(SkeletalMesh_eventSetLODSettings_Parms), Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkeletalMesh_SetLODSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkeletalMesh_SetLODSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkeletalMesh_NoRegister()
	{
		return USkeletalMesh::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkinWeightProfiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkinWeightProfiles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkinWeightProfiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sockets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sockets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sockets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SamplingInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SamplingInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshClothingAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MeshClothingAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshClothingAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessAnimBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PostProcessAnimBlueprint;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothingAssets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClothingAssets;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClothingAssets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetargetBasePose_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RetargetBasePose;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RetargetBasePose_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloorOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloorOffset;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphTargets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MorphTargets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MorphTargets_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewAttachedAssetContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PreviewAttachedAssetContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraOrthoZoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultEditorCameraOrthoZoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLookAt_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLookAt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEditorCameraLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEditorCameraLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasCustomDefaultEditorCamera_MetaData[];
#endif
		static void NewProp_bHasCustomDefaultEditorCamera_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasCustomDefaultEditorCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThumbnailInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFileTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFileTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SourceFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetImportData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetImportData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeMappingData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeMappingData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NodeMappingData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShadowPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShadowPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodySetup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodySetup;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VertexColorGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VertexColorGuid;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePerPolyCollision_MetaData[];
#endif
		static void NewProp_bEnablePerPolyCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePerPolyCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasVertexColors_MetaData[];
#endif
		static void NewProp_bHasVertexColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasVertexColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenSimplified_MetaData[];
#endif
		static void NewProp_bHasBeenSimplified_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenSimplified;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPrecisionTangentBasis_MetaData[];
#endif
		static void NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPrecisionTangentBasis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecisionUVs_MetaData[];
#endif
		static void NewProp_bUseFullPrecisionUVs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecisionUVs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorFlipAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkelMirrorFlipAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SkelMirrorAxis;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LODSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumOptionalLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxNumOptionalLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumStreamedLODs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxNumStreamedLODs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSupportLODStreaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bSupportLODStreaming;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableBelowMinLodStripping_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DisableBelowMinLodStripping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinLod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LODInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LODInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMirrorTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SkelMirrorTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkelMirrorTable_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NegativeBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NegativeBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PositiveBoundsExtension_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PositiveBoundsExtension;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExtendedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExtendedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImportedBounds_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImportedBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshEditorDataObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshEditorDataObject;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStreamableRenderAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkeletalMesh_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkeletalMesh_FindSocket, "FindSocket" }, // 2280068979
		{ &Z_Construct_UFunction_USkeletalMesh_FindSocketAndIndex, "FindSocketAndIndex" }, // 471929735
		{ &Z_Construct_UFunction_USkeletalMesh_FindSocketInfo, "FindSocketInfo" }, // 1022230108
		{ &Z_Construct_UFunction_USkeletalMesh_GetBounds, "GetBounds" }, // 244950815
		{ &Z_Construct_UFunction_USkeletalMesh_GetImportedBounds, "GetImportedBounds" }, // 218597903
		{ &Z_Construct_UFunction_USkeletalMesh_GetNodeMappingContainer, "GetNodeMappingContainer" }, // 2826007012
		{ &Z_Construct_UFunction_USkeletalMesh_GetSocketByIndex, "GetSocketByIndex" }, // 343244038
		{ &Z_Construct_UFunction_USkeletalMesh_IsSectionUsingCloth, "IsSectionUsingCloth" }, // 3433295420
		{ &Z_Construct_UFunction_USkeletalMesh_K2_GetAllMorphTargetNames, "K2_GetAllMorphTargetNames" }, // 3068951898
		{ &Z_Construct_UFunction_USkeletalMesh_NumSockets, "NumSockets" }, // 2886246522
		{ &Z_Construct_UFunction_USkeletalMesh_SetLODSettings, "SetLODSettings" }, // 721446850
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.\n * Skeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.\n * The 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Engine/SkeletalMesh.h" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "SkeletalMesh is geometry bound to a hierarchical skeleton of bones which can be animated for the purpose of deforming the mesh.\nSkeletal Meshes are built up of two parts; a set of polygons composed to make up the surface of the mesh, and a hierarchical skeleton which can be used to animate the polygons.\nThe 3D models, rigging, and animations are created in an external modeling and animation application (3DSMax, Maya, Softimage, etc).\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Content/Types/SkeletalMeshes/" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_MetaData[] = {
		{ "Category", "SkinWeights" },
		{ "Comment", "/** Set of skin weight profiles associated with this mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Set of skin weight profiles associated with this mesh" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles = { "SkinWeightProfiles", nullptr, (EPropertyFlags)0x0020080000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, SkinWeightProfiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_Inner = { "SkinWeightProfiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkinWeightProfileInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_MetaData[] = {
		{ "Comment", "/** \n\x09 *\x09""Array of named socket locations, set up in editor and used as a shortcut instead of specifying \n\x09 *\x09""everything explicitly to AttachComponent in the SkeletalMeshComponent. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of named socket locations, set up in editor and used as a shortcut instead of specifying\neverything explicitly to AttachComponent in the SkeletalMeshComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets = { "Sockets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, Sockets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_Inner = { "Sockets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeletalMeshSocket_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x00200c8000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo_MetaData[] = {
		{ "Category", "Sampling" },
		{ "Comment", "/** Defines if and how to generate a set of precomputed data allowing targeted and fast sampling of this mesh on the CPU. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Defines if and how to generate a set of precomputed data allowing targeted and fast sampling of this mesh on the CPU." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo = { "SamplingInfo", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, SamplingInfo), Z_Construct_UScriptStruct_FSkeletalMeshSamplingInfo, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_MetaData[] = {
		{ "Category", "Clothing" },
		{ "Comment", "/** \n\x09 * Clothing assets imported to this mesh. May or may not be in use currently on the mesh.\n\x09 * Ordering not guaranteed, use the provided getters to access elements in this array\n\x09 * whenever possible\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Clothing assets imported to this mesh. May or may not be in use currently on the mesh.\nOrdering not guaranteed, use the provided getters to access elements in this array\nwhenever possible" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets = { "MeshClothingAssets", nullptr, (EPropertyFlags)0x0010000000000055, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, MeshClothingAssets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_Inner = { "MeshClothingAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UClothingAssetBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** Animation Blueprint class to run as a post process for this mesh.\n\x09 *  This blueprint will be ran before physics, but after the main\n\x09 *  anim instance for any skeletal mesh component using this mesh.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Animation Blueprint class to run as a post process for this mesh.\nThis blueprint will be ran before physics, but after the main\nanim instance for any skeletal mesh component using this mesh." },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint = { "PostProcessAnimBlueprint", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, PostProcessAnimBlueprint), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_MetaData[] = {
		{ "Comment", "/** Legacy clothing asset data, will be converted to new assets after loading */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Legacy clothing asset data, will be converted to new assets after loading" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets = { "ClothingAssets", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, ClothingAssets_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_Inner = { "ClothingAssets", nullptr, (EPropertyFlags)0x0000000820000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothingAssetData_Legacy, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_MetaData[] = {
		{ "Comment", "/** This is buffer that saves pose that is used by retargeting*/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "This is buffer that saves pose that is used by retargeting" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose = { "RetargetBasePose", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, RetargetBasePose), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_Inner = { "RetargetBasePose", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset_MetaData[] = {
		{ "Comment", "/** Height offset for the floor mesh in the editor */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Height offset for the floor mesh in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset = { "FloorOffset", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, FloorOffset), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets = { "MorphTargets", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, MorphTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_Inner = { "MorphTargets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMorphTarget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer_MetaData[] = {
		{ "Comment", "/* Attached assets component for this mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Attached assets component for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer = { "PreviewAttachedAssetContainer", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, PreviewAttachedAssetContainer), Z_Construct_UScriptStruct_FPreviewAssetAttachContainer, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom_MetaData[] = {
		{ "Comment", "/** Default camera ortho zoom */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Default camera ortho zoom" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom = { "DefaultEditorCameraOrthoZoom", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraOrthoZoom), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt_MetaData[] = {
		{ "Comment", "/** Default camera look at */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Default camera look at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt = { "DefaultEditorCameraLookAt", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLookAt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation_MetaData[] = {
		{ "Comment", "/** Default camera rotation */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Default camera rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation = { "DefaultEditorCameraRotation", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation_MetaData[] = {
		{ "Comment", "/** Default camera location */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Default camera location" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation = { "DefaultEditorCameraLocation", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, DefaultEditorCameraLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_MetaData[] = {
		{ "Comment", "/** Should we use a custom camera transform when viewing this mesh in the tools */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Should we use a custom camera transform when viewing this mesh in the tools" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bHasCustomDefaultEditorCamera = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera = { "bHasCustomDefaultEditorCamera", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00120408000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp_MetaData[] = {
		{ "Comment", "/** Date/Time-stamp of the file from the last import */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Date/Time-stamp of the file from the last import" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp = { "SourceFileTimestamp", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, SourceFileTimestamp_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath_MetaData[] = {
		{ "Comment", "/** Path to the resource used to construct this skeletal mesh */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Path to the resource used to construct this skeletal mesh" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath = { "SourceFilePath", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, SourceFilePath_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData_MetaData[] = {
		{ "Category", "ImportSettings" },
		{ "Comment", "/** Importing data and options used for this mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Importing data and options used for this mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData = { "AssetImportData", nullptr, (EPropertyFlags)0x0012000800080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, AssetImportData), Z_Construct_UClass_UAssetImportData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Mapping data that is saved */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Mapping data that is saved" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData = { "NodeMappingData", nullptr, (EPropertyFlags)0x0010000000000055, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, NodeMappingData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_Inner = { "NodeMappingData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNodeMappingContainer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset_MetaData[] = {
		{ "Category", "Lighting" },
		{ "Comment", "/**\n\x09 * Physics asset whose shapes will be used for shadowing when components have bCastCharacterCapsuleDirectShadow or bCastCharacterCapsuleIndirectShadow enabled.\n\x09 * Only spheres and sphyl shapes in the physics asset can be supported.  The more shapes used, the higher the cost of the capsule shadows will be.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Physics asset whose shapes will be used for shadowing when components have bCastCharacterCapsuleDirectShadow or bCastCharacterCapsuleIndirectShadow enabled.\nOnly spheres and sphyl shapes in the physics asset can be supported.  The more shapes used, the higher the cost of the capsule shadows will be." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset = { "ShadowPhysicsAsset", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, ShadowPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/**\n\x09 *\x09Physics and collision information used for this USkeletalMesh, set up in Physics Asset Editor.\n\x09 *\x09This is used for per-bone hit detection, accurate bounding box calculation and ragdoll physics for example.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Physics and collision information used for this USkeletalMesh, set up in Physics Asset Editor.\nThis is used for per-bone hit detection, accurate bounding box calculation and ragdoll physics for example." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010010000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup_MetaData[] = {
		{ "Comment", "// Physics data for the per poly collision case. In 99% of cases you will not need this and are better off using simple ragdoll collision (physics asset)\n" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Physics data for the per poly collision case. In 99% of cases you will not need this and are better off using simple ragdoll collision (physics asset)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup = { "BodySetup", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, BodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid_MetaData[] = {
		{ "Comment", "/** The guid to compute the ddc key, it must be dirty when we change the vertex color. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "The guid to compute the ddc key, it must be dirty when we change the vertex color." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid = { "VertexColorGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, VertexColorGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_MetaData[] = {
		{ "Category", "Physics" },
		{ "Comment", "/** Uses skinned data for collision data. Per poly collision cannot be used for simulation, in most cases you are better off using the physics asset */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Uses skinned data for collision data. Per poly collision cannot be used for simulation, in most cases you are better off using the physics asset" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bEnablePerPolyCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision = { "bEnablePerPolyCollision", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_MetaData[] = {
		{ "Comment", "/** Whether or not the mesh has vertex colors */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Whether or not the mesh has vertex colors" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bHasVertexColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors = { "bHasVertexColors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_MetaData[] = {
		{ "Comment", "/** true if this mesh has ever been simplified with Simplygon. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "true if this mesh has ever been simplified with Simplygon." },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bHasBeenSimplified = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified = { "bHasBeenSimplified", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData[] = {
		{ "Comment", "/** If true, tangents will be stored at 16 bit vs 8 bit precision */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If true, tangents will be stored at 16 bit vs 8 bit precision" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bUseHighPrecisionTangentBasis_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis = { "bUseHighPrecisionTangentBasis", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_MetaData[] = {
		{ "Comment", "/** If true, use 32 bit UVs. If false, use 16 bit UVs to save memory */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "If true, use 32 bit UVs. If false, use 16 bit UVs to save memory" },
	};
#endif
	void Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_SetBit(void* Obj)
	{
		((USkeletalMesh*)Obj)->bUseFullPrecisionUVs_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs = { "bUseFullPrecisionUVs", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(USkeletalMesh), &Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_SetBit, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis = { "SkelMirrorFlipAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, SkelMirrorFlipAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis = { "SkelMirrorAxis", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, SkelMirrorAxis), Z_Construct_UEnum_CoreUObject_EAxis, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings_MetaData[] = {
		{ "BlueprintSetter", "SetLODSettings" },
		{ "Category", "LODSettings" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings = { "LODSettings", nullptr, (EPropertyFlags)0x0010010800000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, LODSettings), Z_Construct_UClass_USkeletalMeshLODSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Maximum number of LODs below min LOD level that can be saved to optional pak (currently, need to be either 0 or > num of LODs below MinLod) */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Maximum number of LODs below min LOD level that can be saved to optional pak (currently, need to be either 0 or > num of LODs below MinLod)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs = { "MaxNumOptionalLODs", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, MaxNumOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Maximum number of LODs that can be streamed */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Maximum number of LODs that can be streamed" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs = { "MaxNumStreamedLODs", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, MaxNumStreamedLODs), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Whether we can stream the LODs of this mesh */" },
		{ "DisplayName", "Stream LODs" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Whether we can stream the LODs of this mesh" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming = { "bSupportLODStreaming", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, bSupportLODStreaming), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** when true all lods below minlod will still be cooked */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "when true all lods below minlod will still be cooked" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping = { "DisableBelowMinLodStripping", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, DisableBelowMinLodStripping), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod_MetaData[] = {
		{ "Category", "LODSettings" },
		{ "Comment", "/** Minimum LOD to render. Can be overridden per component as well as set here for all mesh instances here */" },
		{ "DisplayName", "Minimum LOD" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Minimum LOD to render. Can be overridden per component as well as set here for all mesh instances here" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod = { "MinLod", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, MinLod), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_MetaData[] = {
		{ "Category", "LevelOfDetail" },
		{ "Comment", "/** Struct containing information for each LOD level, such as materials to use, and when use the LOD. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Struct containing information for each LOD level, such as materials to use, and when use the LOD." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo = { "LODInfo", nullptr, (EPropertyFlags)0x0040000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, LODInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_Inner = { "LODInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMeshLODInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_MetaData[] = {
		{ "Category", "Mirroring" },
		{ "Comment", "/** List of bones that should be mirrored. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "List of bones that should be mirrored." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable = { "SkelMirrorTable", nullptr, (EPropertyFlags)0x0010000000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, SkelMirrorTable), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_Inner = { "SkelMirrorTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBoneMirrorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "SkeletalMesh" },
		{ "Comment", "/** List of materials applied to this mesh. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "List of materials applied to this mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000202015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSkeletalMaterial, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Bound extension values in addition to imported bound in the negative direction of XYZ, \n\x09 *\x09positive value increases bound size and negative value decreases bound size. \n\x09 *\x09The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound]. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Bound extension values in addition to imported bound in the negative direction of XYZ,\n    positive value increases bound size and negative value decreases bound size.\n    The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension = { "NegativeBoundsExtension", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, NegativeBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Bound extension values in addition to imported bound in the positive direction of XYZ, \n\x09 *\x09positive value increases bound size and negative value decreases bound size. \n\x09 *\x09The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound]. */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Bound extension values in addition to imported bound in the positive direction of XYZ,\n    positive value increases bound size and negative value decreases bound size.\n    The final bound would be from [Imported Bound - Negative Bound] to [Imported Bound + Positive Bound]." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension = { "PositiveBoundsExtension", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, PositiveBoundsExtension), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds_MetaData[] = {
		{ "Comment", "/** Bounds extended by user values below */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Bounds extended by user values below" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds = { "ExtendedBounds", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, ExtendedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds_MetaData[] = {
		{ "Comment", "/** Original imported mesh bounds */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Original imported mesh bounds" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds = { "ImportedBounds", nullptr, (EPropertyFlags)0x0040000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, ImportedBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Skeleton of this skeletal mesh **/" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "Skeleton of this skeletal mesh *" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010010000020015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject_MetaData[] = {
		{ "Comment", "/*\n\x09 * This editor data asset is save in the same package has the skeletalmesh, the editor data asset is always loaded.\n\x09 * If the skeletal mesh is rename the editor data asset will also be rename: the name is SkeletalMeshName_USkeletalMeshEditorData\n\x09 * If the skeletal mesh is duplicate the editor data asset will also be duplicate\n\x09 * There is only one editor data asset possible per skeletalmesh.\n\x09 * The reason we store the editor data in a separate asset is because the size of it can be very big and affect the editor performance. (undo/redo transactions)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SkeletalMesh.h" },
		{ "ToolTip", "* This editor data asset is save in the same package has the skeletalmesh, the editor data asset is always loaded.\n* If the skeletal mesh is rename the editor data asset will also be rename: the name is SkeletalMeshName_USkeletalMeshEditorData\n* If the skeletal mesh is duplicate the editor data asset will also be duplicate\n* There is only one editor data asset possible per skeletalmesh.\n* The reason we store the editor data in a separate asset is because the size of it can be very big and affect the editor performance. (undo/redo transactions)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject = { "MeshEditorDataObject", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkeletalMesh, MeshEditorDataObject), Z_Construct_UClass_USkeletalMeshEditorData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkinWeightProfiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Sockets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetUserData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SamplingInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshClothingAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PostProcessAnimBlueprint,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ClothingAssets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_RetargetBasePose_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_FloorOffset,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MorphTargets_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PreviewAttachedAssetContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraOrthoZoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLookAt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DefaultEditorCameraLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasCustomDefaultEditorCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ThumbnailInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFileTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SourceFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_AssetImportData,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NodeMappingData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ShadowPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_BodySetup,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_VertexColorGuid,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bEnablePerPolyCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasVertexColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bHasBeenSimplified,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseHighPrecisionTangentBasis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bUseFullPrecisionUVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorFlipAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorAxis,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumOptionalLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MaxNumStreamedLODs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_bSupportLODStreaming,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_DisableBelowMinLodStripping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MinLod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_LODInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_SkelMirrorTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Materials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_NegativeBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_PositiveBoundsExtension,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ExtendedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_ImportedBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_Skeleton,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMesh_Statics::NewProp_MeshEditorDataObject,
#endif // WITH_EDITORONLY_DATA
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USkeletalMesh_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInterface_CollisionDataProvider_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_CollisionDataProvider), false },
			{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, IInterface_AssetUserData), false },
			{ Z_Construct_UClass_UNodeMappingProviderInterface_NoRegister, (int32)VTABLE_OFFSET(USkeletalMesh, INodeMappingProviderInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMesh_Statics::ClassParams = {
		&USkeletalMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkeletalMesh_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkeletalMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkeletalMesh, 3169067882);
	template<> ENGINE_API UClass* StaticClass<USkeletalMesh>()
	{
		return USkeletalMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkeletalMesh(Z_Construct_UClass_USkeletalMesh, &USkeletalMesh::StaticClass, TEXT("/Script/Engine"), TEXT("USkeletalMesh"), false, nullptr, nullptr, nullptr);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkeletalMesh)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
