// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataSet() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSimTarget();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo();
// End Cross Module References
class UScriptStruct* FNiagaraDataSetCompiledData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDataSetCompiledData"), sizeof(FNiagaraDataSetCompiledData), Get_Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDataSetCompiledData>()
{
	return FNiagaraDataSetCompiledData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraDataSetCompiledData(FNiagaraDataSetCompiledData::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraDataSetCompiledData"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetCompiledData
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetCompiledData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraDataSetCompiledData")),new UScriptStruct::TCppStructOps<FNiagaraDataSetCompiledData>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraDataSetCompiledData;
	struct Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SimTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SimTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[];
#endif
		static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalInt32Components_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TotalInt32Components;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalFloatComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_TotalFloatComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariableLayouts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VariableLayouts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VariableLayouts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Variables_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Variables;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Variables_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDataSetCompiledData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_MetaData[] = {
		{ "Comment", "/** Sim target this DataSet is targeting (CPU/GPU). */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Sim target this DataSet is targeting (CPU/GPU)." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget = { "SimTarget", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetCompiledData, SimTarget), Z_Construct_UEnum_Niagara_ENiagaraSimTarget, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID_MetaData[] = {
		{ "Comment", "/** Unique ID for this DataSet. Used to allow referencing from other emitters and Systems. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Unique ID for this DataSet. Used to allow referencing from other emitters and Systems." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetCompiledData, ID), Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Comment", "/** Whether or not this dataset require persistent IDs. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Whether or not this dataset require persistent IDs." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
	{
		((FNiagaraDataSetCompiledData*)Obj)->bRequiresPersistentIDs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FNiagaraDataSetCompiledData), &Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components = { "TotalInt32Components", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetCompiledData, TotalInt32Components), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents_MetaData[] = {
		{ "Comment", "/** Total number of components of each type in the data set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Total number of components of each type in the data set." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents = { "TotalFloatComponents", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetCompiledData, TotalFloatComponents), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_MetaData[] = {
		{ "Comment", "/** Data describing the layout of variable data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Data describing the layout of variable data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts = { "VariableLayouts", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetCompiledData, VariableLayouts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_Inner = { "VariableLayouts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_MetaData[] = {
		{ "Comment", "/** Variables in the data set. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Variables in the data set." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables = { "Variables", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraDataSetCompiledData, Variables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_Inner = { "Variables", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_SimTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_bRequiresPersistentIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalInt32Components,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_TotalFloatComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_VariableLayouts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::NewProp_Variables_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraDataSetCompiledData",
		sizeof(FNiagaraDataSetCompiledData),
		alignof(FNiagaraDataSetCompiledData),
		Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraDataSetCompiledData"), sizeof(FNiagaraDataSetCompiledData), Get_Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraDataSetCompiledData_Hash() { return 2934622716U; }
class UScriptStruct* FNiagaraVariableLayoutInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo, Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVariableLayoutInfo"), sizeof(FNiagaraVariableLayoutInfo), Get_Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVariableLayoutInfo>()
{
	return FNiagaraVariableLayoutInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNiagaraVariableLayoutInfo(FNiagaraVariableLayoutInfo::StaticStruct, TEXT("/Script/Niagara"), TEXT("NiagaraVariableLayoutInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableLayoutInfo
{
	FScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableLayoutInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NiagaraVariableLayoutInfo")),new UScriptStruct::TCppStructOps<FNiagaraVariableLayoutInfo>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNiagaraVariableLayoutInfo;
	struct Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayoutInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Int32ComponentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Int32ComponentStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatComponentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FloatComponentStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Helper class defining the layout and location of an FNiagaraVariable in an FNiagaraDataBuffer-> */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Helper class defining the layout and location of an FNiagaraVariable in an FNiagaraDataBuffer->" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVariableLayoutInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo_MetaData[] = {
		{ "Comment", "/** This variable's type layout info. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "This variable's type layout info." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo = { "LayoutInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableLayoutInfo, LayoutInfo), Z_Construct_UScriptStruct_FNiagaraTypeLayoutInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart_MetaData[] = {
		{ "Comment", "/** Start index for the int32 components in the main buffer. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Start index for the int32 components in the main buffer." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart = { "Int32ComponentStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableLayoutInfo, Int32ComponentStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart_MetaData[] = {
		{ "Comment", "/** Start index for the float components in the main buffer. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataSet.h" },
		{ "ToolTip", "Start index for the float components in the main buffer." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart = { "FloatComponentStart", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNiagaraVariableLayoutInfo, FloatComponentStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_LayoutInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_Int32ComponentStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::NewProp_FloatComponentStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVariableLayoutInfo",
		sizeof(FNiagaraVariableLayoutInfo),
		alignof(FNiagaraVariableLayoutInfo),
		Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NiagaraVariableLayoutInfo"), sizeof(FNiagaraVariableLayoutInfo), Get_Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNiagaraVariableLayoutInfo_Hash() { return 2865984531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
