// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class ULeaderboardQueryCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_LeaderboardQueryCallbackProxy_generated_h
#error "LeaderboardQueryCallbackProxy.generated.h already included, missing '#pragma once' in LeaderboardQueryCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_LeaderboardQueryCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_13_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms \
{ \
	int32 LeaderboardValue; \
}; \
static inline void FLeaderboardQueryResult_DelegateWrapper(const FMulticastScriptDelegate& LeaderboardQueryResult, int32 LeaderboardValue) \
{ \
	_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms Parms; \
	Parms.LeaderboardValue=LeaderboardValue; \
	LeaderboardQueryResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForIntQuery);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForIntQuery);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULeaderboardQueryCallbackProxy(); \
	friend struct Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULeaderboardQueryCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(ULeaderboardQueryCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_INCLASS \
private: \
	static void StaticRegisterNativesULeaderboardQueryCallbackProxy(); \
	friend struct Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULeaderboardQueryCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(ULeaderboardQueryCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardQueryCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULeaderboardQueryCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardQueryCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardQueryCallbackProxy(ULeaderboardQueryCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API ULeaderboardQueryCallbackProxy(const ULeaderboardQueryCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardQueryCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API ULeaderboardQueryCallbackProxy(ULeaderboardQueryCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API ULeaderboardQueryCallbackProxy(const ULeaderboardQueryCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULeaderboardQueryCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULeaderboardQueryCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULeaderboardQueryCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_15_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class LeaderboardQueryCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class ULeaderboardQueryCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardQueryCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
