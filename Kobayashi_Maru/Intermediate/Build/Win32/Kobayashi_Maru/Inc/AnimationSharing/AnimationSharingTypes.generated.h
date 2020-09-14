// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEnum;
class AActor;
#ifdef ANIMATIONSHARING_AnimationSharingTypes_generated_h
#error "AnimationSharingTypes.generated.h already included, missing '#pragma once' in AnimationSharingTypes.h"
#endif
#define ANIMATIONSHARING_AnimationSharingTypes_generated_h

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_161_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationSharingScalability_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FAnimationSharingScalability>();

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_129_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FPerSkeletonAnimationSharingSetup>();

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationStateEntry_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FAnimationStateEntry>();

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_19_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimationSetup_Statics; \
	ANIMATIONSHARING_API static class UScriptStruct* StaticStruct();


template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<struct FAnimationSetup>();

#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_SPARSE_DATA
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS \
	virtual UEnum* GetAnimationStateEnum_Implementation(); \
	virtual void ProcessActorState_Implementation(int32& OutState, AActor* InActor, uint8 CurrentState, uint8 OnDemandState, bool& bShouldProcess); \
 \
	DECLARE_FUNCTION(execGetAnimationStateEnum); \
	DECLARE_FUNCTION(execProcessActorState);


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAnimationStateEnum); \
	DECLARE_FUNCTION(execProcessActorState);


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_EVENT_PARMS \
	struct AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms \
	{ \
		UEnum* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AnimationSharingStateProcessor_eventGetAnimationStateEnum_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct AnimationSharingStateProcessor_eventProcessActorState_Parms \
	{ \
		int32 OutState; \
		AActor* InActor; \
		uint8 CurrentState; \
		uint8 OnDemandState; \
		bool bShouldProcess; \
	};


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_CALLBACK_WRAPPERS
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAnimationSharingStateProcessor(); \
	friend struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingStateProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingStateProcessor)


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS \
private: \
	static void StaticRegisterNativesUAnimationSharingStateProcessor(); \
	friend struct Z_Construct_UClass_UAnimationSharingStateProcessor_Statics; \
public: \
	DECLARE_CLASS(UAnimationSharingStateProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AnimationSharing"), NO_API) \
	DECLARE_SERIALIZER(UAnimationSharingStateProcessor)


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingStateProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingStateProcessor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingStateProcessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingStateProcessor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingStateProcessor(UAnimationSharingStateProcessor&&); \
	NO_API UAnimationSharingStateProcessor(const UAnimationSharingStateProcessor&); \
public:


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimationSharingStateProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimationSharingStateProcessor(UAnimationSharingStateProcessor&&); \
	NO_API UAnimationSharingStateProcessor(const UAnimationSharingStateProcessor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimationSharingStateProcessor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimationSharingStateProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimationSharingStateProcessor)


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_PRIVATE_PROPERTY_OFFSET
#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_92_PROLOG \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_EVENT_PARMS


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_SPARSE_DATA \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_CALLBACK_WRAPPERS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_SPARSE_DATA \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_CALLBACK_WRAPPERS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h_95_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONSHARING_API UClass* StaticClass<class UAnimationSharingStateProcessor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Developer_AnimationSharing_Source_AnimationSharing_Public_AnimationSharingTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
