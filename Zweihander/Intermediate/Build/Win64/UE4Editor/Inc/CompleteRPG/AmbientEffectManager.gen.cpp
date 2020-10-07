// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/AmbientEffectManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmbientEffectManager() {}
// Cross Module References
	COMPLETERPG_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageParticleInstanceData();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter_NoRegister();
	COMPLETERPG_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageParticleData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AAmbientEffectManager_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_AAmbientEffectManager();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FFoliageParticleInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPLETERPG_API uint32 Get_Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageParticleInstanceData, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("FoliageParticleInstanceData"), sizeof(FFoliageParticleInstanceData), Get_Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Hash());
	}
	return Singleton;
}
template<> COMPLETERPG_API UScriptStruct* StaticStruct<FFoliageParticleInstanceData>()
{
	return FFoliageParticleInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoliageParticleInstanceData(FFoliageParticleInstanceData::StaticStruct, TEXT("/Script/CompleteRPG"), TEXT("FoliageParticleInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_CompleteRPG_StaticRegisterNativesFFoliageParticleInstanceData
{
	FScriptStruct_CompleteRPG_StaticRegisterNativesFFoliageParticleInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FoliageParticleInstanceData")),new UScriptStruct::TCppStructOps<FFoliageParticleInstanceData>);
	}
} ScriptStruct_CompleteRPG_StaticRegisterNativesFFoliageParticleInstanceData;
	struct Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEmitters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveEmitters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveEmitters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageParticleInstanceData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewProp_ActiveEmitters_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewProp_ActiveEmitters = { "ActiveEmitters", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleInstanceData, ActiveEmitters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewProp_ActiveEmitters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewProp_ActiveEmitters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewProp_ActiveEmitters_Inner = { "ActiveEmitters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AEmitter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewProp_ActiveEmitters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::NewProp_ActiveEmitters_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
		nullptr,
		&NewStructOps,
		"FoliageParticleInstanceData",
		sizeof(FFoliageParticleInstanceData),
		alignof(FFoliageParticleInstanceData),
		Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageParticleInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoliageParticleInstanceData"), sizeof(FFoliageParticleInstanceData), Get_Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoliageParticleInstanceData_Hash() { return 3947829368U; }
class UScriptStruct* FFoliageParticleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPLETERPG_API uint32 Get_Z_Construct_UScriptStruct_FFoliageParticleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageParticleData, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("FoliageParticleData"), sizeof(FFoliageParticleData), Get_Z_Construct_UScriptStruct_FFoliageParticleData_Hash());
	}
	return Singleton;
}
template<> COMPLETERPG_API UScriptStruct* StaticStruct<FFoliageParticleData>()
{
	return FFoliageParticleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFoliageParticleData(FFoliageParticleData::StaticStruct, TEXT("/Script/CompleteRPG"), TEXT("FoliageParticleData"), false, nullptr, nullptr);
static struct FScriptStruct_CompleteRPG_StaticRegisterNativesFFoliageParticleData
{
	FScriptStruct_CompleteRPG_StaticRegisterNativesFFoliageParticleData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FoliageParticleData")),new UScriptStruct::TCppStructOps<FFoliageParticleData>);
	}
} ScriptStruct_CompleteRPG_StaticRegisterNativesFFoliageParticleData;
	struct Z_Construct_UScriptStruct_FFoliageParticleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterRelativeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EmitterRelativeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmitterScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EmitterScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEmitterCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEmitterCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxEmitterRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxEmitterRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoliageMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckGrass_MetaData[];
#endif
		static void NewProp_bCheckGrass_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckGrass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCheckFoliage_MetaData[];
#endif
		static void NewProp_bCheckFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCheckFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[];
#endif
		static void NewProp_bDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Associates certain foliage meshes with certain particle emitters */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "Associates certain foliage meshes with certain particle emitters" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageParticleData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterRelativeOffset_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "Comment", "/** Offset from foliage instance (tree) to emitter, in the local space of the instance */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "Offset from foliage instance (tree) to emitter, in the local space of the instance" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterRelativeOffset = { "EmitterRelativeOffset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleData, EmitterRelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterRelativeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterRelativeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterScale_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterScale = { "EmitterScale", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleData, EmitterScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterCount_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "Comment", "/** Do not exceed this number of emitters for this foliage type.  0 or less means unlimited. */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "Do not exceed this number of emitters for this foliage type.  0 or less means unlimited." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterCount = { "MaxEmitterCount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleData, MaxEmitterCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterRatio_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "Comment", "/** Do not exceed this ratio of emitters to meshes (NumberEmitters / NumPlants) */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "Do not exceed this ratio of emitters to meshes (NumberEmitters / NumPlants)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterRatio = { "MaxEmitterRatio", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleData, MaxEmitterRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "Comment", "/** Valid range to spawn these around the player, in cm */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "Valid range to spawn these around the player, in cm" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleData, Range), METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_Range_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_ParticleSystem_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_ParticleSystem = { "ParticleSystem", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleData, ParticleSystem), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_ParticleSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_ParticleSystem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_FoliageMesh_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_FoliageMesh = { "FoliageMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFoliageParticleData, FoliageMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_FoliageMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_FoliageMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckGrass_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "Comment", "/** True to check grass system for this mesh.  False to save frametime. */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "True to check grass system for this mesh.  False to save frametime." },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckGrass_SetBit(void* Obj)
	{
		((FFoliageParticleData*)Obj)->bCheckGrass = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckGrass = { "bCheckGrass", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoliageParticleData), &Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckGrass_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckGrass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckGrass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckFoliage_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "Comment", "/** True to check foliage/ecosystem system for this mesh.  False to save frametime. */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "True to check foliage/ecosystem system for this mesh.  False to save frametime." },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckFoliage_SetBit(void* Obj)
	{
		((FFoliageParticleData*)Obj)->bCheckFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckFoliage = { "bCheckFoliage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoliageParticleData), &Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckFoliage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bDisabled_MetaData[] = {
		{ "Category", "FoliageParticleData" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bDisabled_SetBit(void* Obj)
	{
		((FFoliageParticleData*)Obj)->bDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FFoliageParticleData), &Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bDisabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bDisabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageParticleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterRelativeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_EmitterScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_MaxEmitterRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_ParticleSystem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_FoliageMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckGrass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bCheckFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageParticleData_Statics::NewProp_bDisabled,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageParticleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
		nullptr,
		&NewStructOps,
		"FoliageParticleData",
		sizeof(FFoliageParticleData),
		alignof(FFoliageParticleData),
		Z_Construct_UScriptStruct_FFoliageParticleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageParticleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFoliageParticleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFoliageParticleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FoliageParticleData"), sizeof(FFoliageParticleData), Get_Z_Construct_UScriptStruct_FFoliageParticleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFoliageParticleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFoliageParticleData_Hash() { return 3919132621U; }
	void AAmbientEffectManager::StaticRegisterNativesAAmbientEffectManager()
	{
	}
	UClass* Z_Construct_UClass_AAmbientEffectManager_NoRegister()
	{
		return AAmbientEffectManager::StaticClass();
	}
	struct Z_Construct_UClass_AAmbientEffectManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipUpdatesPlayerSpeedThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SkipUpdatesPlayerSpeedThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageParticleInstanceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageParticleInstanceData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageParticleInstanceData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageParticleData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoliageParticleData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FoliageParticleData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmbientEffectManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmbientEffectManager_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AmbientEffectManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_SkipUpdatesPlayerSpeedThreshold_MetaData[] = {
		{ "Category", "AmbientEffectManager" },
		{ "Comment", "/** Above this speed (cm/s), skip updates. */" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
		{ "ToolTip", "Above this speed (cm/s), skip updates." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_SkipUpdatesPlayerSpeedThreshold = { "SkipUpdatesPlayerSpeedThreshold", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmbientEffectManager, SkipUpdatesPlayerSpeedThreshold), METADATA_PARAMS(Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_SkipUpdatesPlayerSpeedThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_SkipUpdatesPlayerSpeedThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleInstanceData_MetaData[] = {
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleInstanceData = { "FoliageParticleInstanceData", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmbientEffectManager, FoliageParticleInstanceData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleInstanceData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleInstanceData_Inner = { "FoliageParticleInstanceData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFoliageParticleInstanceData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleData_MetaData[] = {
		{ "Category", "AmbientEffectManager" },
		{ "ModuleRelativePath", "Public/AmbientEffectManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleData = { "FoliageParticleData", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmbientEffectManager, FoliageParticleData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleData_Inner = { "FoliageParticleData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFoliageParticleData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmbientEffectManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_SkipUpdatesPlayerSpeedThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleInstanceData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmbientEffectManager_Statics::NewProp_FoliageParticleData_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmbientEffectManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmbientEffectManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmbientEffectManager_Statics::ClassParams = {
		&AAmbientEffectManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmbientEffectManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientEffectManager_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmbientEffectManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmbientEffectManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmbientEffectManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmbientEffectManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmbientEffectManager, 1938041932);
	template<> COMPLETERPG_API UClass* StaticClass<AAmbientEffectManager>()
	{
		return AAmbientEffectManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmbientEffectManager(Z_Construct_UClass_AAmbientEffectManager, &AAmbientEffectManager::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("AAmbientEffectManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmbientEffectManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
