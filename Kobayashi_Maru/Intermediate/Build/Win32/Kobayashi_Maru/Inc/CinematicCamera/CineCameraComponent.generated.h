// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNamedLensPreset;
#ifdef CINEMATICCAMERA_CineCameraComponent_generated_h
#error "CineCameraComponent.generated.h already included, missing '#pragma once' in CineCameraComponent.h"
#endif
#define CINEMATICCAMERA_CineCameraComponent_generated_h

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_166_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFocusSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_142_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraTrackingFocusSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_109_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedLensPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedLensPreset>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraLensSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraLensSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNamedFilmbackPreset_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FNamedFilmbackPreset>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCameraFilmbackSettings_Statics; \
	CINEMATICCAMERA_API static class UScriptStruct* StaticStruct();


template<> CINEMATICCAMERA_API UScriptStruct* StaticStruct<struct FCameraFilmbackSettings>();

#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_SPARSE_DATA
#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLensPresetsCopy); \
	DECLARE_FUNCTION(execSetLensPresetByName); \
	DECLARE_FUNCTION(execGetLensPresetName); \
	DECLARE_FUNCTION(execSetFilmbackPresetByName); \
	DECLARE_FUNCTION(execGetDefaultFilmbackPresetName); \
	DECLARE_FUNCTION(execGetFilmbackPresetName); \
	DECLARE_FUNCTION(execGetVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView); \
	DECLARE_FUNCTION(execSetCurrentFocalLength);


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLensPresetsCopy); \
	DECLARE_FUNCTION(execSetLensPresetByName); \
	DECLARE_FUNCTION(execGetLensPresetName); \
	DECLARE_FUNCTION(execSetFilmbackPresetByName); \
	DECLARE_FUNCTION(execGetDefaultFilmbackPresetName); \
	DECLARE_FUNCTION(execGetFilmbackPresetName); \
	DECLARE_FUNCTION(execGetVerticalFieldOfView); \
	DECLARE_FUNCTION(execGetHorizontalFieldOfView); \
	DECLARE_FUNCTION(execSetCurrentFocalLength);


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UCineCameraComponent, NO_API)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend struct Z_Construct_UClass_UCineCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent) \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_ARCHIVESERIALIZER


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_INCLASS \
private: \
	static void StaticRegisterNativesUCineCameraComponent(); \
	friend struct Z_Construct_UClass_UCineCameraComponent_Statics; \
public: \
	DECLARE_CLASS(UCineCameraComponent, UCameraComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CinematicCamera"), NO_API) \
	DECLARE_SERIALIZER(UCineCameraComponent) \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_ARCHIVESERIALIZER


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCineCameraComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCineCameraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public:


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCineCameraComponent(UCineCameraComponent&&); \
	NO_API UCineCameraComponent(const UCineCameraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCineCameraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCineCameraComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCineCameraComponent)


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FilmbackPresets() { return STRUCT_OFFSET(UCineCameraComponent, FilmbackPresets); } \
	FORCEINLINE static uint32 __PPO__LensPresets() { return STRUCT_OFFSET(UCineCameraComponent, LensPresets); } \
	FORCEINLINE static uint32 __PPO__DefaultFilmbackPresetName_DEPRECATED() { return STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPresetName_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__DefaultFilmbackPreset() { return STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPreset); } \
	FORCEINLINE static uint32 __PPO__DefaultLensPresetName() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensPresetName); } \
	FORCEINLINE static uint32 __PPO__DefaultLensFocalLength() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensFocalLength); } \
	FORCEINLINE static uint32 __PPO__DefaultLensFStop() { return STRUCT_OFFSET(UCineCameraComponent, DefaultLensFStop); }


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_220_PROLOG
#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_SPARSE_DATA \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_RPC_WRAPPERS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_INCLASS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_SPARSE_DATA \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_223_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CINEMATICCAMERA_API UClass* StaticClass<class UCineCameraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h


#define FOREACH_ENUM_ECAMERAFOCUSMETHOD(op) \
	op(ECameraFocusMethod::DoNotOverride) \
	op(ECameraFocusMethod::Manual) \
	op(ECameraFocusMethod::Tracking) \
	op(ECameraFocusMethod::Disable) 

enum class ECameraFocusMethod : uint8;
template<> CINEMATICCAMERA_API UEnum* StaticEnum<ECameraFocusMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
