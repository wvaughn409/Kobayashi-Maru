// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_PlatformInterfaceWebResponse_generated_h
#error "PlatformInterfaceWebResponse.generated.h already included, missing '#pragma once' in PlatformInterfaceWebResponse.h"
#endif
#define ENGINE_PlatformInterfaceWebResponse_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHeaderValue); \
	DECLARE_FUNCTION(execGetHeader); \
	DECLARE_FUNCTION(execGetNumHeaders);


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHeaderValue); \
	DECLARE_FUNCTION(execGetHeader); \
	DECLARE_FUNCTION(execGetNumHeaders);


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlatformInterfaceWebResponse(); \
	friend struct Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics; \
public: \
	DECLARE_CLASS(UPlatformInterfaceWebResponse, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceWebResponse)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUPlatformInterfaceWebResponse(); \
	friend struct Z_Construct_UClass_UPlatformInterfaceWebResponse_Statics; \
public: \
	DECLARE_CLASS(UPlatformInterfaceWebResponse, UObject, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(UPlatformInterfaceWebResponse)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceWebResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceWebResponse) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceWebResponse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceWebResponse); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlatformInterfaceWebResponse(UPlatformInterfaceWebResponse&&); \
	ENGINE_API UPlatformInterfaceWebResponse(const UPlatformInterfaceWebResponse&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API UPlatformInterfaceWebResponse(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API UPlatformInterfaceWebResponse(UPlatformInterfaceWebResponse&&); \
	ENGINE_API UPlatformInterfaceWebResponse(const UPlatformInterfaceWebResponse&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ENGINE_API, UPlatformInterfaceWebResponse); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlatformInterfaceWebResponse); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlatformInterfaceWebResponse)


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_18_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h_21_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class PlatformInterfaceWebResponse."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UPlatformInterfaceWebResponse>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_PlatformInterfaceWebResponse_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
