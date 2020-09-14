// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_DemoNetDriver_generated_h
#error "DemoNetDriver.generated.h already included, missing '#pragma once' in DemoNetDriver.h"
#endif
#define ENGINE_DemoNetDriver_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_365_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMulticastRecordOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FMulticastRecordOptions>();

#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_296_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRollbackNetStartupActorInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FRollbackNetStartupActorInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelNameAndTime_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelNameAndTime>();

#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UDemoNetDriver, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemoNetDriver(); \
	friend struct Z_Construct_UClass_UDemoNetDriver_Statics; \
public: \
	DECLARE_CLASS(UDemoNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDemoNetDriver) \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_INCLASS \
private: \
	static void StaticRegisterNativesUDemoNetDriver(); \
	friend struct Z_Construct_UClass_UDemoNetDriver_Statics; \
public: \
	DECLARE_CLASS(UDemoNetDriver, UNetDriver, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UDemoNetDriver) \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemoNetDriver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoNetDriver) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoNetDriver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemoNetDriver(UDemoNetDriver&&); \
	NO_API UDemoNetDriver(const UDemoNetDriver&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemoNetDriver(UDemoNetDriver&&); \
	NO_API UDemoNetDriver(const UDemoNetDriver&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemoNetDriver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemoNetDriver)


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CheckpointSaveMaxMSPerFrame() { return STRUCT_OFFSET(UDemoNetDriver, CheckpointSaveMaxMSPerFrame); } \
	FORCEINLINE static uint32 __PPO__MulticastRecordOptions() { return STRUCT_OFFSET(UDemoNetDriver, MulticastRecordOptions); } \
	FORCEINLINE static uint32 __PPO__SpectatorControllers() { return STRUCT_OFFSET(UDemoNetDriver, SpectatorControllers); }


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_388_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h_391_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UDemoNetDriver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_DemoNetDriver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
