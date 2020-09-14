// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_GeometryCollectionEngineTypes_generated_h
#error "GeometryCollectionEngineTypes.generated.h already included, missing '#pragma once' in GeometryCollectionEngineTypes.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_GeometryCollectionEngineTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionEngineTypes_h


#define FOREACH_ENUM_ECOLLECTIONGROUPENUM(op) \
	op(ECollectionGroupEnum::Chaos_Traansform) \
	op(ECollectionGroupEnum::Chaos_Max) 

enum class ECollectionGroupEnum : uint8;
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<ECollectionGroupEnum>();

#define FOREACH_ENUM_ECOLLECTIONATTRIBUTEENUM(op) \
	op(ECollectionAttributeEnum::Chaos_Active) \
	op(ECollectionAttributeEnum::Chaos_DynamicState) \
	op(ECollectionAttributeEnum::Chaos_CollisionGroup) \
	op(ECollectionAttributeEnum::Chaos_Max) 

enum class ECollectionAttributeEnum : uint8;
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<ECollectionAttributeEnum>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
