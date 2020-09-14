// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ClothingSystemRuntimeCommon/Public/PointWeightMap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointWeightMap() {}
// Cross Module References
	CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon();
	UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
	CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap();
// End Cross Module References
	static UEnum* EWeightMapTargetCommon_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("EWeightMapTargetCommon"));
		}
		return Singleton;
	}
	template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EWeightMapTargetCommon>()
	{
		return EWeightMapTargetCommon_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EWeightMapTargetCommon(EWeightMapTargetCommon_StaticEnum, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("EWeightMapTargetCommon"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Hash() { return 2279788529U; }
	UEnum* Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EWeightMapTargetCommon"), 0, Get_Z_Construct_UEnum_ClothingSystemRuntimeCommon_EWeightMapTargetCommon_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EWeightMapTargetCommon::None", (int64)EWeightMapTargetCommon::None },
				{ "EWeightMapTargetCommon::MaxDistance", (int64)EWeightMapTargetCommon::MaxDistance },
				{ "EWeightMapTargetCommon::BackstopDistance", (int64)EWeightMapTargetCommon::BackstopDistance },
				{ "EWeightMapTargetCommon::BackstopRadius", (int64)EWeightMapTargetCommon::BackstopRadius },
				{ "EWeightMapTargetCommon::AnimDriveMultiplier", (int64)EWeightMapTargetCommon::AnimDriveMultiplier },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnimDriveMultiplier.Comment", "// Radius of movement to allow for backstop movement\n" },
				{ "AnimDriveMultiplier.Name", "EWeightMapTargetCommon::AnimDriveMultiplier" },
				{ "AnimDriveMultiplier.ToolTip", "Radius of movement to allow for backstop movement" },
				{ "BackstopDistance.Comment", "// The distance that each vertex can move away from its reference (skinned) position\n" },
				{ "BackstopDistance.Name", "EWeightMapTargetCommon::BackstopDistance" },
				{ "BackstopDistance.ToolTip", "The distance that each vertex can move away from its reference (skinned) position" },
				{ "BackstopRadius.Comment", "// Distance along the plane of the surface that the particles can travel (separation constraint)\n" },
				{ "BackstopRadius.Name", "EWeightMapTargetCommon::BackstopRadius" },
				{ "BackstopRadius.ToolTip", "Distance along the plane of the surface that the particles can travel (separation constraint)" },
				{ "Comment", "/** The possible targets for a physical mesh point weight map. */" },
				{ "MaxDistance.Comment", "// None, should always be zero\n" },
				{ "MaxDistance.Name", "EWeightMapTargetCommon::MaxDistance" },
				{ "MaxDistance.ToolTip", "None, should always be zero" },
				{ "ModuleRelativePath", "Public/PointWeightMap.h" },
				{ "None.Name", "EWeightMapTargetCommon::None" },
				{ "ToolTip", "The possible targets for a physical mesh point weight map." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
				nullptr,
				"EWeightMapTargetCommon",
				"EWeightMapTargetCommon",
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
class UScriptStruct* FPointWeightMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CLOTHINGSYSTEMRUNTIMECOMMON_API uint32 Get_Z_Construct_UScriptStruct_FPointWeightMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPointWeightMap, Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon(), TEXT("PointWeightMap"), sizeof(FPointWeightMap), Get_Z_Construct_UScriptStruct_FPointWeightMap_Hash());
	}
	return Singleton;
}
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<FPointWeightMap>()
{
	return FPointWeightMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPointWeightMap(FPointWeightMap::StaticStruct, TEXT("/Script/ClothingSystemRuntimeCommon"), TEXT("PointWeightMap"), false, nullptr, nullptr);
static struct FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFPointWeightMap
{
	FScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFPointWeightMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PointWeightMap")),new UScriptStruct::TCppStructOps<FPointWeightMap>);
	}
} ScriptStruct_ClothingSystemRuntimeCommon_StaticRegisterNativesFPointWeightMap;
	struct Z_Construct_UScriptStruct_FPointWeightMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Values_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * A mask is simply some storage for a physical mesh parameter painted onto clothing.\n * Used in the editor for users to paint onto and then target to a parameter, which\n * is then later applied to a phys mesh\n */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "A mask is simply some storage for a physical mesh parameter painted onto clothing.\nUsed in the editor for users to paint onto and then target to a parameter, which\nis then later applied to a phys mesh" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPointWeightMap>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** Whether this mask is enabled and able to effect final mesh values */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "Whether this mask is enabled and able to effect final mesh values" },
	};
#endif
	void Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FPointWeightMap*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPointWeightMap), &Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Comment", "/** The currently targeted parameter for the mask, @seealso EWeightMapTargetCommon */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "The currently targeted parameter for the mask, @seealso EWeightMapTargetCommon" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointWeightMap, CurrentTarget), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name_MetaData[] = {
		{ "Comment", "/** Name of the mask, mainly for users to differentiate */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "Name of the mask, mainly for users to differentiate" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointWeightMap, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_MetaData[] = {
		{ "Comment", "/** The actual values stored in the mask */" },
		{ "ModuleRelativePath", "Public/PointWeightMap.h" },
		{ "ToolTip", "The actual values stored in the mask" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPointWeightMap, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPointWeightMap_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Name,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPointWeightMap_Statics::NewProp_Values_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPointWeightMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon,
		nullptr,
		&NewStructOps,
		"PointWeightMap",
		sizeof(FPointWeightMap),
		alignof(FPointWeightMap),
		Z_Construct_UScriptStruct_FPointWeightMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPointWeightMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPointWeightMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPointWeightMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPointWeightMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PointWeightMap"), sizeof(FPointWeightMap), Get_Z_Construct_UScriptStruct_FPointWeightMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPointWeightMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPointWeightMap_Hash() { return 2470770711U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
