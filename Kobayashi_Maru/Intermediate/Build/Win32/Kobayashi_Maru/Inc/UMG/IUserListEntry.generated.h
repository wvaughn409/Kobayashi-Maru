// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IUserListEntry;
class UListViewBase;
#ifdef UMG_IUserListEntry_generated_h
#error "IUserListEntry.generated.h already included, missing '#pragma once' in IUserListEntry.h"
#endif
#define UMG_IUserListEntry_generated_h

#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_EVENT_PARMS \
	struct UserListEntry_eventBP_OnItemExpansionChanged_Parms \
	{ \
		bool bIsExpanded; \
	}; \
	struct UserListEntry_eventBP_OnItemSelectionChanged_Parms \
	{ \
		bool bIsSelected; \
	};


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntry(UUserListEntry&&); \
	NO_API UUserListEntry(const UUserListEntry&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntry(UUserListEntry&&); \
	NO_API UUserListEntry(const UUserListEntry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntry)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUUserListEntry(); \
	friend struct Z_Construct_UClass_UUserListEntry_Statics; \
public: \
	DECLARE_CLASS(UUserListEntry, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserListEntry)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IUserListEntry() {} \
public: \
	typedef UUserListEntry UClassType; \
	typedef IUserListEntry ThisClass; \
	static void Execute_BP_OnEntryReleased(UObject* O); \
	static void Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded); \
	static void Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE \
protected: \
	virtual ~IUserListEntry() {} \
public: \
	typedef UUserListEntry UClassType; \
	typedef IUserListEntry ThisClass; \
	static void Execute_BP_OnEntryReleased(UObject* O); \
	static void Execute_BP_OnItemExpansionChanged(UObject* O, bool bIsExpanded); \
	static void Execute_BP_OnItemSelectionChanged(UObject* O, bool bIsSelected); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_20_PROLOG \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_EVENT_PARMS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_28_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_28_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_23_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserListEntry>();

#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_SPARSE_DATA
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningListView); \
	DECLARE_FUNCTION(execIsListItemExpanded); \
	DECLARE_FUNCTION(execIsListItemSelected);


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningListView); \
	DECLARE_FUNCTION(execIsListItemExpanded); \
	DECLARE_FUNCTION(execIsListItemSelected);


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUserListEntryLibrary(); \
	friend struct Z_Construct_UClass_UUserListEntryLibrary_Statics; \
public: \
	DECLARE_CLASS(UUserListEntryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserListEntryLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUUserListEntryLibrary(); \
	friend struct Z_Construct_UClass_UUserListEntryLibrary_Statics; \
public: \
	DECLARE_CLASS(UUserListEntryLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/UMG"), NO_API) \
	DECLARE_SERIALIZER(UUserListEntryLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntryLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntryLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntryLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntryLibrary(UUserListEntryLibrary&&); \
	NO_API UUserListEntryLibrary(const UUserListEntryLibrary&); \
public:


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUserListEntryLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUserListEntryLibrary(UUserListEntryLibrary&&); \
	NO_API UUserListEntryLibrary(const UUserListEntryLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUserListEntryLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUserListEntryLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUserListEntryLibrary)


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_76_PROLOG
#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_SPARSE_DATA \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h_79_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UMG_API UClass* StaticClass<class UUserListEntryLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_UMG_Public_Blueprint_IUserListEntry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
