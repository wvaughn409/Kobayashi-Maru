// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FVector2D;
struct FLinearColor;
struct FProcMeshTangent;
struct FColor;
#ifdef PROCEDURALMESHCOMPONENT_ProceduralMeshComponent_generated_h
#error "ProceduralMeshComponent.generated.h already included, missing '#pragma once' in ProceduralMeshComponent.h"
#endif
#define PROCEDURALMESHCOMPONENT_ProceduralMeshComponent_generated_h

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_104_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcMeshSection_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FProcMeshSection>();

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_52_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcMeshVertex_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FProcMeshVertex>();

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FProcMeshTangent_Statics; \
	PROCEDURALMESHCOMPONENT_API static class UScriptStruct* StaticStruct();


template<> PROCEDURALMESHCOMPONENT_API UScriptStruct* StaticStruct<struct FProcMeshTangent>();

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_SPARSE_DATA
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCollisionConvexMeshes); \
	DECLARE_FUNCTION(execAddCollisionConvexMesh); \
	DECLARE_FUNCTION(execGetNumSections); \
	DECLARE_FUNCTION(execIsMeshSectionVisible); \
	DECLARE_FUNCTION(execSetMeshSectionVisible); \
	DECLARE_FUNCTION(execClearAllMeshSections); \
	DECLARE_FUNCTION(execClearMeshSection); \
	DECLARE_FUNCTION(execUpdateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execUpdateMeshSection); \
	DECLARE_FUNCTION(execCreateMeshSection_LinearColor); \
	DECLARE_FUNCTION(execCreateMeshSection);


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UProceduralMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UProceduralMeshComponent*>(this); }


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUProceduralMeshComponent(); \
	friend struct Z_Construct_UClass_UProceduralMeshComponent_Statics; \
public: \
	DECLARE_CLASS(UProceduralMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UProceduralMeshComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UProceduralMeshComponent*>(this); }


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UProceduralMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralMeshComponent(UProceduralMeshComponent&&); \
	NO_API UProceduralMeshComponent(const UProceduralMeshComponent&); \
public:


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UProceduralMeshComponent(UProceduralMeshComponent&&); \
	NO_API UProceduralMeshComponent(const UProceduralMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UProceduralMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UProceduralMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UProceduralMeshComponent)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ProcMeshSections() { return STRUCT_OFFSET(UProceduralMeshComponent, ProcMeshSections); } \
	FORCEINLINE static uint32 __PPO__CollisionConvexElems() { return STRUCT_OFFSET(UProceduralMeshComponent, CollisionConvexElems); } \
	FORCEINLINE static uint32 __PPO__LocalBounds() { return STRUCT_OFFSET(UProceduralMeshComponent, LocalBounds); } \
	FORCEINLINE static uint32 __PPO__AsyncBodySetupQueue() { return STRUCT_OFFSET(UProceduralMeshComponent, AsyncBodySetupQueue); }


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_147_PROLOG
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_SPARSE_DATA \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_RPC_WRAPPERS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_INCLASS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_SPARSE_DATA \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h_150_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALMESHCOMPONENT_API UClass* StaticClass<class UProceduralMeshComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_ProceduralMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
