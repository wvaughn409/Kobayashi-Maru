// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundAttenuation_generated_h
#error "SoundAttenuation.generated.h already included, missing '#pragma once' in SoundAttenuation.h"
#endif
#define ENGINE_SoundAttenuation_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundAttenuationSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FBaseAttenuationSettings Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundAttenuationSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttenuationSubmixSendSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAttenuationSubmixSendSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundAttenuationPluginSettings_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundAttenuationPluginSettings>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend struct Z_Construct_UClass_USoundAttenuation_Statics; \
public: \
	DECLARE_CLASS(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_INCLASS \
private: \
	static void StaticRegisterNativesUSoundAttenuation(); \
	friend struct Z_Construct_UClass_USoundAttenuation_Statics; \
public: \
	DECLARE_CLASS(USoundAttenuation, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(USoundAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundAttenuation(USoundAttenuation&&); \
	ENGINE_API USoundAttenuation(const USoundAttenuation&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API USoundAttenuation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API USoundAttenuation(USoundAttenuation&&); \
	ENGINE_API USoundAttenuation(const USoundAttenuation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, USoundAttenuation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundAttenuation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundAttenuation)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_482_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h_485_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundAttenuation."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundAttenuation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundAttenuation_h


#define FOREACH_ENUM_EPRIORITYATTENUATIONMETHOD(op) \
	op(EPriorityAttenuationMethod::Linear) \
	op(EPriorityAttenuationMethod::CustomCurve) \
	op(EPriorityAttenuationMethod::Manual) 

enum class EPriorityAttenuationMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EPriorityAttenuationMethod>();

#define FOREACH_ENUM_ESUBMIXSENDMETHOD(op) \
	op(ESubmixSendMethod::Linear) \
	op(ESubmixSendMethod::CustomCurve) \
	op(ESubmixSendMethod::Manual) 

enum class ESubmixSendMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<ESubmixSendMethod>();

#define FOREACH_ENUM_EREVERBSENDMETHOD(op) \
	op(EReverbSendMethod::Linear) \
	op(EReverbSendMethod::CustomCurve) \
	op(EReverbSendMethod::Manual) 

enum class EReverbSendMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EReverbSendMethod>();

#define FOREACH_ENUM_EAIRABSORPTIONMETHOD(op) \
	op(EAirAbsorptionMethod::Linear) \
	op(EAirAbsorptionMethod::CustomCurve) 

enum class EAirAbsorptionMethod : uint8;
template<> ENGINE_API UEnum* StaticEnum<EAirAbsorptionMethod>();

#define FOREACH_ENUM_ESOUNDSPATIALIZATIONALGORITHM(op) \
	op(SPATIALIZATION_Default) \
	op(SPATIALIZATION_HRTF) 
#define FOREACH_ENUM_ESOUNDDISTANCECALC(op) \
	op(SOUNDDISTANCE_Normal) \
	op(SOUNDDISTANCE_InfiniteXYPlane) \
	op(SOUNDDISTANCE_InfiniteXZPlane) \
	op(SOUNDDISTANCE_InfiniteYZPlane) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
