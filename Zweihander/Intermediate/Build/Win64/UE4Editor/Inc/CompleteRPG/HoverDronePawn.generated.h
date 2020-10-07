// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMPLETERPG_HoverDronePawn_generated_h
#error "HoverDronePawn.generated.h already included, missing '#pragma once' in HoverDronePawn.h"
#endif
#define COMPLETERPG_HoverDronePawn_generated_h

#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsMaintainingConstantAltitude); \
	DECLARE_FUNCTION(execGetAltitude);


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsMaintainingConstantAltitude); \
	DECLARE_FUNCTION(execGetAltitude);


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHoverDronePawn(); \
	friend struct Z_Construct_UClass_AHoverDronePawn_Statics; \
public: \
	DECLARE_CLASS(AHoverDronePawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(AHoverDronePawn)


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_INCLASS \
private: \
	static void StaticRegisterNativesAHoverDronePawn(); \
	friend struct Z_Construct_UClass_AHoverDronePawn_Statics; \
public: \
	DECLARE_CLASS(AHoverDronePawn, ADefaultPawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(AHoverDronePawn)


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHoverDronePawn(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoverDronePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoverDronePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoverDronePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoverDronePawn(AHoverDronePawn&&); \
	NO_API AHoverDronePawn(const AHoverDronePawn&); \
public:


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHoverDronePawn(AHoverDronePawn&&); \
	NO_API AHoverDronePawn(const AHoverDronePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHoverDronePawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHoverDronePawn); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHoverDronePawn)


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MaxAccelToGravRatio() { return STRUCT_OFFSET(AHoverDronePawn, MaxAccelToGravRatio); } \
	FORCEINLINE static uint32 __PPO__DroneTiltInterpSpeed_Accel() { return STRUCT_OFFSET(AHoverDronePawn, DroneTiltInterpSpeed_Accel); } \
	FORCEINLINE static uint32 __PPO__DroneTiltInterpSpeed_Decel() { return STRUCT_OFFSET(AHoverDronePawn, DroneTiltInterpSpeed_Decel); } \
	FORCEINLINE static uint32 __PPO__ZoomRate() { return STRUCT_OFFSET(AHoverDronePawn, ZoomRate); } \
	FORCEINLINE static uint32 __PPO__FOVInterpSpeed() { return STRUCT_OFFSET(AHoverDronePawn, FOVInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__MaxFOV() { return STRUCT_OFFSET(AHoverDronePawn, MaxFOV); } \
	FORCEINLINE static uint32 __PPO__MinFOV() { return STRUCT_OFFSET(AHoverDronePawn, MinFOV); } \
	FORCEINLINE static uint32 __PPO__bAutoFocus() { return STRUCT_OFFSET(AHoverDronePawn, bAutoFocus); } \
	FORCEINLINE static uint32 __PPO__AutoFocusInterpSpeed() { return STRUCT_OFFSET(AHoverDronePawn, AutoFocusInterpSpeed); } \
	FORCEINLINE static uint32 __PPO__CameraApertureFStop() { return STRUCT_OFFSET(AHoverDronePawn, CameraApertureFStop); } \
	FORCEINLINE static uint32 __PPO__ScreenFringeFOVCurve() { return STRUCT_OFFSET(AHoverDronePawn, ScreenFringeFOVCurve); } \
	FORCEINLINE static uint32 __PPO__FoliageOverlapComponent() { return STRUCT_OFFSET(AHoverDronePawn, FoliageOverlapComponent); }


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_7_PROLOG
#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_INCLASS \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class AHoverDronePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_HoverDronePawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
