// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUMGSequencePlayer;
class UUserWidget;
class UWidgetAnimation;
class UWidgetAnimationPlayCallbackProxy;
#ifdef UMG_WidgetAnimationPlayCallbackProxy_generated_h
#error "WidgetAnimationPlayCallbackProxy.generated.h already included, missing '#pragma once' in WidgetAnimationPlayCallbackProxy.h"
#endif
#define UMG_WidgetAnimationPlayCallbackProxy_generated_h

#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_8_DELEGATE \
static inline void FWidgetAnimationResult_DelegateWrapper(const FMulticastScriptDelegate& WidgetAnimationResult) \
{ \
	WidgetAnimationResult.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreatePlayAnimationTimeRangeProxyObject); \
	DECLARE_FUNCTION(execCreatePlayAnimationProxyObject);


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreatePlayAnimationTimeRangeProxyObject); \
	DECLARE_FUNCTION(execCreatePlayAnimationProxyObject);


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetAnimationPlayCallbackProxy(); \
	friend struct Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UWidgetAnimationPlayCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetAnimationPlayCallbackProxy)


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetAnimationPlayCallbackProxy(); \
	friend struct Z_Construct_UClass_UWidgetAnimationPlayCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(UWidgetAnimationPlayCallbackProxy, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), UMG_API) \
	DECLARE_SERIALIZER(UWidgetAnimationPlayCallbackProxy)


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetAnimationPlayCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetAnimationPlayCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetAnimationPlayCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetAnimationPlayCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMG_API UWidgetAnimationPlayCallbackProxy(UWidgetAnimationPlayCallbackProxy&&); \
	UMG_API UWidgetAnimationPlayCallbackProxy(const UWidgetAnimationPlayCallbackProxy&); \
public:


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UMG_API UWidgetAnimationPlayCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMG_API UWidgetAnimationPlayCallbackProxy(UWidgetAnimationPlayCallbackProxy&&); \
	UMG_API UWidgetAnimationPlayCallbackProxy(const UWidgetAnimationPlayCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UMG_API, UWidgetAnimationPlayCallbackProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetAnimationPlayCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetAnimationPlayCallbackProxy)


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_10_PROLOG
#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_INCLASS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetAnimationPlayCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetAnimationPlayCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationPlayCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
