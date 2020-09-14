// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class AActor;
class AController;
class APawn;
struct FTransform;
class APlayerState;
class UObject;
#ifdef ENGINE_GameModeBase_generated_h
#error "GameModeBase.generated.h already included, missing '#pragma once' in GameModeBase.h"
#endif
#define ENGINE_GameModeBase_generated_h

#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_SPARSE_DATA
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS \
	virtual void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer); \
	virtual void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer); \
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, FTransform const& SpawnTransform); \
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot); \
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player); \
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName); \
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player); \
	virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget); \
	virtual bool MustSpectate_Implementation(APlayerController* NewPlayerController) const; \
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer); \
	virtual bool ShouldReset_Implementation(AActor* ActorToReset); \
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController); \
 \
	DECLARE_FUNCTION(execInitializeHUDForPlayer); \
	DECLARE_FUNCTION(execInitStartSpot); \
	DECLARE_FUNCTION(execSpawnDefaultPawnAtTransform); \
	DECLARE_FUNCTION(execSpawnDefaultPawnFor); \
	DECLARE_FUNCTION(execRestartPlayerAtTransform); \
	DECLARE_FUNCTION(execRestartPlayerAtPlayerStart); \
	DECLARE_FUNCTION(execRestartPlayer); \
	DECLARE_FUNCTION(execPlayerCanRestart); \
	DECLARE_FUNCTION(execK2_FindPlayerStart); \
	DECLARE_FUNCTION(execFindPlayerStart); \
	DECLARE_FUNCTION(execChoosePlayerStart); \
	DECLARE_FUNCTION(execChangeName); \
	DECLARE_FUNCTION(execCanSpectate); \
	DECLARE_FUNCTION(execMustSpectate); \
	DECLARE_FUNCTION(execHandleStartingNewPlayer); \
	DECLARE_FUNCTION(execReturnToMainMenuHost); \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execShouldReset); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execStartPlay); \
	DECLARE_FUNCTION(execGetNumSpectators); \
	DECLARE_FUNCTION(execGetNumPlayers); \
	DECLARE_FUNCTION(execGetDefaultPawnClassForController);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void InitializeHUDForPlayer_Implementation(APlayerController* NewPlayer); \
	virtual void InitStartSpot_Implementation(AActor* StartSpot, AController* NewPlayer); \
	virtual APawn* SpawnDefaultPawnAtTransform_Implementation(AController* NewPlayer, FTransform const& SpawnTransform); \
	virtual APawn* SpawnDefaultPawnFor_Implementation(AController* NewPlayer, AActor* StartSpot); \
	virtual bool PlayerCanRestart_Implementation(APlayerController* Player); \
	virtual AActor* FindPlayerStart_Implementation(AController* Player, const FString& IncomingName); \
	virtual AActor* ChoosePlayerStart_Implementation(AController* Player); \
	virtual bool CanSpectate_Implementation(APlayerController* Viewer, APlayerState* ViewTarget); \
	virtual bool MustSpectate_Implementation(APlayerController* NewPlayerController) const; \
	virtual void HandleStartingNewPlayer_Implementation(APlayerController* NewPlayer); \
	virtual bool ShouldReset_Implementation(AActor* ActorToReset); \
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController); \
 \
	DECLARE_FUNCTION(execInitializeHUDForPlayer); \
	DECLARE_FUNCTION(execInitStartSpot); \
	DECLARE_FUNCTION(execSpawnDefaultPawnAtTransform); \
	DECLARE_FUNCTION(execSpawnDefaultPawnFor); \
	DECLARE_FUNCTION(execRestartPlayerAtTransform); \
	DECLARE_FUNCTION(execRestartPlayerAtPlayerStart); \
	DECLARE_FUNCTION(execRestartPlayer); \
	DECLARE_FUNCTION(execPlayerCanRestart); \
	DECLARE_FUNCTION(execK2_FindPlayerStart); \
	DECLARE_FUNCTION(execFindPlayerStart); \
	DECLARE_FUNCTION(execChoosePlayerStart); \
	DECLARE_FUNCTION(execChangeName); \
	DECLARE_FUNCTION(execCanSpectate); \
	DECLARE_FUNCTION(execMustSpectate); \
	DECLARE_FUNCTION(execHandleStartingNewPlayer); \
	DECLARE_FUNCTION(execReturnToMainMenuHost); \
	DECLARE_FUNCTION(execResetLevel); \
	DECLARE_FUNCTION(execShouldReset); \
	DECLARE_FUNCTION(execHasMatchStarted); \
	DECLARE_FUNCTION(execStartPlay); \
	DECLARE_FUNCTION(execGetNumSpectators); \
	DECLARE_FUNCTION(execGetNumPlayers); \
	DECLARE_FUNCTION(execGetDefaultPawnClassForController);


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_EVENT_PARMS \
	struct GameModeBase_eventCanSpectate_Parms \
	{ \
		APlayerController* Viewer; \
		APlayerState* ViewTarget; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventCanSpectate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventChoosePlayerStart_Parms \
	{ \
		AController* Player; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventChoosePlayerStart_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventFindPlayerStart_Parms \
	{ \
		AController* Player; \
		FString IncomingName; \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventFindPlayerStart_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventGetDefaultPawnClassForController_Parms \
	{ \
		AController* InController; \
		UClass* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventGetDefaultPawnClassForController_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventHandleStartingNewPlayer_Parms \
	{ \
		APlayerController* NewPlayer; \
	}; \
	struct GameModeBase_eventInitializeHUDForPlayer_Parms \
	{ \
		APlayerController* NewPlayer; \
	}; \
	struct GameModeBase_eventInitStartSpot_Parms \
	{ \
		AActor* StartSpot; \
		AController* NewPlayer; \
	}; \
	struct GameModeBase_eventK2_OnChangeName_Parms \
	{ \
		AController* Other; \
		FString NewName; \
		bool bNameChange; \
	}; \
	struct GameModeBase_eventK2_OnLogout_Parms \
	{ \
		AController* ExitingController; \
	}; \
	struct GameModeBase_eventK2_OnRestartPlayer_Parms \
	{ \
		AController* NewPlayer; \
	}; \
	struct GameModeBase_eventK2_OnSwapPlayerControllers_Parms \
	{ \
		APlayerController* OldPC; \
		APlayerController* NewPC; \
	}; \
	struct GameModeBase_eventK2_PostLogin_Parms \
	{ \
		APlayerController* NewPlayer; \
	}; \
	struct GameModeBase_eventMustSpectate_Parms \
	{ \
		APlayerController* NewPlayerController; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventMustSpectate_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventPlayerCanRestart_Parms \
	{ \
		APlayerController* Player; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventPlayerCanRestart_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventShouldReset_Parms \
	{ \
		AActor* ActorToReset; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventShouldReset_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameModeBase_eventSpawnDefaultPawnAtTransform_Parms \
	{ \
		AController* NewPlayer; \
		FTransform SpawnTransform; \
		APawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventSpawnDefaultPawnAtTransform_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameModeBase_eventSpawnDefaultPawnFor_Parms \
	{ \
		AController* NewPlayer; \
		AActor* StartSpot; \
		APawn* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameModeBase_eventSpawnDefaultPawnFor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_CALLBACK_WRAPPERS
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameModeBase(); \
	friend struct Z_Construct_UClass_AGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameModeBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameModeBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS \
private: \
	static void StaticRegisterNativesAGameModeBase(); \
	friend struct Z_Construct_UClass_AGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AGameModeBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Engine"), NO_API) \
	DECLARE_SERIALIZER(AGameModeBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeBase(AGameModeBase&&); \
	NO_API AGameModeBase(const AGameModeBase&); \
public:


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameModeBase(AGameModeBase&&); \
	NO_API AGameModeBase(const AGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameModeBase)


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_PRIVATE_PROPERTY_OFFSET
#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_45_PROLOG \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_EVENT_PARMS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_PRIVATE_PROPERTY_OFFSET \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_SPARSE_DATA \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_RPC_WRAPPERS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_CALLBACK_WRAPPERS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_INCLASS_NO_PURE_DECLS \
	Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h_48_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class GameModeBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ENGINE_API UClass* StaticClass<class AGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Engine_Source_Runtime_Engine_Classes_GameFramework_GameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
