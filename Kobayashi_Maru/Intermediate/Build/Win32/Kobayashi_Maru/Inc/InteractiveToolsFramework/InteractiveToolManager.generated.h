// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolManager_generated_h
#error "InteractiveToolManager.generated.h already included, missing '#pragma once' in InteractiveToolManager.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolManager_generated_h

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveToolManager(); \
	friend struct Z_Construct_UClass_UInteractiveToolManager_Statics; \
public: \
	DECLARE_CLASS(UInteractiveToolManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveToolManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveToolManager*>(this); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveToolManager(); \
	friend struct Z_Construct_UClass_UInteractiveToolManager_Statics; \
public: \
	DECLARE_CLASS(UInteractiveToolManager, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveToolManager) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveToolManager*>(this); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveToolManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveToolManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveToolManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveToolManager(UInteractiveToolManager&&); \
	NO_API UInteractiveToolManager(const UInteractiveToolManager&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveToolManager(UInteractiveToolManager&&); \
	NO_API UInteractiveToolManager(const UInteractiveToolManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveToolManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveToolManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveToolManager)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ToolBuilders() { return STRUCT_OFFSET(UInteractiveToolManager, ToolBuilders); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_60_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_INCLASS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h_63_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveToolManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolManager_h


#define FOREACH_ENUM_ETOOLCHANGETRACKINGMODE(op) \
	op(EToolChangeTrackingMode::NoChangeTracking) \
	op(EToolChangeTrackingMode::UndoToExit) \
	op(EToolChangeTrackingMode::FullUndoRedo) 

enum class EToolChangeTrackingMode;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolChangeTrackingMode>();

#define FOREACH_ENUM_ETOOLSIDE(op) \
	op(EToolSide::Left) \
	op(EToolSide::Mouse) \
	op(EToolSide::Right) 

enum class EToolSide;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
