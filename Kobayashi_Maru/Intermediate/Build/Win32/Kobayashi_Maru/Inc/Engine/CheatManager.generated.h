// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class AActor;
class APawn;
#ifdef ENGINE_CheatManager_generated_h
#error "CheatManager.generated.h already included, missing '#pragma once' in CheatManager.h"
#endif
#define ENGINE_CheatManager_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableDebugCamera); \
	DECLARE_FUNCTION(execEnableDebugCamera); \
	DECLARE_FUNCTION(execUpdateSafeArea); \
	DECLARE_FUNCTION(execToggleServerStatReplicatorUpdateStatNet); \
	DECLARE_FUNCTION(execToggleServerStatReplicatorClientOverwrite); \
	DECLARE_FUNCTION(execDestroyServerStatReplicator); \
	DECLARE_FUNCTION(execSpawnServerStatReplicator); \
	DECLARE_FUNCTION(execCheatScript); \
	DECLARE_FUNCTION(execInvertMouse); \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault); \
	DECLARE_FUNCTION(execSetWorldOrigin); \
	DECLARE_FUNCTION(execLogLoc); \
	DECLARE_FUNCTION(execFlushLog); \
	DECLARE_FUNCTION(execBugItStringCreator); \
	DECLARE_FUNCTION(execBugIt); \
	DECLARE_FUNCTION(execBugItGo); \
	DECLARE_FUNCTION(execDumpVoiceMutingState); \
	DECLARE_FUNCTION(execDumpChatState); \
	DECLARE_FUNCTION(execDumpPartyState); \
	DECLARE_FUNCTION(execDumpOnlineSessionState); \
	DECLARE_FUNCTION(execTestCollisionDistance); \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear); \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn); \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture); \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex); \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel); \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize); \
	DECLARE_FUNCTION(execDebugCapsuleSweep); \
	DECLARE_FUNCTION(execServerToggleAILogging); \
	DECLARE_FUNCTION(execToggleAILogging); \
	DECLARE_FUNCTION(execToggleDebugCamera); \
	DECLARE_FUNCTION(execStreamLevelOut); \
	DECLARE_FUNCTION(execOnlyLoadLevel); \
	DECLARE_FUNCTION(execStreamLevelIn); \
	DECLARE_FUNCTION(execViewClass); \
	DECLARE_FUNCTION(execViewActor); \
	DECLARE_FUNCTION(execViewPlayer); \
	DECLARE_FUNCTION(execViewSelf); \
	DECLARE_FUNCTION(execPlayersOnly); \
	DECLARE_FUNCTION(execSummon); \
	DECLARE_FUNCTION(execDestroyPawns); \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget); \
	DECLARE_FUNCTION(execDestroyAll); \
	DECLARE_FUNCTION(execDestroyTarget); \
	DECLARE_FUNCTION(execDamageTarget); \
	DECLARE_FUNCTION(execSlomo); \
	DECLARE_FUNCTION(execGod); \
	DECLARE_FUNCTION(execGhost); \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execFly); \
	DECLARE_FUNCTION(execChangeSize); \
	DECLARE_FUNCTION(execTeleport); \
	DECLARE_FUNCTION(execFreezeFrame);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool ServerToggleAILogging_Validate(); \
	virtual void ServerToggleAILogging_Implementation(); \
 \
	DECLARE_FUNCTION(execDisableDebugCamera); \
	DECLARE_FUNCTION(execEnableDebugCamera); \
	DECLARE_FUNCTION(execUpdateSafeArea); \
	DECLARE_FUNCTION(execToggleServerStatReplicatorUpdateStatNet); \
	DECLARE_FUNCTION(execToggleServerStatReplicatorClientOverwrite); \
	DECLARE_FUNCTION(execDestroyServerStatReplicator); \
	DECLARE_FUNCTION(execSpawnServerStatReplicator); \
	DECLARE_FUNCTION(execCheatScript); \
	DECLARE_FUNCTION(execInvertMouse); \
	DECLARE_FUNCTION(execSetMouseSensitivityToDefault); \
	DECLARE_FUNCTION(execSetWorldOrigin); \
	DECLARE_FUNCTION(execLogLoc); \
	DECLARE_FUNCTION(execFlushLog); \
	DECLARE_FUNCTION(execBugItStringCreator); \
	DECLARE_FUNCTION(execBugIt); \
	DECLARE_FUNCTION(execBugItGo); \
	DECLARE_FUNCTION(execDumpVoiceMutingState); \
	DECLARE_FUNCTION(execDumpChatState); \
	DECLARE_FUNCTION(execDumpPartyState); \
	DECLARE_FUNCTION(execDumpOnlineSessionState); \
	DECLARE_FUNCTION(execTestCollisionDistance); \
	DECLARE_FUNCTION(execDebugCapsuleSweepClear); \
	DECLARE_FUNCTION(execDebugCapsuleSweepPawn); \
	DECLARE_FUNCTION(execDebugCapsuleSweepCapture); \
	DECLARE_FUNCTION(execDebugCapsuleSweepComplex); \
	DECLARE_FUNCTION(execDebugCapsuleSweepChannel); \
	DECLARE_FUNCTION(execDebugCapsuleSweepSize); \
	DECLARE_FUNCTION(execDebugCapsuleSweep); \
	DECLARE_FUNCTION(execServerToggleAILogging); \
	DECLARE_FUNCTION(execToggleAILogging); \
	DECLARE_FUNCTION(execToggleDebugCamera); \
	DECLARE_FUNCTION(execStreamLevelOut); \
	DECLARE_FUNCTION(execOnlyLoadLevel); \
	DECLARE_FUNCTION(execStreamLevelIn); \
	DECLARE_FUNCTION(execViewClass); \
	DECLARE_FUNCTION(execViewActor); \
	DECLARE_FUNCTION(execViewPlayer); \
	DECLARE_FUNCTION(execViewSelf); \
	DECLARE_FUNCTION(execPlayersOnly); \
	DECLARE_FUNCTION(execSummon); \
	DECLARE_FUNCTION(execDestroyPawns); \
	DECLARE_FUNCTION(execDestroyAllPawnsExceptTarget); \
	DECLARE_FUNCTION(execDestroyAll); \
	DECLARE_FUNCTION(execDestroyTarget); \
	DECLARE_FUNCTION(execDamageTarget); \
	DECLARE_FUNCTION(execSlomo); \
	DECLARE_FUNCTION(execGod); \
	DECLARE_FUNCTION(execGhost); \
	DECLARE_FUNCTION(execWalk); \
	DECLARE_FUNCTION(execFly); \
	DECLARE_FUNCTION(execChangeSize); \
	DECLARE_FUNCTION(execTeleport); \
	DECLARE_FUNCTION(execFreezeFrame);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_EVENT_PARMS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend struct Z_Construct_UClass_UCheatManager_Statics; \
public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	DECLARE_WITHIN(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS \
private: \
	static void StaticRegisterNativesUCheatManager(); \
	friend struct Z_Construct_UClass_UCheatManager_Statics; \
public: \
	DECLARE_CLASS(UCheatManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(UCheatManager) \
	DECLARE_WITHIN(APlayerController)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheatManager(UCheatManager&&); \
	NO_API UCheatManager(const UCheatManager&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCheatManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCheatManager(UCheatManager&&); \
	NO_API UCheatManager(const UCheatManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCheatManager); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCheatManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCheatManager)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_68_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h_71_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class CheatManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class UCheatManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_CheatManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
