// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_CameraModifier_CameraShake_generated_h
#error "CameraModifier_CameraShake.generated.h already included, missing '#pragma once' in CameraModifier_CameraShake.h"
#endif
#define ENGINE_CameraModifier_CameraShake_generated_h

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveCameraShakeInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FActiveCameraShakeInfo>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPooledCameraShakes_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FPooledCameraShakes>();

#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCameraModifier_CameraShake(); \
	friend struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics; \
public: \
	DECLARE_CLASS(UCameraModifier_CameraShake, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraModifier_CameraShake) \
	static const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_INCLASS \
private: \
	static void StaticRegisterNativesUCameraModifier_CameraShake(); \
	friend struct Z_Construct_UClass_UCameraModifier_CameraShake_Statics; \
public: \
	DECLARE_CLASS(UCameraModifier_CameraShake, UCameraModifier, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCameraModifier_CameraShake) \
	static const TCHAR* StaticConfigName() {return TEXT("Camera");} \



#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCameraModifier_CameraShake(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier_CameraShake) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier_CameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier_CameraShake); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraModifier_CameraShake(UCameraModifier_CameraShake&&); \
	NO_API UCameraModifier_CameraShake(const UCameraModifier_CameraShake&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCameraModifier_CameraShake(UCameraModifier_CameraShake&&); \
	NO_API UCameraModifier_CameraShake(const UCameraModifier_CameraShake&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCameraModifier_CameraShake); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCameraModifier_CameraShake); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCameraModifier_CameraShake)


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveShakes() { return STRUCT_OFFSET(UCameraModifier_CameraShake, ActiveShakes); } \
	FORCEINLINE static uint32 __PPO__ExpiredPooledShakesMap() { return STRUCT_OFFSET(UCameraModifier_CameraShake, ExpiredPooledShakesMap); } \
	FORCEINLINE static uint32 __PPO__SplitScreenShakeScale() { return STRUCT_OFFSET(UCameraModifier_CameraShake, SplitScreenShakeScale); }


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_62_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h_65_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCameraModifier_CameraShake>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_CameraShake_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
