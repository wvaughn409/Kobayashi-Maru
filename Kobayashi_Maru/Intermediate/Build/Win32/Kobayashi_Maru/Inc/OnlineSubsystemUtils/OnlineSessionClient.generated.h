// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ONLINESUBSYSTEMUTILS_OnlineSessionClient_generated_h
#error "OnlineSessionClient.generated.h already included, missing '#pragma once' in OnlineSessionClient.h"
#endif
#define ONLINESUBSYSTEMUTILS_OnlineSessionClient_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_RPC_WRAPPERS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOnlineSessionClient(); \
	friend struct Z_Construct_UClass_UOnlineSessionClient_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionClient, UOnlineSession, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUOnlineSessionClient(); \
	friend struct Z_Construct_UClass_UOnlineSessionClient_Statics; \
public: \
	DECLARE_CLASS(UOnlineSessionClient, UOnlineSession, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), NO_API) \
	DECLARE_SERIALIZER(UOnlineSessionClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionClient) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionClient); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionClient(UOnlineSessionClient&&); \
	NO_API UOnlineSessionClient(const UOnlineSessionClient&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOnlineSessionClient(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOnlineSessionClient(UOnlineSessionClient&&); \
	NO_API UOnlineSessionClient(const UOnlineSessionClient&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOnlineSessionClient); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOnlineSessionClient); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOnlineSessionClient)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsFromInvite() { return STRUCT_OFFSET(UOnlineSessionClient, bIsFromInvite); } \
	FORCEINLINE static uint32 __PPO__bHandlingDisconnect() { return STRUCT_OFFSET(UOnlineSessionClient, bHandlingDisconnect); }


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_22_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OnlineSessionClient."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UOnlineSessionClient>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_OnlineSessionClient_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
