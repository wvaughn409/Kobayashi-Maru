// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLinearColor;
struct FVector;
class UCurveLinearColor;
class UCurveVector;
class UCurveFloat;
#ifdef ENGINE_TimelineComponent_generated_h
#error "TimelineComponent.generated.h already included, missing '#pragma once' in TimelineComponent.h"
#endif
#define ENGINE_TimelineComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_188_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimeline_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__LengthMode() { return STRUCT_OFFSET(FTimeline, LengthMode); } \
	FORCEINLINE static uint32 __PPO__Length() { return STRUCT_OFFSET(FTimeline, Length); } \
	FORCEINLINE static uint32 __PPO__PlayRate() { return STRUCT_OFFSET(FTimeline, PlayRate); } \
	FORCEINLINE static uint32 __PPO__Position() { return STRUCT_OFFSET(FTimeline, Position); } \
	FORCEINLINE static uint32 __PPO__Events() { return STRUCT_OFFSET(FTimeline, Events); } \
	FORCEINLINE static uint32 __PPO__InterpVectors() { return STRUCT_OFFSET(FTimeline, InterpVectors); } \
	FORCEINLINE static uint32 __PPO__InterpFloats() { return STRUCT_OFFSET(FTimeline, InterpFloats); } \
	FORCEINLINE static uint32 __PPO__InterpLinearColors() { return STRUCT_OFFSET(FTimeline, InterpLinearColors); } \
	FORCEINLINE static uint32 __PPO__TimelinePostUpdateFunc() { return STRUCT_OFFSET(FTimeline, TimelinePostUpdateFunc); } \
	FORCEINLINE static uint32 __PPO__TimelineFinishedFunc() { return STRUCT_OFFSET(FTimeline, TimelineFinishedFunc); } \
	FORCEINLINE static uint32 __PPO__PropertySetObject() { return STRUCT_OFFSET(FTimeline, PropertySetObject); } \
	FORCEINLINE static uint32 __PPO__DirectionPropertyName() { return STRUCT_OFFSET(FTimeline, DirectionPropertyName); }


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimeline>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_152_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineLinearColorTrack>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineFloatTrack>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineVectorTrack>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTimelineEventEntry_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FTimelineEventEntry>();

#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_21_DELEGATE \
struct _Script_Engine_eventOnTimelineLinearColor_Parms \
{ \
	FLinearColor Output; \
}; \
static inline void FOnTimelineLinearColor_DelegateWrapper(const FScriptDelegate& OnTimelineLinearColor, FLinearColor Output) \
{ \
	_Script_Engine_eventOnTimelineLinearColor_Parms Parms; \
	Parms.Output=Output; \
	OnTimelineLinearColor.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_19_DELEGATE \
struct _Script_Engine_eventOnTimelineVector_Parms \
{ \
	FVector Output; \
}; \
static inline void FOnTimelineVector_DelegateWrapper(const FScriptDelegate& OnTimelineVector, FVector Output) \
{ \
	_Script_Engine_eventOnTimelineVector_Parms Parms; \
	Parms.Output=Output; \
	OnTimelineVector.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_17_DELEGATE \
struct _Script_Engine_eventOnTimelineFloat_Parms \
{ \
	float Output; \
}; \
static inline void FOnTimelineFloat_DelegateWrapper(const FScriptDelegate& OnTimelineFloat, float Output) \
{ \
	_Script_Engine_eventOnTimelineFloat_Parms Parms; \
	Parms.Output=Output; \
	OnTimelineFloat.ProcessDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_15_DELEGATE \
static inline void FOnTimelineEvent_DelegateWrapper(const FScriptDelegate& OnTimelineEvent) \
{ \
	OnTimelineEvent.ProcessDelegate<UObject>(NULL); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_Timeline); \
	DECLARE_FUNCTION(execSetLinearColorCurve); \
	DECLARE_FUNCTION(execSetVectorCurve); \
	DECLARE_FUNCTION(execSetFloatCurve); \
	DECLARE_FUNCTION(execGetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetTimelineLengthMode); \
	DECLARE_FUNCTION(execSetTimelineLength); \
	DECLARE_FUNCTION(execGetTimelineLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_Timeline); \
	DECLARE_FUNCTION(execSetLinearColorCurve); \
	DECLARE_FUNCTION(execSetVectorCurve); \
	DECLARE_FUNCTION(execSetFloatCurve); \
	DECLARE_FUNCTION(execGetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetIgnoreTimeDilation); \
	DECLARE_FUNCTION(execSetTimelineLengthMode); \
	DECLARE_FUNCTION(execSetTimelineLength); \
	DECLARE_FUNCTION(execGetTimelineLength); \
	DECLARE_FUNCTION(execSetNewTime); \
	DECLARE_FUNCTION(execGetPlayRate); \
	DECLARE_FUNCTION(execSetPlayRate); \
	DECLARE_FUNCTION(execIsLooping); \
	DECLARE_FUNCTION(execSetLooping); \
	DECLARE_FUNCTION(execGetPlaybackPosition); \
	DECLARE_FUNCTION(execSetPlaybackPosition); \
	DECLARE_FUNCTION(execIsReversing); \
	DECLARE_FUNCTION(execIsPlaying); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execReverseFromEnd); \
	DECLARE_FUNCTION(execReverse); \
	DECLARE_FUNCTION(execPlayFromStart); \
	DECLARE_FUNCTION(execPlay);


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimelineComponent(); \
	friend struct Z_Construct_UClass_UTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(UTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TheTimeline=NETFIELD_REP_START, \
		NETFIELD_REP_END=TheTimeline	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_INCLASS \
private: \
	static void StaticRegisterNativesUTimelineComponent(); \
	friend struct Z_Construct_UClass_UTimelineComponent_Statics; \
public: \
	DECLARE_CLASS(UTimelineComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UTimelineComponent) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TheTimeline=NETFIELD_REP_START, \
		NETFIELD_REP_END=TheTimeline	}; \
	ENGINE_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineComponent(UTimelineComponent&&); \
	ENGINE_API UTimelineComponent(const UTimelineComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UTimelineComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UTimelineComponent(UTimelineComponent&&); \
	ENGINE_API UTimelineComponent(const UTimelineComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UTimelineComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimelineComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimelineComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TheTimeline() { return STRUCT_OFFSET(UTimelineComponent, TheTimeline); }


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_386_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_389_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TimelineComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UTimelineComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h


#define FOREACH_ENUM_ETIMELINEDIRECTION(op) \
	op(ETimelineDirection::Forward) \
	op(ETimelineDirection::Backward) 
#define FOREACH_ENUM_ETIMELINELENGTHMODE(op) \
	op(TL_TimelineLength) \
	op(TL_LastKeyFrame) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
