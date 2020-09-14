// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FUniqueNetIdRepl;
struct FSpectatorReservation;
#ifdef ONLINESUBSYSTEMUTILS_SpectatorBeaconClient_generated_h
#error "SpectatorBeaconClient.generated.h already included, missing '#pragma once' in SpectatorBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_SpectatorBeaconClient_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_RPC_WRAPPERS \
	virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& Spectator); \
	virtual bool ServerReservationRequest_Validate(const FString& , FSpectatorReservation const& ); \
	virtual void ServerReservationRequest_Implementation(const FString& SessionId, FSpectatorReservation const& Reservation); \
	virtual void ClientSendReservationFull_Implementation(); \
	virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	virtual void ClientCancelReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse); \
	virtual void ClientReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse); \
 \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerCancelReservationRequest_Validate(FUniqueNetIdRepl const& ); \
	virtual void ServerCancelReservationRequest_Implementation(FUniqueNetIdRepl const& Spectator); \
	virtual bool ServerReservationRequest_Validate(const FString& , FSpectatorReservation const& ); \
	virtual void ServerReservationRequest_Implementation(const FString& SessionId, FSpectatorReservation const& Reservation); \
	virtual void ClientSendReservationFull_Implementation(); \
	virtual void ClientSendReservationUpdates_Implementation(int32 NumRemainingReservations); \
	virtual void ClientCancelReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse); \
	virtual void ClientReservationResponse_Implementation(ESpectatorReservationResult::Type ReservationResponse); \
 \
	DECLARE_FUNCTION(execServerCancelReservationRequest); \
	DECLARE_FUNCTION(execServerReservationRequest); \
	DECLARE_FUNCTION(execClientSendReservationFull); \
	DECLARE_FUNCTION(execClientSendReservationUpdates); \
	DECLARE_FUNCTION(execClientCancelReservationResponse); \
	DECLARE_FUNCTION(execClientReservationResponse);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_EVENT_PARMS \
	struct SpectatorBeaconClient_eventClientCancelReservationResponse_Parms \
	{ \
		TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse; \
	}; \
	struct SpectatorBeaconClient_eventClientReservationResponse_Parms \
	{ \
		TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse; \
	}; \
	struct SpectatorBeaconClient_eventClientSendReservationUpdates_Parms \
	{ \
		int32 NumRemainingReservations; \
	}; \
	struct SpectatorBeaconClient_eventServerCancelReservationRequest_Parms \
	{ \
		FUniqueNetIdRepl Spectator; \
	}; \
	struct SpectatorBeaconClient_eventServerReservationRequest_Parms \
	{ \
		FString SessionId; \
		FSpectatorReservation Reservation; \
	};


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_CALLBACK_WRAPPERS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASpectatorBeaconClient(); \
	friend struct Z_Construct_UClass_ASpectatorBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASpectatorBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(ASpectatorBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_INCLASS \
private: \
	static void StaticRegisterNativesASpectatorBeaconClient(); \
	friend struct Z_Construct_UClass_ASpectatorBeaconClient_Statics; \
public: \
	DECLARE_CLASS(ASpectatorBeaconClient, AOnlineBeaconClient, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(ASpectatorBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpectatorBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpectatorBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpectatorBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpectatorBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpectatorBeaconClient(ASpectatorBeaconClient&&); \
	NO_API ASpectatorBeaconClient(const ASpectatorBeaconClient&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASpectatorBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASpectatorBeaconClient(ASpectatorBeaconClient&&); \
	NO_API ASpectatorBeaconClient(const ASpectatorBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASpectatorBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASpectatorBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASpectatorBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DestSessionId() { return STRUCT_OFFSET(ASpectatorBeaconClient, DestSessionId); } \
	FORCEINLINE static uint32 __PPO__PendingReservation() { return STRUCT_OFFSET(ASpectatorBeaconClient, PendingReservation); } \
	FORCEINLINE static uint32 __PPO__RequestType() { return STRUCT_OFFSET(ASpectatorBeaconClient, RequestType); } \
	FORCEINLINE static uint32 __PPO__bPendingReservationSent() { return STRUCT_OFFSET(ASpectatorBeaconClient, bPendingReservationSent); } \
	FORCEINLINE static uint32 __PPO__bCancelReservation() { return STRUCT_OFFSET(ASpectatorBeaconClient, bCancelReservation); }


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_84_PROLOG \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_EVENT_PARMS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_CALLBACK_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_CALLBACK_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h_87_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SpectatorBeaconClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class ASpectatorBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_SpectatorBeaconClient_h


#define FOREACH_ENUM_ESPECTATORCLIENTREQUESTTYPE(op) \
	op(ESpectatorClientRequestType::NonePending) \
	op(ESpectatorClientRequestType::ExistingSessionReservation) \
	op(ESpectatorClientRequestType::ReservationUpdate) \
	op(ESpectatorClientRequestType::EmptyServerReservation) \
	op(ESpectatorClientRequestType::Reconnect) \
	op(ESpectatorClientRequestType::Abandon) 

enum class ESpectatorClientRequestType : uint8;
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<ESpectatorClientRequestType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
