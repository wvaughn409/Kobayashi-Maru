// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCapsuleComponent;
#ifdef COMPLETERPG_CompleteRPGPC_generated_h
#error "CompleteRPGPC.generated.h already included, missing '#pragma once' in CompleteRPGPC.h"
#endif
#define COMPLETERPG_CompleteRPGPC_generated_h

#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_8_DELEGATE \
struct _Script_CompleteRPG_eventControlModeChanged_Parms \
{ \
	TEnumAsByte<EGDCControlMode::Type> ControlMode; \
}; \
static inline void FControlModeChanged_DelegateWrapper(const FMulticastScriptDelegate& ControlModeChanged, EGDCControlMode::Type ControlMode) \
{ \
	_Script_CompleteRPG_eventControlModeChanged_Parms Parms; \
	Parms.ControlMode=ControlMode; \
	ControlModeChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPawnAltitude); \
	DECLARE_FUNCTION(execGetFoliageOverlapCapsule); \
	DECLARE_FUNCTION(execGetControlModeString); \
	DECLARE_FUNCTION(execGetControlMode);


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPawnAltitude); \
	DECLARE_FUNCTION(execGetFoliageOverlapCapsule); \
	DECLARE_FUNCTION(execGetControlModeString); \
	DECLARE_FUNCTION(execGetControlMode);


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompleteRPGPC(); \
	friend struct Z_Construct_UClass_ACompleteRPGPC_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGPC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ACompleteRPGPC)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACompleteRPGPC(); \
	friend struct Z_Construct_UClass_ACompleteRPGPC_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGPC, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ACompleteRPGPC)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompleteRPGPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGPC) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompleteRPGPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGPC); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompleteRPGPC(ACompleteRPGPC&&); \
	NO_API ACompleteRPGPC(const ACompleteRPGPC&); \
public:


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACompleteRPGPC(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACompleteRPGPC(ACompleteRPGPC&&); \
	NO_API ACompleteRPGPC(const ACompleteRPGPC&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACompleteRPGPC); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGPC); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGPC)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ControlModePawnClass() { return STRUCT_OFFSET(ACompleteRPGPC, ControlModePawnClass); } \
	FORCEINLINE static uint32 __PPO__JumpToBookmarkCameraFadeTime() { return STRUCT_OFFSET(ACompleteRPGPC, JumpToBookmarkCameraFadeTime); } \
	FORCEINLINE static uint32 __PPO__JumpToBookmarkCameraHoldBlackTime() { return STRUCT_OFFSET(ACompleteRPGPC, JumpToBookmarkCameraHoldBlackTime); }


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_10_PROLOG
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_INCLASS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h_13_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompleteRPGPC."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class ACompleteRPGPC>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_CompleteRPGPC_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
