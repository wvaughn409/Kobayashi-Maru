// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAREnvironmentCaptureProbe;
#ifdef AUGMENTEDREALITY_ARSkyLight_generated_h
#error "ARSkyLight.generated.h already included, missing '#pragma once' in ARSkyLight.h"
#endif
#define AUGMENTEDREALITY_ARSkyLight_generated_h

#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_SPARSE_DATA
#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEnvironmentCaptureProbe);


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEnvironmentCaptureProbe);


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAARSkyLight(); \
	friend struct Z_Construct_UClass_AARSkyLight_Statics; \
public: \
	DECLARE_CLASS(AARSkyLight, ASkyLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSkyLight)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAARSkyLight(); \
	friend struct Z_Construct_UClass_AARSkyLight_Statics; \
public: \
	DECLARE_CLASS(AARSkyLight, ASkyLight, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AugmentedReality"), NO_API) \
	DECLARE_SERIALIZER(AARSkyLight)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSkyLight) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSkyLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSkyLight); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSkyLight(AARSkyLight&&); \
	NO_API AARSkyLight(const AARSkyLight&); \
public:


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AARSkyLight(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AARSkyLight(AARSkyLight&&); \
	NO_API AARSkyLight(const AARSkyLight&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AARSkyLight); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AARSkyLight); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AARSkyLight)


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CaptureProbe() { return STRUCT_OFFSET(AARSkyLight, CaptureProbe); }


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_13_PROLOG
#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_SPARSE_DATA \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class ARSkyLight."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AUGMENTEDREALITY_API UClass* StaticClass<class AARSkyLight>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AugmentedReality_Public_ARSkyLight_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
