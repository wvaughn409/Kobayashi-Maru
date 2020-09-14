// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NAVIGATIONSYSTEM_NavSystemConfigOverride_generated_h
#error "NavSystemConfigOverride.generated.h already included, missing '#pragma once' in NavSystemConfigOverride.h"
#endif
#define NAVIGATIONSYSTEM_NavSystemConfigOverride_generated_h

#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_SPARSE_DATA
#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_RPC_WRAPPERS_NO_PURE_DECLS
#if WITH_EDITOR
#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_EDITOR_ONLY_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyChanges);


#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyChanges);


#else
#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_EDITOR_ONLY_RPC_WRAPPERS
#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS
#endif //WITH_EDITOR
#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANavSystemConfigOverride(); \
	friend struct Z_Construct_UClass_ANavSystemConfigOverride_Statics; \
public: \
	DECLARE_CLASS(ANavSystemConfigOverride, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavSystemConfigOverride)


#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_INCLASS \
private: \
	static void StaticRegisterNativesANavSystemConfigOverride(); \
	friend struct Z_Construct_UClass_ANavSystemConfigOverride_Statics; \
public: \
	DECLARE_CLASS(ANavSystemConfigOverride, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NavigationSystem"), NO_API) \
	DECLARE_SERIALIZER(ANavSystemConfigOverride)


#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANavSystemConfigOverride(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavSystemConfigOverride) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavSystemConfigOverride); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavSystemConfigOverride); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavSystemConfigOverride(ANavSystemConfigOverride&&); \
	NO_API ANavSystemConfigOverride(const ANavSystemConfigOverride&); \
public:


#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANavSystemConfigOverride(ANavSystemConfigOverride&&); \
	NO_API ANavSystemConfigOverride(const ANavSystemConfigOverride&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANavSystemConfigOverride); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANavSystemConfigOverride); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANavSystemConfigOverride)


#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__NavigationSystemConfig() { return STRUCT_OFFSET(ANavSystemConfigOverride, NavigationSystemConfig); } \
	FORCEINLINE static uint32 __PPO__OverridePolicy() { return STRUCT_OFFSET(ANavSystemConfigOverride, OverridePolicy); }


#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_23_PROLOG
#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_EDITOR_ONLY_RPC_WRAPPERS \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_INCLASS \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_SPARSE_DATA \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_EDITOR_ONLY_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NAVIGATIONSYSTEM_API UClass* StaticClass<class ANavSystemConfigOverride>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h


#define FOREACH_ENUM_ENAVSYSTEMOVERRIDEPOLICY(op) \
	op(ENavSystemOverridePolicy::Override) \
	op(ENavSystemOverridePolicy::Append) \
	op(ENavSystemOverridePolicy::Skip) 

enum class ENavSystemOverridePolicy : uint8;
template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavSystemOverridePolicy>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
