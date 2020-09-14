// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_ChaosCollisionEventFilter_generated_h
#error "ChaosCollisionEventFilter.generated.h already included, missing '#pragma once' in ChaosCollisionEventFilter.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosCollisionEventFilter_generated_h

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosCollisionEventRequestSettings>();

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosCollisionEventData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosCollisionEventFilter_h


#define FOREACH_ENUM_ECHAOSCOLLISIONSORTMETHOD(op) \
	op(EChaosCollisionSortMethod::SortNone) \
	op(EChaosCollisionSortMethod::SortByHighestMass) \
	op(EChaosCollisionSortMethod::SortByHighestSpeed) \
	op(EChaosCollisionSortMethod::SortByHighestImpulse) \
	op(EChaosCollisionSortMethod::SortByNearestFirst) \
	op(EChaosCollisionSortMethod::Count) 

enum class EChaosCollisionSortMethod : uint8;
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosCollisionSortMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
