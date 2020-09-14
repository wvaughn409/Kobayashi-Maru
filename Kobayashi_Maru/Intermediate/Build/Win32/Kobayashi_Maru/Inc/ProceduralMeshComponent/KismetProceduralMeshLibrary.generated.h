// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProceduralMeshComponent;
struct FVector;
enum class EProcMeshSliceCapOption : uint8;
class UMaterialInterface;
struct FVector2D;
struct FProcMeshTangent;
class UStaticMeshComponent;
class UStaticMesh;
#ifdef PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h
#error "KismetProceduralMeshLibrary.generated.h already included, missing '#pragma once' in KismetProceduralMeshLibrary.h"
#endif
#define PROCEDURALMESHCOMPONENT_KismetProceduralMeshLibrary_generated_h

#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_SPARSE_DATA
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh); \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh); \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh); \
	DECLARE_FUNCTION(execCreateGridMeshSplit); \
	DECLARE_FUNCTION(execCreateGridMeshWelded); \
	DECLARE_FUNCTION(execCreateGridMeshTriangles); \
	DECLARE_FUNCTION(execConvertQuadToTriangles); \
	DECLARE_FUNCTION(execCalculateTangentsForMesh); \
	DECLARE_FUNCTION(execGenerateBoxMesh);


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceProceduralMesh); \
	DECLARE_FUNCTION(execGetSectionFromProceduralMesh); \
	DECLARE_FUNCTION(execCopyProceduralMeshFromStaticMeshComponent); \
	DECLARE_FUNCTION(execGetSectionFromStaticMesh); \
	DECLARE_FUNCTION(execCreateGridMeshSplit); \
	DECLARE_FUNCTION(execCreateGridMeshWelded); \
	DECLARE_FUNCTION(execCreateGridMeshTriangles); \
	DECLARE_FUNCTION(execConvertQuadToTriangles); \
	DECLARE_FUNCTION(execCalculateTangentsForMesh); \
	DECLARE_FUNCTION(execGenerateBoxMesh);


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UKismetProceduralMeshLibrary)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS \
private: \
	static void StaticRegisterNativesUKismetProceduralMeshLibrary(); \
	friend struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetProceduralMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProceduralMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(UKismetProceduralMeshLibrary)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetProceduralMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetProceduralMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetProceduralMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary&&); \
	NO_API UKismetProceduralMeshLibrary(const UKismetProceduralMeshLibrary&); \
public:


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UKismetProceduralMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UKismetProceduralMeshLibrary(UKismetProceduralMeshLibrary&&); \
	NO_API UKismetProceduralMeshLibrary(const UKismetProceduralMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UKismetProceduralMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetProceduralMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetProceduralMeshLibrary)


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_26_PROLOG
#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_SPARSE_DATA \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_SPARSE_DATA \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROCEDURALMESHCOMPONENT_API UClass* StaticClass<class UKismetProceduralMeshLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_ProceduralMeshComponent_Source_ProceduralMeshComponent_Public_KismetProceduralMeshLibrary_h


#define FOREACH_ENUM_EPROCMESHSLICECAPOPTION(op) \
	op(EProcMeshSliceCapOption::NoCap) \
	op(EProcMeshSliceCapOption::CreateNewSectionForCap) \
	op(EProcMeshSliceCapOption::UseLastSectionForCap) 

enum class EProcMeshSliceCapOption : uint8;
template<> PROCEDURALMESHCOMPONENT_API UEnum* StaticEnum<EProcMeshSliceCapOption>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
