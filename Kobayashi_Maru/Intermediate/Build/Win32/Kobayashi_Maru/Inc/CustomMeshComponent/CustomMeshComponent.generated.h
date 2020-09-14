// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCustomMeshTriangle;
#ifdef CUSTOMMESHCOMPONENT_CustomMeshComponent_generated_h
#error "CustomMeshComponent.generated.h already included, missing '#pragma once' in CustomMeshComponent.h"
#endif
#define CUSTOMMESHCOMPONENT_CustomMeshComponent_generated_h

#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics; \
	CUSTOMMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> CUSTOMMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FCustomMeshTriangle>();

#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_SPARSE_DATA
#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCustomMeshTriangles); \
	DECLARE_FUNCTION(execAddCustomMeshTriangles); \
	DECLARE_FUNCTION(execSetCustomMeshTriangles);


#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCustomMeshComponent(); \
	friend struct Z_Construct_UClass_UCustomMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UCustomMeshComponent)


#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUCustomMeshComponent(); \
	friend struct Z_Construct_UClass_UCustomMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UCustomMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CustomMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UCustomMeshComponent)


#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMeshComponent(UCustomMeshComponent&&); \
	NO_API UCustomMeshComponent(const UCustomMeshComponent&); \
public:


#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCustomMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCustomMeshComponent(UCustomMeshComponent&&); \
	NO_API UCustomMeshComponent(const UCustomMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCustomMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCustomMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCustomMeshComponent)


#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_28_PROLOG
#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_SPARSE_DATA \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_SPARSE_DATA \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CustomMeshComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CUSTOMMESHCOMPONENT_API UClass* StaticClass<class UCustomMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_CustomMeshComponent_Source_CustomMeshComponent_Classes_CustomMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
