// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EInAppPurchaseStatus : uint8;
struct FInAppPurchaseReceiptInfo2;
class APlayerController;
class UInAppPurchaseCallbackProxy2;
struct FInAppPurchaseProductRequest2;
#ifdef ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy2_generated_h
#error "InAppPurchaseCallbackProxy2.generated.h already included, missing '#pragma once' in InAppPurchaseCallbackProxy2.h"
#endif
#define ONLINESUBSYSTEMUTILS_InAppPurchaseCallbackProxy2_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseReceiptInfo2>();

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseProductInfo2>();

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics; \
	ONLINESUBSYSTEMUTILS_API static class UScriptStruct* StaticStruct();


template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<struct FInAppPurchaseProductRequest2>();

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_126_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms \
{ \
	EInAppPurchaseStatus PurchaseStatus; \
	TArray<FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts; \
}; \
static inline void FInAppPurchaseResult2_DelegateWrapper(const FMulticastScriptDelegate& InAppPurchaseResult2, EInAppPurchaseStatus PurchaseStatus, TArray<FInAppPurchaseReceiptInfo2> const& InAppPurchaseReceipts) \
{ \
	_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms Parms; \
	Parms.PurchaseStatus=PurchaseStatus; \
	Parms.InAppPurchaseReceipts=InAppPurchaseReceipts; \
	InAppPurchaseResult2.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQueryOwned); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseUnprocessedPurchases); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchase);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseQueryOwned); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchaseUnprocessedPurchases); \
	DECLARE_FUNCTION(execCreateProxyObjectForInAppPurchase);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseCallbackProxy2)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_INCLASS \
private: \
	static void StaticRegisterNativesUInAppPurchaseCallbackProxy2(); \
	friend struct Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics; \
public: \
	DECLARE_CLASS(UInAppPurchaseCallbackProxy2, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UInAppPurchaseCallbackProxy2)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCallbackProxy2) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCallbackProxy2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCallbackProxy2); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(UInAppPurchaseCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const UInAppPurchaseCallbackProxy2&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(UInAppPurchaseCallbackProxy2&&); \
	ONLINESUBSYSTEMUTILS_API UInAppPurchaseCallbackProxy2(const UInAppPurchaseCallbackProxy2&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UInAppPurchaseCallbackProxy2); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInAppPurchaseCallbackProxy2); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInAppPurchaseCallbackProxy2)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_128_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h_131_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class InAppPurchaseCallbackProxy2."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UInAppPurchaseCallbackProxy2>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_InAppPurchaseCallbackProxy2_h


#define FOREACH_ENUM_EINAPPPURCHASESTATUS(op) \
	op(EInAppPurchaseStatus::Invalid) \
	op(EInAppPurchaseStatus::Failed) \
	op(EInAppPurchaseStatus::Deferred) \
	op(EInAppPurchaseStatus::Canceled) \
	op(EInAppPurchaseStatus::Purchased) \
	op(EInAppPurchaseStatus::Restored) 

enum class EInAppPurchaseStatus : uint8;
template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EInAppPurchaseStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
