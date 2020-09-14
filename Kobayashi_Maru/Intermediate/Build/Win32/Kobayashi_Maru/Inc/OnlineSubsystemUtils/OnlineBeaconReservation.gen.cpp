// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconReservation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconReservation() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
// End Cross Module References
class UScriptStruct* FPlayerReservation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FPlayerReservation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerReservation, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PlayerReservation"), sizeof(FPlayerReservation), Get_Z_Construct_UScriptStruct_FPlayerReservation_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPlayerReservation>()
{
	return FPlayerReservation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerReservation(FPlayerReservation::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("PlayerReservation"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPlayerReservation
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPlayerReservation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerReservation")),new UScriptStruct::TCppStructOps<FPlayerReservation>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPlayerReservation;
	struct Z_Construct_UScriptStruct_FPlayerReservation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowCrossplay_MetaData[];
#endif
		static void NewProp_bAllowCrossplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowCrossplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Platform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidationStr_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValidationStr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A single player reservation */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "A single player reservation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerReservation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "Comment", "/** Elapsed time since player made reservation and was last seen */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Elapsed time since player made reservation and was last seen" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerReservation, ElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_MetaData[] = {
		{ "Comment", "/** Does this player opt in to crossplay */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Does this player opt in to crossplay" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_SetBit(void* Obj)
	{
		((FPlayerReservation*)Obj)->bAllowCrossplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay = { "bAllowCrossplay", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerReservation), &Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform_MetaData[] = {
		{ "Comment", "/** Platform this user is on */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Platform this user is on" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform = { "Platform", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerReservation, Platform), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr_MetaData[] = {
		{ "Comment", "/** Info needed to validate user credentials when joining a server */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Info needed to validate user credentials when joining a server" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr = { "ValidationStr", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerReservation, ValidationStr), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId_MetaData[] = {
		{ "Comment", "/** Unique id for this reservation */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconReservation.h" },
		{ "ToolTip", "Unique id for this reservation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId = { "UniqueId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerReservation, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerReservation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_bAllowCrossplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_Platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_ValidationStr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerReservation_Statics::NewProp_UniqueId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerReservation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"PlayerReservation",
		sizeof(FPlayerReservation),
		alignof(FPlayerReservation),
		Z_Construct_UScriptStruct_FPlayerReservation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerReservation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerReservation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerReservation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerReservation"), sizeof(FPlayerReservation), Get_Z_Construct_UScriptStruct_FPlayerReservation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerReservation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerReservation_Hash() { return 1610910148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
