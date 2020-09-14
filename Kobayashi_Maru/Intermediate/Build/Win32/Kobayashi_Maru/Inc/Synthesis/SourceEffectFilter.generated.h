// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSourceEffectFilterSettings;
#ifdef SYNTHESIS_SourceEffectFilter_generated_h
#error "SourceEffectFilter.generated.h already included, missing '#pragma once' in SourceEffectFilter.h"
#endif
#define SYNTHESIS_SourceEffectFilter_generated_h

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSourceEffectFilterSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> SYNTHESIS_API UScriptStruct* StaticStruct<struct FSourceEffectFilterSettings>();

#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_SPARSE_DATA
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSettings);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSettings);


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSourceEffectFilterPreset(); \
	friend struct Z_Construct_UClass_USourceEffectFilterPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectFilterPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectFilterPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_INCLASS \
private: \
	static void StaticRegisterNativesUSourceEffectFilterPreset(); \
	friend struct Z_Construct_UClass_USourceEffectFilterPreset_Statics; \
public: \
	DECLARE_CLASS(USourceEffectFilterPreset, USoundEffectSourcePreset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Synthesis"), NO_API) \
	DECLARE_SERIALIZER(USourceEffectFilterPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectFilterPreset) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectFilterPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectFilterPreset); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectFilterPreset(USourceEffectFilterPreset&&); \
	NO_API USourceEffectFilterPreset(const USourceEffectFilterPreset&); \
public:


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USourceEffectFilterPreset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USourceEffectFilterPreset(USourceEffectFilterPreset&&); \
	NO_API USourceEffectFilterPreset(const USourceEffectFilterPreset&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USourceEffectFilterPreset); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USourceEffectFilterPreset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USourceEffectFilterPreset)


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_90_PROLOG
#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_RPC_WRAPPERS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_INCLASS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_SPARSE_DATA \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h_93_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SYNTHESIS_API UClass* StaticClass<class USourceEffectFilterPreset>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_Synthesis_Source_Synthesis_Classes_SourceEffects_SourceEffectFilter_h


#define FOREACH_ENUM_ESOURCEEFFECTFILTERTYPE(op) \
	op(ESourceEffectFilterType::LowPass) \
	op(ESourceEffectFilterType::HighPass) \
	op(ESourceEffectFilterType::BandPass) \
	op(ESourceEffectFilterType::BandStop) \
	op(ESourceEffectFilterType::Count) 

enum class ESourceEffectFilterType : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterType>();

#define FOREACH_ENUM_ESOURCEEFFECTFILTERCIRCUIT(op) \
	op(ESourceEffectFilterCircuit::OnePole) \
	op(ESourceEffectFilterCircuit::StateVariable) \
	op(ESourceEffectFilterCircuit::Ladder) \
	op(ESourceEffectFilterCircuit::Count) 

enum class ESourceEffectFilterCircuit : uint8;
template<> SYNTHESIS_API UEnum* StaticEnum<ESourceEffectFilterCircuit>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
