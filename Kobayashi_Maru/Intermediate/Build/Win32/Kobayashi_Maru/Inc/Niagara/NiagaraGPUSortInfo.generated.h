// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraGPUSortInfo_generated_h
#error "NiagaraGPUSortInfo.generated.h already included, missing '#pragma once' in NiagaraGPUSortInfo.h"
#endif
#define NIAGARA_NiagaraGPUSortInfo_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraGPUSortInfo_h


#define FOREACH_ENUM_ENIAGARASORTMODE(op) \
	op(ENiagaraSortMode::None) \
	op(ENiagaraSortMode::ViewDepth) \
	op(ENiagaraSortMode::ViewDistance) \
	op(ENiagaraSortMode::CustomAscending) \
	op(ENiagaraSortMode::CustomDecending) 

enum class ENiagaraSortMode : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSortMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
