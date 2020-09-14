// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEquirectProps;
struct FBox2D;
struct FVector2D;
class UTexture;
#ifdef ENGINE_StereoLayerComponent_generated_h
#error "StereoLayerComponent.generated.h already included, missing '#pragma once' in StereoLayerComponent.h"
#endif
#define ENGINE_StereoLayerComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEquirectProps_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FEquirectProps>();

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShape(); \
	friend struct Z_Construct_UClass_UStereoLayerShape_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShape) \
	DECLARE_WITHIN(UStereoLayerComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShape(); \
	friend struct Z_Construct_UClass_UStereoLayerShape_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShape, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShape) \
	DECLARE_WITHIN(UStereoLayerComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShape) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShape); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShape(UStereoLayerShape&&); \
	NO_API UStereoLayerShape(const UStereoLayerShape&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShape(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShape(UStereoLayerShape&&); \
	NO_API UStereoLayerShape(const UStereoLayerShape&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShape); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShape); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShape)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_48_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_51_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShape>();

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeQuad(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeQuad_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeQuad, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeQuad)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeQuad(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeQuad_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeQuad, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeQuad)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeQuad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeQuad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeQuad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeQuad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeQuad(UStereoLayerShapeQuad&&); \
	NO_API UStereoLayerShapeQuad(const UStereoLayerShapeQuad&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeQuad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeQuad(UStereoLayerShapeQuad&&); \
	NO_API UStereoLayerShapeQuad(const UStereoLayerShapeQuad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeQuad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeQuad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeQuad)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_63_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_66_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeQuad>();

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execSetOverlayArc); \
	DECLARE_FUNCTION(execSetRadius);


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetHeight); \
	DECLARE_FUNCTION(execSetOverlayArc); \
	DECLARE_FUNCTION(execSetRadius);


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCylinder(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCylinder_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCylinder, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCylinder)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCylinder(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCylinder_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCylinder, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCylinder)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeCylinder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCylinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCylinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCylinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCylinder(UStereoLayerShapeCylinder&&); \
	NO_API UStereoLayerShapeCylinder(const UStereoLayerShapeCylinder&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCylinder(UStereoLayerShapeCylinder&&); \
	NO_API UStereoLayerShapeCylinder(const UStereoLayerShapeCylinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCylinder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCylinder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeCylinder)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_74_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_77_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeCylinder>();

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCubemap(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCubemap_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCubemap, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCubemap)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeCubemap(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeCubemap_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeCubemap, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeCubemap)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeCubemap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCubemap) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCubemap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCubemap); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCubemap(UStereoLayerShapeCubemap&&); \
	NO_API UStereoLayerShapeCubemap(const UStereoLayerShapeCubemap&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeCubemap(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeCubemap(UStereoLayerShapeCubemap&&); \
	NO_API UStereoLayerShapeCubemap(const UStereoLayerShapeCubemap&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeCubemap); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeCubemap); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeCubemap)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_111_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_114_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeCubemap>();

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetEquirectProps);


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetEquirectProps);


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeEquirect(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeEquirect_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeEquirect, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeEquirect)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerShapeEquirect(); \
	friend struct Z_Construct_UClass_UStereoLayerShapeEquirect_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerShapeEquirect, UStereoLayerShape, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerShapeEquirect)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerShapeEquirect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerShapeEquirect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeEquirect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeEquirect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeEquirect(UStereoLayerShapeEquirect&&); \
	NO_API UStereoLayerShapeEquirect(const UStereoLayerShapeEquirect&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerShapeEquirect(UStereoLayerShapeEquirect&&); \
	NO_API UStereoLayerShapeEquirect(const UStereoLayerShapeEquirect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerShapeEquirect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerShapeEquirect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStereoLayerShapeEquirect)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_188_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerShapeEquirect>();

#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMarkTextureForUpdate); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetEquirectProps); \
	DECLARE_FUNCTION(execGetUVRect); \
	DECLARE_FUNCTION(execSetUVRect); \
	DECLARE_FUNCTION(execGetQuadSize); \
	DECLARE_FUNCTION(execSetQuadSize); \
	DECLARE_FUNCTION(execGetLeftTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetLeftTexture); \
	DECLARE_FUNCTION(execSetTexture);


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMarkTextureForUpdate); \
	DECLARE_FUNCTION(execGetPriority); \
	DECLARE_FUNCTION(execSetPriority); \
	DECLARE_FUNCTION(execSetEquirectProps); \
	DECLARE_FUNCTION(execGetUVRect); \
	DECLARE_FUNCTION(execSetUVRect); \
	DECLARE_FUNCTION(execGetQuadSize); \
	DECLARE_FUNCTION(execSetQuadSize); \
	DECLARE_FUNCTION(execGetLeftTexture); \
	DECLARE_FUNCTION(execGetTexture); \
	DECLARE_FUNCTION(execSetLeftTexture); \
	DECLARE_FUNCTION(execSetTexture);


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UStereoLayerComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct Z_Construct_UClass_UStereoLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS \
private: \
	static void StaticRegisterNativesUStereoLayerComponent(); \
	friend struct Z_Construct_UClass_UStereoLayerComponent_Statics; \
