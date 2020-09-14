// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
struct FGameplayTag;
#ifdef GAMEPLAYTAGS_GameplayTagAssetInterface_generated_h
#error "GameplayTagAssetInterface.generated.h already included, missing '#pragma once' in GameplayTagAssetInterface.h"
#endif
#define GAMEPLAYTAGS_GameplayTagAssetInterface_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execGetOwnedGameplayTags);


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHasAnyMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execHasMatchingGameplayTag); \
	DECLARE_FUNCTION(execGetOwnedGameplayTags);


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagAssetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagAssetInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagAssetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagAssetInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTAGS_API UGameplayTagAssetInterface(UGameplayTagAssetInterface&&); \
	GAMEPLAYTAGS_API UGameplayTagAssetInterface(const UGameplayTagAssetInterface&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UGameplayTagAssetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTAGS_API UGameplayTagAssetInterface(UGameplayTagAssetInterface&&); \
	GAMEPLAYTAGS_API UGameplayTagAssetInterface(const UGameplayTagAssetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UGameplayTagAssetInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayTagAssetInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayTagAssetInterface)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUGameplayTagAssetInterface(); \
	friend struct Z_Construct_UClass_UGameplayTagAssetInterface_Statics; \
public: \
	DECLARE_CLASS(UGameplayTagAssetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UGameplayTagAssetInterface)


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IGameplayTagAssetInterface() {} \
public: \
	typedef UGameplayTagAssetInterface UClassType; \
	typedef IGameplayTagAssetInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_INCLASS_IINTERFACE \
protected: \
	virtual ~IGameplayTagAssetInterface() {} \
public: \
	typedef UGameplayTagAssetInterface UClassType; \
	typedef IGameplayTagAssetInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_13_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h_16_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UGameplayTagAssetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_GameplayTagAssetInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
