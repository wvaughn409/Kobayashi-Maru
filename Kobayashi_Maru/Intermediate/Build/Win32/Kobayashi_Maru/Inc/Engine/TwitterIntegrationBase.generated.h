// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_TwitterIntegrationBase_generated_h
#error "TwitterIntegrationBase.generated.h already included, missing '#pragma once' in TwitterIntegrationBase.h"
#endif
#define ENGINE_TwitterIntegrationBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTwitterRequest); \
	DECLARE_FUNCTION(execGetAccountName); \
	DECLARE_FUNCTION(execGetNumAccounts); \
	DECLARE_FUNCTION(execAuthorizeAccounts); \
	DECLARE_FUNCTION(execShowTweetUI); \
	DECLARE_FUNCTION(execCanShowTweetUI); \
	DECLARE_FUNCTION(execInit);


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTwitterRequest); \
	DECLARE_FUNCTION(execGetAccountName); \
	DECLARE_FUNCTION(execGetNumAccounts); \
	DECLARE_FUNCTION(execAuthorizeAccounts); \
	DECLARE_FUNCTION(execShowTweetUI); \
	DECLARE_FUNCTION(execCanShowTweetUI); \
	DECLARE_FUNCTION(execInit);


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTwitterIntegrationBase(); \
	friend struct Z_Construct_UClass_UTwitterIntegrationBase_Statics; \
public: \
	DECLARE_CLASS(UTwitterIntegrationBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTwitterIntegrationBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS \
private: \
	static void StaticRegisterNativesUTwitterIntegrationBase(); \
	friend struct Z_Construct_UClass_UTwitterIntegrationBase_Statics; \
public: \
	DECLARE_CLASS(UTwitterIntegrationBase, UPlatformInterfaceBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UTwitterIntegrationBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwitterIntegrationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwitterIntegrationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitterIntegrationBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitterIntegrationBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwitterIntegrationBase(UTwitterIntegrationBase&&); \
	NO_API UTwitterIntegrationBase(const UTwitterIntegrationBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTwitterIntegrationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTwitterIntegrationBase(UTwitterIntegrationBase&&); \
	NO_API UTwitterIntegrationBase(const UTwitterIntegrationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTwitterIntegrationBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTwitterIntegrationBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTwitterIntegrationBase)


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h_39_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TwitterIntegrationBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTwitterIntegrationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_TwitterIntegrationBase_h


#define FOREACH_ENUM_ETWITTERINTEGRATIONDELEGATE(op) \
	op(TID_AuthorizeComplete) \
	op(TID_TweetUIComplete) \
	op(TID_RequestComplete) 
#define FOREACH_ENUM_ETWITTERREQUESTMETHOD(op) \
	op(TRM_Get) \
	op(TRM_Post) \
	op(TRM_Delete) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
