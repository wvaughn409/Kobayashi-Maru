// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMGRAPHRUNTIME_SequencerAnimationSupport_generated_h
#error "SequencerAnimationSupport.generated.h already included, missing '#pragma once' in SequencerAnimationSupport.h"
#endif
#define ANIMGRAPHRUNTIME_SequencerAnimationSupport_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_SPARSE_DATA
#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_RPC_WRAPPERS
#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerAnimationSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerAnimationSupport) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerAnimationSupport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerAnimationSupport); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerAnimationSupport(USequencerAnimationSupport&&); \
	NO_API USequencerAnimationSupport(const USequencerAnimationSupport&); \
public:


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USequencerAnimationSupport(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USequencerAnimationSupport(USequencerAnimationSupport&&); \
	NO_API USequencerAnimationSupport(const USequencerAnimationSupport&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USequencerAnimationSupport); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USequencerAnimationSupport); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USequencerAnimationSupport)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSequencerAnimationSupport(); \
	friend struct Z_Construct_UClass_USequencerAnimationSupport_Statics; \
public: \
	DECLARE_CLASS(USequencerAnimationSupport, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(USequencerAnimationSupport)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISequencerAnimationSupport() {} \
public: \
	typedef USequencerAnimationSupport UClassType; \
	typedef ISequencerAnimationSupport ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_INCLASS_IINTERFACE \
protected: \
	virtual ~ISequencerAnimationSupport() {} \
public: \
	typedef USequencerAnimationSupport UClassType; \
	typedef ISequencerAnimationSupport ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_16_PROLOG
#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_SPARSE_DATA \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_RPC_WRAPPERS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_SPARSE_DATA \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h_19_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class USequencerAnimationSupport>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_SequencerAnimationSupport_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
