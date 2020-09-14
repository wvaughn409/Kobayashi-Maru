// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/DemoNetDriver.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDemoNetDriver() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMulticastRecordOptions();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDemoNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
class UScriptStruct* FMulticastRecordOptions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FMulticastRecordOptions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMulticastRecordOptions, Z_Construct_UPackage__Script_Engine(), TEXT("MulticastRecordOptions"), sizeof(FMulticastRecordOptions), Get_Z_Construct_UScriptStruct_FMulticastRecordOptions_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMulticastRecordOptions>()
{
	return FMulticastRecordOptions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMulticastRecordOptions(FMulticastRecordOptions::StaticStruct, TEXT("/Script/Engine"), TEXT("MulticastRecordOptions"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFMulticastRecordOptions
{
	FScriptStruct_Engine_StaticRegisterNativesFMulticastRecordOptions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MulticastRecordOptions")),new UScriptStruct::TCppStructOps<FMulticastRecordOptions>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFMulticastRecordOptions;
	struct Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bClientSkip_MetaData[];
#endif
		static void NewProp_bClientSkip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bClientSkip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bServerSkip_MetaData[];
#endif
		static void NewProp_bServerSkip_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bServerSkip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FuncPathName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FuncPathName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMulticastRecordOptions>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_SetBit(void* Obj)
	{
		((FMulticastRecordOptions*)Obj)->bClientSkip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip = { "bClientSkip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMulticastRecordOptions), &Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_SetBit(void* Obj)
	{
		((FMulticastRecordOptions*)Obj)->bServerSkip = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip = { "bServerSkip", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMulticastRecordOptions), &Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName = { "FuncPathName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMulticastRecordOptions, FuncPathName), METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bClientSkip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_bServerSkip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::NewProp_FuncPathName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MulticastRecordOptions",
		sizeof(FMulticastRecordOptions),
		alignof(FMulticastRecordOptions),
		Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMulticastRecordOptions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMulticastRecordOptions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MulticastRecordOptions"), sizeof(FMulticastRecordOptions), Get_Z_Construct_UScriptStruct_FMulticastRecordOptions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMulticastRecordOptions_Hash() { return 166786654U; }
class UScriptStruct* FRollbackNetStartupActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, Z_Construct_UPackage__Script_Engine(), TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRollbackNetStartupActorInfo>()
{
	return FRollbackNetStartupActorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRollbackNetStartupActorInfo(FRollbackNetStartupActorInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("RollbackNetStartupActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RollbackNetStartupActorInfo")),new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFRollbackNetStartupActorInfo;
	struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjReferences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjReferences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Archetype_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Archetype;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Information about net startup actors that need to be rolled back by being destroyed and re-created */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Information about net startup actors that need to be rolled back by being destroyed and re-created" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRollbackNetStartupActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences = { "ObjReferences", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, ObjReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner = { "ObjReferences", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Level), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype = { "Archetype", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRollbackNetStartupActorInfo, Archetype), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_ObjReferences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::NewProp_Archetype,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RollbackNetStartupActorInfo",
		sizeof(FRollbackNetStartupActorInfo),
		alignof(FRollbackNetStartupActorInfo),
		Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RollbackNetStartupActorInfo"), sizeof(FRollbackNetStartupActorInfo), Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Hash() { return 4186816552U; }
class UScriptStruct* FLevelNameAndTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLevelNameAndTime, Z_Construct_UPackage__Script_Engine(), TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FLevelNameAndTime>()
{
	return FLevelNameAndTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLevelNameAndTime(FLevelNameAndTime::StaticStruct, TEXT("/Script/Engine"), TEXT("LevelNameAndTime"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime
{
	FScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LevelNameAndTime")),new UScriptStruct::TCppStructOps<FLevelNameAndTime>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFLevelNameAndTime;
	struct Z_Construct_UScriptStruct_FLevelNameAndTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelChangeTimeInMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LevelChangeTimeInMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLevelNameAndTime>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS = { "LevelChangeTimeInMS", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelChangeTimeInMS), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLevelNameAndTime, LevelName), METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelChangeTimeInMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::NewProp_LevelName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"LevelNameAndTime",
		sizeof(FLevelNameAndTime),
		alignof(FLevelNameAndTime),
		Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLevelNameAndTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LevelNameAndTime"), sizeof(FLevelNameAndTime), Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLevelNameAndTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLevelNameAndTime_Hash() { return 4035274485U; }
	void UDemoNetDriver::StaticRegisterNativesUDemoNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UDemoNetDriver_NoRegister()
	{
		return UDemoNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UDemoNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorControllers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpectatorControllers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectatorControllers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalReplay_MetaData[];
#endif
		static void NewProp_bIsLocalReplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalReplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastRecordOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MulticastRecordOptions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MulticastRecordOptions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckpointSaveMaxMSPerFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CheckpointSaveMaxMSPerFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollbackNetStartupActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RollbackNetStartupActors;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RollbackNetStartupActors_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollbackNetStartupActors_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDemoNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simulated network driver for recording and playing back game sessions.\n */" },
		{ "IncludePath", "Engine/DemoNetDriver.h" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Simulated network driver for recording and playing back game sessions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_MetaData[] = {
		{ "Comment", "/** An array of all the spectator controllers (the main one and all splitscreen ones) that currently exist */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "An array of all the spectator controllers (the main one and all splitscreen ones) that currently exist" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers = { "SpectatorControllers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoNetDriver, SpectatorControllers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_Inner = { "SpectatorControllers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
	};
#endif
	void Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_SetBit(void* Obj)
	{
		((UDemoNetDriver*)Obj)->bIsLocalReplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay = { "bIsLocalReplay", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDemoNetDriver), &Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_MetaData[] = {
		{ "Comment", "/** Config data for multicast RPCs we might want to skip recording. */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Config data for multicast RPCs we might want to skip recording." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions = { "MulticastRecordOptions", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoNetDriver, MulticastRecordOptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_Inner = { "MulticastRecordOptions", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMulticastRecordOptions, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData[] = {
		{ "Comment", "/**\n\x09 * Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\n\x09 * See also demo.CheckpointSaveMaxMSPerFrameOverride.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Maximum time allowed each frame to spend on saving a checkpoint. If 0, it will save the checkpoint in a single frame, regardless of how long it takes.\nSee also demo.CheckpointSaveMaxMSPerFrameOverride." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame = { "CheckpointSaveMaxMSPerFrame", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoNetDriver, CheckpointSaveMaxMSPerFrame), METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData[] = {
		{ "Comment", "/** \n\x09 * Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned \n\x09 * NOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/DemoNetDriver.h" },
		{ "ToolTip", "Net startup actors that need to be rolled back during scrubbing by being destroyed and re-spawned\nNOTE - DeletedNetStartupActors will take precedence here, and destroy the actor instead" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDemoNetDriver, RollbackNetStartupActors), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp = { "RollbackNetStartupActors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp = { "RollbackNetStartupActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_SpectatorControllers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_bIsLocalReplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_MulticastRecordOptions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_CheckpointSaveMaxMSPerFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDemoNetDriver_Statics::NewProp_RollbackNetStartupActors_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDemoNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDemoNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams = {
		&UDemoNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDemoNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDemoNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDemoNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDemoNetDriver, 2163791727);
	template<> ENGINE_API UClass* StaticClass<UDemoNetDriver>()
	{
		return UDemoNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDemoNetDriver(Z_Construct_UClass_UDemoNetDriver, &UDemoNetDriver::StaticClass, TEXT("/Script/Engine"), TEXT("UDemoNetDriver"), false, nullptr, nullptr, nullptr);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetDriver)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
