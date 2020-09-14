// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_OnlineBeaconClient_generated_h
#error "OnlineBeaconClient.generated.h already included, missing '#pragma once' in OnlineBeaconClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineBeaconClient_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_RPC_WRAPPERS \
	virtual void ClientOnConnected_Implementation(); \
 \
	DECLARE_FUNCTION(execClientOnConnected);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientOnConnected_Implementation(); \
 \
	DECLARE_FUNCTION(execClientOnConnected);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_EVENT_PARMS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_CALLBACK_WRAPPERS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_AOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(AOnlineBeaconClient, AOnlineBeacon, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_INCLASS \
private: \
	static void StaticRegisterNativesAOnlineBeaconClient(); \
	friend struct Z_Construct_UClass_AOnlineBeaconClient_Statics; \
public: \
	DECLARE_CLASS(AOnlineBeaconClient, AOnlineBeacon, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(AOnlineBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnlineBeaconClient(AOnlineBeaconClient&&); \
	NO_API AOnlineBeaconClient(const AOnlineBeaconClient&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOnlineBeaconClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOnlineBeaconClient(AOnlineBeaconClient&&); \
	NO_API AOnlineBeaconClient(const AOnlineBeaconClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOnlineBeaconClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOnlineBeaconClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOnlineBeaconClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BeaconOwner() { return STRUCT_OFFSET(AOnlineBeaconClient, BeaconOwner); } \
	FORCEINLINE static uint32 __PPO__BeaconConnection() { return STRUCT_OFFSET(AOnlineBeaconClient, BeaconConnection); } \
	FORCEINLINE static uint32 __PPO__ConnectionState() { return STRUCT_OFFSET(AOnlineBeaconClient, ConnectionState); }


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_41_PROLOG \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_EVENT_PARMS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_CALLBACK_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_CALLBACK_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h_44_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OnlineBeaconClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class AOnlineBeaconClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Public_OnlineBeaconClient_h


#define FOREACH_ENUM_EBEACONCONNECTIONSTATE(op) \
	op(EBeaconConnectionState::Invalid) \
	op(EBeaconConnectionState::Closed) \
	op(EBeaconConnectionState::Pending) \
	op(EBeaconConnectionState::Open) 

enum class EBeaconConnectionState : uint8;
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EBeaconConnectionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
