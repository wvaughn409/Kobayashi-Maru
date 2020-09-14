// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_BandwidthTestActor_generated_h
#error "BandwidthTestActor.generated.h already included, missing '#pragma once' in BandwidthTestActor.h"
#endif
#define ENGINE_BandwidthTestActor_generated_h

#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBandwidthTestGenerator_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBandwidthTestGenerator>();

#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBandwidthTestItem_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FBandwidthTestItem>();

#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABandwidthTestActor(); \
	friend struct Z_Construct_UClass_ABandwidthTestActor_Statics; \
public: \
	DECLARE_CLASS(ABandwidthTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ABandwidthTestActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BandwidthGenerator=NETFIELD_REP_START, \
		NETFIELD_REP_END=BandwidthGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_INCLASS \
private: \
	static void StaticRegisterNativesABandwidthTestActor(); \
	friend struct Z_Construct_UClass_ABandwidthTestActor_Statics; \
public: \
	DECLARE_CLASS(ABandwidthTestActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ABandwidthTestActor) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		BandwidthGenerator=NETFIELD_REP_START, \
		NETFIELD_REP_END=BandwidthGenerator	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABandwidthTestActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABandwidthTestActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABandwidthTestActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABandwidthTestActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABandwidthTestActor(ABandwidthTestActor&&); \
	NO_API ABandwidthTestActor(const ABandwidthTestActor&); \
public:


#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABandwidthTestActor(ABandwidthTestActor&&); \
	NO_API ABandwidthTestActor(const ABandwidthTestActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABandwidthTestActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABandwidthTestActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABandwidthTestActor)


#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_58_PROLOG
#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_INCLASS \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h_61_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ABandwidthTestActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Public_Net_BandwidthTestActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
