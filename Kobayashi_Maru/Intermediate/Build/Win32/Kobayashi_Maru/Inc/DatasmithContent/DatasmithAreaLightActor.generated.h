// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DATASMITHCONTENT_DatasmithAreaLightActor_generated_h
#error "DatasmithAreaLightActor.generated.h already included, missing '#pragma once' in DatasmithAreaLightActor.h"
#endif
#define DATASMITHCONTENT_DatasmithAreaLightActor_generated_h

#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_SPARSE_DATA
#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_RPC_WRAPPERS
#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADatasmithAreaLightActor(); \
	friend struct Z_Construct_UClass_ADatasmithAreaLightActor_Statics; \
public: \
	DECLARE_CLASS(ADatasmithAreaLightActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), DATASMITHCONTENT_API) \
	DECLARE_SERIALIZER(ADatasmithAreaLightActor)


#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_INCLASS \
private: \
	static void StaticRegisterNativesADatasmithAreaLightActor(); \
	friend struct Z_Construct_UClass_ADatasmithAreaLightActor_Statics; \
public: \
	DECLARE_CLASS(ADatasmithAreaLightActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DatasmithContent"), DATASMITHCONTENT_API) \
	DECLARE_SERIALIZER(ADatasmithAreaLightActor)


#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	DATASMITHCONTENT_API ADatasmithAreaLightActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADatasmithAreaLightActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, ADatasmithAreaLightActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADatasmithAreaLightActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASMITHCONTENT_API ADatasmithAreaLightActor(ADatasmithAreaLightActor&&); \
	DATASMITHCONTENT_API ADatasmithAreaLightActor(const ADatasmithAreaLightActor&); \
public:


#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	DATASMITHCONTENT_API ADatasmithAreaLightActor(ADatasmithAreaLightActor&&); \
	DATASMITHCONTENT_API ADatasmithAreaLightActor(const ADatasmithAreaLightActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(DATASMITHCONTENT_API, ADatasmithAreaLightActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADatasmithAreaLightActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADatasmithAreaLightActor)


#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_29_PROLOG
#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_RPC_WRAPPERS \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_INCLASS \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_SPARSE_DATA \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DATASMITHCONTENT_API UClass* StaticClass<class ADatasmithAreaLightActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Enterprise_DatasmithContent_Source_DatasmithContent_Public_DatasmithAreaLightActor_h


#define FOREACH_ENUM_EDATASMITHAREALIGHTACTORTYPE(op) \
	op(EDatasmithAreaLightActorType::Point) \
	op(EDatasmithAreaLightActorType::Spot) \
	op(EDatasmithAreaLightActorType::Rect) 

enum class EDatasmithAreaLightActorType : uint8;
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorType>();

#define FOREACH_ENUM_EDATASMITHAREALIGHTACTORSHAPE(op) \
	op(EDatasmithAreaLightActorShape::Rectangle) \
	op(EDatasmithAreaLightActorShape::Disc) \
	op(EDatasmithAreaLightActorShape::Sphere) \
	op(EDatasmithAreaLightActorShape::Cylinder) \
	op(EDatasmithAreaLightActorShape::None) 

enum class EDatasmithAreaLightActorShape : uint8;
template<> DATASMITHCONTENT_API UEnum* StaticEnum<EDatasmithAreaLightActorShape>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
