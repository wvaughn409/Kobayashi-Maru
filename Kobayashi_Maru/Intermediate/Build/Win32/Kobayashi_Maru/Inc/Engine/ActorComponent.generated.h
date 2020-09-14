// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UActorComponent;
class AActor;
class UObject;
#ifdef ENGINE_ActorComponent_generated_h
#error "ActorComponent.generated.h already included, missing '#pragma once' in ActorComponent.h"
#endif
#define ENGINE_ActorComponent_generated_h

#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_99_DELEGATE \
struct _Script_Engine_eventActorComponentDeactivateSignature_Parms \
{ \
	UActorComponent* Component; \
}; \
static inline void FActorComponentDeactivateSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentDeactivateSignature, UActorComponent* Component) \
{ \
	_Script_Engine_eventActorComponentDeactivateSignature_Parms Parms; \
	Parms.Component=Component; \
	ActorComponentDeactivateSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_98_DELEGATE \
struct _Script_Engine_eventActorComponentActivatedSignature_Parms \
{ \
	UActorComponent* Component; \
	bool bReset; \
}; \
static inline void FActorComponentActivatedSignature_DelegateWrapper(const FMulticastScriptDelegate& ActorComponentActivatedSignature, UActorComponent* Component, bool bReset) \
{ \
	_Script_Engine_eventActorComponentActivatedSignature_Parms Parms; \
	Parms.Component=Component; \
	Parms.bReset=bReset ? true : false; \
	ActorComponentActivatedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor); \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor); \
	DECLARE_FUNCTION(execSetTickGroup); \
	DECLARE_FUNCTION(execK2_DestroyComponent); \
	DECLARE_FUNCTION(execGetComponentTickInterval); \
	DECLARE_FUNCTION(execSetComponentTickInterval); \
	DECLARE_FUNCTION(execIsComponentTickEnabled); \
	DECLARE_FUNCTION(execSetComponentTickEnabled); \
	DECLARE_FUNCTION(execSetIsReplicated); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execSetAutoActivate); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execComponentHasTag); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execIsBeingDestroyed);


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execRemoveTickPrerequisiteActor); \
	DECLARE_FUNCTION(execAddTickPrerequisiteComponent); \
	DECLARE_FUNCTION(execAddTickPrerequisiteActor); \
	DECLARE_FUNCTION(execSetTickGroup); \
	DECLARE_FUNCTION(execK2_DestroyComponent); \
	DECLARE_FUNCTION(execGetComponentTickInterval); \
	DECLARE_FUNCTION(execSetComponentTickInterval); \
	DECLARE_FUNCTION(execIsComponentTickEnabled); \
	DECLARE_FUNCTION(execSetComponentTickEnabled); \
	DECLARE_FUNCTION(execSetIsReplicated); \
	DECLARE_FUNCTION(execSetTickableWhenPaused); \
	DECLARE_FUNCTION(execSetAutoActivate); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execToggleActive); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execDeactivate); \
	DECLARE_FUNCTION(execActivate); \
	DECLARE_FUNCTION(execComponentHasTag); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execOnRep_IsActive); \
	DECLARE_FUNCTION(execIsBeingDestroyed);


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_EVENT_PARMS \
	struct ActorComponent_eventReceiveEndPlay_Parms \
	{ \
		TEnumAsByte<EEndPlayReason::Type> EndPlayReason; \
	}; \
	struct ActorComponent_eventReceiveTick_Parms \
	{ \
		float DeltaSeconds; \
	};


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UActorComponent, NO_API)


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorComponent(); \
	friend struct Z_Construct_UClass_UActorComponent_Statics; \
public: \
	DECLARE_CLASS(UActorComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicates=NETFIELD_REP_START, \
		bIsActive, \
		NETFIELD_REP_END=bIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UActorComponent) \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_INCLASS \
private: \
	static void StaticRegisterNativesUActorComponent(); \
	friend struct Z_Construct_UClass_UActorComponent_Statics; \
public: \
	DECLARE_CLASS(UActorComponent, UObject, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UActorComponent) \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_ARCHIVESERIALIZER \
	static const TCHAR* StaticConfigName() {return TEXT("Engine");} \
 \
	virtual UObject* _getUObject() const override { return const_cast<UActorComponent*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		bReplicates=NETFIELD_REP_START, \
		bIsActive, \
		NETFIELD_REP_END=bIsActive	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UActorComponent) \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponent(UActorComponent&&); \
	NO_API UActorComponent(const UActorComponent&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorComponent(UActorComponent&&); \
	NO_API UActorComponent(const UActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorComponent)


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(UActorComponent, AssetUserData); } \
	FORCEINLINE static uint32 __PPO__UCSSerializationIndex() { return STRUCT_OFFSET(UActorComponent, UCSSerializationIndex); } \
	FORCEINLINE static uint32 __PPO__UCSModifiedProperties() { return STRUCT_OFFSET(UActorComponent, UCSModifiedProperties); }


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_112_PROLOG \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h_115_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Components_ActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
