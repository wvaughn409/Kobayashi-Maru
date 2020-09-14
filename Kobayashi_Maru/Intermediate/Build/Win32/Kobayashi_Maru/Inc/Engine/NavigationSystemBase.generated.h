// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_NavigationSystemBase_generated_h
#error "NavigationSystemBase.generated.h already included, missing '#pragma once' in NavigationSystemBase.h"
#endif
#define ENGINE_NavigationSystemBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemBase(); \
	friend struct Z_Construct_UClass_UNavigationSystemBase_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemBase(); \
	friend struct Z_Construct_UClass_UNavigationSystemBase_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \



#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemBase(UNavigationSystemBase&&); \
	NO_API UNavigationSystemBase(const UNavigationSystemBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemBase(UNavigationSystemBase&&); \
	NO_API UNavigationSystemBase(const UNavigationSystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemBase)


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_206_PROLOG
#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_INCLASS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h_209_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UNavigationSystemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_AI_NavigationSystemBase_h


#define FOREACH_ENUM_FNAVIGATIONSYSTEMRUNMODE(op) \
	op(FNavigationSystemRunMode::InvalidMode) \
	op(FNavigationSystemRunMode::GameMode) \
	op(FNavigationSystemRunMode::EditorMode) \
	op(FNavigationSystemRunMode::SimulationMode) \
	op(FNavigationSystemRunMode::PIEMode) 

enum class FNavigationSystemRunMode : uint8;
template<> ENGINE_API UEnum* StaticEnum<FNavigationSystemRunMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
