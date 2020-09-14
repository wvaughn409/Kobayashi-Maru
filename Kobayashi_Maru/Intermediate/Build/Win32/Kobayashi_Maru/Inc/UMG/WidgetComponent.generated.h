// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EWindowVisibility : uint8;
enum class EWidgetGeometryMode : uint8;
enum class EWidgetSpace : uint8;
struct FVector2D;
struct FLinearColor;
class ULocalPlayer;
class UUserWidget;
class UMaterialInstanceDynamic;
class UTextureRenderTarget2D;
#ifdef UMG_WidgetComponent_generated_h
#error "WidgetComponent.generated.h already included, missing '#pragma once' in WidgetComponent.h"
#endif
#define UMG_WidgetComponent_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_615_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetComponentInstanceData_Statics; \
	UMG_API static class UScriptStruct* StaticStruct(); \
	typedef FSceneComponentInstanceData Super;


template<> UMG_API UScriptStruct* StaticStruct<struct FWidgetComponentInstanceData>();

#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetWindowVisibility); \
	DECLARE_FUNCTION(execGetWindowVisiblility); \
	DECLARE_FUNCTION(execSetWindowFocusable); \
	DECLARE_FUNCTION(execGetWindowFocusable); \
	DECLARE_FUNCTION(execSetCylinderArcAngle); \
	DECLARE_FUNCTION(execGetCylinderArcAngle); \
	DECLARE_FUNCTION(execSetGeometryMode); \
	DECLARE_FUNCTION(execGetGeometryMode); \
	DECLARE_FUNCTION(execSetWidgetSpace); \
	DECLARE_FUNCTION(execGetWidgetSpace); \
	DECLARE_FUNCTION(execSetRedrawTime); \
	DECLARE_FUNCTION(execGetRedrawTime); \
	DECLARE_FUNCTION(execSetDrawAtDesiredSize); \
	DECLARE_FUNCTION(execGetDrawAtDesiredSize); \
	DECLARE_FUNCTION(execSetPivot); \
	DECLARE_FUNCTION(execGetPivot); \
	DECLARE_FUNCTION(execSetTintColorAndOpacity); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetTickWhenOffscreen); \
	DECLARE_FUNCTION(execGetTickWhenOffscreen); \
	DECLARE_FUNCTION(execSetTwoSided); \
	DECLARE_FUNCTION(execGetTwoSided); \
	DECLARE_FUNCTION(execRequestRedraw); \
	DECLARE_FUNCTION(execSetDrawSize); \
	DECLARE_FUNCTION(execGetCurrentDrawSize); \
	DECLARE_FUNCTION(execGetDrawSize); \
	DECLARE_FUNCTION(execGetOwnerPlayer); \
	DECLARE_FUNCTION(execSetManuallyRedraw); \
	DECLARE_FUNCTION(execGetManuallyRedraw); \
	DECLARE_FUNCTION(execSetOwnerPlayer); \
	DECLARE_FUNCTION(execSetWidget); \
	DECLARE_FUNCTION(execGetMaterialInstance); \
	DECLARE_FUNCTION(execGetRenderTarget); \
	DECLARE_FUNCTION(execGetUserWidgetObject);


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetWindowVisibility); \
	DECLARE_FUNCTION(execGetWindowVisiblility); \
	DECLARE_FUNCTION(execSetWindowFocusable); \
	DECLARE_FUNCTION(execGetWindowFocusable); \
	DECLARE_FUNCTION(execSetCylinderArcAngle); \
	DECLARE_FUNCTION(execGetCylinderArcAngle); \
	DECLARE_FUNCTION(execSetGeometryMode); \
	DECLARE_FUNCTION(execGetGeometryMode); \
	DECLARE_FUNCTION(execSetWidgetSpace); \
	DECLARE_FUNCTION(execGetWidgetSpace); \
	DECLARE_FUNCTION(execSetRedrawTime); \
	DECLARE_FUNCTION(execGetRedrawTime); \
	DECLARE_FUNCTION(execSetDrawAtDesiredSize); \
	DECLARE_FUNCTION(execGetDrawAtDesiredSize); \
	DECLARE_FUNCTION(execSetPivot); \
	DECLARE_FUNCTION(execGetPivot); \
	DECLARE_FUNCTION(execSetTintColorAndOpacity); \
	DECLARE_FUNCTION(execSetBackgroundColor); \
	DECLARE_FUNCTION(execSetTickWhenOffscreen); \
	DECLARE_FUNCTION(execGetTickWhenOffscreen); \
	DECLARE_FUNCTION(execSetTwoSided); \
	DECLARE_FUNCTION(execGetTwoSided); \
	DECLARE_FUNCTION(execRequestRedraw); \
	DECLARE_FUNCTION(execSetDrawSize); \
	DECLARE_FUNCTION(execGetCurrentDrawSize); \
	DECLARE_FUNCTION(execGetDrawSize); \
	DECLARE_FUNCTION(execGetOwnerPlayer); \
	DECLARE_FUNCTION(execSetManuallyRedraw); \
	DECLARE_FUNCTION(execGetManuallyRedraw); \
	DECLARE_FUNCTION(execSetOwnerPlayer); \
	DECLARE_FUNCTION(execSetWidget); \
	DECLARE_FUNCTION(execGetMaterialInstance); \
	DECLARE_FUNCTION(execGetRenderTarget); \
	DECLARE_FUNCTION(execGetUserWidgetObject);


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetComponent, NO_API)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetComponent(); \
	friend struct Z_Construct_UClass_UWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetComponent) \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetComponent(); \
	friend struct Z_Construct_UClass_UWidgetComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetComponent, UMeshComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UWidgetComponent) \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_ARCHIVESERIALIZER


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetComponent(UWidgetComponent&&); \
	NO_API UWidgetComponent(const UWidgetComponent&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetComponent(UWidgetComponent&&); \
	NO_API UWidgetComponent(const UWidgetComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetComponent)


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Space() { return STRUCT_OFFSET(UWidgetComponent, Space); } \
	FORCEINLINE static uint32 __PPO__TimingPolicy() { return STRUCT_OFFSET(UWidgetComponent, TimingPolicy); } \
	FORCEINLINE static uint32 __PPO__WidgetClass() { return STRUCT_OFFSET(UWidgetComponent, WidgetClass); } \
	FORCEINLINE static uint32 __PPO__DrawSize() { return STRUCT_OFFSET(UWidgetComponent, DrawSize); } \
	FORCEINLINE static uint32 __PPO__bManuallyRedraw() { return STRUCT_OFFSET(UWidgetComponent, bManuallyRedraw); } \
	FORCEINLINE static uint32 __PPO__bRedrawRequested() { return STRUCT_OFFSET(UWidgetComponent, bRedrawRequested); } \
	FORCEINLINE static uint32 __PPO__RedrawTime() { return STRUCT_OFFSET(UWidgetComponent, RedrawTime); } \
	FORCEINLINE static uint32 __PPO__CurrentDrawSize() { return STRUCT_OFFSET(UWidgetComponent, CurrentDrawSize); } \
	FORCEINLINE static uint32 __PPO__bDrawAtDesiredSize() { return STRUCT_OFFSET(UWidgetComponent, bDrawAtDesiredSize); } \
	FORCEINLINE static uint32 __PPO__Pivot() { return STRUCT_OFFSET(UWidgetComponent, Pivot); } \
	FORCEINLINE static uint32 __PPO__bReceiveHardwareInput() { return STRUCT_OFFSET(UWidgetComponent, bReceiveHardwareInput); } \
	FORCEINLINE static uint32 __PPO__bWindowFocusable() { return STRUCT_OFFSET(UWidgetComponent, bWindowFocusable); } \
	FORCEINLINE static uint32 __PPO__WindowVisibility() { return STRUCT_OFFSET(UWidgetComponent, WindowVisibility); } \
	FORCEINLINE static uint32 __PPO__bApplyGammaCorrection() { return STRUCT_OFFSET(UWidgetComponent, bApplyGammaCorrection); } \
	FORCEINLINE static uint32 __PPO__OwnerPlayer() { return STRUCT_OFFSET(UWidgetComponent, OwnerPlayer); } \
	FORCEINLINE static uint32 __PPO__BackgroundColor() { return STRUCT_OFFSET(UWidgetComponent, BackgroundColor); } \
	FORCEINLINE static uint32 __PPO__TintColorAndOpacity() { return STRUCT_OFFSET(UWidgetComponent, TintColorAndOpacity); } \
	FORCEINLINE static uint32 __PPO__OpacityFromTexture() { return STRUCT_OFFSET(UWidgetComponent, OpacityFromTexture); } \
	FORCEINLINE static uint32 __PPO__BlendMode() { return STRUCT_OFFSET(UWidgetComponent, BlendMode); } \
	FORCEINLINE static uint32 __PPO__bIsTwoSided() { return STRUCT_OFFSET(UWidgetComponent, bIsTwoSided); } \
	FORCEINLINE static uint32 __PPO__TickWhenOffscreen() { return STRUCT_OFFSET(UWidgetComponent, TickWhenOffscreen); } \
	FORCEINLINE static uint32 __PPO__Widget() { return STRUCT_OFFSET(UWidgetComponent, Widget); } \
	FORCEINLINE static uint32 __PPO__BodySetup() { return STRUCT_OFFSET(UWidgetComponent, BodySetup); } \
	FORCEINLINE static uint32 __PPO__TranslucentMaterial() { return STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial); } \
	FORCEINLINE static uint32 __PPO__TranslucentMaterial_OneSided() { return STRUCT_OFFSET(UWidgetComponent, TranslucentMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__OpaqueMaterial() { return STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial); } \
	FORCEINLINE static uint32 __PPO__OpaqueMaterial_OneSided() { return STRUCT_OFFSET(UWidgetComponent, OpaqueMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__MaskedMaterial() { return STRUCT_OFFSET(UWidgetComponent, MaskedMaterial); } \
	FORCEINLINE static uint32 __PPO__MaskedMaterial_OneSided() { return STRUCT_OFFSET(UWidgetComponent, MaskedMaterial_OneSided); } \
	FORCEINLINE static uint32 __PPO__RenderTarget() { return STRUCT_OFFSET(UWidgetComponent, RenderTarget); } \
	FORCEINLINE static uint32 __PPO__MaterialInstance() { return STRUCT_OFFSET(UWidgetComponent, MaterialInstance); } \
	FORCEINLINE static uint32 __PPO__bAddedToScreen() { return STRUCT_OFFSET(UWidgetComponent, bAddedToScreen); } \
	FORCEINLINE static uint32 __PPO__bEditTimeUsable() { return STRUCT_OFFSET(UWidgetComponent, bEditTimeUsable); } \
	FORCEINLINE static uint32 __PPO__SharedLayerName() { return STRUCT_OFFSET(UWidgetComponent, SharedLayerName); } \
	FORCEINLINE static uint32 __PPO__LayerZOrder() { return STRUCT_OFFSET(UWidgetComponent, LayerZOrder); } \
	FORCEINLINE static uint32 __PPO__GeometryMode() { return STRUCT_OFFSET(UWidgetComponent, GeometryMode); } \
	FORCEINLINE static uint32 __PPO__CylinderArcAngle() { return STRUCT_OFFSET(UWidgetComponent, CylinderArcAngle); }


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_80_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h_83_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WidgetComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UWidgetComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_WidgetComponent_h


#define FOREACH_ENUM_EWINDOWVISIBILITY(op) \
	op(EWindowVisibility::Visible) \
	op(EWindowVisibility::SelfHitTestInvisible) 

enum class EWindowVisibility : uint8;
template<> UMG_API UEnum* StaticEnum<EWindowVisibility>();

#define FOREACH_ENUM_EWIDGETGEOMETRYMODE(op) \
	op(EWidgetGeometryMode::Plane) \
	op(EWidgetGeometryMode::Cylinder) 

enum class EWidgetGeometryMode : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetGeometryMode>();

#define FOREACH_ENUM_EWIDGETBLENDMODE(op) \
	op(EWidgetBlendMode::Opaque) \
	op(EWidgetBlendMode::Masked) \
	op(EWidgetBlendMode::Transparent) 

enum class EWidgetBlendMode : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetBlendMode>();

#define FOREACH_ENUM_EWIDGETTIMINGPOLICY(op) \
	op(EWidgetTimingPolicy::RealTime) \
	op(EWidgetTimingPolicy::GameTime) 

enum class EWidgetTimingPolicy : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetTimingPolicy>();

#define FOREACH_ENUM_EWIDGETSPACE(op) \
	op(EWidgetSpace::World) \
	op(EWidgetSpace::Screen) 

enum class EWidgetSpace : uint8;
template<> UMG_API UEnum* StaticEnum<EWidgetSpace>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
