// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_AnimClassInterface_generated_h
#error "AnimClassInterface.generated.h already included, missing '#pragma once' in AnimClassInterface.h"
#endif
#define ENGINE_AnimClassInterface_generated_h

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimGraphBlendOptions_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimGraphBlendOptions>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_100_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGraphAssetPlayerInformation_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FGraphAssetPlayerInformation>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_85_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCachedPoseIndices_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FCachedPoseIndices>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAnimBlueprintFunction_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FAnimBlueprintFunction>();

#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimClassInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimClassInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimClassInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimClassInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimClassInterface(UAnimClassInterface&&); \
	NO_API UAnimClassInterface(const UAnimClassInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAnimClassInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAnimClassInterface(UAnimClassInterface&&); \
	NO_API UAnimClassInterface(const UAnimClassInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAnimClassInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAnimClassInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAnimClassInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUAnimClassInterface(); \
	friend struct Z_Construct_UClass_UAnimClassInterface_Statics; \
public: \
	DECLARE_CLASS(UAnimClassInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UAnimClassInterface)


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IAnimClassInterface() {} \
public: \
	typedef UAnimClassInterface UClassType; \
	typedef IAnimClassInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_INCLASS_IINTERFACE \
protected: \
	virtual ~IAnimClassInterface() {} \
public: \
	typedef UAnimClassInterface UClassType; \
	typedef IAnimClassInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_133_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_143_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_143_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h_136_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UAnimClassInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Animation_AnimClassInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
