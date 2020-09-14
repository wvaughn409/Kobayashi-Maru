// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UObject;
class ULogoutCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_LogoutCallbackProxy_generated_h
#error "LogoutCallbackProxy.generated.h already included, missing '#pragma once' in LogoutCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_LogoutCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_12_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventOnlineLogoutResult_Parms \
{ \
	APlayerController* PlayerController; \
}; \
static inline void FOnlineLogoutResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineLogoutResult, APlayerController* PlayerController) \
{ \
	_Script_OnlineSubsystemUtils_eventOnlineLogoutResult_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	OnlineLogoutResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLogout);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLogout);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULogoutCallbackProxy(); \
	friend struct Z_Construct_UClass_ULogoutCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULogoutCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(ULogoutCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesULogoutCallbackProxy(); \
	friend struct Z_Construct_UClass_ULogoutCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(ULogoutCallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(ULogoutCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API ULogoutCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogoutCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULogoutCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogoutCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API ULogoutCallbackProxy(ULogoutCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API ULogoutCallbackProxy(const ULogoutCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API ULogoutCallbackProxy(ULogoutCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API ULogoutCallbackProxy(const ULogoutCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, ULogoutCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULogoutCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULogoutCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_14_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class ULogoutCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LogoutCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
