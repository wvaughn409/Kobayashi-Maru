// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NIAGARA_NiagaraCollision_generated_h
#error "NiagaraCollision.generated.h already included, missing '#pragma once' in NiagaraCollision.h"
#endif
#define NIAGARA_NiagaraCollision_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraCollision_h


#define FOREACH_ENUM_ENIAGARACOLLISIONMODE(op) \
	op(ENiagaraCollisionMode::None) \
	op(ENiagaraCollisionMode::SceneGeometry) \
	op(ENiagaraCollisionMode::DepthBuffer) \
	op(ENiagaraCollisionMode::DistanceField) 

enum class ENiagaraCollisionMode : uint8;
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraCollisionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
