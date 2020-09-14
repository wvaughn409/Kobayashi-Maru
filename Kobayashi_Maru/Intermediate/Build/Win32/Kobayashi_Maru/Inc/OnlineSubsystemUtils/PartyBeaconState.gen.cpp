// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/PartyBeaconState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyBeaconState() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPartyReservation();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UPartyBeaconState_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UPartyBeaconState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EPartyReservationResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EPartyReservationResult"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EPartyReservationResult::Type>()
	{
		return EPartyReservationResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPartyReservationResult(EPartyReservationResult_StaticEnum, TEXT("/Script/OnlineSubsystemUtils"), TEXT("EPartyReservationResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Hash() { return 216371451U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPartyReservationResult"), 0, Get_Z_Construct_UEnum_OnlineSubsystemUtils_EPartyReservationResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPartyReservationResult::NoResult", (int64)EPartyReservationResult::NoResult },
				{ "EPartyReservationResult::RequestPending", (int64)EPartyReservationResult::RequestPending },
				{ "EPartyReservationResult::GeneralError", (int64)EPartyReservationResult::GeneralError },
				{ "EPartyReservationResult::PartyLimitReached", (int64)EPartyReservationResult::PartyLimitReached },
				{ "EPartyReservationResult::IncorrectPlayerCount", (int64)EPartyReservationResult::IncorrectPlayerCount },
				{ "EPartyReservationResult::RequestTimedOut", (int64)EPartyReservationResult::RequestTimedOut },
				{ "EPartyReservationResult::ReservationDuplicate", (int64)EPartyReservationResult::ReservationDuplicate },
				{ "EPartyReservationResult::ReservationNotFound", (int64)EPartyReservationResult::ReservationNotFound },
				{ "EPartyReservationResult::ReservationAccepted", (int64)EPartyReservationResult::ReservationAccepted },
				{ "EPartyReservationResult::ReservationDenied", (int64)EPartyReservationResult::ReservationDenied },
				{ "EPartyReservationResult::ReservationDenied_CrossPlayRestriction", (int64)EPartyReservationResult::ReservationDenied_CrossPlayRestriction },
				{ "EPartyReservationResult::ReservationDenied_Banned", (int64)EPartyReservationResult::ReservationDenied_Banned },
				{ "EPartyReservationResult::ReservationRequestCanceled", (int64)EPartyReservationResult::ReservationRequestCanceled },
				{ "EPartyReservationResult::ReservationInvalid", (int64)EPartyReservationResult::ReservationInvalid },
				{ "EPartyReservationResult::BadSessionId", (int64)EPartyReservationResult::BadSessionId },
				{ "EPartyReservationResult::ReservationDenied_ContainsExistingPlayers", (int64)EPartyReservationResult::ReservationDenied_ContainsExistingPlayers },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BadSessionId.Comment", "// The reservation was rejected because this was the wrong session\n" },
				{ "BadSessionId.Name", "EPartyReservationResult::BadSessionId" },
				{ "BadSessionId.ToolTip", "The reservation was rejected because this was the wrong session" },
				{ "Comment", "/** The result code that will be returned during party reservation */" },
				{ "GeneralError.Comment", "/** An unknown error happened. */" },
				{ "GeneralError.Name", "EPartyReservationResult::GeneralError" },
				{ "GeneralError.ToolTip", "An unknown error happened." },
				{ "IncorrectPlayerCount.Comment", "/** Wrong number of players to join the session. */" },
				{ "IncorrectPlayerCount.Name", "EPartyReservationResult::IncorrectPlayerCount" },
				{ "IncorrectPlayerCount.ToolTip", "Wrong number of players to join the session." },
				{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
				{ "NoResult.Comment", "/** Empty state. */" },
				{ "NoResult.Name", "EPartyReservationResult::NoResult" },
				{ "NoResult.ToolTip", "Empty state." },
				{ "PartyLimitReached.Comment", "/** All available reservations are booked. */" },
				{ "PartyLimitReached.Name", "EPartyReservationResult::PartyLimitReached" },
				{ "PartyLimitReached.ToolTip", "All available reservations are booked." },
				{ "RequestPending.Comment", "/** Pending request due to async operation, server will contact client shortly. */" },
				{ "RequestPending.Name", "EPartyReservationResult::RequestPending" },
				{ "RequestPending.ToolTip", "Pending request due to async operation, server will contact client shortly." },
				{ "RequestTimedOut.Comment", "/** No response from the host. */" },
				{ "RequestTimedOut.Name", "EPartyReservationResult::RequestTimedOut" },
				{ "RequestTimedOut.ToolTip", "No response from the host." },
				{ "ReservationAccepted.Comment", "/** Space was available and it's time to join. */" },
				{ "ReservationAccepted.Name", "EPartyReservationResult::ReservationAccepted" },
				{ "ReservationAccepted.ToolTip", "Space was available and it's time to join." },
				{ "ReservationDenied.Comment", "/** The beacon is paused and not accepting new connections. */" },
				{ "ReservationDenied.Name", "EPartyReservationResult::ReservationDenied" },
				{ "ReservationDenied.ToolTip", "The beacon is paused and not accepting new connections." },
				{ "ReservationDenied_Banned.Comment", "/** This player is banned. */" },
				{ "ReservationDenied_Banned.Name", "EPartyReservationResult::ReservationDenied_Banned" },
				{ "ReservationDenied_Banned.ToolTip", "This player is banned." },
				{ "ReservationDenied_ContainsExistingPlayers.Comment", "/** The reservation contains players already in this game */" },
				{ "ReservationDenied_ContainsExistingPlayers.Name", "EPartyReservationResult::ReservationDenied_ContainsExistingPlayers" },
				{ "ReservationDenied_ContainsExistingPlayers.ToolTip", "The reservation contains players already in this game" },
				{ "ReservationDenied_CrossPlayRestriction.Comment", "/** Some kind of cross play restriction prevents this party from joining */" },
				{ "ReservationDenied_CrossPlayRestriction.Name", "EPartyReservationResult::ReservationDenied_CrossPlayRestriction" },
				{ "ReservationDenied_CrossPlayRestriction.ToolTip", "Some kind of cross play restriction prevents this party from joining" },
				{ "ReservationDuplicate.Comment", "/** Already have a reservation entry for the requesting party leader. */" },
				{ "ReservationDuplicate.Name", "EPartyReservationResult::ReservationDuplicate" },
				{ "ReservationDuplicate.ToolTip", "Already have a reservation entry for the requesting party leader." },
				{ "ReservationInvalid.Comment", "// The reservation was rejected because it was badly formed\n" },
				{ "ReservationInvalid.Name", "EPartyReservationResult::ReservationInvalid" },
				{ "ReservationInvalid.ToolTip", "The reservation was rejected because it was badly formed" },
				{ "ReservationNotFound.Comment", "/** Couldn't find the party leader specified for a reservation update request. */" },
				{ "ReservationNotFound.Name", "EPartyReservationResult::ReservationNotFound" },
				{ "ReservationNotFound.ToolTip", "Couldn't find the party leader specified for a reservation update request." },
				{ "ReservationRequestCanceled.Comment", "/** The reservation request was canceled before being sent. */" },
				{ "ReservationRequestCanceled.Name", "EPartyReservationResult::ReservationRequestCanceled" },
				{ "ReservationRequestCanceled.ToolTip", "The reservation request was canceled before being sent." },
				{ "ToolTip", "The result code that will be returned during party reservation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
				nullptr,
				"EPartyReservationResult",
				"EPartyReservationResult::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPartyReservation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FPartyReservation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPartyReservation, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PartyReservation"), sizeof(FPartyReservation), Get_Z_Construct_UScriptStruct_FPartyReservation_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPartyReservation>()
{
	return FPartyReservation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPartyReservation(FPartyReservation::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("PartyReservation"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPartyReservation
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPartyReservation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PartyReservation")),new UScriptStruct::TCppStructOps<FPartyReservation>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPartyReservation;
	struct Z_Construct_UScriptStruct_FPartyReservation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemovedPartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemovedPartyMembers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RemovedPartyMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PartyMembers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyLeader_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PartyLeader;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TeamNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyReservation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A whole party reservation */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "A whole party reservation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPartyReservation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPartyReservation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers_MetaData[] = {
		{ "Comment", "/** Keeping a record of all logged out players from this reservation. */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Keeping a record of all logged out players from this reservation." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers = { "RemovedPartyMembers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyReservation, RemovedPartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers_Inner = { "RemovedPartyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerReservation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers_MetaData[] = {
		{ "Comment", "/** All party members (including party leader) in the reservation */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "All party members (including party leader) in the reservation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers = { "PartyMembers", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyReservation, PartyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers_Inner = { "PartyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerReservation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyLeader_MetaData[] = {
		{ "Comment", "/** Player initiating the request */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Player initiating the request" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyLeader = { "PartyLeader", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyReservation, PartyLeader), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyLeader_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyLeader_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_TeamNum_MetaData[] = {
		{ "Comment", "/** Team assigned to this party */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team assigned to this party" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_TeamNum = { "TeamNum", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPartyReservation, TeamNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_TeamNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_TeamNum_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPartyReservation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_RemovedPartyMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_PartyLeader,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPartyReservation_Statics::NewProp_TeamNum,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPartyReservation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"PartyReservation",
		sizeof(FPartyReservation),
		alignof(FPartyReservation),
		Z_Construct_UScriptStruct_FPartyReservation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPartyReservation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPartyReservation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPartyReservation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPartyReservation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PartyReservation"), sizeof(FPartyReservation), Get_Z_Construct_UScriptStruct_FPartyReservation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPartyReservation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPartyReservation_Hash() { return 2316515000U; }
	void UPartyBeaconState::StaticRegisterNativesUPartyBeaconState()
	{
	}
	UClass* Z_Construct_UClass_UPartyBeaconState_NoRegister()
	{
		return UPartyBeaconState::StaticClass();
	}
	struct Z_Construct_UClass_UPartyBeaconState_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reservations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Reservations;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reservations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableRemovalRequests_MetaData[];
#endif
		static void NewProp_bEnableRemovalRequests_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableRemovalRequests;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictCrossConsole_MetaData[];
#endif
		static void NewProp_bRestrictCrossConsole_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictCrossConsole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceTeamNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ForceTeamNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReservedHostTeamNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReservedHostTeamNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamAssignmentMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TeamAssignmentMethod;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPlayersPerTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPlayersPerTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumTeams_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumTeams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxReservations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxReservations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumConsumedReservations_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumConsumedReservations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SessionName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyBeaconState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host used for taking reservations for an existing game session\n */" },
		{ "IncludePath", "PartyBeaconState.h" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations_MetaData[] = {
		{ "Comment", "/** Current reservations in the system */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Current reservations in the system" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations = { "Reservations", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, Reservations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations_Inner = { "Reservations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPartyReservation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_MetaData[] = {
		{ "Comment", "/** Process requests from clients to remove players from beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Process requests from clients to remove players from beacon" },
	};
#endif
	void Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_SetBit(void* Obj)
	{
		((UPartyBeaconState*)Obj)->bEnableRemovalRequests = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests = { "bEnableRemovalRequests", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPartyBeaconState), &Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData[] = {
		{ "Comment", "/** Are multiple consoles types allowed to play together */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Are multiple consoles types allowed to play together" },
	};
#endif
	void Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit(void* Obj)
	{
		((UPartyBeaconState*)Obj)->bRestrictCrossConsole = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole = { "bRestrictCrossConsole", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPartyBeaconState), &Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ForceTeamNum_MetaData[] = {
		{ "Comment", "/** Team that everyone is forced to in single team games */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team that everyone is forced to in single team games" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ForceTeamNum = { "ForceTeamNum", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, ForceTeamNum), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ForceTeamNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ForceTeamNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ReservedHostTeamNum_MetaData[] = {
		{ "Comment", "/** Team that the host has been assigned to */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team that the host has been assigned to" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ReservedHostTeamNum = { "ReservedHostTeamNum", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, ReservedHostTeamNum), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ReservedHostTeamNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ReservedHostTeamNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_TeamAssignmentMethod_MetaData[] = {
		{ "Comment", "/** Team assignment method */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Team assignment method" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_TeamAssignmentMethod = { "TeamAssignmentMethod", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, TeamAssignmentMethod), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_TeamAssignmentMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_TeamAssignmentMethod_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumPlayersPerTeam_MetaData[] = {
		{ "Comment", "/** Number of players on each team for balancing */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Number of players on each team for balancing" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumPlayersPerTeam = { "NumPlayersPerTeam", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, NumPlayersPerTeam), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumPlayersPerTeam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumPlayersPerTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumTeams_MetaData[] = {
		{ "Comment", "/** Number of teams in the game */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Number of teams in the game" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumTeams = { "NumTeams", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, NumTeams), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumTeams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumTeams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_MaxReservations_MetaData[] = {
		{ "Comment", "/** Maximum allowed reservations */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Maximum allowed reservations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_MaxReservations = { "MaxReservations", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, MaxReservations), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_MaxReservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_MaxReservations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumConsumedReservations_MetaData[] = {
		{ "Comment", "/** Number of currently consumed reservations */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Number of currently consumed reservations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumConsumedReservations = { "NumConsumedReservations", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, NumConsumedReservations), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumConsumedReservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumConsumedReservations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** Session tied to the beacon */" },
		{ "ModuleRelativePath", "Public/PartyBeaconState.h" },
		{ "ToolTip", "Session tied to the beacon" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPartyBeaconState, SessionName), METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_SessionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPartyBeaconState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_Reservations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bEnableRemovalRequests,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_bRestrictCrossConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ForceTeamNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_ReservedHostTeamNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_TeamAssignmentMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumPlayersPerTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumTeams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_MaxReservations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_NumConsumedReservations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPartyBeaconState_Statics::NewProp_SessionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyBeaconState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyBeaconState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPartyBeaconState_Statics::ClassParams = {
		&UPartyBeaconState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPartyBeaconState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::PropPointers),
		0,
		0x001002ACu,
		METADATA_PARAMS(Z_Construct_UClass_UPartyBeaconState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyBeaconState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyBeaconState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPartyBeaconState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPartyBeaconState, 3902970646);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UPartyBeaconState>()
	{
		return UPartyBeaconState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPartyBeaconState(Z_Construct_UClass_UPartyBeaconState, &UPartyBeaconState::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UPartyBeaconState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyBeaconState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
