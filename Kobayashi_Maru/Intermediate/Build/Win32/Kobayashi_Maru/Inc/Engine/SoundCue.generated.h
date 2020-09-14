// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_SoundCue_generated_h
#error "SoundCue.generated.h already included, missing '#pragma once' in SoundCue.h"
#endif
#define ENGINE_SoundCue_generated_h

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSoundNodeEditorData_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FSoundNodeEditorData>();

#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_ARCHIVESERIALIZER \
	DECLARE_FARCHIVE_SERIALIZER(USoundCue, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoundCue(); \
	friend struct Z_Construct_UClass_USoundCue_Statics; \
public: \
	DECLARE_CLASS(USoundCue, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundCue) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_INCLASS \
private: \
	static void StaticRegisterNativesUSoundCue(); \
	friend struct Z_Construct_UClass_USoundCue_Statics; \
public: \
	DECLARE_CLASS(USoundCue, USoundBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(USoundCue) \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCue) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCue); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCue(USoundCue&&); \
	NO_API USoundCue(const USoundCue&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoundCue(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoundCue(USoundCue&&); \
	NO_API USoundCue(const USoundCue&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoundCue); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoundCue); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoundCue)


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SubtitlePriority() { return STRUCT_OFFSET(USoundCue, SubtitlePriority); } \
	FORCEINLINE static uint32 __PPO__CookedQualityIndex() { return STRUCT_OFFSET(USoundCue, CookedQualityIndex); }


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_82_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h_85_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SoundCue."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class USoundCue>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Sound_SoundCue_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
