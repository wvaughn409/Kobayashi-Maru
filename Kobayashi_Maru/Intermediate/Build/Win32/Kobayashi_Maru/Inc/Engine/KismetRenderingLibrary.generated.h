// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FSkelMeshSkinWeightInfo;
class UObject;
struct FDrawToRenderTargetContext;
class UTextureRenderTarget2D;
class UCanvas;
struct FVector2D;
class UTexture2D;
struct FLinearColor;
struct FColor;
class UMaterialInterface;
#ifdef ENGINE_KismetRenderingLibrary_generated_h
#error "KismetRenderingLibrary.generated.h already included, missing '#pragma once' in KismetRenderingLibrary.h"
#endif
#define ENGINE_KismetRenderingLibrary_generated_h

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDrawToRenderTargetContext_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDrawToRenderTargetContext>();

#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCastInsetShadowForAllAttachments); \
	DECLARE_FUNCTION(execBreakSkinWeightInfo); \
	DECLARE_FUNCTION(execMakeSkinWeightInfo); \
	DECLARE_FUNCTION(execEndDrawCanvasToRenderTarget); \
	DECLARE_FUNCTION(execBeginDrawCanvasToRenderTarget); \
	DECLARE_FUNCTION(execImportBufferAsTexture2D); \
	DECLARE_FUNCTION(execImportFileAsTexture2D); \
	DECLARE_FUNCTION(execExportTexture2D); \
	DECLARE_FUNCTION(execReadRenderTargetRawUV); \
	DECLARE_FUNCTION(execReadRenderTargetRawPixel); \
	DECLARE_FUNCTION(execReadRenderTargetUV); \
	DECLARE_FUNCTION(execReadRenderTargetPixel); \
	DECLARE_FUNCTION(execExportRenderTarget); \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2DEditorOnly); \
	DECLARE_FUNCTION(execRenderTargetCreateStaticTexture2DEditorOnly); \
	DECLARE_FUNCTION(execDrawMaterialToRenderTarget); \
	DECLARE_FUNCTION(execReleaseRenderTarget2D); \
	DECLARE_FUNCTION(execCreateRenderTarget2D); \
	DECLARE_FUNCTION(execClearRenderTarget2D);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCastInsetShadowForAllAttachments); \
	DECLARE_FUNCTION(execBreakSkinWeightInfo); \
	DECLARE_FUNCTION(execMakeSkinWeightInfo); \
	DECLARE_FUNCTION(execEndDrawCanvasToRenderTarget); \
	DECLARE_FUNCTION(execBeginDrawCanvasToRenderTarget); \
	DECLARE_FUNCTION(execImportBufferAsTexture2D); \
	DECLARE_FUNCTION(execImportFileAsTexture2D); \
	DECLARE_FUNCTION(execExportTexture2D); \
	DECLARE_FUNCTION(execReadRenderTargetRawUV); \
	DECLARE_FUNCTION(execReadRenderTargetRawPixel); \
	DECLARE_FUNCTION(execReadRenderTargetUV); \
	DECLARE_FUNCTION(execReadRenderTargetPixel); \
	DECLARE_FUNCTION(execExportRenderTarget); \
	DECLARE_FUNCTION(execConvertRenderTargetToTexture2DEditorOnly); \
	DECLARE_FUNCTION(execRenderTargetCreateStaticTexture2DEditorOnly); \
	DECLARE_FUNCTION(execDrawMaterialToRenderTarget); \
	DECLARE_FUNCTION(execReleaseRenderTarget2D); \
	DECLARE_FUNCTION(execCreateRenderTarget2D); \
	DECLARE_FUNCTION(execClearRenderTarget2D);


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUKismetRenderingLibrary(); \
	friend struct Z_Construct_UClass_UKismetRenderingLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetRenderingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetRenderingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS \
private: \
	static void StaticRegisterNativesUKismetRenderingLibrary(); \
	friend struct Z_Construct_UClass_UKismetRenderingLibrary_Statics; \
public: \
	DECLARE_CLASS(UKismetRenderingLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UKismetRenderingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetRenderingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetRenderingLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetRenderingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetRenderingLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetRenderingLibrary(UKismetRenderingLibrary&&); \
	ENGINE_API UKismetRenderingLibrary(const UKismetRenderingLibrary&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UKismetRenderingLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UKismetRenderingLibrary(UKismetRenderingLibrary&&); \
	ENGINE_API UKismetRenderingLibrary(const UKismetRenderingLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UKismetRenderingLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UKismetRenderingLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UKismetRenderingLibrary)


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_34_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h_37_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class KismetRenderingLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UKismetRenderingLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Kismet_KismetRenderingLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
