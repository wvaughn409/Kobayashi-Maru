// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelSequenceActor;
class UMediaComponent;
#ifdef LEVELSEQUENCE_SequenceMediaController_generated_h
#error "SequenceMediaController.generated.h already included, missing '#pragma once' in SequenceMediaController.h"
#endif
#define LEVELSEQUENCE_SequenceMediaController_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_ServerStartTimeSeconds); \
	DECLARE_FUNCTION(execSynchronizeToServer); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetMediaComponent); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_ServerStartTimeSeconds); \
	DECLARE_FUNCTION(execSynchronizeToServer); \
	DECLARE_FUNCTION(execGetSequence); \
	DECLARE_FUNCTION(execGetMediaComponent); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelSequenceMediaController(); \
	friend struct Z_Construct_UClass_ALevelSequenceMediaController_Statics; \
public: \
	DECLARE_CLASS(ALevelSequenceMediaController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ALevelSequenceMediaController) \
	virtual UObject* _getUObject() const override { return const_cast<ALevelSequenceMediaController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerStartTimeSeconds=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerStartTimeSeconds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_INCLASS \
private: \
	static void StaticRegisterNativesALevelSequenceMediaController(); \
	friend struct Z_Construct_UClass_ALevelSequenceMediaController_Statics; \
public: \
	DECLARE_CLASS(ALevelSequenceMediaController, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ALevelSequenceMediaController) \
	virtual UObject* _getUObject() const override { return const_cast<ALevelSequenceMediaController*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ServerStartTimeSeconds=NETFIELD_REP_START, \
		NETFIELD_REP_END=ServerStartTimeSeconds	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelSequenceMediaController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelSequenceMediaController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelSequenceMediaController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelSequenceMediaController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelSequenceMediaController(ALevelSequenceMediaController&&); \
	NO_API ALevelSequenceMediaController(const ALevelSequenceMediaController&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelSequenceMediaController(ALevelSequenceMediaController&&); \
	NO_API ALevelSequenceMediaController(const ALevelSequenceMediaController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelSequenceMediaController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelSequenceMediaController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelSequenceMediaController)


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Sequence() { return STRUCT_OFFSET(ALevelSequenceMediaController, Sequence); } \
	FORCEINLINE static uint32 __PPO__MediaComponent() { return STRUCT_OFFSET(ALevelSequenceMediaController, MediaComponent); } \
	FORCEINLINE static uint32 __PPO__ServerStartTimeSeconds() { return STRUCT_OFFSET(ALevelSequenceMediaController, ServerStartTimeSeconds); }


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_20_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h_27_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ALevelSequenceMediaController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_SequenceMediaController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
