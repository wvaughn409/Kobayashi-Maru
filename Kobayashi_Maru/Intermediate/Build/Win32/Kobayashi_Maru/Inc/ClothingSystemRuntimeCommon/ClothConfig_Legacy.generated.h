// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLOTHINGSYSTEMRUNTIMECOMMON_ClothConfig_Legacy_generated_h
#error "ClothConfig_Legacy.generated.h already included, missing '#pragma once' in ClothConfig_Legacy.h"
#endif
#define CLOTHINGSYSTEMRUNTIMECOMMON_ClothConfig_Legacy_generated_h

#define Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_68_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothConfig_Legacy_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<struct FClothConfig_Legacy>();

#define Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClothConstraintSetup_Legacy_Statics; \
	CLOTHINGSYSTEMRUNTIMECOMMON_API static class UScriptStruct* StaticStruct();


template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UScriptStruct* StaticStruct<struct FClothConstraintSetup_Legacy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_ClothingSystemRuntimeCommon_Public_ClothConfig_Legacy_h


#define FOREACH_ENUM_ECLOTHINGWINDMETHOD_LEGACY(op) \
	op(EClothingWindMethod_Legacy::Legacy) \
	op(EClothingWindMethod_Legacy::Accurate) 

enum class EClothingWindMethod_Legacy : uint8;
template<> CLOTHINGSYSTEMRUNTIMECOMMON_API UEnum* StaticEnum<EClothingWindMethod_Legacy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
