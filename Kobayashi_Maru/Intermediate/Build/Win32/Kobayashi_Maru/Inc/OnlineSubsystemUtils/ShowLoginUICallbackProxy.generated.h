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
class UShowLoginUICallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_ShowLoginUICallbackProxy_generated_h
#error "ShowLoginUICallbackProxy.generated.h already included, missing '#pragma once' in ShowLoginUICallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_ShowLoginUICallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_14_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms \
{ \
	APlayerController* PlayerController; \
}; \
static inline void FOnlineShowLoginUIResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineShowLoginUIResult, APlayerController* PlayerController) \
{ \
	_Script_OnlineSubsystemUtils_eventOnlineShowLoginUIResult_Parms Parms; \
	Parms.PlayerController=PlayerController; \
	OnlineShowLoginUIResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execShowExternalLoginUI);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execShowExternalLoginUI);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShowLoginUICallbackProxy(); \
	friend struct Z_Construct_UClass_UShowLoginUICallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UShowLoginUICallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UShowLoginUICallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUShowLoginUICallbackProxy(); \
	friend struct Z_Construct_UClass_UShowLoginUICallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UShowLoginUICallbackProxy, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UShowLoginUICallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UShowLoginUICallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowLoginUICallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UShowLoginUICallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowLoginUICallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UShowLoginUICallbackProxy(UShowLoginUICallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UShowLoginUICallbackProxy(const UShowLoginUICallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UShowLoginUICallbackProxy(UShowLoginUICallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UShowLoginUICallbackProxy(const UShowLoginUICallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UShowLoginUICallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShowLoginUICallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShowLoginUICallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_16_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UShowLoginUICallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_ShowLoginUICallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
