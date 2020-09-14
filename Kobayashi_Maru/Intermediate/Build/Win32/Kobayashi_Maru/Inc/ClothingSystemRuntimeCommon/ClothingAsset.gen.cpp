// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeCommon/Public/ClothingAsset.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothingAsset() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCustomData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCommon_NoRegister();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothingAssetCommon();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothingAssetBase();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothConfig_Legacy();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FClothLODDataCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothConfigBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
// End Cross Module References
	void UClothingAssetCustomData::StaticRegisterNativesUClothingAssetCustomData()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetCustomData_NoRegister()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetCustomData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetCustomData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom data wrapper for clothing assets.\n * If writing a new clothing asset importer, creating a new derived custom data \n * is how to store importer (and possibly simulation) data that importer will \n * create. This needs to be set to the \\c CustomData member on the asset your \n * factory creates.\n *\n * Testing whether a UClothingAssetCommon was made from a custom plugin can be \n * achieved with:\n * \\code if(AssetPtr->CustomData->IsA(UMyCustomData::StaticClass())) \\endcode\n */" },
		{ "IncludePath", "ClothingAsset.h" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Custom data wrapper for clothing assets.\nIf writing a new clothing asset importer, creating a new derived custom data\nis how to store importer (and possibly simulation) data that importer will\ncreate. This needs to be set to the \\c CustomData member on the asset your\nfactory creates.\n\nTesting whether a UClothingAssetCommon was made from a custom plugin can be\nachieved with:\n\\code if(AssetPtr->CustomData->IsA(UMyCustomData::StaticClass())) \\endcode" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetCustomData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetCustomData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetCustomData_Statics::ClassParams = {
		&UClothingAssetCustomData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCustomData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetCustomData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingAssetCustomData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetCustomData, 3267348867);
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothingAssetCustomData>()
	{
		return UClothingAssetCustomData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetCustomData(Z_Construct_UClass_UClothingAssetCustomData, &UClothingAssetCustomData::StaticClass, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("UClothingAssetCustomData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetCustomData);
	void UClothingAssetCommon::StaticRegisterNativesUClothingAssetCommon()
	{
	}
	UClass* Z_Construct_UClass_UClothingAssetCommon_NoRegister()
	{
		return UClothingAssetCommon::StaticClass();
	}
	struct Z_Construct_UClass_UClothingAssetCommon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClothConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReferenceBoneIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReferenceBoneIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedBoneIndices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedBoneIndices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UsedBoneIndices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedBoneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedBoneNames;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UsedBoneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LodMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LodMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LodData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LodData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LodData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothLodData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClothLodData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothLodData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChaosClothSimConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChaosClothSimConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothSimConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothSimConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothSharedSimConfig_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothSharedSimConfig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothConfigs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ClothConfigs;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ClothConfigs_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClothConfigs_ValueProp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClothConfigs_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothingAssetCommon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothingAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Implementation of non-solver specific, but common Engine related functionality.\n *\n * Solver specific implementations may wish to override this class to construct\n * their own default instances of child classes, such as \\c ClothSimConfig and \n * \\c CustomData, as well as override the \\c AddNewLod() factory to build their \n * own implementation of \\c UClothLODDataBase.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "ClothingAsset.h" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Implementation of non-solver specific, but common Engine related functionality.\n\nSolver specific implementations may wish to override this class to construct\ntheir own default instances of child classes, such as \\c ClothSimConfig and\n\\c CustomData, as well as override the \\c AddNewLod() factory to build their\nown implementation of \\c UClothLODDataBase." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig_MetaData[] = {
		{ "Comment", "/** \n\x09 * Deprecated property for transitioning the \\c FClothConfig struct to the \n\x09 * \\c UClothConfigBase array, in a new property called \\c ClothConfigs.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Deprecated property for transitioning the \\c FClothConfig struct to the\n\\c UClothConfigBase array, in a new property called \\c ClothConfigs." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig = { "ClothConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, ClothConfig_DEPRECATED), Z_Construct_UScriptStruct_FClothConfig_Legacy, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData_MetaData[] = {
		{ "Comment", "// Custom data applied by the importer depending on where the asset was imported from.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Custom data applied by the importer depending on where the asset was imported from." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, CustomData), Z_Construct_UClass_UClothingAssetCustomData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex_MetaData[] = {
		{ "Comment", "// Bone to treat as the root of the simulation space.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Bone to treat as the root of the simulation space." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex = { "ReferenceBoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, ReferenceBoneIndex), METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_MetaData[] = {
		{ "Comment", "// List of the indices for the bones in UsedBoneNames, used for remapping.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "List of the indices for the bones in UsedBoneNames, used for remapping." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, UsedBoneIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_Inner = { "UsedBoneIndices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_MetaData[] = {
		{ "Comment", "// List of bones this asset uses inside its parent mesh.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "List of bones this asset uses inside its parent mesh." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, UsedBoneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_Inner = { "UsedBoneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_MetaData[] = {
		{ "Comment", "// Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod).\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Tracks which clothing LOD each skel mesh LOD corresponds to (LodMap[SkelLod]=ClothingLod)." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap = { "LodMap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, LodMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_Inner = { "LodMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_MetaData[] = {
		{ "Comment", "// The actual asset data, listed by LOD.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "The actual asset data, listed by LOD." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData = { "LodData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, LodData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_Inner = { "LodData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FClothLODDataCommon, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_MetaData[] = {
		{ "Comment", "// Deprecated. Use LodData instead\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Deprecated. Use LodData instead" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData = { "ClothLodData", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, ClothLodData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_Inner = { "ClothLodData", nullptr, (EPropertyFlags)0x0000000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UClothLODDataCommon_Legacy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig_MetaData[] = {
		{ "Comment", "// Parameters for how Chaos cloth behaves \n// These will not affect NVcloth\n// For now, we have two configuration parameters so that we can switch between chaos and\n// non chaos at will without losing the original NVcloth data\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Parameters for how Chaos cloth behaves\nThese will not affect NVcloth\nFor now, we have two configuration parameters so that we can switch between chaos and\nnon chaos at will without losing the original NVcloth data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig = { "ChaosClothSimConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, ChaosClothSimConfig_DEPRECATED), Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig_MetaData[] = {
		{ "Comment", "// Parameters for how the NVcloth behaves.\n// These will have no effect on Chaos cloth\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Parameters for how the NVcloth behaves.\nThese will have no effect on Chaos cloth" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig = { "ClothSimConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, ClothSimConfig_DEPRECATED), Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig_MetaData[] = {
		{ "Comment", "// Shared by all cloth instances in a skeletal mesh\n// Only supported with Chaos Cloth for now\n// This may not be editable on unused cloth assets\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Shared by all cloth instances in a skeletal mesh\nOnly supported with Chaos Cloth for now\nThis may not be editable on unused cloth assets" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig = { "ClothSharedSimConfig", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, ClothSharedSimConfig_DEPRECATED), Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Simulation specific cloth parameters. \n// Use GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Simulation specific cloth parameters.\nUse GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs = { "ClothConfigs", nullptr, (EPropertyFlags)0x001000800002005d, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, ClothConfigs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_Key_KeyProp = { "ClothConfigs_Key", nullptr, (EPropertyFlags)0x00020000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// Simulation specific cloth parameters. \n// Use GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "Simulation specific cloth parameters.\nUse GetClothConfig() to retrieve the correct parameters/config type for the desired cloth simulation system." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp = { "ClothConfigs", nullptr, (EPropertyFlags)0x00020000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UClothConfigBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset_MetaData[] = {
		{ "Category", "Config" },
		{ "Comment", "// The physics asset to extract collisions from when building a simulation.\n" },
		{ "ModuleRelativePath", "Public/ClothingAsset.h" },
		{ "ToolTip", "The physics asset to extract collisions from when building a simulation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset = { "PhysicsAsset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothingAssetCommon, PhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothingAssetCommon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_CustomData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ReferenceBoneIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneIndices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_UsedBoneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_LodData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothLodData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ChaosClothSimConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSimConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothSharedSimConfig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_ClothConfigs_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothingAssetCommon_Statics::NewProp_PhysicsAsset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothingAssetCommon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothingAssetCommon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothingAssetCommon_Statics::ClassParams = {
		&UClothingAssetCommon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothingAssetCommon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothingAssetCommon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothingAssetCommon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothingAssetCommon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothingAssetCommon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothingAssetCommon, 1740077665);
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UClass* StaticClass<UClothingAssetCommon>()
	{
		return UClothingAssetCommon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothingAssetCommon(Z_Construct_UClass_UClothingAssetCommon, &UClothingAssetCommon::StaticClass, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("UClothingAssetCommon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothingAssetCommon);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UClothingAssetCommon)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
