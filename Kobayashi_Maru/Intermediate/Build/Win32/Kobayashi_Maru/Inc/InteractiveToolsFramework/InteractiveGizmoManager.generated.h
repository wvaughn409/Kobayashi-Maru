// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoManager_generated_h
#error "InteractiveGizmoManager.generated.h already included, missing '#pragma once' in InteractiveGizmoManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveGizmoManager_generated_h

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActiveGizmo_Statics; \
	INTERACTIVETOOLSFRAMEWORK_API static class UScriptStruct* StaticStruct();


template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<struct FActiveGizmo>();

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveGizmoManager(); \
	friend struct Z_Construct_UClass_UInteractiveGizmoManager_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmoManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveGizmoManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmoManager*>(this); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveGizmoManager(); \
	friend struct Z_Construct_UClass_UInteractiveGizmoManager_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmoManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveGizmoManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmoManager*>(this); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveGizmoManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveGizmoManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveGizmoManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmoManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveGizmoManager(UInteractiveGizmoManager&&); \
	NO_API UInteractiveGizmoManager(const UInteractiveGizmoManager&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveGizmoManager(UInteractiveGizmoManager&&); \
	NO_API UInteractiveGizmoManager(const UInteractiveGizmoManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveGizmoManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmoManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveGizmoManager)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActiveGizmos() { return STRUCT_OFFSET(UInteractiveGizmoManager, ActiveGizmos); } \
	FORCEINLINE static uint32 __PPO__GizmoBuilders() { return STRUCT_OFFSET(UInteractiveGizmoManager, GizmoBuilders); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_35_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_INCLASS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveGizmoManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmoManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
