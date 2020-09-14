// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InputBehavior_generated_h
#error "InputBehavior.generated.h already included, missing '#pragma once' in InputBehavior.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InputBehavior_generated_h

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInputBehavior(); \
	friend struct Z_Construct_UClass_UInputBehavior_Statics; \
public: \
	DECLARE_CLASS(UInputBehavior, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInputBehavior)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_INCLASS \
private: \
	static void StaticRegisterNativesUInputBehavior(); \
	friend struct Z_Construct_UClass_UInputBehavior_Statics; \
public: \
	DECLARE_CLASS(UInputBehavior, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UInputBehavior)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInputBehavior(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInputBehavior) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBehavior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehavior); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBehavior(UInputBehavior&&); \
	NO_API UInputBehavior(const UInputBehavior&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInputBehavior(UInputBehavior&&); \
	NO_API UInputBehavior(const UInputBehavior&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInputBehavior); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInputBehavior); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInputBehavior)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_250_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_INCLASS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h_253_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UInputBehavior>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InputBehavior_h


#define FOREACH_ENUM_EINPUTCAPTURESTATE(op) \
	op(EInputCaptureState::Begin) \
	op(EInputCaptureState::Continue) \
	op(EInputCaptureState::End) \
	op(EInputCaptureState::Ignore) 

enum class EInputCaptureState;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureState>();

#define FOREACH_ENUM_EINPUTCAPTUREREQUESTTYPE(op) \
	op(EInputCaptureRequestType::Begin) \
	op(EInputCaptureRequestType::Ignore) 

enum class EInputCaptureRequestType;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureRequestType>();

#define FOREACH_ENUM_EINPUTCAPTURESIDE(op) \
	op(EInputCaptureSide::None) \
	op(EInputCaptureSide::Left) \
	op(EInputCaptureSide::Right) \
	op(EInputCaptureSide::Both) \
	op(EInputCaptureSide::Any) 

enum class EInputCaptureSide;
template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EInputCaptureSide>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
