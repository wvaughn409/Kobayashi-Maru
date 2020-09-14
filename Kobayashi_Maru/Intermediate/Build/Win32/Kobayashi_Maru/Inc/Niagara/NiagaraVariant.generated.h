// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraVariant_generated_h
#error "NiagaraVariant.generated.h already included, missing '#pragma once' in NiagaraVariant.h"
#endif
#define NIAGARA_NiagaraVariant_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraVariant_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Object() { return STRUCT_OFFSET(FNiagaraVariant, Object); } \
	FORCEINLINE static uint32 __PPO__DataInterface() { return STRUCT_OFFSET(FNiagaraVariant, DataInterface); } \
	FORCEINLINE static uint32 __PPO__Bytes() { return STRUCT_OFFSET(FNiagaraVariant, Bytes); } \
	FORCEINLINE static uint32 __PPO__CurrentMode() { return STRUCT_OFFSET(FNiagaraVariant, CurrentMode); }


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraVariant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraVariant_h


#define FOREACH_ENUM_ENIAGARAVARIANTMODE(op) \
	op(ENiagaraVariantMode::None) \
	op(ENiagaraVariantMode::Object) \
	op(ENiagaraVariantMode::DataInterface) \
	op(ENiagaraVariantMode::Bytes) 

enum class ENiagaraVariantMode;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraVariantMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
