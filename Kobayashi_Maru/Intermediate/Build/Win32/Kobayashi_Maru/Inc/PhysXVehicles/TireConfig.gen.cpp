// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PhysXVehicles/Public/TireConfig.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTireConfig() {}
// Cross Module References
	PHYSXVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FTireConfigMaterialFriction();
	UPackage* Z_Construct_UPackage__Script_PhysXVehicles();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UTireConfig_NoRegister();
	PHYSXVEHICLES_API UClass* Z_Construct_UClass_UTireConfig();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
// End Cross Module References
class UScriptStruct* FTireConfigMaterialFriction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PHYSXVEHICLES_API uint32 Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTireConfigMaterialFriction, Z_Construct_UPackage__Script_PhysXVehicles(), TEXT("TireConfigMaterialFriction"), sizeof(FTireConfigMaterialFriction), Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Hash());
	}
	return Singleton;
}
template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<FTireConfigMaterialFriction>()
{
	return FTireConfigMaterialFriction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTireConfigMaterialFriction(FTireConfigMaterialFriction::StaticStruct, TEXT("/Script/PhysXVehicles"), TEXT("TireConfigMaterialFriction"), false, nullptr, nullptr);
static struct FScriptStruct_PhysXVehicles_StaticRegisterNativesFTireConfigMaterialFriction
{
	FScriptStruct_PhysXVehicles_StaticRegisterNativesFTireConfigMaterialFriction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TireConfigMaterialFriction")),new UScriptStruct::TCppStructOps<FTireConfigMaterialFriction>);
	}
} ScriptStruct_PhysXVehicles_StaticRegisterNativesFTireConfigMaterialFriction;
	struct Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterial;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Allows overriding of friction of this tire config on a specific material */" },
		{ "ModuleRelativePath", "Public/TireConfig.h" },
		{ "ToolTip", "Allows overriding of friction of this tire config on a specific material" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTireConfigMaterialFriction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_FrictionScale_MetaData[] = {
		{ "Category", "FTireConfigMaterialFriction" },
		{ "Comment", "/** Friction scale for this type of material */" },
		{ "ModuleRelativePath", "Public/TireConfig.h" },
		{ "ToolTip", "Friction scale for this type of material" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_FrictionScale = { "FrictionScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTireConfigMaterialFriction, FrictionScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_FrictionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_FrictionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_PhysicalMaterial_MetaData[] = {
		{ "Category", "FTireConfigMaterialFriction" },
		{ "Comment", "/** Physical material for friction scale */" },
		{ "ModuleRelativePath", "Public/TireConfig.h" },
		{ "ToolTip", "Physical material for friction scale" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_PhysicalMaterial = { "PhysicalMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTireConfigMaterialFriction, PhysicalMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_PhysicalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_PhysicalMaterial_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_FrictionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::NewProp_PhysicalMaterial,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
		nullptr,
		&NewStructOps,
		"TireConfigMaterialFriction",
		sizeof(FTireConfigMaterialFriction),
		alignof(FTireConfigMaterialFriction),
		Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTireConfigMaterialFriction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PhysXVehicles();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TireConfigMaterialFriction"), sizeof(FTireConfigMaterialFriction), Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTireConfigMaterialFriction_Hash() { return 687591263U; }
	void UTireConfig::StaticRegisterNativesUTireConfig()
	{
	}
	UClass* Z_Construct_UClass_UTireConfig_NoRegister()
	{
		return UTireConfig::StaticClass();
	}
	struct Z_Construct_UClass_UTireConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TireFrictionScales_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TireFrictionScales;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TireFrictionScales_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrictionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrictionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTireConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_PhysXVehicles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTireConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Represents a type of tire surface used to specify friction values against physical materials. */" },
		{ "IncludePath", "TireConfig.h" },
		{ "ModuleRelativePath", "Public/TireConfig.h" },
		{ "ToolTip", "Represents a type of tire surface used to specify friction values against physical materials." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTireConfig_Statics::NewProp_TireFrictionScales_MetaData[] = {
		{ "Category", "TireConfig" },
		{ "Comment", "/** Tire friction scales for specific physical materials. */" },
		{ "ModuleRelativePath", "Public/TireConfig.h" },
		{ "ToolTip", "Tire friction scales for specific physical materials." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTireConfig_Statics::NewProp_TireFrictionScales = { "TireFrictionScales", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTireConfig, TireFrictionScales), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTireConfig_Statics::NewProp_TireFrictionScales_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTireConfig_Statics::NewProp_TireFrictionScales_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTireConfig_Statics::NewProp_TireFrictionScales_Inner = { "TireFrictionScales", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTireConfigMaterialFriction, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTireConfig_Statics::NewProp_FrictionScale_MetaData[] = {
		{ "Category", "TireConfig" },
		{ "Comment", "// Scale the tire friction for this tire type\n" },
		{ "ModuleRelativePath", "Public/TireConfig.h" },
		{ "ToolTip", "Scale the tire friction for this tire type" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTireConfig_Statics::NewProp_FrictionScale = { "FrictionScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTireConfig, FrictionScale), METADATA_PARAMS(Z_Construct_UClass_UTireConfig_Statics::NewProp_FrictionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTireConfig_Statics::NewProp_FrictionScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTireConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTireConfig_Statics::NewProp_TireFrictionScales,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTireConfig_Statics::NewProp_TireFrictionScales_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTireConfig_Statics::NewProp_FrictionScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTireConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTireConfig>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTireConfig_Statics::ClassParams = {
		&UTireConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTireConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTireConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTireConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTireConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTireConfig()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTireConfig_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTireConfig, 1951483449);
	template<> PHYSXVEHICLES_API UClass* StaticClass<UTireConfig>()
	{
		return UTireConfig::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTireConfig(Z_Construct_UClass_UTireConfig, &UTireConfig::StaticClass, TEXT("/Script/PhysXVehicles"), TEXT("UTireConfig"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTireConfig);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
