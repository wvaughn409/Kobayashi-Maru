// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTextureRenderTarget2D;
struct FLinearColor;
class UTexture;
class USplineComponent;
class ULandscapeLayerInfoObject;
class UMaterialInterface;
#ifdef LANDSCAPE_LandscapeProxy_generated_h
#error "LandscapeProxy.generated.h already included, missing '#pragma once' in LandscapeProxy.h"
#endif
#define LANDSCAPE_LandscapeProxy_generated_h

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_321_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeProxyMaterialOverride_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeProxyMaterialOverride>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_133_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeImportLayerInfo_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeImportLayerInfo>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_80_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeLayerStruct_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeLayerStruct>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLandscapeEditorLayerSettings_Statics; \
	LANDSCAPE_API static class UScriptStruct* StaticStruct();


template<> LANDSCAPE_API UScriptStruct* StaticStruct<struct FLandscapeEditorLayerSettings>();

#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_SPARSE_DATA
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue); \
	DECLARE_FUNCTION(execEditorApplySpline); \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial); \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSizeFalloff); \
	DECLARE_FUNCTION(execChangeUseTessellationComponentScreenSizeFalloff); \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections); \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSize); \
	DECLARE_FUNCTION(execChangeLODDistanceFactor);


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetLandscapeMaterialScalarParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialVectorParameterValue); \
	DECLARE_FUNCTION(execSetLandscapeMaterialTextureParameterValue); \
	DECLARE_FUNCTION(execEditorApplySpline); \
	DECLARE_FUNCTION(execEditorSetLandscapeMaterial); \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSizeFalloff); \
	DECLARE_FUNCTION(execChangeUseTessellationComponentScreenSizeFalloff); \
	DECLARE_FUNCTION(execChangeComponentScreenSizeToUseSubSections); \
	DECLARE_FUNCTION(execChangeTessellationComponentScreenSize); \
	DECLARE_FUNCTION(execChangeLODDistanceFactor);


#if WITH_EDITOR
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget); \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget);


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLandscapeExportWeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportWeightmapFromRenderTarget); \
	DECLARE_FUNCTION(execLandscapeExportHeightmapToRenderTarget); \
	DECLARE_FUNCTION(execLandscapeImportHeightmapFromRenderTarget);


#else
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ALandscapeProxy, LANDSCAPE_API)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct Z_Construct_UClass_ALandscapeProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeProxy, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_INCLASS \
private: \
	static void StaticRegisterNativesALandscapeProxy(); \
	friend struct Z_Construct_UClass_ALandscapeProxy_Statics; \
public: \
	DECLARE_CLASS(ALandscapeProxy, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Landscape"), LANDSCAPE_API) \
	DECLARE_SERIALIZER(ALandscapeProxy) \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_ARCHIVESERIALIZER


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	LANDSCAPE_API ALandscapeProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public:


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	LANDSCAPE_API ALandscapeProxy(ALandscapeProxy&&); \
	LANDSCAPE_API ALandscapeProxy(const ALandscapeProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(LANDSCAPE_API, ALandscapeProxy); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALandscapeProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALandscapeProxy)


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__LandscapeGuid() { return STRUCT_OFFSET(ALandscapeProxy, LandscapeGuid); }


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_403_PROLOG
#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_INCLASS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_SPARSE_DATA \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h_406_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LANDSCAPE_API UClass* StaticClass<class ALandscapeProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Landscape_Classes_LandscapeProxy_h


#define FOREACH_ENUM_ELANDSCAPELODFALLOFF(op) \
	op(ELandscapeLODFalloff::Linear) \
	op(ELandscapeLODFalloff::SquareRoot) 
#define FOREACH_ENUM_ELANDSCAPELAYERDISPLAYMODE(op) \
	op(ELandscapeLayerDisplayMode::Default) \
	op(ELandscapeLayerDisplayMode::Alphabetical) \
	op(ELandscapeLayerDisplayMode::UserSpecific) 

enum class ELandscapeLayerDisplayMode : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerDisplayMode>();

#define FOREACH_ENUM_ELANDSCAPELAYERPAINTINGRESTRICTION(op) \
	op(ELandscapeLayerPaintingRestriction::None) \
	op(ELandscapeLayerPaintingRestriction::UseMaxLayers) \
	op(ELandscapeLayerPaintingRestriction::ExistingOnly) \
	op(ELandscapeLayerPaintingRestriction::UseComponentWhitelist) 

enum class ELandscapeLayerPaintingRestriction : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerPaintingRestriction>();

#define FOREACH_ENUM_ELANDSCAPEIMPORTALPHAMAPTYPE(op) \
	op(ELandscapeImportAlphamapType::Additive) \
	op(ELandscapeImportAlphamapType::Layered) 

enum class ELandscapeImportAlphamapType : uint8;
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeImportAlphamapType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
