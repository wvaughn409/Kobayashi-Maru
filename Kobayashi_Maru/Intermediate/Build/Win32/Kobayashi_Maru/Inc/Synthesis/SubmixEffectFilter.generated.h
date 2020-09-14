// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESubmixFilterAlgorithm : uint8;
enum class ESubmixFilterType : uint8;
struct FSubmixEffectFilterSettings;
#ifdef SYNTHESIS_SubmixEffectFilter_generated_h
#error "SubmixEffectFilter.generated.h already included, missing '#pragma once' in SubmixEffectFilter.h"
#endif
#define SYNTHESIS_SubmixEffectFilter_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubmixEffectFilterSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSubmixEffectFilterSettings>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequency); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetSettings);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetFilterQMod); \
	DECLARE_FUNCTION(execSetFilterQ); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequencyMod); \
	DECLARE_FUNCTION(execSetFilterCutoffFrequency); \
	DECLARE_FUNCTION(execSetFilterAlgorithm); \
	DECLARE_FUNCTION(execSetFilterType); \
	DECLARE_FUNCTION(execSetSettings);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSubmixEffectFilterPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectFilterPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectFilterPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectFilterPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_INCLASS \
private: \
	static void StaticRegisterNativesUSubmixEffectFilterPreset(); \
	friend struct Z_Construct_UClass_USubmixEffectFilterPreset_Statics; \
public: \
	DECLARE_CLASS(USubmixEffectFilterPreset, USoundEffectSubmixPreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USubmixEffectFilterPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectFilterPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectFilterPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectFilterPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectFilterPreset(USubmixEffectFilterPreset&&); \
	NO_API USubmixEffectFilterPreset(const USubmixEffectFilterPreset&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USubmixEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USubmixEffectFilterPreset(USubmixEffectFilterPreset&&); \
	NO_API USubmixEffectFilterPreset(const USubmixEffectFilterPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USubmixEffectFilterPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubmixEffectFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubmixEffectFilterPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_131_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h_134_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USubmixEffectFilterPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SubmixEffects_SubmixEffectFilter_h


#define FOREACH_ENUM_ESUBMIXFILTERALGORITHM(op) \
	op(ESubmixFilterAlgorithm::OnePole) \
	op(ESubmixFilterAlgorithm::StateVariable) \
	op(ESubmixFilterAlgorithm::Ladder) \
	op(ESubmixFilterAlgorithm::Count) 

enum class ESubmixFilterAlgorithm : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterAlgorithm>();

#define FOREACH_ENUM_ESUBMIXFILTERTYPE(op) \
	op(ESubmixFilterType::LowPass) \
	op(ESubmixFilterType::HighPass) \
	op(ESubmixFilterType::BandPass) \
	op(ESubmixFilterType::BandStop) \
	op(ESubmixFilterType::Count) 

enum class ESubmixFilterType : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<ESubmixFilterType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
