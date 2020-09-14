// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/SpectatorBeaconState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorBeaconState() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FSpectatorReservation();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerReservation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_USpectatorBeaconState_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_USpectatorBeaconState();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* ESpectatorReservationResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("ESpectatorReservationResult"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<ESpectatorReservationResult::Type>()
	{
		return ESpectatorReservationResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpectatorReservationResult(ESpectatorReservationResult_StaticEnum, TEXT("/Script/OnlineSubsystemUtils"), TEXT("ESpectatorReservationResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Hash() { return 1625062842U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpectatorReservationResult"), 0, Get_Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpectatorReservationResult::NoResult", (int64)ESpectatorReservationResult::NoResult },
				{ "ESpectatorReservationResult::RequestPending", (int64)ESpectatorReservationResult::RequestPending },
				{ "ESpectatorReservationResult::GeneralError", (int64)ESpectatorReservationResult::GeneralError },
				{ "ESpectatorReservationResult::SpectatorLimitReached", (int64)ESpectatorReservationResult::SpectatorLimitReached },
				{ "ESpectatorReservationResult::IncorrectPlayerCount", (int64)ESpectatorReservationResult::IncorrectPlayerCount },
				{ "ESpectatorReservationResult::RequestTimedOut", (int64)ESpectatorReservationResult::RequestTimedOut },
				{ "ESpectatorReservationResult::ReservationDuplicate", (int64)ESpectatorReservationResult::ReservationDuplicate },
				{ "ESpectatorReservationResult::ReservationNotFound", (int64)ESpectatorReservationResult::ReservationNotFound },
				{ "ESpectatorReservationResult::ReservationAccepted", (int64)ESpectatorReservationResult::ReservationAccepted },
				{ "ESpectatorReservationResult::ReservationDenied", (int64)ESpectatorReservationResult::ReservationDenied },
				{ "ESpectatorReservationResult::ReservationDenied_CrossPlayRestriction", (int64)ESpectatorReservationResult::ReservationDenied_CrossPlayRestriction },
				{ "ESpectatorReservationResult::ReservationDenied_Banned", (int64)ESpectatorReservationResult::ReservationDenied_Banned },
				{ "ESpectatorReservationResult::ReservationRequestCanceled", (int64)ESpectatorReservationResult::ReservationRequestCanceled },
				{ "ESpectatorReservationResult::ReservationInvalid", (int64)ESpectatorReservationResult::ReservationInvalid },
				{ "ESpectatorReservationResult::BadSessionId", (int64)ESpectatorReservationResult::BadSessionId },
				{ "ESpectatorReservationResult::ReservationDenied_ContainsExistingPlayers", (int64)ESpectatorReservationResult::ReservationDenied_ContainsExistingPlayers },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BadSessionId.Comment", "// The reservation was rejected because this was the wrong session\n" },
				{ "BadSessionId.Name", "ESpectatorReservationResult::BadSessionId" },
				{ "BadSessionId.ToolTip", "The reservation was rejected because this was the wrong session" },
				{ "Comment", "/** The result code that will be returned during spectator reservation */" },
				{ "GeneralError.Comment", "/** An unknown error happened. */" },
				{ "GeneralError.Name", "ESpectatorReservationResult::GeneralError" },
				{ "GeneralError.ToolTip", "An unknown error happened." },
				{ "IncorrectPlayerCount.Comment", "/** Wrong number of players to join the session. */" },
				{ "IncorrectPlayerCount.Name", "ESpectatorReservationResult::IncorrectPlayerCount" },
				{ "IncorrectPlayerCount.ToolTip", "Wrong number of players to join the session." },
				{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
				{ "NoResult.Comment", "/** Empty state. */" },
				{ "NoResult.Name", "ESpectatorReservationResult::NoResult" },
				{ "NoResult.ToolTip", "Empty state." },
				{ "RequestPending.Comment", "/** Pending request due to async operation, server will contact client shortly. */" },
				{ "RequestPending.Name", "ESpectatorReservationResult::RequestPending" },
				{ "RequestPending.ToolTip", "Pending request due to async operation, server will contact client shortly." },
				{ "RequestTimedOut.Comment", "/** No response from the host. */" },
				{ "RequestTimedOut.Name", "ESpectatorReservationResult::RequestTimedOut" },
				{ "RequestTimedOut.ToolTip", "No response from the host." },
				{ "ReservationAccepted.Comment", "/** Space was available and it's time to join. */" },
				{ "ReservationAccepted.Name", "ESpectatorReservationResult::ReservationAccepted" },
				{ "ReservationAccepted.ToolTip", "Space was available and it's time to join." },
				{ "ReservationDenied.Comment", "/** The beacon is paused and not accepting new connections. */" },
				{ "ReservationDenied.Name", "ESpectatorReservationResult::ReservationDenied" },
				{ "ReservationDenied.ToolTip", "The beacon is paused and not accepting new connections." },
				{ "ReservationDenied_Banned.Comment", "/** This player is banned. */" },
				{ "ReservationDenied_Banned.Name", "ESpectatorReservationResult::ReservationDenied_Banned" },
				{ "ReservationDenied_Banned.ToolTip", "This player is banned." },
				{ "ReservationDenied_ContainsExistingPlayers.Comment", "/** The reservation contains players already in this game */" },
				{ "ReservationDenied_ContainsExistingPlayers.Name", "ESpectatorReservationResult::ReservationDenied_ContainsExistingPlayers" },
				{ "ReservationDenied_ContainsExistingPlayers.ToolTip", "The reservation contains players already in this game" },
				{ "ReservationDenied_CrossPlayRestriction.Comment", "/** Some kind of cross play restriction prevents this spectator from joining */" },
				{ "ReservationDenied_CrossPlayRestriction.Name", "ESpectatorReservationResult::ReservationDenied_CrossPlayRestriction" },
				{ "ReservationDenied_CrossPlayRestriction.ToolTip", "Some kind of cross play restriction prevents this spectator from joining" },
				{ "ReservationDuplicate.Comment", "/** Already have a reservation entry for the requesting spectator. */" },
				{ "ReservationDuplicate.Name", "ESpectatorReservationResult::ReservationDuplicate" },
				{ "ReservationDuplicate.ToolTip", "Already have a reservation entry for the requesting spectator." },
				{ "ReservationInvalid.Comment", "// The reservation was rejected because it was badly formed\n" },
				{ "ReservationInvalid.Name", "ESpectatorReservationResult::ReservationInvalid" },
				{ "ReservationInvalid.ToolTip", "The reservation was rejected because it was badly formed" },
				{ "ReservationNotFound.Comment", "/** Couldn't find the spectator specified for a reservation update request. */" },
				{ "ReservationNotFound.Name", "ESpectatorReservationResult::ReservationNotFound" },
				{ "ReservationNotFound.ToolTip", "Couldn't find the spectator specified for a reservation update request." },
				{ "ReservationRequestCanceled.Comment", "/** The reservation request was canceled before being sent. */" },
				{ "ReservationRequestCanceled.Name", "ESpectatorReservationResult::ReservationRequestCanceled" },
				{ "ReservationRequestCanceled.ToolTip", "The reservation request was canceled before being sent." },
				{ "SpectatorLimitReached.Comment", "/** All available reservations are booked. */" },
				{ "SpectatorLimitReached.Name", "ESpectatorReservationResult::SpectatorLimitReached" },
				{ "SpectatorLimitReached.ToolTip", "All available reservations are booked." },
				{ "ToolTip", "The result code that will be returned during spectator reservation" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
				nullptr,
				"ESpectatorReservationResult",
				"ESpectatorReservationResult::Type",
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
class UScriptStruct* FSpectatorReservation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FSpectatorReservation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpectatorReservation, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("SpectatorReservation"), sizeof(FSpectatorReservation), Get_Z_Construct_UScriptStruct_FSpectatorReservation_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FSpectatorReservation>()
{
	return FSpectatorReservation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpectatorReservation(FSpectatorReservation::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("SpectatorReservation"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFSpectatorReservation
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFSpectatorReservation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpectatorReservation")),new UScriptStruct::TCppStructOps<FSpectatorReservation>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFSpectatorReservation;
	struct Z_Construct_UScriptStruct_FSpectatorReservation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spectator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpectatorId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectatorReservation_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** A whole Spectator reservation */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "A whole Spectator reservation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpectatorReservation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator_MetaData[] = {
		{ "Comment", "/** Spectator reservation */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Spectator reservation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator = { "Spectator", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpectatorReservation, Spectator), Z_Construct_UScriptStruct_FPlayerReservation, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId_MetaData[] = {
		{ "Comment", "/** Player initiating the request */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Player initiating the request" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId = { "SpectatorId", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpectatorReservation, SpectatorId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpectatorReservation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_Spectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpectatorReservation_Statics::NewProp_SpectatorId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpectatorReservation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"SpectatorReservation",
		sizeof(FSpectatorReservation),
		alignof(FSpectatorReservation),
		Z_Construct_UScriptStruct_FSpectatorReservation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpectatorReservation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpectatorReservation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpectatorReservation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpectatorReservation"), sizeof(FSpectatorReservation), Get_Z_Construct_UScriptStruct_FSpectatorReservation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpectatorReservation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpectatorReservation_Hash() { return 856844440U; }
	void USpectatorBeaconState::StaticRegisterNativesUSpectatorBeaconState()
	{
	}
	UClass* Z_Construct_UClass_USpectatorBeaconState_NoRegister()
	{
		return USpectatorBeaconState::StaticClass();
	}
	struct Z_Construct_UClass_USpectatorBeaconState_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRestrictCrossConsole_MetaData[];
#endif
		static void NewProp_bRestrictCrossConsole_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRestrictCrossConsole;
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
	UObject* (*const Z_Construct_UClass_USpectatorBeaconState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A beacon host used for taking reservations for an existing game session\n*/" },
		{ "IncludePath", "SpectatorBeaconState.h" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_MetaData[] = {
		{ "Comment", "/** Current reservations in the system */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Current reservations in the system" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations = { "Reservations", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectatorBeaconState, Reservations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_Inner = { "Reservations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSpectatorReservation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData[] = {
		{ "Comment", "/** Are multiple consoles types allowed to play together */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Are multiple consoles types allowed to play together" },
	};
#endif
	void Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit(void* Obj)
	{
		((USpectatorBeaconState*)Obj)->bRestrictCrossConsole = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole = { "bRestrictCrossConsole", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpectatorBeaconState), &Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations_MetaData[] = {
		{ "Comment", "/** Maximum allowed reservations */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Maximum allowed reservations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations = { "MaxReservations", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectatorBeaconState, MaxReservations), METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations_MetaData[] = {
		{ "Comment", "/** Number of currently consumed reservations */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Number of currently consumed reservations" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations = { "NumConsumedReservations", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectatorBeaconState, NumConsumedReservations), METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName_MetaData[] = {
		{ "Comment", "/** Session tied to the beacon */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconState.h" },
		{ "ToolTip", "Session tied to the beacon" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpectatorBeaconState, SessionName), METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectatorBeaconState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_Reservations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_bRestrictCrossConsole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_MaxReservations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_NumConsumedReservations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorBeaconState_Statics::NewProp_SessionName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectatorBeaconState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectatorBeaconState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpectatorBeaconState_Statics::ClassParams = {
		&USpectatorBeaconState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpectatorBeaconState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::PropPointers),
		0,
		0x001002ACu,
		METADATA_PARAMS(Z_Construct_UClass_USpectatorBeaconState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorBeaconState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectatorBeaconState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpectatorBeaconState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpectatorBeaconState, 3328961170);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<USpectatorBeaconState>()
	{
		return USpectatorBeaconState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpectatorBeaconState(Z_Construct_UClass_USpectatorBeaconState, &USpectatorBeaconState::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("USpectatorBeaconState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectatorBeaconState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
