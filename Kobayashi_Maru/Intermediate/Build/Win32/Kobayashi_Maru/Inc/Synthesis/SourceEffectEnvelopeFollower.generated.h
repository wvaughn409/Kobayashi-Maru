// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnvelopeFollowerListener;
struct FSourceEffectEnvelopeFollowerSettings;
#ifdef SYNTHESIS_SourceEffectEnvelopeFollower_generated_h
#error "SourceEffectEnvelopeFollower.generated.h already included, missing '#pragma once' in SourceEffectEnvelopeFollower.h"
#endif
#define SYNTHESIS_SourceEffectEnvelopeFollower_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectEnvelopeFollowerSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectEnvelopeFollowerSettings>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_75_DELEGATE \
struct _Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms \
{ \
	float EnvelopeValue; \
}; \
static inline void FOnEnvelopeFollowerUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnEnvelopeFollowerUpdate, float EnvelopeValue) \
{ \
	_Script_Synthesis_eventOnEnvelopeFollowerUpdate_Parms Parms; \
	Parms.EnvelopeValue=EnvelopeValue; \
	OnEnvelopeFollowerUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_RPC_WRAPPERS
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEnvelopeFollowerListener(); \
	friend struct Z_Construct_UClass_UEnvelopeFollowerListener_Statics; \
public: \
	DECLARE_CLASS(UEnvelopeFollowerListener, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UEnvelopeFollowerListener)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_INCLASS \
private: \
	static void StaticRegisterNativesUEnvelopeFollowerListener(); \
	friend struct Z_Construct_UClass_UEnvelopeFollowerListener_Statics; \
public: \
	DECLARE_CLASS(UEnvelopeFollowerListener, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(UEnvelopeFollowerListener)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEnvelopeFollowerListener(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvelopeFollowerListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvelopeFollowerListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvelopeFollowerListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvelopeFollowerListener(UEnvelopeFollowerListener&&); \
	NO_API UEnvelopeFollowerListener(const UEnvelopeFollowerListener&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEnvelopeFollowerListener(UEnvelopeFollowerListener&&); \
	NO_API UEnvelopeFollowerListener(const UEnvelopeFollowerListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEnvelopeFollowerListener); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEnvelopeFollowerListener); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEnvelopeFollowerListener)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_83_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_86_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class UEnvelopeFollowerListener>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUnregisterEnvelopeFollowerListener); \
	DECLARE_FUNCTION(execRegisterEnvelopeFollowerListener); \
	DECLARE_FUNCTION(execSetSettings);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUnregisterEnvelopeFollowerListener); \
	DECLARE_FUNCTION(execRegisterEnvelopeFollowerListener); \
	DECLARE_FUNCTION(execSetSettings);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset(); \
	friend struct Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectEnvelopeFollowerPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectEnvelopeFollowerPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_INCLASS \
private: \
	static void StaticRegisterNativesUSourceEffectEnvelopeFollowerPreset(); \
	friend struct Z_Construct_UClass_USourceEffectEnvelopeFollowerPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectEnvelopeFollowerPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectEnvelopeFollowerPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectEnvelopeFollowerPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectEnvelopeFollowerPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectEnvelopeFollowerPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectEnvelopeFollowerPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectEnvelopeFollowerPreset(USourceEffectEnvelopeFollowerPreset&&); \
	NO_API USourceEffectEnvelopeFollowerPreset(const USourceEffectEnvelopeFollowerPreset&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectEnvelopeFollowerPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectEnvelopeFollowerPreset(USourceEffectEnvelopeFollowerPreset&&); \
	NO_API USourceEffectEnvelopeFollowerPreset(const USourceEffectEnvelopeFollowerPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectEnvelopeFollowerPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectEnvelopeFollowerPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectEnvelopeFollowerPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_126_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h_129_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USourceEffectEnvelopeFollowerPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectEnvelopeFollower_h


#define FOREACH_ENUM_EENVELOPEFOLLOWERPEAKMODE(op) \
	op(EEnvelopeFollowerPeakMode::MeanSquared) \
	op(EEnvelopeFollowerPeakMode::RootMeanSquared) \
	op(EEnvelopeFollowerPeakMode::Peak) \
	op(EEnvelopeFollowerPeakMode::Count) 

enum class EEnvelopeFollowerPeakMode : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<EEnvelopeFollowerPeakMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
