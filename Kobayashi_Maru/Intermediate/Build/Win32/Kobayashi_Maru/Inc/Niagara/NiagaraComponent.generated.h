// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UNiagaraComponent;
class UNiagaraDataInterface;
struct FVector;
class UMaterialInterface;
class UObject;
class AActor;
struct FVector2D;
struct FQuat;
struct FVector4;
struct FLinearColor;
enum class ENiagaraAgeUpdateMode : uint8;
class UNiagaraSystem;
#ifdef NIAGARA_NiagaraComponent_generated_h
#error "NiagaraComponent.generated.h already included, missing '#pragma once' in NiagaraComponent.h"
#endif
#define NIAGARA_NiagaraComponent_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_28_DELEGATE \
struct _Script_Niagara_eventOnNiagaraSystemFinished_Parms \
{ \
	UNiagaraComponent* PSystem; \
}; \
static inline void FOnNiagaraSystemFinished_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraSystemFinished, UNiagaraComponent* PSystem) \
{ \
	_Script_Niagara_eventOnNiagaraSystemFinished_Parms Parms; \
	Parms.PSystem=PSystem; \
	OnNiagaraSystemFinished.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_SPARSE_DATA
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetAllowScalability); \
	DECLARE_FUNCTION(execGetPreviewLODDistance); \
	DECLARE_FUNCTION(execGetPreviewLODDistanceEnabled); \
	DECLARE_FUNCTION(execSetPreviewLODDistance); \
	DECLARE_FUNCTION(execGetDataInterface); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execAdvanceSimulationByTime); \
	DECLARE_FUNCTION(execAdvanceSimulation); \
	DECLARE_FUNCTION(execSetRenderingEnabled); \
	DECLARE_FUNCTION(execReinitializeSystem); \
	DECLARE_FUNCTION(execResetSystem); \
	DECLARE_FUNCTION(execGetNiagaraParticleValueVec3_DebugOnly); \
	DECLARE_FUNCTION(execGetNiagaraParticleValues_DebugOnly); \
	DECLARE_FUNCTION(execGetNiagaraParticlePositions_DebugOnly); \
	DECLARE_FUNCTION(execSetVariableMaterial); \
	DECLARE_FUNCTION(execSetVariableObject); \
	DECLARE_FUNCTION(execSetNiagaraVariableObject); \
	DECLARE_FUNCTION(execSetVariableActor); \
	DECLARE_FUNCTION(execSetNiagaraVariableActor); \
	DECLARE_FUNCTION(execSetVariableBool); \
	DECLARE_FUNCTION(execSetNiagaraVariableBool); \
	DECLARE_FUNCTION(execSetVariableInt); \
	DECLARE_FUNCTION(execSetNiagaraVariableInt); \
	DECLARE_FUNCTION(execSetVariableFloat); \
	DECLARE_FUNCTION(execSetNiagaraVariableFloat); \
	DECLARE_FUNCTION(execSetVariableVec2); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec2); \
	DECLARE_FUNCTION(execSetVariableVec3); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec3); \
	DECLARE_FUNCTION(execSetVariableQuat); \
	DECLARE_FUNCTION(execSetNiagaraVariableQuat); \
	DECLARE_FUNCTION(execSetVariableVec4); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec4); \
	DECLARE_FUNCTION(execSetVariableLinearColor); \
	DECLARE_FUNCTION(execSetNiagaraVariableLinearColor); \
	DECLARE_FUNCTION(execSetAutoDestroy); \
	DECLARE_FUNCTION(execSetMaxSimTime); \
	DECLARE_FUNCTION(execGetMaxSimTime); \
	DECLARE_FUNCTION(execSetSeekDelta); \
	DECLARE_FUNCTION(execGetSeekDelta); \
	DECLARE_FUNCTION(execSetCanRenderWhileSeeking); \
	DECLARE_FUNCTION(execSeekToDesiredAge); \
	DECLARE_FUNCTION(execSetDesiredAge); \
	DECLARE_FUNCTION(execGetDesiredAge); \
	DECLARE_FUNCTION(execSetAgeUpdateMode); \
	DECLARE_FUNCTION(execGetAgeUpdateMode); \
	DECLARE_FUNCTION(execGetForceSolo); \
	DECLARE_FUNCTION(execSetForceSolo); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execSetAsset);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetAllowScalability); \
	DECLARE_FUNCTION(execGetPreviewLODDistance); \
	DECLARE_FUNCTION(execGetPreviewLODDistanceEnabled); \
	DECLARE_FUNCTION(execSetPreviewLODDistance); \
	DECLARE_FUNCTION(execGetDataInterface); \
	DECLARE_FUNCTION(execIsPaused); \
	DECLARE_FUNCTION(execSetPaused); \
	DECLARE_FUNCTION(execAdvanceSimulationByTime); \
	DECLARE_FUNCTION(execAdvanceSimulation); \
	DECLARE_FUNCTION(execSetRenderingEnabled); \
	DECLARE_FUNCTION(execReinitializeSystem); \
	DECLARE_FUNCTION(execResetSystem); \
	DECLARE_FUNCTION(execGetNiagaraParticleValueVec3_DebugOnly); \
	DECLARE_FUNCTION(execGetNiagaraParticleValues_DebugOnly); \
	DECLARE_FUNCTION(execGetNiagaraParticlePositions_DebugOnly); \
	DECLARE_FUNCTION(execSetVariableMaterial); \
	DECLARE_FUNCTION(execSetVariableObject); \
	DECLARE_FUNCTION(execSetNiagaraVariableObject); \
	DECLARE_FUNCTION(execSetVariableActor); \
	DECLARE_FUNCTION(execSetNiagaraVariableActor); \
	DECLARE_FUNCTION(execSetVariableBool); \
	DECLARE_FUNCTION(execSetNiagaraVariableBool); \
	DECLARE_FUNCTION(execSetVariableInt); \
	DECLARE_FUNCTION(execSetNiagaraVariableInt); \
	DECLARE_FUNCTION(execSetVariableFloat); \
	DECLARE_FUNCTION(execSetNiagaraVariableFloat); \
	DECLARE_FUNCTION(execSetVariableVec2); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec2); \
	DECLARE_FUNCTION(execSetVariableVec3); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec3); \
	DECLARE_FUNCTION(execSetVariableQuat); \
	DECLARE_FUNCTION(execSetNiagaraVariableQuat); \
	DECLARE_FUNCTION(execSetVariableVec4); \
	DECLARE_FUNCTION(execSetNiagaraVariableVec4); \
	DECLARE_FUNCTION(execSetVariableLinearColor); \
	DECLARE_FUNCTION(execSetNiagaraVariableLinearColor); \
	DECLARE_FUNCTION(execSetAutoDestroy); \
	DECLARE_FUNCTION(execSetMaxSimTime); \
	DECLARE_FUNCTION(execGetMaxSimTime); \
	DECLARE_FUNCTION(execSetSeekDelta); \
	DECLARE_FUNCTION(execGetSeekDelta); \
	DECLARE_FUNCTION(execSetCanRenderWhileSeeking); \
	DECLARE_FUNCTION(execSeekToDesiredAge); \
	DECLARE_FUNCTION(execSetDesiredAge); \
	DECLARE_FUNCTION(execGetDesiredAge); \
	DECLARE_FUNCTION(execSetAgeUpdateMode); \
	DECLARE_FUNCTION(execGetAgeUpdateMode); \
	DECLARE_FUNCTION(execGetForceSolo); \
	DECLARE_FUNCTION(execSetForceSolo); \
	DECLARE_FUNCTION(execGetAsset); \
	DECLARE_FUNCTION(execSetAsset);


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNiagaraComponent(); \
	friend struct Z_Construct_UClass_UNiagaraComponent_Statics; \
