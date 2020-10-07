// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UManiacManfredLocation;
class UArticyBaseObject; class UActorComponent;
class AActor;
class UManiacManfredLocationImage;
#ifdef COMPLETERPG_LocationGenerator_generated_h
#error "LocationGenerator.generated.h already included, missing '#pragma once' in LocationGenerator.h"
#endif
#define COMPLETERPG_LocationGenerator_generated_h

#define Zweihander_Source_CompleteRPG_LocationGenerator_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRect_Statics; \
	static class UScriptStruct* StaticStruct();


template<> COMPLETERPG_API UScriptStruct* StaticStruct<struct FRect>();

#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_SPARSE_DATA
#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateLocation);


#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateLocation);


#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULocationGenerator(); \
	friend struct Z_Construct_UClass_ULocationGenerator_Statics; \
public: \
	DECLARE_CLASS(ULocationGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ULocationGenerator)


#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_INCLASS \
private: \
	static void StaticRegisterNativesULocationGenerator(); \
	friend struct Z_Construct_UClass_ULocationGenerator_Statics; \
public: \
	DECLARE_CLASS(ULocationGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CompleteRPG"), NO_API) \
	DECLARE_SERIALIZER(ULocationGenerator)


#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationGenerator(ULocationGenerator&&); \
	NO_API ULocationGenerator(const ULocationGenerator&); \
public:


#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULocationGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULocationGenerator(ULocationGenerator&&); \
	NO_API ULocationGenerator(const ULocationGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULocationGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULocationGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULocationGenerator)


#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_PRIVATE_PROPERTY_OFFSET
#define Zweihander_Source_CompleteRPG_LocationGenerator_h_91_PROLOG
#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_RPC_WRAPPERS \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_INCLASS \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zweihander_Source_CompleteRPG_LocationGenerator_h_94_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_PRIVATE_PROPERTY_OFFSET \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_SPARSE_DATA \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_INCLASS_NO_PURE_DECLS \
	Zweihander_Source_CompleteRPG_LocationGenerator_h_94_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMPLETERPG_API UClass* StaticClass<class ULocationGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zweihander_Source_CompleteRPG_LocationGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
