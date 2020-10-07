// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FaunaCreatureInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaunaCreatureInfo() {}
// Cross Module References
	COMPLETERPG_API UScriptStruct* Z_Construct_UScriptStruct_FFaunaHabitatFoliageType();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaCreatureInfo_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaCreatureInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
// End Cross Module References
class UScriptStruct* FFaunaHabitatFoliageType::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPLETERPG_API uint32 Get_Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("FaunaHabitatFoliageType"), sizeof(FFaunaHabitatFoliageType), Get_Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Hash());
	}
	return Singleton;
}
template<> COMPLETERPG_API UScriptStruct* StaticStruct<FFaunaHabitatFoliageType>()
{
	return FFaunaHabitatFoliageType::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFaunaHabitatFoliageType(FFaunaHabitatFoliageType::StaticStruct, TEXT("/Script/CompleteRPG"), TEXT("FaunaHabitatFoliageType"), false, nullptr, nullptr);
static struct FScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaHabitatFoliageType
{
	FScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaHabitatFoliageType()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FaunaHabitatFoliageType")),new UScriptStruct::TCppStructOps<FFaunaHabitatFoliageType>);
	}
} ScriptStruct_CompleteRPG_StaticRegisterNativesFFaunaHabitatFoliageType;
	struct Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequired_MetaData[];
#endif
		static void NewProp_bRequired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinFoliageDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinFoliageDensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoliageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_FoliageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFaunaHabitatFoliageType>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_bRequired_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Foliage type MUST be present for this creature to survive */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Foliage type MUST be present for this creature to survive" },
	};
