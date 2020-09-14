// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LANDSCAPE_Landscape_generated_h
#error "Landscape.generated.h already included, missing '#pragma once' in Landscape.h"
#endif
#define LANDSCAPE_Landscape_generated_h

#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_144_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayer_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayer>();

#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_93_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayerBrush>();

#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_SPARSE_DATA
#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscape(); \
	friend struct Z_Construct_UClass_ALandscape_Statics; \
public: \
	DECLARE_CLASS(ALandscape, ALandscapeProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscape)


#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_INCLASS \
private: \
	static void StaticRegisterNativesALandscape(); \
	friend struct Z_Construct_UClass_ALandscape_Statics; \
public: \
	DECLARE_CLASS(ALandscape, ALandscapeProxy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscape)


#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscape(ALandscape&&); \
	LANDSCAPE_API ALandscape(const ALandscape&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscape(ALandscape&&); \
	LANDSCAPE_API ALandscape(const ALandscape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscape)


#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_218_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_Landscape_h_221_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscape>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_Landscape_h


#define FOREACH_ENUM_ELANDSCAPEBLENDMODE(op) \
	op(LSBM_AdditiveBlend) \
	op(LSBM_AlphaBlend) 
#define FOREACH_ENUM_ELANDSCAPESETUPERRORS(op) \
	op(LSE_None) \
	op(LSE_NoLandscapeInfo) \
	op(LSE_CollsionXY) \
	op(LSE_NoLayerInfo) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
