// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraPlatformSet_generated_h
#error "NiagaraPlatformSet.generated.h already included, missing '#pragma once' in NiagaraPlatformSet.h"
#endif
#define NIAGARA_NiagaraPlatformSet_generated_h

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_101_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSet_Statics; \
	static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSet>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_78_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictInfo_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSetConflictInfo>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_60_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraPlatformSetConflictEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraPlatformSetConflictEntry>();

#define Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNiagaraDeviceProfileStateEntry_Statics; \
	NIAGARA_API static class UScriptStruct* StaticStruct();


template<> NIAGARA_API UScriptStruct* StaticStruct<struct FNiagaraDeviceProfileStateEntry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraPlatformSet_h


#define FOREACH_ENUM_ENIAGARAPLATFORMSETSTATE(op) \
	op(ENiagaraPlatformSetState::Disabled) \
	op(ENiagaraPlatformSetState::Enabled) \
	op(ENiagaraPlatformSetState::Active) \
	op(ENiagaraPlatformSetState::Unknown) 

enum class ENiagaraPlatformSetState : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSetState>();

#define FOREACH_ENUM_ENIAGARAPLATFORMSELECTIONSTATE(op) \
	op(ENiagaraPlatformSelectionState::Default) \
	op(ENiagaraPlatformSelectionState::Enabled) \
	op(ENiagaraPlatformSelectionState::Disabled) 

enum class ENiagaraPlatformSelectionState : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraPlatformSelectionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
