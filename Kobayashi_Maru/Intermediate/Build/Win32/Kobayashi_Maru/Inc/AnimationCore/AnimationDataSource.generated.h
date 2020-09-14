// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ANIMATIONCORE_AnimationDataSource_generated_h
#error "AnimationDataSource.generated.h already included, missing '#pragma once' in AnimationDataSource.h"
#endif
#define ANIMATIONCORE_AnimationDataSource_generated_h

#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_SPARSE_DATA
#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_RPC_WRAPPERS
#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationDataSourceRegistry(); \
	friend struct Z_Construct_UClass_UAnimationDataSourceRegistry_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataSourceRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationCore"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataSourceRegistry)


#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationDataSourceRegistry(); \
	friend struct Z_Construct_UClass_UAnimationDataSourceRegistry_Statics; \
public: \
	DECLARE_CLASS(UAnimationDataSourceRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationCore"), NO_API) \
	DECLARE_SERIALIZER(UAnimationDataSourceRegistry)


#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataSourceRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataSourceRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataSourceRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataSourceRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataSourceRegistry(UAnimationDataSourceRegistry&&); \
	NO_API UAnimationDataSourceRegistry(const UAnimationDataSourceRegistry&); \
public:


#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationDataSourceRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationDataSourceRegistry(UAnimationDataSourceRegistry&&); \
	NO_API UAnimationDataSourceRegistry(const UAnimationDataSourceRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationDataSourceRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationDataSourceRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationDataSourceRegistry)


#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DataSources() { return STRUCT_OFFSET(UAnimationDataSourceRegistry, DataSources); }


#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_10_PROLOG
#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_SPARSE_DATA \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_RPC_WRAPPERS \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_INCLASS \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_SPARSE_DATA \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONCORE_API UClass* StaticClass<class UAnimationDataSourceRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimationCore_Public_AnimationDataSource_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
