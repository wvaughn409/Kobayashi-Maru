// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef COMPLETERPG_CompleteRPGGameMode_generated_h
#error "CompleteRPGGameMode.generated.h already included, missing '#pragma once' in CompleteRPGGameMode.h"
#endif
#define COMPLETERPG_CompleteRPGGameMode_generated_h

#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_11_DELEGATE \
static inline void FOnGDCAttractModeAborted_DelegateWrapper(const FMulticastScriptDelegate& OnGDCAttractModeAborted) \
{ \
	OnGDCAttractModeAborted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_10_DELEGATE \
static inline void FOnGDCKiteCineAborted_DelegateWrapper(const FMulticastScriptDelegate& OnGDCKiteCineAborted) \
{ \
	OnGDCKiteCineAborted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_9_DELEGATE \
static inline void FEndGDCKiteCine_DelegateWrapper(const FMulticastScriptDelegate& EndGDCKiteCine) \
{ \
	EndGDCKiteCine.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_8_DELEGATE \
static inline void FBeginGDCKiteCine_DelegateWrapper(const FMulticastScriptDelegate& BeginGDCKiteCine) \
{ \
	BeginGDCKiteCine.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_7_DELEGATE \
static inline void FEndGDCAttractMode_DelegateWrapper(const FMulticastScriptDelegate& EndGDCAttractMode) \
{ \
	EndGDCAttractMode.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_6_DELEGATE \
static inline void FBeginGDCAttractMode_DelegateWrapper(const FMulticastScriptDelegate& BeginGDCAttractMode) \
{ \
	BeginGDCAttractMode.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPlayerBounds); \
	DECLARE_FUNCTION(execSetPlayerBounds); \
	DECLARE_FUNCTION(execNotifyKiteCineFinished); \
	DECLARE_FUNCTION(execNotifyAttractModeFinished); \
	DECLARE_FUNCTION(execIsPlayingAnyCine); \
	DECLARE_FUNCTION(execIsPlayingKiteCine); \
	DECLARE_FUNCTION(execIsInAttractLoop); \
	DECLARE_FUNCTION(execIsInAttractMode);


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPlayerBounds); \
	DECLARE_FUNCTION(execSetPlayerBounds); \
	DECLARE_FUNCTION(execNotifyKiteCineFinished); \
	DECLARE_FUNCTION(execNotifyAttractModeFinished); \
	DECLARE_FUNCTION(execIsPlayingAnyCine); \
	DECLARE_FUNCTION(execIsPlayingKiteCine); \
	DECLARE_FUNCTION(execIsInAttractLoop); \
	DECLARE_FUNCTION(execIsInAttractMode);


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACompleteRPGGameMode(); \
	friend struct Z_Construct_UClass_ACompleteRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), COMPLETERPG_API) \
	DECLARE_SERIALIZER(ACompleteRPGGameMode)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_INCLASS \
private: \
	static void StaticRegisterNativesACompleteRPGGameMode(); \
	friend struct Z_Construct_UClass_ACompleteRPGGameMode_Statics; \
public: \
	DECLARE_CLASS(ACompleteRPGGameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/CompleteRPG"), COMPLETERPG_API) \
	DECLARE_SERIALIZER(ACompleteRPGGameMode)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPLETERPG_API ACompleteRPGGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPLETERPG_API, ACompleteRPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COMPLETERPG_API ACompleteRPGGameMode(ACompleteRPGGameMode&&); \
	COMPLETERPG_API ACompleteRPGGameMode(const ACompleteRPGGameMode&); \
public:


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	COMPLETERPG_API ACompleteRPGGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	COMPLETERPG_API ACompleteRPGGameMode(ACompleteRPGGameMode&&); \
	COMPLETERPG_API ACompleteRPGGameMode(const ACompleteRPGGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(COMPLETERPG_API, ACompleteRPGGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACompleteRPGGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACompleteRPGGameMode)


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_PRIVATE_PROPERTY_OFFSET
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_14_PROLOG
#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_INCLASS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CompleteRPGGameMode."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class ACompleteRPGGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_Public_CompleteRPGGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
