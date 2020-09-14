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
class UAchievementWriteCallbackProxy;
#ifdef ONLINESUBSYSTEMUTILS_AchievementWriteCallbackProxy_generated_h
#error "AchievementWriteCallbackProxy.generated.h already included, missing '#pragma once' in AchievementWriteCallbackProxy.h"
#endif
#define ONLINESUBSYSTEMUTILS_AchievementWriteCallbackProxy_generated_h

#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_12_DELEGATE \
struct _Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms \
{ \
	FName WrittenAchievementName; \
	float WrittenProgress; \
	int32 WrittenUserTag; \
}; \
static inline void FAchievementWriteDelegate_DelegateWrapper(const FMulticastScriptDelegate& AchievementWriteDelegate, FName WrittenAchievementName, float WrittenProgress, int32 WrittenUserTag) \
{ \
	_Script_OnlineSubsystemUtils_eventAchievementWriteDelegate_Parms Parms; \
	Parms.WrittenAchievementName=WrittenAchievementName; \
	Parms.WrittenProgress=WrittenProgress; \
	Parms.WrittenUserTag=WrittenUserTag; \
	AchievementWriteDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_SPARSE_DATA
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execWriteAchievementProgress);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execWriteAchievementProgress);


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAchievementWriteCallbackProxy(); \
	friend struct Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UAchievementWriteCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UAchievementWriteCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUAchievementWriteCallbackProxy(); \
	friend struct Z_Construct_UClass_UAchievementWriteCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UAchievementWriteCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/OnlineSubsystemUtils"), ONLINESUBSYSTEMUTILS_API) \
	DECLARE_SERIALIZER(UAchievementWriteCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementWriteCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UAchievementWriteCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementWriteCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(UAchievementWriteCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const UAchievementWriteCallbackProxy&); \
public:


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(UAchievementWriteCallbackProxy&&); \
	ONLINESUBSYSTEMUTILS_API UAchievementWriteCallbackProxy(const UAchievementWriteCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ONLINESUBSYSTEMUTILS_API, UAchievementWriteCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAchievementWriteCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAchievementWriteCallbackProxy)


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_14_PROLOG
#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_RPC_WRAPPERS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_INCLASS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_SPARSE_DATA \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AchievementWriteCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<class UAchievementWriteCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_AchievementWriteCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
