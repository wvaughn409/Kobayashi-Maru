// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UForceFeedbackComponent;
struct FForceFeedbackAttenuationSettings;
class UForceFeedbackEffect;
#ifdef ENGINE_ForceFeedbackComponent_generated_h
#error "ForceFeedbackComponent.generated.h already included, missing '#pragma once' in ForceFeedbackComponent.h"
#endif
#define ENGINE_ForceFeedbackComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_53_DELEGATE \
struct _Script_Engine_eventOnForceFeedbackFinished_Parms \
{ \
	UForceFeedbackComponent* ForceFeedbackComponent; \
}; \
static inline void FOnForceFeedbackFinished_DelegateWrapper(const FMulticastScriptDelegate& OnForceFeedbackFinished, UForceFeedbackComponent* ForceFeedbackComponent) \
{ \
	_Script_Engine_eventOnForceFeedbackFinished_Parms Parms; \
	Parms.ForceFeedbackComponent=ForceFeedbackComponent; \
	OnForceFeedbackFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetIntensityMultiplier); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetForceFeedbackEffect);


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBP_GetAttenuationSettingsToApply); \
	DECLARE_FUNCTION(execAdjustAttenuation); \
	DECLARE_FUNCTION(execSetIntensityMultiplier); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execPlay); \
	DECLARE_FUNCTION(execSetForceFeedbackEffect);


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForceFeedbackComponent(); \
	friend struct Z_Construct_UClass_UForceFeedbackComponent_Statics; \
public: \
	DECLARE_CLASS(UForceFeedbackComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UForceFeedbackComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUForceFeedbackComponent(); \
	friend struct Z_Construct_UClass_UForceFeedbackComponent_Statics; \
public: \
	DECLARE_CLASS(UForceFeedbackComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UForceFeedbackComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForceFeedbackComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForceFeedbackComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForceFeedbackComponent(UForceFeedbackComponent&&); \
	NO_API UForceFeedbackComponent(const UForceFeedbackComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForceFeedbackComponent(UForceFeedbackComponent&&); \
	NO_API UForceFeedbackComponent(const UForceFeedbackComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForceFeedbackComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceFeedbackComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceFeedbackComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_58_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UForceFeedbackComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ForceFeedbackComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
