// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ACTORSEQUENCE_ActorSequenceObjectReference_generated_h
#error "ActorSequenceObjectReference.generated.h already included, missing '#pragma once' in ActorSequenceObjectReference.h"
#endif
#define ACTORSEQUENCE_ActorSequenceObjectReference_generated_h

#define Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap_Statics; \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__BindingIds() { return STRUCT_OFFSET(FActorSequenceObjectReferenceMap, BindingIds); } \
	FORCEINLINE static uint32 __PPO__References() { return STRUCT_OFFSET(FActorSequenceObjectReferenceMap, References); }


template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<struct FActorSequenceObjectReferenceMap>();

#define Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_96_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorSequenceObjectReferences_Statics; \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct();


template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<struct FActorSequenceObjectReferences>();

#define Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorSequenceObjectReference_Statics; \
	ACTORSEQUENCE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(FActorSequenceObjectReference, Type); } \
	FORCEINLINE static uint32 __PPO__ActorId() { return STRUCT_OFFSET(FActorSequenceObjectReference, ActorId); } \
	FORCEINLINE static uint32 __PPO__PathToComponent() { return STRUCT_OFFSET(FActorSequenceObjectReference, PathToComponent); }


template<> ACTORSEQUENCE_API UScriptStruct* StaticStruct<struct FActorSequenceObjectReference>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_MovieScene_ActorSequence_Source_ActorSequence_Public_ActorSequenceObjectReference_h


#define FOREACH_ENUM_EACTORSEQUENCEOBJECTREFERENCETYPE(op) \
	op(EActorSequenceObjectReferenceType::ContextActor) \
	op(EActorSequenceObjectReferenceType::ExternalActor) \
	op(EActorSequenceObjectReferenceType::Component) 

enum class EActorSequenceObjectReferenceType : uint8;
template<> ACTORSEQUENCE_API UEnum* StaticEnum<EActorSequenceObjectReferenceType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
