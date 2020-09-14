// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInAppPurchaseProductInfo;
class APlayerController;
struct FInAppPurchaseProductRequest;
class UInAppPurchaseCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy_generated_h
#error "InAppPurchaseCallbackProxy.generated.h already included, missing '#pragma once' in InAppPurchaseCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseReceiptInfo>();

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_32_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventInAppPurchaseResult_Parms \
{ \
	TEnumAsByte<EInAppPurchaseState::Type> PurchaseStatus; \
	FInAppPurchaseProductInfo InAppPurchaseReceipts; \
}; \
static inline void FInAppPurchaseResult_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseResult, EInAppPurchaseState::Type PurchaseStatus, FInAppPurchaseProductInfo const& InAppPurchaseReceipts) \
{ \
	_Script_OnlineSubsystemUtils_eventInAppPurchaseResult_Parms Parms; \
	Parms.PurchaseStatus=PurchaseStatus; \
	Parms.InAppPurchaseReceipts=InAppPurchaseReceipts; \
	InAppPurchaseResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchase);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchase);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCallbackProxy(); \
	friend struct Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy(UInAppPurchaseCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy(const UInAppPurchaseCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy(UInAppPurchaseCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy(const UInAppPurchaseCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_34_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
