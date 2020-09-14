// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FNavAvoidanceMask;
#ifdef PHYSXVEHICLES_WheeledVehicleMovementComponent_generated_h
#error "WheeledVehicleMovementComponent.generated.h already included, missing '#pragma once' in WheeledVehicleMovementComponent.h"
#endif
#define PHYSXVEHICLES_WheeledVehicleMovementComponent_generated_h

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_147_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleInputRate_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<struct FVehicleInputRate>();

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_121_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedVehicleState_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<struct FReplicatedVehicleState>();

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWheelSetup_Statics; \
	static class UScriptStruct* StaticStruct();


template<> PHYSXVEHICLES_API UScriptStruct* StaticStruct<struct FWheelSetup>();

#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_SPARSE_DATA
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear); \
 \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execSetAvoidanceEnabled); \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execGetUseAutoGears); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execGetEngineMaxRotationSpeed); \
	DECLARE_FUNCTION(execGetEngineRotationSpeed); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execSetUseAutoGears); \
	DECLARE_FUNCTION(execSetTargetGear); \
	DECLARE_FUNCTION(execSetGearDown); \
	DECLARE_FUNCTION(execSetGearUp); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execSetThrottleInput);


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerUpdateState_Validate(float , float , float , float , int32 ); \
	virtual void ServerUpdateState_Implementation(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32 CurrentGear); \
 \
	DECLARE_FUNCTION(execServerUpdateState); \
	DECLARE_FUNCTION(execSetAvoidanceEnabled); \
	DECLARE_FUNCTION(execSetGroupsToIgnoreMask); \
	DECLARE_FUNCTION(execSetGroupsToIgnore); \
	DECLARE_FUNCTION(execSetGroupsToAvoidMask); \
	DECLARE_FUNCTION(execSetGroupsToAvoid); \
	DECLARE_FUNCTION(execSetAvoidanceGroupMask); \
	DECLARE_FUNCTION(execSetAvoidanceGroup); \
	DECLARE_FUNCTION(execGetUseAutoGears); \
	DECLARE_FUNCTION(execGetTargetGear); \
	DECLARE_FUNCTION(execGetCurrentGear); \
	DECLARE_FUNCTION(execGetEngineMaxRotationSpeed); \
	DECLARE_FUNCTION(execGetEngineRotationSpeed); \
	DECLARE_FUNCTION(execGetForwardSpeed); \
	DECLARE_FUNCTION(execSetUseAutoGears); \
	DECLARE_FUNCTION(execSetTargetGear); \
	DECLARE_FUNCTION(execSetGearDown); \
	DECLARE_FUNCTION(execSetGearUp); \
	DECLARE_FUNCTION(execSetHandbrakeInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetBrakeInput); \
	DECLARE_FUNCTION(execSetThrottleInput);


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_EVENT_PARMS \
	struct WheeledVehicleMovementComponent_eventServerUpdateState_Parms \
	{ \
		float InSteeringInput; \
		float InThrottleInput; \
		float InBrakeInput; \
		float InHandbrakeInput; \
		int32 CurrentGear; \
	};


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_CALLBACK_WRAPPERS
#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UWheeledVehicleMovementComponent, NO_API)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWheeledVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UWheeledVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(UWheeledVehicleMovementComponent) \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UWheeledVehicleMovementComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		OverrideController, \
		NETFIELD_REP_END=OverrideController	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS \
private: \
	static void StaticRegisterNativesUWheeledVehicleMovementComponent(); \
	friend struct Z_Construct_UClass_UWheeledVehicleMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UWheeledVehicleMovementComponent, UPawnMovementComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/PhysXVehicles"), NO_API) \
	DECLARE_SERIALIZER(UWheeledVehicleMovementComponent) \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UWheeledVehicleMovementComponent*>(this); } \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ReplicatedState=NETFIELD_REP_START, \
		OverrideController, \
		NETFIELD_REP_END=OverrideController	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWheeledVehicleMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWheeledVehicleMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWheeledVehicleMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWheeledVehicleMovementComponent(UWheeledVehicleMovementComponent&&); \
	NO_API UWheeledVehicleMovementComponent(const UWheeledVehicleMovementComponent&); \
public:


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWheeledVehicleMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWheeledVehicleMovementComponent(UWheeledVehicleMovementComponent&&); \
	NO_API UWheeledVehicleMovementComponent(const UWheeledVehicleMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWheeledVehicleMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWheeledVehicleMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWheeledVehicleMovementComponent)


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ReplicatedState() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, ReplicatedState); } \
	FORCEINLINE static uint32 __PPO__RawSteeringInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawSteeringInput); } \
	FORCEINLINE static uint32 __PPO__RawThrottleInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawThrottleInput); } \
	FORCEINLINE static uint32 __PPO__RawBrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, RawBrakeInput); } \
	FORCEINLINE static uint32 __PPO__SteeringInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, SteeringInput); } \
	FORCEINLINE static uint32 __PPO__ThrottleInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, ThrottleInput); } \
	FORCEINLINE static uint32 __PPO__BrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, BrakeInput); } \
	FORCEINLINE static uint32 __PPO__HandbrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, HandbrakeInput); } \
	FORCEINLINE static uint32 __PPO__IdleBrakeInput() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, IdleBrakeInput); } \
	FORCEINLINE static uint32 __PPO__StopThreshold() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, StopThreshold); } \
	FORCEINLINE static uint32 __PPO__WrongDirectionThreshold() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, WrongDirectionThreshold); } \
	FORCEINLINE static uint32 __PPO__ThrottleInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, ThrottleInputRate); } \
	FORCEINLINE static uint32 __PPO__BrakeInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, BrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__HandbrakeInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, HandbrakeInputRate); } \
	FORCEINLINE static uint32 __PPO__SteeringInputRate() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, SteeringInputRate); } \
	FORCEINLINE static uint32 __PPO__OverrideController() { return STRUCT_OFFSET(UWheeledVehicleMovementComponent, OverrideController); }


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_178_PROLOG \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_EVENT_PARMS


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_SPARSE_DATA \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_PRIVATE_PROPERTY_OFFSET \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_SPARSE_DATA \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_CALLBACK_WRAPPERS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_INCLASS_NO_PURE_DECLS \
	Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h_181_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WheeledVehicleMovementComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSXVEHICLES_API UClass* StaticClass<class UWheeledVehicleMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Plugins_Runtime_PhysXVehicles_Source_PhysXVehicles_Public_WheeledVehicleMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
