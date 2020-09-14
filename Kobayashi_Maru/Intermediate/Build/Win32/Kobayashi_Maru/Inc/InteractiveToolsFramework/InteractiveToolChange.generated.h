// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INTERACTIVETOOLSFRAMEWORK_InteractiveToolChange_generated_h
#error "InteractiveToolChange.generated.h already included, missing '#pragma once' in InteractiveToolChange.h"
#endif
#define INTERACTIVETOOLSFRAMEWORK_InteractiveToolChange_generated_h

#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_SPARSE_DATA
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_RPC_WRAPPERS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolContextTransactionProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolContextTransactionProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolContextTransactionProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolContextTransactionProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolContextTransactionProvider(UToolContextTransactionProvider&&); \
	NO_API UToolContextTransactionProvider(const UToolContextTransactionProvider&); \
public:


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UToolContextTransactionProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UToolContextTransactionProvider(UToolContextTransactionProvider&&); \
	NO_API UToolContextTransactionProvider(const UToolContextTransactionProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UToolContextTransactionProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UToolContextTransactionProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UToolContextTransactionProvider)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUToolContextTransactionProvider(); \
	friend struct Z_Construct_UClass_UToolContextTransactionProvider_Statics; \
public: \
	DECLARE_CLASS(UToolContextTransactionProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/InteractiveToolsFramework"), NO_API) \
	DECLARE_SERIALIZER(UToolContextTransactionProvider)


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IToolContextTransactionProvider() {} \
public: \
	typedef UToolContextTransactionProvider UClassType; \
	typedef IToolContextTransactionProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_INCLASS_IINTERFACE \
protected: \
	virtual ~IToolContextTransactionProvider() {} \
public: \
	typedef UToolContextTransactionProvider UClassType; \
	typedef IToolContextTransactionProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_28_PROLOG
#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_40_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_RPC_WRAPPERS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_40_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_SPARSE_DATA \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h_31_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<class UToolContextTransactionProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Experimental_InteractiveToolsFramework_Public_InteractiveToolChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
