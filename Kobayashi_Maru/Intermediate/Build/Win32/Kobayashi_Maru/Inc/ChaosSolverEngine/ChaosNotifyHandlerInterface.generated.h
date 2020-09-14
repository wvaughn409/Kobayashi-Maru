// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FChaosPhysicsCollisionInfo;
struct FHitResult;
#ifdef CHAOSSOLVERENGINE_ChaosNotifyHandlerInterface_generated_h
#error "ChaosNotifyHandlerInterface.generated.h already included, missing '#pragma once' in ChaosNotifyHandlerInterface.h"
#endif
#define CHAOSSOLVERENGINE_ChaosNotifyHandlerInterface_generated_h

#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FChaosPhysicsCollisionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> CHAOSSOLVERENGINE_API UScriptStruct* StaticStruct<struct FChaosPhysicsCollisionInfo>();

#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_51_DELEGATE \
struct _Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms \
{ \
	FChaosPhysicsCollisionInfo CollisionInfo; \
}; \
static inline void FOnChaosPhysicsCollision_DelegateWrapper(const FMulticastScriptDelegate& OnChaosPhysicsCollision, FChaosPhysicsCollisionInfo const& CollisionInfo) \
{ \
	_Script_ChaosSolverEngine_eventOnChaosPhysicsCollision_Parms Parms; \
	Parms.CollisionInfo=CollisionInfo; \
	OnChaosPhysicsCollision.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosNotifyHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosNotifyHandlerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosNotifyHandlerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosNotifyHandlerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosNotifyHandlerInterface(UChaosNotifyHandlerInterface&&); \
	NO_API UChaosNotifyHandlerInterface(const UChaosNotifyHandlerInterface&); \
public:


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosNotifyHandlerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosNotifyHandlerInterface(UChaosNotifyHandlerInterface&&); \
	NO_API UChaosNotifyHandlerInterface(const UChaosNotifyHandlerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosNotifyHandlerInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosNotifyHandlerInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosNotifyHandlerInterface)


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUChaosNotifyHandlerInterface(); \
	friend struct Z_Construct_UClass_UChaosNotifyHandlerInterface_Statics; \
public: \
	DECLARE_CLASS(UChaosNotifyHandlerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosNotifyHandlerInterface)


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IChaosNotifyHandlerInterface() {} \
public: \
	typedef UChaosNotifyHandlerInterface UClassType; \
	typedef IChaosNotifyHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_INCLASS_IINTERFACE \
protected: \
	virtual ~IChaosNotifyHandlerInterface() {} \
public: \
	typedef UChaosNotifyHandlerInterface UClassType; \
	typedef IChaosNotifyHandlerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_54_PROLOG
#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_57_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVERENGINE_API UClass* StaticClass<class UChaosNotifyHandlerInterface>();

#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConvertPhysicsCollisionToHitResult);


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConvertPhysicsCollisionToHitResult);


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChaosSolverEngineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaosSolverEngineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosSolverEngineBlueprintLibrary)


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUChaosSolverEngineBlueprintLibrary(); \
	friend struct Z_Construct_UClass_UChaosSolverEngineBlueprintLibrary_Statics; \
public: \
	DECLARE_CLASS(UChaosSolverEngineBlueprintLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ChaosSolverEngine"), NO_API) \
	DECLARE_SERIALIZER(UChaosSolverEngineBlueprintLibrary)


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosSolverEngineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolverEngineBlueprintLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosSolverEngineBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverEngineBlueprintLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosSolverEngineBlueprintLibrary(UChaosSolverEngineBlueprintLibrary&&); \
	NO_API UChaosSolverEngineBlueprintLibrary(const UChaosSolverEngineBlueprintLibrary&); \
public:


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChaosSolverEngineBlueprintLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChaosSolverEngineBlueprintLibrary(UChaosSolverEngineBlueprintLibrary&&); \
	NO_API UChaosSolverEngineBlueprintLibrary(const UChaosSolverEngineBlueprintLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChaosSolverEngineBlueprintLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChaosSolverEngineBlueprintLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChaosSolverEngineBlueprintLibrary)


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_81_PROLOG
#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_INCLASS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHAOSSOLVERENGINE_API UClass* StaticClass<class UChaosSolverEngineBlueprintLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_ChaosSolverEngine_Public_Chaos_ChaosNotifyHandlerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
