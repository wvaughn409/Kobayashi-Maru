// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTransform;
struct FVector;
struct FVector2D;
#ifdef INTERACTIVETOOLSFRAMEWORK_GizmoInterfaces_generated_h
#error "GizmoInterfaces.generated.h already included, missing '#pragma once' in GizmoInterfaces.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_GizmoInterfaces_generated_h

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTransform);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetTransform); \
	DECLARE_FUNCTION(execGetTransform);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoTransformSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoTransformSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoTransformSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoTransformSource(UGizmoTransformSource&&); \
	NO_API UGizmoTransformSource(const UGizmoTransformSource&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoTransformSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoTransformSource(UGizmoTransformSource&&); \
	NO_API UGizmoTransformSource(const UGizmoTransformSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoTransformSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoTransformSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoTransformSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoTransformSource(); \
	friend struct Z_Construct_UClass_UGizmoTransformSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoTransformSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoTransformSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoTransformSource() {} \
public: \
	typedef UGizmoTransformSource UClassType; \
	typedef IGizmoTransformSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoTransformSource() {} \
public: \
	typedef UGizmoTransformSource UClassType; \
	typedef IGizmoTransformSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_17_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_20_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoTransformSource>();

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTangentVectors); \
	DECLARE_FUNCTION(execHasTangentVectors); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetOrigin);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTangentVectors); \
	DECLARE_FUNCTION(execHasTangentVectors); \
	DECLARE_FUNCTION(execGetDirection); \
	DECLARE_FUNCTION(execGetOrigin);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoAxisSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoAxisSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoAxisSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoAxisSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoAxisSource(UGizmoAxisSource&&); \
	NO_API UGizmoAxisSource(const UGizmoAxisSource&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoAxisSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoAxisSource(UGizmoAxisSource&&); \
	NO_API UGizmoAxisSource(const UGizmoAxisSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoAxisSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoAxisSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoAxisSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoAxisSource(); \
	friend struct Z_Construct_UClass_UGizmoAxisSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoAxisSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoAxisSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoAxisSource() {} \
public: \
	typedef UGizmoAxisSource UClassType; \
	typedef IGizmoAxisSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoAxisSource() {} \
public: \
	typedef UGizmoAxisSource UClassType; \
	typedef IGizmoAxisSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_40_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_54_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_43_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoAxisSource>();

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHoverState);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHoverState);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoClickTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoClickTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoClickTarget(UGizmoClickTarget&&); \
	NO_API UGizmoClickTarget(const UGizmoClickTarget&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoClickTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoClickTarget(UGizmoClickTarget&&); \
	NO_API UGizmoClickTarget(const UGizmoClickTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoClickTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoClickTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoClickTarget)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoClickTarget(); \
	friend struct Z_Construct_UClass_UGizmoClickTarget_Statics; \
public: \
	DECLARE_CLASS(UGizmoClickTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoClickTarget)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoClickTarget() {} \
public: \
	typedef UGizmoClickTarget UClassType; \
	typedef IGizmoClickTarget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoClickTarget() {} \
public: \
	typedef UGizmoClickTarget UClassType; \
	typedef IGizmoClickTarget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_88_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_98_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_98_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_91_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoClickTarget>();

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndUpdate); \
	DECLARE_FUNCTION(execBeginUpdate);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndUpdate); \
	DECLARE_FUNCTION(execBeginUpdate);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoStateTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoStateTarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoStateTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoStateTarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoStateTarget(UGizmoStateTarget&&); \
	NO_API UGizmoStateTarget(const UGizmoStateTarget&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoStateTarget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoStateTarget(UGizmoStateTarget&&); \
	NO_API UGizmoStateTarget(const UGizmoStateTarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoStateTarget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoStateTarget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoStateTarget)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoStateTarget(); \
	friend struct Z_Construct_UClass_UGizmoStateTarget_Statics; \
public: \
	DECLARE_CLASS(UGizmoStateTarget, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoStateTarget)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoStateTarget() {} \
public: \
	typedef UGizmoStateTarget UClassType; \
	typedef IGizmoStateTarget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoStateTarget() {} \
public: \
	typedef UGizmoStateTarget UClassType; \
	typedef IGizmoStateTarget ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_113_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_116_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoStateTarget>();

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoFloatParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoFloatParameterSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoFloatParameterSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoFloatParameterSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoFloatParameterSource(UGizmoFloatParameterSource&&); \
	NO_API UGizmoFloatParameterSource(const UGizmoFloatParameterSource&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoFloatParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoFloatParameterSource(UGizmoFloatParameterSource&&); \
	NO_API UGizmoFloatParameterSource(const UGizmoFloatParameterSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoFloatParameterSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoFloatParameterSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoFloatParameterSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoFloatParameterSource(); \
	friend struct Z_Construct_UClass_UGizmoFloatParameterSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoFloatParameterSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoFloatParameterSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoFloatParameterSource() {} \
public: \
	typedef UGizmoFloatParameterSource UClassType; \
	typedef IGizmoFloatParameterSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoFloatParameterSource() {} \
public: \
	typedef UGizmoFloatParameterSource UClassType; \
	typedef IGizmoFloatParameterSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_142_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_152_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_152_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_145_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoFloatParameterSource>();

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndModify); \
	DECLARE_FUNCTION(execSetParameter); \
	DECLARE_FUNCTION(execBeginModify); \
	DECLARE_FUNCTION(execGetParameter);


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoVec2ParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoVec2ParameterSource) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoVec2ParameterSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoVec2ParameterSource); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoVec2ParameterSource(UGizmoVec2ParameterSource&&); \
	NO_API UGizmoVec2ParameterSource(const UGizmoVec2ParameterSource&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGizmoVec2ParameterSource(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGizmoVec2ParameterSource(UGizmoVec2ParameterSource&&); \
	NO_API UGizmoVec2ParameterSource(const UGizmoVec2ParameterSource&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGizmoVec2ParameterSource); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGizmoVec2ParameterSource); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGizmoVec2ParameterSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGizmoVec2ParameterSource(); \
	friend struct Z_Construct_UClass_UGizmoVec2ParameterSource_Statics; \
public: \
	DECLARE_CLASS(UGizmoVec2ParameterSource, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UGizmoVec2ParameterSource)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGizmoVec2ParameterSource() {} \
public: \
	typedef UGizmoVec2ParameterSource UClassType; \
	typedef IGizmoVec2ParameterSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_INCLASS_IINTERFACE \
protected: \
	virtual ~IGizmoVec2ParameterSource() {} \
public: \
	typedef UGizmoVec2ParameterSource UClassType; \
	typedef IGizmoVec2ParameterSource ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_175_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_185_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h_178_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UGizmoVec2ParameterSource>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_BaseGizmos_GizmoInterfaces_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
