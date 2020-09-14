// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ANavigationData;
class UObject;
struct FVector;
class UNavigationQueryFilter;
class AController;
class AActor;
class ANavMeshBoundsVolume;
class UNavArea;
enum class ENavDataGatheringModeConfig : uint8;
class UNavigationPath;
class UNavigationSystemV1;
#ifdef NAVIGATIONSYSTEM_NavigationSystem_generated_h
#error "NavigationSystem.generated.h already included, missing '#pragma once' in NavigationSystem.h"
#endif
#define NAVIGATIONSYSTEM_NavigationSystem_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_45_DELEGATE \
struct _Script_NavigationSystem_eventOnNavDataGenericEvent_Parms \
{ \
	ANavigationData* NavData; \
}; \
static inline void FOnNavDataGenericEvent_DelegateWrapper(const FMulticastScriptDelegate& OnNavDataGenericEvent, ANavigationData* NavData) \
{ \
	_Script_NavigationSystem_eventOnNavDataGenericEvent_Parms Parms; \
	Parms.NavData=NavData; \
	OnNavDataGenericEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_SPARSE_DATA
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius); \
	DECLARE_FUNCTION(execSimpleMoveToLocation); \
	DECLARE_FUNCTION(execSimpleMoveToActor); \
	DECLARE_FUNCTION(execGetRandomPointInNavigableRadius); \
	DECLARE_FUNCTION(execGetRandomReachablePointInRadius); \
	DECLARE_FUNCTION(execProjectPointToNavigation); \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated); \
	DECLARE_FUNCTION(execK2_ReplaceAreaInOctreeData); \
	DECLARE_FUNCTION(execSetGeometryGatheringMode); \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker); \
	DECLARE_FUNCTION(execRegisterNavigationInvoker); \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execNavigationRaycast); \
	DECLARE_FUNCTION(execFindPathToActorSynchronously); \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously); \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked); \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execK2_GetRandomLocationInNavigableRadius); \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius); \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation); \
	DECLARE_FUNCTION(execGetNavigationSystem);


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execK2_GetRandomPointInNavigableRadius); \
	DECLARE_FUNCTION(execSimpleMoveToLocation); \
	DECLARE_FUNCTION(execSimpleMoveToActor); \
	DECLARE_FUNCTION(execGetRandomPointInNavigableRadius); \
	DECLARE_FUNCTION(execGetRandomReachablePointInRadius); \
	DECLARE_FUNCTION(execProjectPointToNavigation); \
	DECLARE_FUNCTION(execOnNavigationBoundsUpdated); \
	DECLARE_FUNCTION(execK2_ReplaceAreaInOctreeData); \
	DECLARE_FUNCTION(execSetGeometryGatheringMode); \
	DECLARE_FUNCTION(execUnregisterNavigationInvoker); \
	DECLARE_FUNCTION(execRegisterNavigationInvoker); \
	DECLARE_FUNCTION(execResetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execSetMaxSimultaneousTileGenerationJobsCount); \
	DECLARE_FUNCTION(execNavigationRaycast); \
	DECLARE_FUNCTION(execFindPathToActorSynchronously); \
	DECLARE_FUNCTION(execFindPathToLocationSynchronously); \
	DECLARE_FUNCTION(execIsNavigationBeingBuiltOrLocked); \
	DECLARE_FUNCTION(execIsNavigationBeingBuilt); \
	DECLARE_FUNCTION(execGetPathLength); \
	DECLARE_FUNCTION(execGetPathCost); \
	DECLARE_FUNCTION(execK2_GetRandomLocationInNavigableRadius); \
	DECLARE_FUNCTION(execK2_GetRandomReachablePointInRadius); \
	DECLARE_FUNCTION(execK2_ProjectPointToNavigation); \
	DECLARE_FUNCTION(execGetNavigationSystem);


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemV1(); \
	friend struct Z_Construct_UClass_UNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemV1, UNavigationSystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemV1) \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemV1(); \
	friend struct Z_Construct_UClass_UNavigationSystemV1_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemV1, UNavigationSystemBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemV1) \
	DECLARE_WITHIN(UWorld)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemV1(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemV1) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemV1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemV1); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemV1(UNavigationSystemV1&&); \
	NO_API UNavigationSystemV1(const UNavigationSystemV1&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemV1(UNavigationSystemV1&&); \
	NO_API UNavigationSystemV1(const UNavigationSystemV1&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemV1); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemV1); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemV1)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultAgentName() { return STRUCT_OFFSET(UNavigationSystemV1, DefaultAgentName); } \
	FORCEINLINE static uint32 __PPO__CrowdManagerClass() { return STRUCT_OFFSET(UNavigationSystemV1, CrowdManagerClass); } \
	FORCEINLINE static uint32 __PPO__DataGatheringMode() { return STRUCT_OFFSET(UNavigationSystemV1, DataGatheringMode); } \
	FORCEINLINE static uint32 __PPO__ActiveTilesUpdateInterval() { return STRUCT_OFFSET(UNavigationSystemV1, ActiveTilesUpdateInterval); } \
	FORCEINLINE static uint32 __PPO__SupportedAgents() { return STRUCT_OFFSET(UNavigationSystemV1, SupportedAgents); } \
	FORCEINLINE static uint32 __PPO__SupportedAgentsMask() { return STRUCT_OFFSET(UNavigationSystemV1, SupportedAgentsMask); } \
	FORCEINLINE static uint32 __PPO__OperationMode() { return STRUCT_OFFSET(UNavigationSystemV1, OperationMode); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_97_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_100_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemV1>();

#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_SPARSE_DATA
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNavigationSystemModuleConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemModuleConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemModuleConfig)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_INCLASS \
private: \
	static void StaticRegisterNativesUNavigationSystemModuleConfig(); \
	friend struct Z_Construct_UClass_UNavigationSystemModuleConfig_Statics; \
public: \
	DECLARE_CLASS(UNavigationSystemModuleConfig, UNavigationSystemConfig, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(UNavigationSystemModuleConfig)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNavigationSystemModuleConfig(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemModuleConfig) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemModuleConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemModuleConfig); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemModuleConfig(UNavigationSystemModuleConfig&&); \
	NO_API UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNavigationSystemModuleConfig(UNavigationSystemModuleConfig&&); \
	NO_API UNavigationSystemModuleConfig(const UNavigationSystemModuleConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNavigationSystemModuleConfig); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNavigationSystemModuleConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNavigationSystemModuleConfig)


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1082_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h_1085_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class UNavigationSystemModuleConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavigationSystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
