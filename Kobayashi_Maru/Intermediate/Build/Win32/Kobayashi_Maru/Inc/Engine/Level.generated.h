// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ENGINE_Level_generated_h
#error "Level.generated.h already included, missing '#pragma once' in Level.h"
#endif
#define ENGINE_Level_generated_h

#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_387_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FReplicatedStaticActorDestructionInfo_Statics; \
	ENGINE_API static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FReplicatedStaticActorDestructionInfo>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_315_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLevelSimplificationDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FLevelSimplificationDetails>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDynamicTextureInstance_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FStreamableTextureInstance Super;


template<> ENGINE_API UScriptStruct* StaticStruct<struct FDynamicTextureInstance>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStreamableTextureInstance_Statics; \
	static class UScriptStruct* StaticStruct();


template<> ENGINE_API UScriptStruct* StaticStruct<struct FStreamableTextureInstance>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelPartitionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelPartitionInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelPartitionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelPartitionInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelPartitionInterface(ULevelPartitionInterface&&); \
	NO_API ULevelPartitionInterface(const ULevelPartitionInterface&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULevelPartitionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULevelPartitionInterface(ULevelPartitionInterface&&); \
	NO_API ULevelPartitionInterface(const ULevelPartitionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULevelPartitionInterface); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevelPartitionInterface); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevelPartitionInterface)


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesULevelPartitionInterface(); \
	friend struct Z_Construct_UClass_ULevelPartitionInterface_Statics; \
public: \
	DECLARE_CLASS(ULevelPartitionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(ULevelPartitionInterface)


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_GENERATED_UINTERFACE_BODY() \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ILevelPartitionInterface() {} \
public: \
	typedef ULevelPartitionInterface UClassType; \
	typedef ILevelPartitionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_INCLASS_IINTERFACE \
protected: \
	virtual ~ILevelPartitionInterface() {} \
public: \
	typedef ULevelPartitionInterface UClassType; \
	typedef ILevelPartitionInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_36_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_39_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevelPartitionInterface>();

#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_RPC_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_RPC_WRAPPERS_NO_PURE_DECLS
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(ULevel, ENGINE_API)


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend struct Z_Construct_UClass_ULevel_Statics; \
public: \
	DECLARE_CLASS(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevel) \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_INCLASS \
private: \
	static void StaticRegisterNativesULevel(); \
	friend struct Z_Construct_UClass_ULevel_Statics; \
public: \
	DECLARE_CLASS(ULevel, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_ULevel, TEXT("/Script/Engine"), ENGINE_API) \
	DECLARE_SERIALIZER(ULevel) \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<ULevel*>(this); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ENGINE_API ULevel(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel) \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevel(ULevel&&); \
	ENGINE_API ULevel(const ULevel&); \
public:


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ENGINE_API ULevel(ULevel&&); \
	ENGINE_API ULevel(const ULevel&); \
public: \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULevel); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULevel)


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WorldSettings() { return STRUCT_OFFSET(ULevel, WorldSettings); } \
	FORCEINLINE static uint32 __PPO__AssetUserData() { return STRUCT_OFFSET(ULevel, AssetUserData); } \
	FORCEINLINE static uint32 __PPO__DestroyedReplicatedStaticActors() { return STRUCT_OFFSET(ULevel, DestroyedReplicatedStaticActors); }


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_411_PROLOG
#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_INCLASS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_Engine_Level_h_414_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class ULevel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_Engine_Level_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
