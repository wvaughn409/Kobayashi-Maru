// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_PartyBeaconState_generated_h
#error "PartyBeaconState.generated.h already included, missing '#pragma once' in PartyBeaconState.h"
#endif
#define ONLINESUBSYSTEMUTILS_PartyBeaconState_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_180_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPartyReservation_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FPartyReservation>();

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_RPC_WRAPPERS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPartyBeaconState(); \
	friend struct Z_Construct_UClass_UPartyBeaconState_Statics; \
public: \
	DECLARE_CLASS(UPartyBeaconState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UPartyBeaconState) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_INCLASS \
private: \
	static void StaticRegisterNativesUPartyBeaconState(); \
	friend struct Z_Construct_UClass_UPartyBeaconState_Statics; \
public: \
	DECLARE_CLASS(UPartyBeaconState, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UPartyBeaconState) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPartyBeaconState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPartyBeaconState) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPartyBeaconState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyBeaconState); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPartyBeaconState(UPartyBeaconState&&); \
	NO_API UPartyBeaconState(const UPartyBeaconState&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPartyBeaconState(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPartyBeaconState(UPartyBeaconState&&); \
	NO_API UPartyBeaconState(const UPartyBeaconState&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPartyBeaconState); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPartyBeaconState); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPartyBeaconState)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SessionName() { return STRUCT_OFFSET(UPartyBeaconState, SessionName); } \
	FORCEINLINE static uint32 __PPO__NumConsumedReservations() { return STRUCT_OFFSET(UPartyBeaconState, NumConsumedReservations); } \
	FORCEINLINE static uint32 __PPO__MaxReservations() { return STRUCT_OFFSET(UPartyBeaconState, MaxReservations); } \
	FORCEINLINE static uint32 __PPO__NumTeams() { return STRUCT_OFFSET(UPartyBeaconState, NumTeams); } \
	FORCEINLINE static uint32 __PPO__NumPlayersPerTeam() { return STRUCT_OFFSET(UPartyBeaconState, NumPlayersPerTeam); } \
	FORCEINLINE static uint32 __PPO__TeamAssignmentMethod() { return STRUCT_OFFSET(UPartyBeaconState, TeamAssignmentMethod); } \
	FORCEINLINE static uint32 __PPO__ReservedHostTeamNum() { return STRUCT_OFFSET(UPartyBeaconState, ReservedHostTeamNum); } \
	FORCEINLINE static uint32 __PPO__ForceTeamNum() { return STRUCT_OFFSET(UPartyBeaconState, ForceTeamNum); } \
	FORCEINLINE static uint32 __PPO__bRestrictCrossConsole() { return STRUCT_OFFSET(UPartyBeaconState, bRestrictCrossConsole); } \
	FORCEINLINE static uint32 __PPO__bEnableRemovalRequests() { return STRUCT_OFFSET(UPartyBeaconState, bEnableRemovalRequests); } \
	FORCEINLINE static uint32 __PPO__Reservations() { return STRUCT_OFFSET(UPartyBeaconState, Reservations); }


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_224_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h_227_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PartyBeaconState."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UPartyBeaconState>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconState_h


#define FOREACH_ENUM_EPARTYRESERVATIONRESULT(op) \
	op(EPartyReservationResult::NoResult) \
	op(EPartyReservationResult::RequestPending) \
	op(EPartyReservationResult::GeneralError) \
	op(EPartyReservationResult::PartyLimitReached) \
	op(EPartyReservationResult::IncorrectPlayerCount) \
	op(EPartyReservationResult::RequestTimedOut) \
	op(EPartyReservationResult::ReservationDuplicate) \
	op(EPartyReservationResult::ReservationNotFound) \
	op(EPartyReservationResult::ReservationAccepted) \
	op(EPartyReservationResult::ReservationDenied) \
	op(EPartyReservationResult::ReservationDenied_CrossPlayRestriction) \
	op(EPartyReservationResult::ReservationDenied_Banned) \
	op(EPartyReservationResult::ReservationRequestCanceled) \
	op(EPartyReservationResult::ReservationInvalid) \
	op(EPartyReservationResult::BadSessionId) \
	op(EPartyReservationResult::ReservationDenied_ContainsExistingPlayers) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