public: \
	DECLARE_CLASS(UNiagaraComponent, UFXSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraComponent)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_INCLASS \
private: \
	static void StaticRegisterNativesUNiagaraComponent(); \
	friend struct Z_Construct_UClass_UNiagaraComponent_Statics; \
public: \
	DECLARE_CLASS(UNiagaraComponent, UFXSystemComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Niagara"), NO_API) \
	DECLARE_SERIALIZER(UNiagaraComponent)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraComponent(UNiagaraComponent&&); \
	NO_API UNiagaraComponent(const UNiagaraComponent&); \
public:


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNiagaraComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNiagaraComponent(UNiagaraComponent&&); \
	NO_API UNiagaraComponent(const UNiagaraComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNiagaraComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNiagaraComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNiagaraComponent)


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Asset() { return STRUCT_OFFSET(UNiagaraComponent, Asset); } \
	FORCEINLINE static uint32 __PPO__TickBehavior() { return STRUCT_OFFSET(UNiagaraComponent, TickBehavior); } \
	FORCEINLINE static uint32 __PPO__OverrideParameters() { return STRUCT_OFFSET(UNiagaraComponent, OverrideParameters); }


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_37_PROLOG
#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_RPC_WRAPPERS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_INCLASS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_SPARSE_DATA \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h_41_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class NiagaraComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NIAGARA_API UClass* StaticClass<class UNiagaraComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
