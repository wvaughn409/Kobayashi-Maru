// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayResourceSet;
class IGameplayTaskOwnerInterface;
class UGameplayTask;
class UGameplayTaskResource;
enum class EGameplayTaskRunResult : uint8;
#ifdef GAMEPLAYTASKS_GameplayTasksComponent_generated_h
#error "GameplayTasksComponent.generated.h already included, missing '#pragma once' in GameplayTasksComponent.h"
#endif
#define GAMEPLAYTASKS_GameplayTasksComponent_generated_h

#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_54_DELEGATE \
struct _Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms \
{ \
	FGameplayResourceSet NewlyClaimed; \
	FGameplayResourceSet FreshlyReleased; \
}; \
static inline void FOnClaimedResourcesChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClaimedResourcesChangeSignature, FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased) \
{ \
	_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms Parms; \
	Parms.NewlyClaimed=NewlyClaimed; \
	Parms.FreshlyReleased=FreshlyReleased; \
	OnClaimedResourcesChangeSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_RunGameplayTask); \
	DECLARE_FUNCTION(execOnRep_SimulatedTasks);


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_RunGameplayTask); \
	DECLARE_FUNCTION(execOnRep_SimulatedTasks);


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayTasksComponent(); \
	friend struct Z_Construct_UClass_UGameplayTasksComponent_Statics; \
public: \
	DECLARE_CLASS(UGameplayTasksComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTasksComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTasksComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SimulatedTasks=NETFIELD_REP_START, \
		NETFIELD_REP_END=SimulatedTasks	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayTasksComponent(); \
	friend struct Z_Construct_UClass_UGameplayTasksComponent_Statics; \
public: \
	DECLARE_CLASS(UGameplayTasksComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameplayTasks"), NO_API) \
	DECLARE_SERIALIZER(UGameplayTasksComponent) \
	virtual UObject* _getUObject() const override { return const_cast<UGameplayTasksComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		SimulatedTasks=NETFIELD_REP_START, \
		NETFIELD_REP_END=SimulatedTasks	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayTasksComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTasksComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTasksComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTasksComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTasksComponent(UGameplayTasksComponent&&); \
	NO_API UGameplayTasksComponent(const UGameplayTasksComponent&); \
public:


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayTasksComponent(UGameplayTasksComponent&&); \
	NO_API UGameplayTasksComponent(const UGameplayTasksComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayTasksComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTasksComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTasksComponent)


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SimulatedTasks() { return STRUCT_OFFSET(UGameplayTasksComponent, SimulatedTasks); } \
	FORCEINLINE static uint32 __PPO__TaskPriorityQueue() { return STRUCT_OFFSET(UGameplayTasksComponent, TaskPriorityQueue); } \
	FORCEINLINE static uint32 __PPO__TickingTasks() { return STRUCT_OFFSET(UGameplayTasksComponent, TickingTasks); } \
	FORCEINLINE static uint32 __PPO__KnownTasks() { return STRUCT_OFFSET(UGameplayTasksComponent, KnownTasks); }


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_61_PROLOG
#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_INCLASS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTASKS_API UClass* StaticClass<class UGameplayTasksComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h


#define FOREACH_ENUM_EGAMEPLAYTASKRUNRESULT(op) \
	op(EGameplayTaskRunResult::Error) \
	op(EGameplayTaskRunResult::Failed) \
	op(EGameplayTaskRunResult::Success_Paused) \
	op(EGameplayTaskRunResult::Success_Active) \
	op(EGameplayTaskRunResult::Success_Finished) 

enum class EGameplayTaskRunResult : uint8;
template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskRunResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
