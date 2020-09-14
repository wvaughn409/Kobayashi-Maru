// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FVector;
struct FPositionHistory;
enum class EEasingFuncType : uint8;
struct FRuntimeFloatCurve;
struct FTransform;
#ifdef ANIMGRAPHRUNTIME_KismetAnimationLibrary_generated_h
#error "KismetAnimationLibrary.generated.h already included, missing '#pragma once' in KismetAnimationLibrary.h"
#endif
#define ANIMGRAPHRUNTIME_KismetAnimationLibrary_generated_h

#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_SPARSE_DATA
#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_EndProfilingTimer); \
	DECLARE_FUNCTION(execK2_StartProfilingTimer); \
	DECLARE_FUNCTION(execK2_CalculateVelocityFromSockets); \
	DECLARE_FUNCTION(execK2_CalculateVelocityFromPositionHistory); \
	DECLARE_FUNCTION(execK2_MakePerlinNoiseAndRemap); \
	DECLARE_FUNCTION(execK2_MakePerlinNoiseVectorAndRemap); \
	DECLARE_FUNCTION(execK2_DirectionBetweenSockets); \
	DECLARE_FUNCTION(execK2_DistanceBetweenTwoSocketsAndMapRange); \
	DECLARE_FUNCTION(execK2_LookAt); \
	DECLARE_FUNCTION(execK2_TwoBoneIK);


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_EndProfilingTimer); \
	DECLARE_FUNCTION(execK2_StartProfilingTimer); \
	DECLARE_FUNCTION(execK2_CalculateVelocityFromSockets); \
	DECLARE_FUNCTION(execK2_CalculateVelocityFromPositionHistory); \
	DECLARE_FUNCTION(execK2_MakePerlinNoiseAndRemap); \
	DECLARE_FUNCTION(execK2_MakePerlinNoiseVectorAndRemap); \
	DECLARE_FUNCTION(execK2_DirectionBetweenSockets); \
	DECLARE_FUNCTION(execK2_DistanceBetweenTwoSocketsAndMapRange); \
	DECLARE_FUNCTION(execK2_LookAt); \
	DECLARE_FUNCTION(execK2_TwoBoneIK);


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetAnimationLibrary(); \
	friend struct Z_Construct_UClass_UKismetAnimationLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetAnimationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UKismetAnimationLibrary)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUKismetAnimationLibrary(); \
	friend struct Z_Construct_UClass_UKismetAnimationLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetAnimationLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimGraphRuntime"), NO_API) \
	DECLARE_SERIALIZER(UKismetAnimationLibrary)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetAnimationLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetAnimationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetAnimationLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetAnimationLibrary(UKismetAnimationLibrary&&); \
	NO_API UKismetAnimationLibrary(const UKismetAnimationLibrary&); \
public:


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetAnimationLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetAnimationLibrary(UKismetAnimationLibrary&&); \
	NO_API UKismetAnimationLibrary(const UKismetAnimationLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetAnimationLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetAnimationLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetAnimationLibrary)


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_17_PROLOG
#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_SPARSE_DATA \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_INCLASS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_SPARSE_DATA \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h_20_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetAnimationLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<class UKismetAnimationLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_AnimGraphRuntime_Public_KismetAnimationLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
