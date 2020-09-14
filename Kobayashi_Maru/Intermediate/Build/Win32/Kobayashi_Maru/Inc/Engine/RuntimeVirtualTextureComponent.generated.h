// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
#ifdef ENGINE_RuntimeVirtualTextureComponent_generated_h
#error "RuntimeVirtualTextureComponent.generated.h already included, missing '#pragma once' in RuntimeVirtualTextureComponent.h"
#endif
#define ENGINE_RuntimeVirtualTextureComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVirtualTextureTransform);


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVirtualTextureTransform);


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureComponent(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTextureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeVirtualTextureComponent(); \
	friend struct Z_Construct_UClass_URuntimeVirtualTextureComponent_Statics; \
public: \
	DECLARE_CLASS(URuntimeVirtualTextureComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(URuntimeVirtualTextureComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTextureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTextureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeVirtualTextureComponent(URuntimeVirtualTextureComponent&&); \
	NO_API URuntimeVirtualTextureComponent(const URuntimeVirtualTextureComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeVirtualTextureComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeVirtualTextureComponent(URuntimeVirtualTextureComponent&&); \
	NO_API URuntimeVirtualTextureComponent(const URuntimeVirtualTextureComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeVirtualTextureComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeVirtualTextureComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeVirtualTextureComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VirtualTexture() { return STRUCT_OFFSET(URuntimeVirtualTextureComponent, VirtualTexture); } \
	FORCEINLINE static uint32 __PPO__bUseStreamingLowMipsInEditor() { return STRUCT_OFFSET(URuntimeVirtualTextureComponent, bUseStreamingLowMipsInEditor); } \
	FORCEINLINE static uint32 __PPO__BoundsSourceActor() { return STRUCT_OFFSET(URuntimeVirtualTextureComponent, BoundsSourceActor); }


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_12_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h_15_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeVirtualTextureComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class URuntimeVirtualTextureComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_RuntimeVirtualTextureComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