#endif
	void Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_bRequired_SetBit(void* Obj)
	{
		((FFaunaHabitatFoliageType*)Obj)->bRequired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_bRequired = { "bRequired", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FFaunaHabitatFoliageType), &Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_bRequired_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_bRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_bRequired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_MinFoliageDensity_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Below this density this foliage type cannot support the creature (trees per metre)*/" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Below this density this foliage type cannot support the creature (trees per metre)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_MinFoliageDensity = { "MinFoliageDensity", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaHabitatFoliageType, MinFoliageDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_MinFoliageDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_MinFoliageDensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_FoliageType_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Foliage instance blueprint to detect */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Foliage instance blueprint to detect" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_FoliageType = { "FoliageType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFaunaHabitatFoliageType, FoliageType), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_FoliageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_FoliageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_bRequired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_MinFoliageDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::NewProp_FoliageType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
		nullptr,
		&NewStructOps,
		"FaunaHabitatFoliageType",
		sizeof(FFaunaHabitatFoliageType),
		alignof(FFaunaHabitatFoliageType),
		Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFaunaHabitatFoliageType()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FaunaHabitatFoliageType"), sizeof(FFaunaHabitatFoliageType), Get_Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFaunaHabitatFoliageType_Hash() { return 3534804259U; }
	void UFaunaCreatureInfo::StaticRegisterNativesUFaunaCreatureInfo()
	{
	}
	UClass* Z_Construct_UClass_UFaunaCreatureInfo_NoRegister()
	{
		return UFaunaCreatureInfo::StaticClass();
	}
	struct Z_Construct_UClass_UFaunaCreatureInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisualiseSlopeRejects_MetaData[];
#endif
		static void NewProp_bVisualiseSlopeRejects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisualiseSlopeRejects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatureSpawnerDrawColour_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatureSpawnerDrawColour;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRuntimeSlopeRetries_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxRuntimeSlopeRetries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAngleIterations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxAngleIterations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxGroundAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxGroundAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowNoFoliage_MetaData[];
#endif
		static void NewProp_bAllowNoFoliage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowNoFoliage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HabitatFoliage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HabitatFoliage;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HabitatFoliage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInstances_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxInstances;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAltitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SpawnVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPerSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPerSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatureSpawnChance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CreatureSpawnChance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatureToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreatureToSpawn;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaunaCreatureInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * \n */" },
		{ "IncludePath", "FaunaCreatureInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bVisualiseSlopeRejects_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
	};
#endif
	void Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bVisualiseSlopeRejects_SetBit(void* Obj)
	{
		((UFaunaCreatureInfo*)Obj)->bVisualiseSlopeRejects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bVisualiseSlopeRejects = { "bVisualiseSlopeRejects", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaunaCreatureInfo), &Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bVisualiseSlopeRejects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bVisualiseSlopeRejects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bVisualiseSlopeRejects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnerDrawColour_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Colour to use when drawing spawners */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Colour to use when drawing spawners" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnerDrawColour = { "CreatureSpawnerDrawColour", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, CreatureSpawnerDrawColour), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnerDrawColour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnerDrawColour_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxRuntimeSlopeRetries_MetaData[] = {
		{ "Category", "Habitat" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxRuntimeSlopeRetries = { "MaxRuntimeSlopeRetries", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, MaxRuntimeSlopeRetries), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxRuntimeSlopeRetries_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxRuntimeSlopeRetries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAngleIterations_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Maximum number of walk iterations to use when trying to resolve a ground\n\x09    angle about MaxGroundAngle\n\x09\x09\n\x09\x09@see MaxGroundAngle\n\x09*/" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Maximum number of walk iterations to use when trying to resolve a ground\n          angle about MaxGroundAngle\n\n              @see MaxGroundAngle" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAngleIterations = { "MaxAngleIterations", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, MaxAngleIterations), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAngleIterations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAngleIterations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxGroundAngle_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Max angle away from horizontal the spawn area should be, system will attempt\n\x09    to move spawn points away from high inclines*/" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Max angle away from horizontal the spawn area should be, system will attempt\n          to move spawn points away from high inclines" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxGroundAngle = { "MaxGroundAngle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, MaxGroundAngle), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxGroundAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxGroundAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bAllowNoFoliage_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Whether or not the creature can spawn in the absence of foliage (it will still\n\x09    prefer foliage if it is available */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Whether or not the creature can spawn in the absence of foliage (it will still\n          prefer foliage if it is available" },
	};
#endif
	void Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bAllowNoFoliage_SetBit(void* Obj)
	{
		((UFaunaCreatureInfo*)Obj)->bAllowNoFoliage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bAllowNoFoliage = { "bAllowNoFoliage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFaunaCreatureInfo), &Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bAllowNoFoliage_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bAllowNoFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bAllowNoFoliage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_HabitatFoliage_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** List of foliage data  */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "List of foliage data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_HabitatFoliage = { "HabitatFoliage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, HabitatFoliage), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_HabitatFoliage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_HabitatFoliage_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_HabitatFoliage_Inner = { "HabitatFoliage", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FFaunaHabitatFoliageType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxInstances_MetaData[] = {
		{ "Category", "CreatureProperties" },
		{ "Comment", "/** Max number of instances of this creature that can exist */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Max number of instances of this creature that can exist" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxInstances = { "MaxInstances", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, MaxInstances), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxInstances_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAltitude_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Maximum altitude that this creature is found at */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Maximum altitude that this creature is found at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAltitude = { "MaxAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, MaxAltitude), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MinAltitude_MetaData[] = {
		{ "Category", "Habitat" },
		{ "Comment", "/** Minimum altitude that this creature is found at */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Minimum altitude that this creature is found at" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MinAltitude = { "MinAltitude", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, MinAltitude), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MinAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MinAltitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnVariance_MetaData[] = {
		{ "Category", "CreatureProperties" },
		{ "Comment", "/** Variance on spawn amount */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Variance on spawn amount" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnVariance = { "SpawnVariance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, SpawnVariance), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxPerSpawn_MetaData[] = {
		{ "Category", "CreatureProperties" },
		{ "Comment", "/** Maximum number of creatures to attempt to spawn on activation */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Maximum number of creatures to attempt to spawn on activation" },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxPerSpawn = { "MaxPerSpawn", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, MaxPerSpawn), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxPerSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxPerSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "CreatureProperties" },
		{ "Comment", "/** Radius of the area to spawn the fauna in */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Radius of the area to spawn the fauna in" },
		{ "UIMin", "100" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, SpawnRadius), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnChance_MetaData[] = {
		{ "Category", "CreatureProperties" },
		{ "Comment", "/** Random chance that this creature can spawn at runtime */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Random chance that this creature can spawn at runtime" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnChance = { "CreatureSpawnChance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, CreatureSpawnChance), METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnChance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnChance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_ClassToSpawn_MetaData[] = {
		{ "Category", "CreatureProperties" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, ClassToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_ClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_ClassToSpawn_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureToSpawn_MetaData[] = {
		{ "Comment", "/** Blueprint to spawn for this creature */" },
		{ "ModuleRelativePath", "Public/FaunaCreatureInfo.h" },
		{ "ToolTip", "Blueprint to spawn for this creature" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureToSpawn = { "CreatureToSpawn", nullptr, (EPropertyFlags)0x0010000820000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaCreatureInfo, CreatureToSpawn_DEPRECATED), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureToSpawn_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFaunaCreatureInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bVisualiseSlopeRejects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnerDrawColour,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxRuntimeSlopeRetries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAngleIterations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxGroundAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_bAllowNoFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_HabitatFoliage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_HabitatFoliage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxInstances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MinAltitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_MaxPerSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_SpawnRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureSpawnChance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_ClassToSpawn,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaCreatureInfo_Statics::NewProp_CreatureToSpawn,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaunaCreatureInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaunaCreatureInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaunaCreatureInfo_Statics::ClassParams = {
		&UFaunaCreatureInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFaunaCreatureInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFaunaCreatureInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaCreatureInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaunaCreatureInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaunaCreatureInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaunaCreatureInfo, 2758768160);
	template<> COMPLETERPG_API UClass* StaticClass<UFaunaCreatureInfo>()
	{
		return UFaunaCreatureInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaunaCreatureInfo(Z_Construct_UClass_UFaunaCreatureInfo, &UFaunaCreatureInfo::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UFaunaCreatureInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaunaCreatureInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
