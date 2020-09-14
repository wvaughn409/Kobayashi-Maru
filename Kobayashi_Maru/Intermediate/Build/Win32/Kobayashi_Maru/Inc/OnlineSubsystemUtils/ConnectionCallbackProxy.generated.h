// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class APlayerController;
class UConnectionCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_ConnectionCallbackProxy_generated_h
#error "ConnectionCallbackProxy.generated.h already included, missing '#pragma once' in ConnectionCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_ConnectionCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_14_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms \
{ \
	int32 ErrorCode; \
}; \
static inline void FOnlineConnectionResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineConnectionResult, int32 ErrorCode) \
{ \
	_Script_OnlineSubsystemUtils_eventOnlineConnectionResult_Parms Parms; \
	Parms.ErrorCode=ErrorCode; \
	OnlineConnectionResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConnectToService);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConnectToService);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUConnectionCallbackProxy(); \
	friend struct Z_Construct_UClass_UConnectionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UConnectionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UConnectionCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUConnectionCallbackProxy(); \
	friend struct Z_Construct_UClass_UConnectionCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UConnectionCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UConnectionCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UConnectionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(UConnectionCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const UConnectionCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(UConnectionCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UConnectionCallbackProxy(const UConnectionCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UConnectionCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UConnectionCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UConnectionCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_17_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ConnectionCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UConnectionCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ConnectionCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
