// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeNv/Public/ClothPhysicalMeshDataNv_Legacy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataNv_Legacy() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_NoRegister();
	CLOTHINGSYSTEMRUNTIMENV_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy();
	CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeNv();
// End Cross Module References
	void UClothPhysicalMeshDataNv_Legacy::StaticRegisterNativesUClothPhysicalMeshDataNv_Legacy()
	{
	}
	UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_NoRegister()
	{
		return UClothPhysicalMeshDataNv_Legacy::StaticClass();
	}
	struct Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimDriveMultipliers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimDriveMultipliers;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnimDriveMultipliers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopRadiuses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopRadiuses;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopRadiuses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackstopDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BackstopDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BackstopDistances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaxDistances;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistances_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy,
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeNv,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, use FClothPhysicalMeshData instead.\n * NV specific spatial simulation data for a mesh.\n */" },
		{ "IncludePath", "ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Deprecated, use FClothPhysicalMeshData instead.\nNV specific spatial simulation data for a mesh." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers_MetaData[] = {
		{ "Comment", "// Strength of anim drive per-particle (spring driving particle back to skinned location\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Strength of anim drive per-particle (spring driving particle back to skinned location" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, AnimDriveMultipliers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers_Inner = { "AnimDriveMultipliers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses_MetaData[] = {
		{ "Comment", "// Radius of movement to allow for backstop movement\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Radius of movement to allow for backstop movement" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, BackstopRadiuses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses_Inner = { "BackstopRadiuses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances_MetaData[] = {
		{ "Comment", "// Distance along the plane of the surface that the particles can travel (separation constraint)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "Distance along the plane of the surface that the particles can travel (separation constraint)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances = { "BackstopDistances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, BackstopDistances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances_Inner = { "BackstopDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances_MetaData[] = {
		{ "Comment", "// The distance that each vertex can move away from its reference (skinned) position\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataNv_Legacy.h" },
		{ "ToolTip", "The distance that each vertex can move away from its reference (skinned) position" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances = { "MaxDistances", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UClothPhysicalMeshDataNv_Legacy, MaxDistances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances_Inner = { "MaxDistances", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_AnimDriveMultipliers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopRadiuses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_BackstopDistances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::NewProp_MaxDistances_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPhysicalMeshDataNv_Legacy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::ClassParams = {
		&UClothPhysicalMeshDataNv_Legacy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UClothPhysicalMeshDataNv_Legacy, 3286695387);
	template<> CLOTHINGSYSTEMRUNTIMENV_API UClass* StaticClass<UClothPhysicalMeshDataNv_Legacy>()
	{
		return UClothPhysicalMeshDataNv_Legacy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UClothPhysicalMeshDataNv_Legacy(Z_Construct_UClass_UClothPhysicalMeshDataNv_Legacy, &UClothPhysicalMeshDataNv_Legacy::StaticClass, TEXT("/Script/ClothingSystemRuntimeNv"), TEXT("UClothPhysicalMeshDataNv_Legacy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPhysicalMeshDataNv_Legacy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