public: \
	DECLARE_CLASS(UStereoLayerComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UStereoLayerComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerComponent(UStereoLayerComponent&&); \
	NO_API UStereoLayerComponent(const UStereoLayerComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStereoLayerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStereoLayerComponent(UStereoLayerComponent&&); \
	NO_API UStereoLayerComponent(const UStereoLayerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStereoLayerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStereoLayerComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStereoLayerComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Texture() { return STRUCT_OFFSET(UStereoLayerComponent, Texture); } \
	FORCEINLINE static uint32 __PPO__LeftTexture() { return STRUCT_OFFSET(UStereoLayerComponent, LeftTexture); } \
	FORCEINLINE static uint32 __PPO__QuadSize() { return STRUCT_OFFSET(UStereoLayerComponent, QuadSize); } \
	FORCEINLINE static uint32 __PPO__UVRect() { return STRUCT_OFFSET(UStereoLayerComponent, UVRect); } \
	FORCEINLINE static uint32 __PPO__CylinderRadius_DEPRECATED() { return STRUCT_OFFSET(UStereoLayerComponent, CylinderRadius_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__CylinderOverlayArc_DEPRECATED() { return STRUCT_OFFSET(UStereoLayerComponent, CylinderOverlayArc_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__CylinderHeight_DEPRECATED() { return STRUCT_OFFSET(UStereoLayerComponent, CylinderHeight_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__EquirectProps_DEPRECATED() { return STRUCT_OFFSET(UStereoLayerComponent, EquirectProps_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__StereoLayerType() { return STRUCT_OFFSET(UStereoLayerComponent, StereoLayerType); } \
	FORCEINLINE static uint32 __PPO__StereoLayerShape_DEPRECATED() { return STRUCT_OFFSET(UStereoLayerComponent, StereoLayerShape_DEPRECATED); } \
	FORCEINLINE static uint32 __PPO__Shape() { return STRUCT_OFFSET(UStereoLayerComponent, Shape); } \
	FORCEINLINE static uint32 __PPO__Priority() { return STRUCT_OFFSET(UStereoLayerComponent, Priority); }


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_243_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h_246_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class StereoLayerComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UStereoLayerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_StereoLayerComponent_h


#define FOREACH_ENUM_ESTEREOLAYERSHAPE(op) \
	op(SLSH_QuadLayer) \
	op(SLSH_CylinderLayer) \
	op(SLSH_CubemapLayer) \
	op(SLSH_EquirectLayer) 
#define FOREACH_ENUM_ESTEREOLAYERTYPE(op) \
	op(SLT_WorldLocked) \
	op(SLT_TrackerLocked) \
	op(SLT_FaceLocked) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
