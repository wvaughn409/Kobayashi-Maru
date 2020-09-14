// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GEOMETRYCOLLECTIONENGINE_ChaosBreakingEventFilter_generated_h
#error "ChaosBreakingEventFilter.generated.h already included, missing '#pragma once' in ChaosBreakingEventFilter.h"
#endif
#define GEOMETRYCOLLECTIONENGINE_ChaosBreakingEventFilter_generated_h

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_54_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosBreakingEventRequestSettings>();

#define Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics; \
	GEOMETRYCOLLECTIONENGINE_API static class UScriptStruct* StaticStruct();


template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<struct FChaosBreakingEventData>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_ChaosBreakingEventFilter_h


#define FOREACH_ENUM_ECHAOSBREAKINGSORTMETHOD(op) \
	op(EChaosBreakingSortMethod::SortNone) \
	op(EChaosBreakingSortMethod::SortByHighestMass) \
	op(EChaosBreakingSortMethod::SortByHighestSpeed) \
	op(EChaosBreakingSortMethod::SortByNearestFirst) \
	op(EChaosBreakingSortMethod::Count) 

enum class EChaosBreakingSortMethod : uint8;
template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosBreakingSortMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
