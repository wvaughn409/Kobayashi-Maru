// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveGizmo_generated_h
#error "InteractiveGizmo.generated.h already included, missing '#pragma once' in InteractiveGizmo.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveGizmo_generated_h

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractiveGizmo(); \
	friend struct Z_Construct_UClass_UInteractiveGizmo_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveGizmo) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmo*>(this); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUInteractiveGizmo(); \
	friend struct Z_Construct_UClass_UInteractiveGizmo_Statics; \
public: \
	DECLARE_CLASS(UInteractiveGizmo, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInteractiveGizmo) \
	virtual UObject* _getUObject() const override { return const_cast<UInteractiveGizmo*>(this); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractiveGizmo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractiveGizmo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveGizmo(UInteractiveGizmo&&); \
	NO_API UInteractiveGizmo(const UInteractiveGizmo&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractiveGizmo(UInteractiveGizmo&&); \
	NO_API UInteractiveGizmo(const UInteractiveGizmo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractiveGizmo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractiveGizmo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractiveGizmo)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputBehaviors() { return STRUCT_OFFSET(UInteractiveGizmo, InputBehaviors); }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_20_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_INCLASS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInteractiveGizmo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveGizmo_h


#define FOREACH_ENUM_ETRANSFORMGIZMOSUBELEMENTS(op) \
	op(ETransformGizmoSubElements::None) \
	op(ETransformGizmoSubElements::TranslateAxisX) \
	op(ETransformGizmoSubElements::TranslateAxisY) \
	op(ETransformGizmoSubElements::TranslateAxisZ) \
	op(ETransformGizmoSubElements::TranslateAllAxes) \
	op(ETransformGizmoSubElements::TranslatePlaneXY) \
	op(ETransformGizmoSubElements::TranslatePlaneXZ) \
	op(ETransformGizmoSubElements::TranslatePlaneYZ) \
	op(ETransformGizmoSubElements::TranslateAllPlanes) \
	op(ETransformGizmoSubElements::RotateAxisX) \
	op(ETransformGizmoSubElements::RotateAxisY) \
	op(ETransformGizmoSubElements::RotateAxisZ) \
	op(ETransformGizmoSubElements::RotateAllAxes) \
	op(ETransformGizmoSubElements::ScaleAxisX) \
	op(ETransformGizmoSubElements::ScaleAxisY) \
	op(ETransformGizmoSubElements::ScaleAxisZ) \
	op(ETransformGizmoSubElements::ScaleAllAxes) \
	op(ETransformGizmoSubElements::ScalePlaneYZ) \
	op(ETransformGizmoSubElements::ScalePlaneXZ) \
	op(ETransformGizmoSubElements::ScalePlaneXY) \
	op(ETransformGizmoSubElements::ScaleAllPlanes) \
	op(ETransformGizmoSubElements::ScaleUniform) \
	op(ETransformGizmoSubElements::StandardTranslateRotate) \
	op(ETransformGizmoSubElements::TranslateRotateUniformScale) \
	op(ETransformGizmoSubElements::FullTranslateRotateScale) 

enum class ETransformGizmoSubElements;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<ETransformGizmoSubElements>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
