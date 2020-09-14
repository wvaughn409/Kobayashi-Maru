// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
struct FPartyReservation;
#ifdef ONLINESUBSYSTEMUTILS_PartyBeaconClient_generated_h
#error "PartyBeaconClient.generated.h already included, missing '#pragma once' in PartyBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_PartyBeaconClient_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_RPC_WRAPPERS \
	virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& PartyLeader); \
	virtual bool ServerRemoveMemberFromReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerRemoveMemberFromReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	virtual void ClientSendReservationFull_Implementation(); \
	virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	virtual void ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
	virtual void ClientReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
 \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerRemoveMemberFromReservationRequest); \
	DECLARE_FUNCTION(execServerUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& PartyLeader); \
	virtual bool ServerRemoveMemberFromReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerRemoveMemberFromReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerUpdateReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerUpdateReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& ReservationUpdate); \
	virtual bool ServerReservationRequest_Validate(const FString& , FPartyReservation const& ); \
	virtual void ServerReservationRequest_Implementation(const FString& SessionId, FPartyReservation const& Reservation); \
	virtual void ClientSendReservationFull_Implementation(); \
	virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	virtual void ClientCancelReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
	virtual void ClientReservationResponse_Implementation(EPartyReservationResult::Type ReservationResponse); \
 \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerRemoveMemberFromReservationRequest); \
	DECLARE_FUNCTION(execServerUpdateReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_EVENT_PARMS \
	struct PartyBeaconClient_eventClientCancelReservationResponse_Parms \
	{ \
		TEnumAsByte<EPartyReservationResult::Type> ReservationResponse; \
	}; \
	struct PartyBeaconClient_eventClientReservationResponse_Parms \
	{ \
		TEnumAsByte<EPartyReservationResult::Type> ReservationResponse; \
	}; \
	struct PartyBeaconClient_eventClientSendReservationUpdates_Parms \
	{ \
		int32 NumRemainingReservations; \
	}; \
	struct PartyBeaconClient_eventServerCancelReservationRequest_Parms \
	{ \
		FUniqueNetIdRepl PartyLeader; \
	}; \
	struct PartyBeaconClient_eventServerRemoveMemberFromReservationRequest_Parms \
	{ \
		FString SessionId; \
		FPartyReservation ReservationUpdate; \
	}; \
	struct PartyBeaconClient_eventServerReservationRequest_Parms \
	{ \
		FString SessionId; \
		FPartyReservation Reservation; \
	}; \
	struct PartyBeaconClient_eventServerUpdateReservationRequest_Parms \
	{ \
		FString SessionId; \
		FPartyReservation ReservationUpdate; \
	};


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_CALLBACK_WRAPPERS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPartyBeaconClient(); \
	friend struct Z_Construct_UClass_APartyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(APartyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(APartyBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_INCLASS \
private: \
	static void StaticRegisterNativesAPartyBeaconClient(); \
	friend struct Z_Construct_UClass_APartyBeaconClient_Statics; \
public: \
	DECLARE_CLASS(APartyBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(APartyBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APartyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartyBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartyBeaconClient(APartyBeaconClient&&); \
	NO_API APartyBeaconClient(const APartyBeaconClient&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APartyBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APartyBeaconClient(APartyBeaconClient&&); \
	NO_API APartyBeaconClient(const APartyBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APartyBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APartyBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APartyBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DestSessionId() { return STRUCT_OFFSET(APartyBeaconClient, DestSessionId); } \
	FORCEINLINE static uint32 __PPO__PendingReservation() { return STRUCT_OFFSET(APartyBeaconClient, PendingReservation); } \
	FORCEINLINE static uint32 __PPO__RequestType() { return STRUCT_OFFSET(APartyBeaconClient, RequestType); } \
	FORCEINLINE static uint32 __PPO__bPendingReservationSent() { return STRUCT_OFFSET(APartyBeaconClient, bPendingReservationSent); } \
	FORCEINLINE static uint32 __PPO__bCancelReservation() { return STRUCT_OFFSET(APartyBeaconClient, bCancelReservation); }


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_90_PROLOG \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_EVENT_PARMS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_CALLBACK_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_CALLBACK_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h_93_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PartyBeaconClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class APartyBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_PartyBeaconClient_h


#define FOREACH_ENUM_ECLIENTREQUESTTYPE(op) \
	op(EClientRequestType::NonePending) \
	op(EClientRequestType::ExistingSessionReservation) \
	op(EClientRequestType::ReservationUpdate) \
	op(EClientRequestType::EmptyServerReservation) \
	op(EClientRequestType::Reconnect) \
	op(EClientRequestType::Abandon) \
	op(EClientRequestType::ReservationRemoveMembers) 

enum class EClientRequestType : uint8;
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EClientRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
