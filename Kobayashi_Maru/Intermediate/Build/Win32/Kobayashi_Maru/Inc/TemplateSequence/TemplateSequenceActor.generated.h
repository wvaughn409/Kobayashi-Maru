// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UTemplateSequencePlayer;
class UTemplateSequence;
#ifdef TEMPLATESEQUENCE_TemplateSequenceActor_generated_h
#error "TemplateSequenceActor.generated.h already included, missing '#pragma once' in TemplateSequenceActor.h"
#endif
#define TEMPLATESEQUENCE_TemplateSequenceActor_generated_h

#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTemplateSequenceBindingOverrideData_Statics; \
	TEMPLATESEQUENCE_API static class UScriptStruct* StaticStruct();


template<> TEMPLATESEQUENCE_API UScriptStruct* StaticStruct<struct FTemplateSequenceBindingOverrideData>();

#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_SPARSE_DATA
#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execLoadSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetBinding); \
	DECLARE_FUNCTION(execGetSequencePlayer); \
	DECLARE_FUNCTION(execSetSequence); \
	DECLARE_FUNCTION(execLoadSequence); \
	DECLARE_FUNCTION(execGetSequence);


#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATemplateSequenceActor(); \
	friend struct Z_Construct_UClass_ATemplateSequenceActor_Statics; \
public: \
	DECLARE_CLASS(ATemplateSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequence"), NO_API) \
	DECLARE_SERIALIZER(ATemplateSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATemplateSequenceActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequencePlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_INCLASS \
private: \
	static void StaticRegisterNativesATemplateSequenceActor(); \
	friend struct Z_Construct_UClass_ATemplateSequenceActor_Statics; \
public: \
	DECLARE_CLASS(ATemplateSequenceActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TemplateSequence"), NO_API) \
	DECLARE_SERIALIZER(ATemplateSequenceActor) \
	virtual UObject* _getUObject() const override { return const_cast<ATemplateSequenceActor*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SequencePlayer=NETFIELD_REP_START, \
		NETFIELD_REP_END=SequencePlayer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATemplateSequenceActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATemplateSequenceActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemplateSequenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemplateSequenceActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATemplateSequenceActor(ATemplateSequenceActor&&); \
	NO_API ATemplateSequenceActor(const ATemplateSequenceActor&); \
public:


#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATemplateSequenceActor(ATemplateSequenceActor&&); \
	NO_API ATemplateSequenceActor(const ATemplateSequenceActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATemplateSequenceActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATemplateSequenceActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATemplateSequenceActor)


#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_34_PROLOG
#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_SPARSE_DATA \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_RPC_WRAPPERS \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_INCLASS \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_SPARSE_DATA \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h_41_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEMPLATESEQUENCE_API UClass* StaticClass<class ATemplateSequenceActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Public_TemplateSequenceActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
