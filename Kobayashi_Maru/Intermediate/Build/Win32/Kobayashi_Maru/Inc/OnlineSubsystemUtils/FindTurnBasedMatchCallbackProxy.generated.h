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
class ITurnBasedMatchInterface;
class UFindTurnBasedMatchCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_FindTurnBasedMatchCallbackProxy_generated_h
#error "FindTurnBasedMatchCallbackProxy.generated.h already included, missing '#pragma once' in FindTurnBasedMatchCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_FindTurnBasedMatchCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_17_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms \
{ \
	FString MatchID; \
}; \
static inline void FOnlineTurnBasedMatchResult_DelegateWrapper(const FMulticastScriptDelegate& OnlineTurnBasedMatchResult, const FString& MatchID) \
{ \
	_Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms Parms; \
	Parms.MatchID=MatchID; \
	OnlineTurnBasedMatchResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindTurnBasedMatch);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindTurnBasedMatch);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFindTurnBasedMatchCallbackProxy(); \
	friend struct Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UFindTurnBasedMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UFindTurnBasedMatchCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_INCLASS \
private: \
	static void StaticRegisterNativesUFindTurnBasedMatchCallbackProxy(); \
	friend struct Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UFindTurnBasedMatchCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UFindTurnBasedMatchCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindTurnBasedMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindTurnBasedMatchCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindTurnBasedMatchCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindTurnBasedMatchCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UFindTurnBasedMatchCallbackProxy(UFindTurnBasedMatchCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UFindTurnBasedMatchCallbackProxy(const UFindTurnBasedMatchCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UFindTurnBasedMatchCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UFindTurnBasedMatchCallbackProxy(UFindTurnBasedMatchCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UFindTurnBasedMatchCallbackProxy(const UFindTurnBasedMatchCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UFindTurnBasedMatchCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFindTurnBasedMatchCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFindTurnBasedMatchCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_37_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h_40_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class FindTurnBasedMatchCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UFindTurnBasedMatchCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindTurnBasedMatchCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
