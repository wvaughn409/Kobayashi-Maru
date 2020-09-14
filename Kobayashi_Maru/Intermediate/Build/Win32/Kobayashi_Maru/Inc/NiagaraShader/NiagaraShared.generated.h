// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARASHADER_NiagaraShared_generated_h
#error "NiagaraShared.generated.h already included, missing '#pragma once' in NiagaraShared.h"
#endif
#define NIAGARASHADER_NiagaraShared_generated_h

#define Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_148_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGPUParamInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraDataInterfaceGPUParamInfo>();

#define Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDataInterfaceGeneratedFunction_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraDataInterfaceGeneratedFunction>();

#define Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraCompileEvent_Statics; \
	NIAGARASHADER_API static class UScriptStruct* StaticStruct();


template<> NIAGARASHADER_API UScriptStruct* StaticStruct<struct FNiagaraCompileEvent>();

#define Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h_559_DELEGATE \
static inline void FOnNiagaraScriptCompilationComplete_DelegateWrapper(const FMulticastScriptDelegate& OnNiagaraScriptCompilationComplete) \
{ \
	OnNiagaraScriptCompilationComplete.ProcessMulticastDelegate<UObject>(NULL); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_NiagaraShader_Public_NiagaraShared_h


#define FOREACH_ENUM_FNIAGARACOMPILEEVENTSEVERITY(op) \
	op(FNiagaraCompileEventSeverity::Log) \
	op(FNiagaraCompileEventSeverity::Warning) \
	op(FNiagaraCompileEventSeverity::Error) 

enum class FNiagaraCompileEventSeverity : uint8;
template<> NIAGARASHADER_API UEnum* StaticEnum<FNiagaraCompileEventSeverity>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
