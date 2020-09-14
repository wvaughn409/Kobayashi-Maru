// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef UMG_TreeView_generated_h
#error "TreeView.generated.h already included, missing '#pragma once' in TreeView.h"
#endif
#define UMG_TreeView_generated_h

#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_10_DELEGATE \
struct _Script_UMG_eventOnItemExpansionChangedDynamic_Parms \
{ \
	UObject* Item; \
	bool bIsExpanded; \
}; \
static inline void FOnItemExpansionChangedDynamic_DelegateWrapper(const FMulticastScriptDelegate& OnItemExpansionChangedDynamic, UObject* Item, bool bIsExpanded) \
{ \
	_Script_UMG_eventOnItemExpansionChangedDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.bIsExpanded=bIsExpanded ? true : false; \
	OnItemExpansionChangedDynamic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_9_DELEGATE \
struct _Script_UMG_eventOnGetItemChildrenDynamic_Parms \
{ \
	UObject* Item; \
	TArray<UObject*> Children; \
}; \
static inline void FOnGetItemChildrenDynamic_DelegateWrapper(const FScriptDelegate& OnGetItemChildrenDynamic, UObject* Item, TArray<UObject*>& Children) \
{ \
	_Script_UMG_eventOnGetItemChildrenDynamic_Parms Parms; \
	Parms.Item=Item; \
	Parms.Children=Children; \
	OnGetItemChildrenDynamic.ProcessDelegate<UObject>(&Parms); \
	Children=Parms.Children; \
}


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollapseAll); \
	DECLARE_FUNCTION(execExpandAll); \
	DECLARE_FUNCTION(execSetItemExpansion);


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollapseAll); \
	DECLARE_FUNCTION(execExpandAll); \
	DECLARE_FUNCTION(execSetItemExpansion);


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTreeView(); \
	friend struct Z_Construct_UClass_UTreeView_Statics; \
public: \
	DECLARE_CLASS(UTreeView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTreeView)


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUTreeView(); \
	friend struct Z_Construct_UClass_UTreeView_Statics; \
public: \
	DECLARE_CLASS(UTreeView, UListView, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UTreeView)


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTreeView(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTreeView) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTreeView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTreeView); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTreeView(UTreeView&&); \
	NO_API UTreeView(const UTreeView&); \
public:


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTreeView(UTreeView&&); \
	NO_API UTreeView(const UTreeView&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTreeView); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTreeView); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTreeView)


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BP_OnGetItemChildren() { return STRUCT_OFFSET(UTreeView, BP_OnGetItemChildren); } \
	FORCEINLINE static uint32 __PPO__BP_OnItemExpansionChanged() { return STRUCT_OFFSET(UTreeView, BP_OnItemExpansionChanged); }


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_19_PROLOG
#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Components_TreeView_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UTreeView>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Components_TreeView_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
