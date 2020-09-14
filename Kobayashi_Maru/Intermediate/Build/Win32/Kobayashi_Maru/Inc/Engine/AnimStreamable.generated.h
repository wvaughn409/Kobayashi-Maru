// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimStreamable_generated_h
#error "AnimStreamable.generated.h already included, missing '#pragma once' in AnimStreamable.h"
#endif
#define ENGINE_AnimStreamable_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStreamable, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimStreamable(); \
	friend struct Z_Construct_UClass_UAnimStreamable_Statics; \
public: \
	DECLARE_CLASS(UAnimStreamable, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimStreamable) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_INCLASS \
private: \
	static void StaticRegisterNativesUAnimStreamable(); \
	friend struct Z_Construct_UClass_UAnimStreamable_Statics; \
public: \
	DECLARE_CLASS(UAnimStreamable, UAnimSequenceBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UAnimStreamable) \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimStreamable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStreamable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimStreamable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStreamable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimStreamable(UAnimStreamable&&); \
	ENGINE_API UAnimStreamable(const UAnimStreamable&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UAnimStreamable(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UAnimStreamable(UAnimStreamable&&); \
	ENGINE_API UAnimStreamable(const UAnimStreamable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UAnimStreamable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimStreamable); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimStreamable)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_88_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h_91_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AnimStreamable."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimStreamable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimStreamable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
