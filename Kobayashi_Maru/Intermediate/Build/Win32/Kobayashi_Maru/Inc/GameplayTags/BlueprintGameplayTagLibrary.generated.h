// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameplayTagContainer;
class IGameplayTagAssetInterface;
struct FGameplayTagQuery;
class UObject;
class AActor;
#ifdef GAMEPLAYTAGS_BlueprintGameplayTagLibrary_generated_h
#error "BlueprintGameplayTagLibrary.generated.h already included, missing '#pragma once' in BlueprintGameplayTagLibrary.h"
#endif
#define GAMEPLAYTAGS_BlueprintGameplayTagLibrary_generated_h

#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_SPARSE_DATA
#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTag); \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTagContainer); \
	DECLARE_FUNCTION(execNotEqual_TagContainerTagContainer); \
	DECLARE_FUNCTION(execNotEqual_TagTag); \
	DECLARE_FUNCTION(execDoesTagAssetInterfaceHaveTag); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execMakeGameplayTagQuery); \
	DECLARE_FUNCTION(execBreakGameplayTagContainer); \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromTag); \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromArray); \
	DECLARE_FUNCTION(execMakeLiteralGameplayTagContainer); \
	DECLARE_FUNCTION(execNotEqual_GameplayTagContainer); \
	DECLARE_FUNCTION(execEqualEqual_GameplayTagContainer); \
	DECLARE_FUNCTION(execAppendGameplayTagContainers); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execAddGameplayTag); \
	DECLARE_FUNCTION(execGetAllActorsOfClassMatchingTagQuery); \
	DECLARE_FUNCTION(execDoesContainerMatchTagQuery); \
	DECLARE_FUNCTION(execIsTagQueryEmpty); \
	DECLARE_FUNCTION(execHasAllTags); \
	DECLARE_FUNCTION(execHasAnyTags); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetNumGameplayTagsInContainer); \
	DECLARE_FUNCTION(execMakeLiteralGameplayTag); \
	DECLARE_FUNCTION(execGetTagName); \
	DECLARE_FUNCTION(execIsGameplayTagValid); \
	DECLARE_FUNCTION(execNotEqual_GameplayTag); \
	DECLARE_FUNCTION(execEqualEqual_GameplayTag); \
	DECLARE_FUNCTION(execMatchesAnyTags); \
	DECLARE_FUNCTION(execMatchesTag);


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTag); \
	DECLARE_FUNCTION(execGetDebugStringFromGameplayTagContainer); \
	DECLARE_FUNCTION(execNotEqual_TagContainerTagContainer); \
	DECLARE_FUNCTION(execNotEqual_TagTag); \
	DECLARE_FUNCTION(execDoesTagAssetInterfaceHaveTag); \
	DECLARE_FUNCTION(execHasAllMatchingGameplayTags); \
	DECLARE_FUNCTION(execMakeGameplayTagQuery); \
	DECLARE_FUNCTION(execBreakGameplayTagContainer); \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromTag); \
	DECLARE_FUNCTION(execMakeGameplayTagContainerFromArray); \
	DECLARE_FUNCTION(execMakeLiteralGameplayTagContainer); \
	DECLARE_FUNCTION(execNotEqual_GameplayTagContainer); \
	DECLARE_FUNCTION(execEqualEqual_GameplayTagContainer); \
	DECLARE_FUNCTION(execAppendGameplayTagContainers); \
	DECLARE_FUNCTION(execRemoveGameplayTag); \
	DECLARE_FUNCTION(execAddGameplayTag); \
	DECLARE_FUNCTION(execGetAllActorsOfClassMatchingTagQuery); \
	DECLARE_FUNCTION(execDoesContainerMatchTagQuery); \
	DECLARE_FUNCTION(execIsTagQueryEmpty); \
	DECLARE_FUNCTION(execHasAllTags); \
	DECLARE_FUNCTION(execHasAnyTags); \
	DECLARE_FUNCTION(execHasTag); \
	DECLARE_FUNCTION(execGetNumGameplayTagsInContainer); \
	DECLARE_FUNCTION(execMakeLiteralGameplayTag); \
	DECLARE_FUNCTION(execGetTagName); \
	DECLARE_FUNCTION(execIsGameplayTagValid); \
	DECLARE_FUNCTION(execNotEqual_GameplayTag); \
	DECLARE_FUNCTION(execEqualEqual_GameplayTag); \
	DECLARE_FUNCTION(execMatchesAnyTags); \
	DECLARE_FUNCTION(execMatchesTag);


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintGameplayTagLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameplayTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UBlueprintGameplayTagLibrary)


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUBlueprintGameplayTagLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintGameplayTagLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintGameplayTagLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameplayTags"), GAMEPLAYTAGS_API) \
	DECLARE_SERIALIZER(UBlueprintGameplayTagLibrary)


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGameplayTagLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UBlueprintGameplayTagLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameplayTagLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(UBlueprintGameplayTagLibrary&&); \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const UBlueprintGameplayTagLibrary&); \
public:


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(UBlueprintGameplayTagLibrary&&); \
	GAMEPLAYTAGS_API UBlueprintGameplayTagLibrary(const UBlueprintGameplayTagLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GAMEPLAYTAGS_API, UBlueprintGameplayTagLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintGameplayTagLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintGameplayTagLibrary)


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_14_PROLOG
#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_SPARSE_DATA \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueprintGameplayTagLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGS_API UClass* StaticClass<class UBlueprintGameplayTagLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_GameplayTags_Classes_BlueprintGameplayTagLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
