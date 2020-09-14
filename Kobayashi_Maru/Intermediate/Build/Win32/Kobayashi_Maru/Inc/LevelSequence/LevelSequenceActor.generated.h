// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSoftClassPath;
struct FMovieSceneObjectBindingID;
class AActor;
class ULevelSequencePlayer;
class ULevelSequence;
#ifdef LEVELSEQUENCE_LevelSequenceActor_generated_h
#error "LevelSequenceActor.generated.h already included, missing '#pragma once' in LevelSequenceActor.h"
#endif
#define LEVELSEQUENCE_LevelSequenceActor_generated_h

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_311_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBoundActorProxy_Statics; \
	LEVELSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<struct FBoundActorProxy>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_68_DELEGATE \
static inline void FOnLevelSequenceLoaded_DelegateWrapper(const FScriptDelegate& OnLevelSequenceLoaded) \
{ \
	OnLevelSequenceLoaded.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_RPC_WRAPPERS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnInInitSettings(); \
	friend struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceBurnInInitSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceBurnInInitSettings)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnInInitSettings(); \
	friend struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceBurnInInitSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceBurnInInitSettings)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceBurnInInitSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnInInitSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceBurnInInitSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnInInitSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceBurnInInitSettings(ULevelSequenceBurnInInitSettings&&); \
	NO_API ULevelSequenceBurnInInitSettings(const ULevelSequenceBurnInInitSettings&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceBurnInInitSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceBurnInInitSettings(ULevelSequenceBurnInInitSettings&&); \
	NO_API ULevelSequenceBurnInInitSettings(const ULevelSequenceBurnInInitSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceBurnInInitSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnInInitSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnInInitSettings)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_18_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequenceBurnInInitSettings>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBurnIn);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBurnIn);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnInOptions(); \
	friend struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceBurnInOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceBurnInOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_INCLASS \
private: \
	static void StaticRegisterNativesULevelSequenceBurnInOptions(); \
	friend struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics; \
public: \
	DECLARE_CLASS(ULevelSequenceBurnInOptions, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ULevelSequenceBurnInOptions) \
	static const TCHAR* StaticConfigName() {return TEXT("EditorPerProjectUserSettings");} \



#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelSequenceBurnInOptions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnInOptions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceBurnInOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnInOptions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceBurnInOptions(ULevelSequenceBurnInOptions&&); \
	NO_API ULevelSequenceBurnInOptions(const ULevelSequenceBurnInOptions&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelSequenceBurnInOptions(ULevelSequenceBurnInOptions&&); \
	NO_API ULevelSequenceBurnInOptions(const ULevelSequenceBurnInOptions&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelSequenceBurnInOptions); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelSequenceBurnInOptions); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelSequenceBurnInOptions)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_24_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_29_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ULevelSequenceBurnInOptions>();

#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_SPARSE_DATA
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFindNamedBindings); \
	DECLARE_FUNCTION(execFindNamedBinding); \
	DECLARE_FUNCTION(execResetBindings); \
	DECLARE_FUNCTION(execResetBinding); \
	DECLARE_FUNCTION(execRemoveBindingByTag); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execAddBindingByTag); \
	DECLARE_FUNCTION(execAddBinding); \
	DECLARE_FUNCTION(execSetBindingByTag); \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execShowBurnin); \
	DECLARE_FUNCTION(execHideBurnin); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetReplicatePlayback); \
	DECLARE_FUNCTION(execSetEventReceivers); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execLoadSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFindNamedBindings); \
	DECLARE_FUNCTION(execFindNamedBinding); \
	DECLARE_FUNCTION(execResetBindings); \
	DECLARE_FUNCTION(execResetBinding); \
	DECLARE_FUNCTION(execRemoveBindingByTag); \
	DECLARE_FUNCTION(execRemoveBinding); \
	DECLARE_FUNCTION(execAddBindingByTag); \
	DECLARE_FUNCTION(execAddBinding); \
	DECLARE_FUNCTION(execSetBindingByTag); \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execShowBurnin); \
	DECLARE_FUNCTION(execHideBurnin); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetReplicatePlayback); \
	DECLARE_FUNCTION(execSetEventReceivers); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execLoadSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALevelSequenceActor(); \
	friend struct Z_Construct_UClass_ALevelSequenceActor_Statics; \
public: \
	DECLARE_CLASS(ALevelSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ALevelSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALevelSequenceActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequencePlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_INCLASS \
private: \
	static void StaticRegisterNativesALevelSequenceActor(); \
	friend struct Z_Construct_UClass_ALevelSequenceActor_Statics; \
public: \
	DECLARE_CLASS(ALevelSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LevelSequence"), NO_API) \
	DECLARE_SERIALIZER(ALevelSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALevelSequenceActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequencePlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALevelSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelSequenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelSequenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelSequenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelSequenceActor(ALevelSequenceActor&&); \
	NO_API ALevelSequenceActor(const ALevelSequenceActor&); \
public:


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALevelSequenceActor(ALevelSequenceActor&&); \
	NO_API ALevelSequenceActor(const ALevelSequenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALevelSequenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALevelSequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALevelSequenceActor)


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BurnInInstance() { return STRUCT_OFFSET(ALevelSequenceActor, BurnInInstance); } \
	FORCEINLINE static uint32 __PPO__bShowBurnin() { return STRUCT_OFFSET(ALevelSequenceActor, bShowBurnin); }


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_60_PROLOG
#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_RPC_WRAPPERS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_INCLASS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_SPARSE_DATA \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h_70_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LEVELSEQUENCE_API UClass* StaticClass<class ALevelSequenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_LevelSequence_Public_LevelSequenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
