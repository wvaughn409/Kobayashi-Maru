// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENGINE_API UClass* Z_Construct_UClass_AController();
	ENGINE_API UClass* Z_Construct_UClass_UTouchInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraAnimPlaySpace();
	ENGINE_API UClass* Z_Construct_UClass_UCameraAnim_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShake_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelType();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControllerAnalogStick();
	ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect();
	ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCheatManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInterpTrackInstDirector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
// End Cross Module References
	static UEnum* EDynamicForceFeedbackAction_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction, Z_Construct_UPackage__Script_Engine(), TEXT("EDynamicForceFeedbackAction"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EDynamicForceFeedbackAction::Type>()
	{
		return EDynamicForceFeedbackAction_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDynamicForceFeedbackAction(EDynamicForceFeedbackAction_StaticEnum, TEXT("/Script/Engine"), TEXT("EDynamicForceFeedbackAction"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Hash() { return 385607660U; }
	UEnum* Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDynamicForceFeedbackAction"), 0, Get_Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDynamicForceFeedbackAction::Start", (int64)EDynamicForceFeedbackAction::Start },
				{ "EDynamicForceFeedbackAction::Update", (int64)EDynamicForceFeedbackAction::Update },
				{ "EDynamicForceFeedbackAction::Stop", (int64)EDynamicForceFeedbackAction::Stop },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
				{ "Start.Name", "EDynamicForceFeedbackAction::Start" },
				{ "Stop.Name", "EDynamicForceFeedbackAction::Stop" },
				{ "Update.Name", "EDynamicForceFeedbackAction::Update" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EDynamicForceFeedbackAction",
				"EDynamicForceFeedbackAction::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FUpdateLevelVisibilityLevelInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, Z_Construct_UPackage__Script_Engine(), TEXT("UpdateLevelVisibilityLevelInfo"), sizeof(FUpdateLevelVisibilityLevelInfo), Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUpdateLevelVisibilityLevelInfo>()
{
	return FUpdateLevelVisibilityLevelInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdateLevelVisibilityLevelInfo(FUpdateLevelVisibilityLevelInfo::StaticStruct, TEXT("/Script/Engine"), TEXT("UpdateLevelVisibilityLevelInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFUpdateLevelVisibilityLevelInfo
{
	FScriptStruct_Engine_StaticRegisterNativesFUpdateLevelVisibilityLevelInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UpdateLevelVisibilityLevelInfo")),new UScriptStruct::TCppStructOps<FUpdateLevelVisibilityLevelInfo>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFUpdateLevelVisibilityLevelInfo;
	struct Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "This structure is used to pass arguments to ServerUpdateLevelVisibilty() and ServerUpdateMultipleLevelsVisibility() server RPC functions" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateLevelVisibilityLevelInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** The new visibility state for this level. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The new visibility state for this level." },
	};
#endif
	void Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((FUpdateLevelVisibilityLevelInfo*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FUpdateLevelVisibilityLevelInfo), &Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData[] = {
		{ "Comment", "/** The name / path of the asset file for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The name / path of the asset file for the level whose status changed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, FileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** The name of the package for the level whose status changed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The name of the package for the level whose status changed." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelVisibilityLevelInfo, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::NewProp_PackageName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"UpdateLevelVisibilityLevelInfo",
		sizeof(FUpdateLevelVisibilityLevelInfo),
		alignof(FUpdateLevelVisibilityLevelInfo),
		Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdateLevelVisibilityLevelInfo"), sizeof(FUpdateLevelVisibilityLevelInfo), Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo_Hash() { return 3876643409U; }
class UScriptStruct* FUpdateLevelStreamingLevelStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus, Z_Construct_UPackage__Script_Engine(), TEXT("UpdateLevelStreamingLevelStatus"), sizeof(FUpdateLevelStreamingLevelStatus), Get_Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUpdateLevelStreamingLevelStatus>()
{
	return FUpdateLevelStreamingLevelStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUpdateLevelStreamingLevelStatus(FUpdateLevelStreamingLevelStatus::StaticStruct, TEXT("/Script/Engine"), TEXT("UpdateLevelStreamingLevelStatus"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFUpdateLevelStreamingLevelStatus
{
	FScriptStruct_Engine_StaticRegisterNativesFUpdateLevelStreamingLevelStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UpdateLevelStreamingLevelStatus")),new UScriptStruct::TCppStructOps<FUpdateLevelStreamingLevelStatus>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFUpdateLevelStreamingLevelStatus;
	struct Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewShouldBlockOnLoad_MetaData[];
#endif
		static void NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBlockOnLoad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewShouldBeVisible_MetaData[];
#endif
		static void NewProp_bNewShouldBeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNewShouldBeLoaded_MetaData[];
#endif
		static void NewProp_bNewShouldBeLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ClientUpdateMultipleLevelsStreamingStatus() client RPC function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "This structure is used to pass arguments to ClientUpdateMultipleLevelsStreamingStatus() client RPC function" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateLevelStreamingLevelStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad_MetaData[] = {
		{ "Comment", "/** Whether we want to force a blocking load */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether we want to force a blocking load" },
	};
#endif
	void Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj)
	{
		((FUpdateLevelStreamingLevelStatus*)Obj)->bNewShouldBlockOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad = { "bNewShouldBlockOnLoad", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FUpdateLevelStreamingLevelStatus), &Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible_MetaData[] = {
		{ "Comment", "/** Whether the level should be visible if it is loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the level should be visible if it is loaded" },
	};
#endif
	void Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible_SetBit(void* Obj)
	{
		((FUpdateLevelStreamingLevelStatus*)Obj)->bNewShouldBeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible = { "bNewShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FUpdateLevelStreamingLevelStatus), &Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded_MetaData[] = {
		{ "Comment", "/** Whether the level should be loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the level should be loaded" },
	};
#endif
	void Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit(void* Obj)
	{
		((FUpdateLevelStreamingLevelStatus*)Obj)->bNewShouldBeLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded = { "bNewShouldBeLoaded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FUpdateLevelStreamingLevelStatus), &Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_LODIndex_MetaData[] = {
		{ "Comment", "/** Current LOD index for a streaming level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Current LOD index for a streaming level" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelStreamingLevelStatus, LODIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** Name of the level package name used for loading. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Name of the level package name used for loading." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUpdateLevelStreamingLevelStatus, PackageName), METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_PackageName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"UpdateLevelStreamingLevelStatus",
		sizeof(FUpdateLevelStreamingLevelStatus),
		alignof(FUpdateLevelStreamingLevelStatus),
		Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UpdateLevelStreamingLevelStatus"), sizeof(FUpdateLevelStreamingLevelStatus), Get_Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Hash() { return 125205045U; }
	DEFINE_FUNCTION(APlayerController::execGetFocalLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetFocalLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetSpectatorPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ASpectatorPawn**)Z_Param__Result=P_THIS->GetSpectatorPawn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execOnServerStartedVisualLogger)
	{
		P_GET_UBOOL(Z_Param_bIsLogging);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnServerStartedVisualLogger_Implementation(Z_Param_bIsLogging);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetCinematicMode)
	{
		P_GET_UBOOL(Z_Param_bInCinematicMode);
		P_GET_UBOOL(Z_Param_bHidePlayer);
		P_GET_UBOOL(Z_Param_bAffectsHUD);
		P_GET_UBOOL(Z_Param_bAffectsMovement);
		P_GET_UBOOL(Z_Param_bAffectsTurning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCinematicMode(Z_Param_bInCinematicMode,Z_Param_bHidePlayer,Z_Param_bAffectsHUD,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execCanRestartPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRestartPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClearAudioListenerAttenuationOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAudioListenerAttenuationOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetAudioListenerAttenuationOverride)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_STRUCT(FVector,Z_Param_AttenuationLocationOVerride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioListenerAttenuationOverride(Z_Param_AttachToComponent,Z_Param_AttenuationLocationOVerride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClearAudioListenerOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAudioListenerOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetAudioListenerOverride)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAudioListenerOverride(Z_Param_AttachToComponent,Z_Param_Location,Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetViewTargetWithBlend)
	{
		P_GET_OBJECT(AActor,Z_Param_NewViewTarget);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlendFunc);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendExp);
		P_GET_UBOOL(Z_Param_bLockOutgoing);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewTargetWithBlend(Z_Param_NewViewTarget,Z_Param_BlendTime,EViewTargetBlendFunction(Z_Param_BlendFunc),Z_Param_BlendExp,Z_Param_bLockOutgoing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execCamera)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Camera(Z_Param_NewMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetVirtualJoystickVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVirtualJoystickVisibility(Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execActivateTouchInterface)
	{
		P_GET_OBJECT(UTouchInterface,Z_Param_NewTouchInterface);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActivateTouchInterface(Z_Param_NewTouchInterface);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetInputAnalogStickState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_WhichStick);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StickX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StickY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInputAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetInputMouseDelta)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInputMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetInputKeyTimeDown)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputKeyTimeDown(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetMousePosition)
	{
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationY);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMousePosition(Z_Param_Out_LocationX,Z_Param_Out_LocationY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetInputMotionState)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Tilt);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationRate);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Gravity);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInputMotionState(Z_Param_Out_Tilt,Z_Param_Out_RotationRate,Z_Param_Out_Gravity,Z_Param_Out_Acceleration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetInputTouchState)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationX);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationY);
		P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInputTouchState(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetInputVectorKeyState)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetInputVectorKeyState(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetInputAnalogKeyState)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInputAnalogKeyState(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execWasInputKeyJustReleased)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasInputKeyJustReleased(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execWasInputKeyJustPressed)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasInputKeyJustPressed(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execIsInputKeyDown)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInputKeyDown(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execAddRollInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRollInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execAddYawInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddYawInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execAddPitchInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPitchInput(Z_Param_Val);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerToggleAILogging)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerToggleAILogging_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate"));
			return;
		}
		P_THIS->ServerToggleAILogging_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientTeamMessage)
	{
		P_GET_OBJECT(APlayerState,Z_Param_SenderPlayerState);
		P_GET_PROPERTY(FStrProperty,Z_Param_S);
		P_GET_PROPERTY(FNameProperty,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MsgLifeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientTeamMessage_Implementation(Z_Param_SenderPlayerState,Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerViewSelf)
	{
		P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerViewSelf_Validate(Z_Param_TransitionParams))
		{
			RPC_ValidateFailed(TEXT("ServerViewSelf_Validate"));
			return;
		}
		P_THIS->ServerViewSelf_Implementation(Z_Param_TransitionParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerViewPrevPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerViewPrevPlayer_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerViewPrevPlayer_Validate"));
			return;
		}
		P_THIS->ServerViewPrevPlayer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerViewNextPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerViewNextPlayer_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerViewNextPlayer_Validate"));
			return;
		}
		P_THIS->ServerViewNextPlayer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerVerifyViewTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerVerifyViewTarget_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerVerifyViewTarget_Validate"));
			return;
		}
		P_THIS->ServerVerifyViewTarget_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerUpdateMultipleLevelsVisibility)
	{
		P_GET_TARRAY(FUpdateLevelVisibilityLevelInfo,Z_Param_LevelVisibilities);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateMultipleLevelsVisibility_Validate(Z_Param_LevelVisibilities))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateMultipleLevelsVisibility_Validate"));
			return;
		}
		P_THIS->ServerUpdateMultipleLevelsVisibility_Implementation(Z_Param_LevelVisibilities);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerUpdateLevelVisibility)
	{
		P_GET_STRUCT(FUpdateLevelVisibilityLevelInfo,Z_Param_LevelVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateLevelVisibility_Validate(Z_Param_LevelVisibility))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateLevelVisibility_Validate"));
			return;
		}
		P_THIS->ServerUpdateLevelVisibility_Implementation(Z_Param_LevelVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerUpdateCamera)
	{
		P_GET_STRUCT(FVector_NetQuantize,Z_Param_CamLoc);
		P_GET_PROPERTY(FIntProperty,Z_Param_CamPitchAndYaw);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUpdateCamera_Validate(Z_Param_CamLoc,Z_Param_CamPitchAndYaw))
		{
			RPC_ValidateFailed(TEXT("ServerUpdateCamera_Validate"));
			return;
		}
		P_THIS->ServerUpdateCamera_Implementation(Z_Param_CamLoc,Z_Param_CamPitchAndYaw);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerShortTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerShortTimeout_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerShortTimeout_Validate"));
			return;
		}
		P_THIS->ServerShortTimeout_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerCheckClientPossessionReliable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheckClientPossessionReliable_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerCheckClientPossessionReliable_Validate"));
			return;
		}
		P_THIS->ServerCheckClientPossessionReliable_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerCheckClientPossession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCheckClientPossession_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerCheckClientPossession_Validate"));
			return;
		}
		P_THIS->ServerCheckClientPossession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerSetSpectatorLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_NewLoc);
		P_GET_STRUCT(FRotator,Z_Param_NewRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetSpectatorLocation_Validate(Z_Param_NewLoc,Z_Param_NewRot))
		{
			RPC_ValidateFailed(TEXT("ServerSetSpectatorLocation_Validate"));
			return;
		}
		P_THIS->ServerSetSpectatorLocation_Implementation(Z_Param_NewLoc,Z_Param_NewRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerRestartPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerRestartPlayer_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerRestartPlayer_Validate"));
			return;
		}
		P_THIS->ServerRestartPlayer_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerPause_Validate())
		{
			RPC_ValidateFailed(TEXT("ServerPause_Validate"));
			return;
		}
		P_THIS->ServerPause_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerNotifyLoadedWorld)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WorldPackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerNotifyLoadedWorld_Validate(Z_Param_WorldPackageName))
		{
			RPC_ValidateFailed(TEXT("ServerNotifyLoadedWorld_Validate"));
			return;
		}
		P_THIS->ServerNotifyLoadedWorld_Implementation(Z_Param_WorldPackageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerChangeName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_S);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerChangeName_Validate(Z_Param_S))
		{
			RPC_ValidateFailed(TEXT("ServerChangeName_Validate"));
			return;
		}
		P_THIS->ServerChangeName_Implementation(Z_Param_S);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerCamera)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCamera_Validate(Z_Param_NewMode))
		{
			RPC_ValidateFailed(TEXT("ServerCamera_Validate"));
			return;
		}
		P_THIS->ServerCamera_Implementation(Z_Param_NewMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerAcknowledgePossession)
	{
		P_GET_OBJECT(APawn,Z_Param_P);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerAcknowledgePossession_Validate(Z_Param_P))
		{
			RPC_ValidateFailed(TEXT("ServerAcknowledgePossession_Validate"));
			return;
		}
		P_THIS->ServerAcknowledgePossession_Implementation(Z_Param_P);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientReceiveLocalizedMessage)
	{
		P_GET_OBJECT(UClass,Z_Param_Message);
		P_GET_PROPERTY(FIntProperty,Z_Param_Switch);
		P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_1);
		P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_2);
		P_GET_OBJECT(UObject,Z_Param_OptionalObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReceiveLocalizedMessage_Implementation(Z_Param_Message,Z_Param_Switch,Z_Param_RelatedPlayerState_1,Z_Param_RelatedPlayerState_2,Z_Param_OptionalObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientRetryClientRestart)
	{
		P_GET_OBJECT(APawn,Z_Param_NewPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientRetryClientRestart_Implementation(Z_Param_NewPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientEndOnlineSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEndOnlineSession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientStartOnlineSession)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStartOnlineSession_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientWasKicked)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_KickReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientWasKicked_Implementation(Z_Param_KickReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientUpdateMultipleLevelsStreamingStatus)
	{
		P_GET_TARRAY(FUpdateLevelStreamingLevelStatus,Z_Param_LevelStatuses);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateMultipleLevelsStreamingStatus_Implementation(Z_Param_LevelStatuses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientUpdateLevelStreamingStatus)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_GET_UBOOL(Z_Param_bNewShouldBeLoaded);
		P_GET_UBOOL(Z_Param_bNewShouldBeVisible);
		P_GET_UBOOL(Z_Param_bNewShouldBlockOnLoad);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUpdateLevelStreamingStatus_Implementation(Z_Param_PackageName,Z_Param_bNewShouldBeLoaded,Z_Param_bNewShouldBeVisible,Z_Param_bNewShouldBlockOnLoad,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientTravelInternal)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FByteProperty,Z_Param_TravelType);
		P_GET_UBOOL(Z_Param_bSeamless);
		P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientTravelInternal_Implementation(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientTravel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_GET_PROPERTY(FByteProperty,Z_Param_TravelType);
		P_GET_UBOOL(Z_Param_bSeamless);
		P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientTravel(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execResetControllerLightColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetControllerLightColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetControllerLightColor)
	{
		P_GET_STRUCT(FColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetControllerLightColor(Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetDisableHaptics)
	{
		P_GET_UBOOL(Z_Param_bNewDisabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableHaptics(Z_Param_bNewDisabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetHapticsByValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHapticsByValue(Z_Param_Frequency,Z_Param_Amplitude,EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execStopHapticEffect)
	{
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHapticEffect(EControllerHand(Z_Param_Hand));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execPlayHapticEffect)
	{
		P_GET_OBJECT(UHapticFeedbackEffect_Base,Z_Param_HapticEffect);
		P_GET_ENUM(EControllerHand,Z_Param_Hand);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_UBOOL(Z_Param_bLoop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand),Z_Param_Scale,Z_Param_bLoop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execTestServerLevelVisibilityChange)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_GET_PROPERTY(FNameProperty,Z_Param_FileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TestServerLevelVisibilityChange(Z_Param_PackageName,Z_Param_FileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execPlayDynamicForceFeedback)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bAffectsLeftLarge);
		P_GET_UBOOL(Z_Param_bAffectsLeftSmall);
		P_GET_UBOOL(Z_Param_bAffectsRightLarge);
		P_GET_UBOOL(Z_Param_bAffectsRightSmall);
		P_GET_PROPERTY(FByteProperty,Z_Param_Action);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayDynamicForceFeedback(Z_Param_Intensity,Z_Param_Duration,Z_Param_bAffectsLeftLarge,Z_Param_bAffectsLeftSmall,Z_Param_bAffectsRightLarge,Z_Param_bAffectsRightSmall,EDynamicForceFeedbackAction::Type(Z_Param_Action),Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientStopForceFeedback)
	{
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStopForceFeedback_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPlayForceFeedback_Internal)
	{
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_GET_STRUCT(FForceFeedbackParameters,Z_Param_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayForceFeedback_Internal_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execK2_ClientPlayForceFeedback)
	{
		P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_UBOOL(Z_Param_bLooping);
		P_GET_UBOOL(Z_Param_bIgnoreTimeDilation);
		P_GET_UBOOL(Z_Param_bPlayWhilePaused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_ClientPlayForceFeedback(Z_Param_ForceFeedbackEffect,Z_Param_Tag,Z_Param_bLooping,Z_Param_bIgnoreTimeDilation,Z_Param_bPlayWhilePaused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientStopCameraShakesFromSource)
	{
		P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStopCameraShakesFromSource(Z_Param_SourceComponent,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientStopCameraShake)
	{
		P_GET_OBJECT(UClass,Z_Param_Shake);
		P_GET_UBOOL(Z_Param_bImmediately);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStopCameraShake_Implementation(Z_Param_Shake,Z_Param_bImmediately);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientStopCameraAnim)
	{
		P_GET_OBJECT(UCameraAnim,Z_Param_AnimToStop);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientStopCameraAnim_Implementation(Z_Param_AnimToStop);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientClearCameraLensEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientClearCameraLensEffects_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSpawnCameraLensEffect)
	{
		P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSpawnCameraLensEffect_Implementation(Z_Param_LensEffectEmitterClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetViewTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_A);
		P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetViewTarget_Implementation(Z_Param_A,Z_Param_TransitionParams);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetMouseCursorWidget)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_Cursor);
		P_GET_OBJECT(UUserWidget,Z_Param_CursorWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseCursorWidget(EMouseCursor::Type(Z_Param_Cursor),Z_Param_CursorWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AHUD**)Z_Param__Result=P_THIS->GetHUD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetViewportSize)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetViewportSize(Z_Param_Out_SizeX,Z_Param_Out_SizeY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetHUD)
	{
		P_GET_OBJECT(UClass,Z_Param_NewHUDClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetHUD_Implementation(Z_Param_NewHUDClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetForceMipLevelsToBeResident)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForceDuration);
		P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetForceMipLevelsToBeResident_Implementation(Z_Param_Material,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetCinematicMode)
	{
		P_GET_UBOOL(Z_Param_bInCinematicMode);
		P_GET_UBOOL(Z_Param_bAffectsMovement);
		P_GET_UBOOL(Z_Param_bAffectsTurning);
		P_GET_UBOOL(Z_Param_bAffectsHUD);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetCinematicMode_Implementation(Z_Param_bInCinematicMode,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning,Z_Param_bAffectsHUD);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetCameraMode)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewCamMode);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetCameraMode_Implementation(Z_Param_NewCamMode);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetCameraFade)
	{
		P_GET_UBOOL(Z_Param_bEnableFading);
		P_GET_STRUCT(FColor,Z_Param_FadeColor);
		P_GET_STRUCT(FVector2D,Z_Param_FadeAlpha);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
		P_GET_UBOOL(Z_Param_bFadeAudio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetCameraFade_Implementation(Z_Param_bEnableFading,Z_Param_FadeColor,Z_Param_FadeAlpha,Z_Param_FadeTime,Z_Param_bFadeAudio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetBlockOnAsyncLoading)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetBlockOnAsyncLoading_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientRestart)
	{
		P_GET_OBJECT(APawn,Z_Param_NewPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientRestart_Implementation(Z_Param_NewPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPrestreamTextures)
	{
		P_GET_OBJECT(AActor,Z_Param_ForcedActor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForceDuration);
		P_GET_UBOOL(Z_Param_bEnableStreaming);
		P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPrestreamTextures_Implementation(Z_Param_ForcedActor,Z_Param_ForceDuration,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPrepareMapChange)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
		P_GET_UBOOL(Z_Param_bFirst);
		P_GET_UBOOL(Z_Param_bLast);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPrepareMapChange_Implementation(Z_Param_LevelName,Z_Param_bFirst,Z_Param_bLast);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPlaySoundAtLocation)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlaySoundAtLocation_Implementation(Z_Param_Sound,Z_Param_Location,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPlaySound)
	{
		P_GET_OBJECT(USoundBase,Z_Param_Sound);
		P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlaySound_Implementation(Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPlayCameraShakeFromSource)
	{
		P_GET_OBJECT(UClass,Z_Param_Shake);
		P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayCameraShakeFromSource(Z_Param_Shake,Z_Param_SourceComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPlayCameraShake)
	{
		P_GET_OBJECT(UClass,Z_Param_Shake);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FByteProperty,Z_Param_PlaySpace);
		P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayCameraShake_Implementation(Z_Param_Shake,Z_Param_Scale,ECameraAnimPlaySpace::Type(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientPlayCameraAnim)
	{
		P_GET_OBJECT(UCameraAnim,Z_Param_AnimToPlay);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Rate);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendInTime);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BlendOutTime);
		P_GET_UBOOL(Z_Param_bLoop);
		P_GET_UBOOL(Z_Param_bRandomStartTime);
		P_GET_PROPERTY(FByteProperty,Z_Param_Space);
		P_GET_STRUCT(FRotator,Z_Param_CustomPlaySpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientPlayCameraAnim_Implementation(Z_Param_AnimToPlay,Z_Param_Scale,Z_Param_Rate,Z_Param_BlendInTime,Z_Param_BlendOutTime,Z_Param_bLoop,Z_Param_bRandomStartTime,ECameraAnimPlaySpace::Type(Z_Param_Space),Z_Param_CustomPlaySpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_S);
		P_GET_PROPERTY(FNameProperty,Z_Param_Type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MsgLifeTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientMessage_Implementation(Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientIgnoreMoveInput)
	{
		P_GET_UBOOL(Z_Param_bIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientIgnoreMoveInput_Implementation(Z_Param_bIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientIgnoreLookInput)
	{
		P_GET_UBOOL(Z_Param_bIgnore);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientIgnoreLookInput_Implementation(Z_Param_bIgnore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientGotoState)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientGotoState_Implementation(Z_Param_NewState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientGameEnded)
	{
		P_GET_OBJECT(AActor,Z_Param_EndGameFocus);
		P_GET_UBOOL(Z_Param_bIsWinner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientGameEnded_Implementation(Z_Param_EndGameFocus,Z_Param_bIsWinner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientForceGarbageCollection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientForceGarbageCollection_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientFlushLevelStreaming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientFlushLevelStreaming_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientCommitMapChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCommitMapChange_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientCapBandwidth)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Cap);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCapBandwidth_Implementation(Z_Param_Cap);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientCancelPendingMapChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCancelPendingMapChange_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientAddTextureStreamingLoc)
	{
		P_GET_STRUCT(FVector,Z_Param_InLoc);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_GET_UBOOL(Z_Param_bOverrideLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientAddTextureStreamingLoc_Implementation(Z_Param_InLoc,Z_Param_Duration,Z_Param_bOverrideLocation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSendToConsole)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Command);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendToConsole(Z_Param_Command);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execConsoleKey)
	{
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConsoleKey(Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientUnmutePlayer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientUnmutePlayer_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientMutePlayer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientMutePlayer_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerUnmutePlayer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerUnmutePlayer_Validate(Z_Param_PlayerId))
		{
			RPC_ValidateFailed(TEXT("ServerUnmutePlayer_Validate"));
			return;
		}
		P_THIS->ServerUnmutePlayer_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerMutePlayer)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerMutePlayer_Validate(Z_Param_PlayerId))
		{
			RPC_ValidateFailed(TEXT("ServerMutePlayer_Validate"));
			return;
		}
		P_THIS->ServerMutePlayer_Implementation(Z_Param_PlayerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientVoiceHandshakeComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientVoiceHandshakeComplete_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execToggleSpeaking)
	{
		P_GET_UBOOL(Z_Param_bInSpeaking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleSpeaking(Z_Param_bInSpeaking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientEnableNetworkVoice)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEnableNetworkVoice_Implementation(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execStartFire)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FireModeNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartFire(Z_Param_FireModeNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetMouseLocation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_X);
		P_GET_PROPERTY(FIntProperty,Z_Param_Y);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMouseLocation(Z_Param_X,Z_Param_Y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execProjectWorldLocationToScreen)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldLocation);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenLocation);
		P_GET_UBOOL(Z_Param_bPlayerViewportRelative);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ProjectWorldLocationToScreen(Z_Param_WorldLocation,Z_Param_Out_ScreenLocation,Z_Param_bPlayerViewportRelative);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execDeprojectScreenPositionToWorld)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeprojectScreenPositionToWorld(Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execDeprojectMousePositionToWorld)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeprojectMousePositionToWorld(Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetHitResultUnderFingerForObjects)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderFingerForObjects(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetHitResultUnderFingerByChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderFingerByChannel(ETouchIndex::Type(Z_Param_FingerIndex),ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetHitResultUnderFinger)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderFinger(ETouchIndex::Type(Z_Param_FingerIndex),ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetHitResultUnderCursorForObjects)
	{
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderCursorForObjects(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetHitResultUnderCursorByChannel)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderCursorByChannel(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execGetHitResultUnderCursor)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
		P_GET_UBOOL(Z_Param_bTraceComplex);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderCursor(ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSwitchLevel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchLevel(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execSetName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_S);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetName(Z_Param_S);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execPause)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientRepObjRef)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientRepObjRef_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientReturnToMainMenuWithTextReason)
	{
		P_GET_PROPERTY(FTextProperty,Z_Param_ReturnReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReturnToMainMenuWithTextReason_Implementation(Z_Param_ReturnReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientReturnToMainMenu)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReturnReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReturnToMainMenu_Implementation(Z_Param_ReturnReason);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerExec)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerExec(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerExecRPC)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerExecRPC_Validate(Z_Param_Msg))
		{
			RPC_ValidateFailed(TEXT("ServerExecRPC_Validate"));
			return;
		}
		P_THIS->ServerExecRPC_Implementation(Z_Param_Msg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execLocalTravel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocalTravel(Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execRestartLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RestartLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execFOV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FOV(Z_Param_NewFOV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execEnableCheats)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableCheats();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execClientSetSpectatorWaiting)
	{
		P_GET_UBOOL(Z_Param_bWaiting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetSpectatorWaiting_Implementation(Z_Param_bWaiting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerController::execServerSetSpectatorWaiting)
	{
		P_GET_UBOOL(Z_Param_bWaiting);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerSetSpectatorWaiting_Validate(Z_Param_bWaiting))
		{
			RPC_ValidateFailed(TEXT("ServerSetSpectatorWaiting_Validate"));
			return;
		}
		P_THIS->ServerSetSpectatorWaiting_Implementation(Z_Param_bWaiting);
		P_NATIVE_END;
	}
	static FName NAME_APlayerController_ClientAddTextureStreamingLoc = FName(TEXT("ClientAddTextureStreamingLoc"));
	void APlayerController::ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation)
	{
		PlayerController_eventClientAddTextureStreamingLoc_Parms Parms;
		Parms.InLoc=InLoc;
		Parms.Duration=Duration;
		Parms.bOverrideLocation=bOverrideLocation ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientAddTextureStreamingLoc),&Parms);
	}
	static FName NAME_APlayerController_ClientCancelPendingMapChange = FName(TEXT("ClientCancelPendingMapChange"));
	void APlayerController::ClientCancelPendingMapChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientCancelPendingMapChange),NULL);
	}
	static FName NAME_APlayerController_ClientCapBandwidth = FName(TEXT("ClientCapBandwidth"));
	void APlayerController::ClientCapBandwidth(int32 Cap)
	{
		PlayerController_eventClientCapBandwidth_Parms Parms;
		Parms.Cap=Cap;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientCapBandwidth),&Parms);
	}
	static FName NAME_APlayerController_ClientClearCameraLensEffects = FName(TEXT("ClientClearCameraLensEffects"));
	void APlayerController::ClientClearCameraLensEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientClearCameraLensEffects),NULL);
	}
	static FName NAME_APlayerController_ClientCommitMapChange = FName(TEXT("ClientCommitMapChange"));
	void APlayerController::ClientCommitMapChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientCommitMapChange),NULL);
	}
	static FName NAME_APlayerController_ClientEnableNetworkVoice = FName(TEXT("ClientEnableNetworkVoice"));
	void APlayerController::ClientEnableNetworkVoice(bool bEnable)
	{
		PlayerController_eventClientEnableNetworkVoice_Parms Parms;
		Parms.bEnable=bEnable ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientEnableNetworkVoice),&Parms);
	}
	static FName NAME_APlayerController_ClientEndOnlineSession = FName(TEXT("ClientEndOnlineSession"));
	void APlayerController::ClientEndOnlineSession()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientEndOnlineSession),NULL);
	}
	static FName NAME_APlayerController_ClientFlushLevelStreaming = FName(TEXT("ClientFlushLevelStreaming"));
	void APlayerController::ClientFlushLevelStreaming()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientFlushLevelStreaming),NULL);
	}
	static FName NAME_APlayerController_ClientForceGarbageCollection = FName(TEXT("ClientForceGarbageCollection"));
	void APlayerController::ClientForceGarbageCollection()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientForceGarbageCollection),NULL);
	}
	static FName NAME_APlayerController_ClientGameEnded = FName(TEXT("ClientGameEnded"));
	void APlayerController::ClientGameEnded(AActor* EndGameFocus, bool bIsWinner)
	{
		PlayerController_eventClientGameEnded_Parms Parms;
		Parms.EndGameFocus=EndGameFocus;
		Parms.bIsWinner=bIsWinner ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientGameEnded),&Parms);
	}
	static FName NAME_APlayerController_ClientGotoState = FName(TEXT("ClientGotoState"));
	void APlayerController::ClientGotoState(FName NewState)
	{
		PlayerController_eventClientGotoState_Parms Parms;
		Parms.NewState=NewState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientGotoState),&Parms);
	}
	static FName NAME_APlayerController_ClientIgnoreLookInput = FName(TEXT("ClientIgnoreLookInput"));
	void APlayerController::ClientIgnoreLookInput(bool bIgnore)
	{
		PlayerController_eventClientIgnoreLookInput_Parms Parms;
		Parms.bIgnore=bIgnore ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientIgnoreLookInput),&Parms);
	}
	static FName NAME_APlayerController_ClientIgnoreMoveInput = FName(TEXT("ClientIgnoreMoveInput"));
	void APlayerController::ClientIgnoreMoveInput(bool bIgnore)
	{
		PlayerController_eventClientIgnoreMoveInput_Parms Parms;
		Parms.bIgnore=bIgnore ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientIgnoreMoveInput),&Parms);
	}
	static FName NAME_APlayerController_ClientMessage = FName(TEXT("ClientMessage"));
	void APlayerController::ClientMessage(const FString& S, FName Type, float MsgLifeTime)
	{
		PlayerController_eventClientMessage_Parms Parms;
		Parms.S=S;
		Parms.Type=Type;
		Parms.MsgLifeTime=MsgLifeTime;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientMessage),&Parms);
	}
	static FName NAME_APlayerController_ClientMutePlayer = FName(TEXT("ClientMutePlayer"));
	void APlayerController::ClientMutePlayer(FUniqueNetIdRepl PlayerId)
	{
		PlayerController_eventClientMutePlayer_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientMutePlayer),&Parms);
	}
	static FName NAME_APlayerController_ClientPlayCameraAnim = FName(TEXT("ClientPlayCameraAnim"));
	void APlayerController::ClientPlayCameraAnim(UCameraAnim* AnimToPlay, float Scale, float Rate, float BlendInTime, float BlendOutTime, bool bLoop, bool bRandomStartTime, ECameraAnimPlaySpace::Type Space, FRotator CustomPlaySpace)
	{
		PlayerController_eventClientPlayCameraAnim_Parms Parms;
		Parms.AnimToPlay=AnimToPlay;
		Parms.Scale=Scale;
		Parms.Rate=Rate;
		Parms.BlendInTime=BlendInTime;
		Parms.BlendOutTime=BlendOutTime;
		Parms.bLoop=bLoop ? true : false;
		Parms.bRandomStartTime=bRandomStartTime ? true : false;
		Parms.Space=Space;
		Parms.CustomPlaySpace=CustomPlaySpace;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlayCameraAnim),&Parms);
	}
	static FName NAME_APlayerController_ClientPlayCameraShake = FName(TEXT("ClientPlayCameraShake"));
	void APlayerController::ClientPlayCameraShake(TSubclassOf<UCameraShake>  Shake, float Scale, ECameraAnimPlaySpace::Type PlaySpace, FRotator UserPlaySpaceRot)
	{
		PlayerController_eventClientPlayCameraShake_Parms Parms;
		Parms.Shake=Shake;
		Parms.Scale=Scale;
		Parms.PlaySpace=PlaySpace;
		Parms.UserPlaySpaceRot=UserPlaySpaceRot;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlayCameraShake),&Parms);
	}
	static FName NAME_APlayerController_ClientPlayForceFeedback_Internal = FName(TEXT("ClientPlayForceFeedback_Internal"));
	void APlayerController::ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params)
	{
		PlayerController_eventClientPlayForceFeedback_Internal_Parms Parms;
		Parms.ForceFeedbackEffect=ForceFeedbackEffect;
		Parms.Params=Params;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlayForceFeedback_Internal),&Parms);
	}
	static FName NAME_APlayerController_ClientPlaySound = FName(TEXT("ClientPlaySound"));
	void APlayerController::ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier)
	{
		PlayerController_eventClientPlaySound_Parms Parms;
		Parms.Sound=Sound;
		Parms.VolumeMultiplier=VolumeMultiplier;
		Parms.PitchMultiplier=PitchMultiplier;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlaySound),&Parms);
	}
	static FName NAME_APlayerController_ClientPlaySoundAtLocation = FName(TEXT("ClientPlaySoundAtLocation"));
	void APlayerController::ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier)
	{
		PlayerController_eventClientPlaySoundAtLocation_Parms Parms;
		Parms.Sound=Sound;
		Parms.Location=Location;
		Parms.VolumeMultiplier=VolumeMultiplier;
		Parms.PitchMultiplier=PitchMultiplier;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlaySoundAtLocation),&Parms);
	}
	static FName NAME_APlayerController_ClientPrepareMapChange = FName(TEXT("ClientPrepareMapChange"));
	void APlayerController::ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast)
	{
		PlayerController_eventClientPrepareMapChange_Parms Parms;
		Parms.LevelName=LevelName;
		Parms.bFirst=bFirst ? true : false;
		Parms.bLast=bLast ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPrepareMapChange),&Parms);
	}
	static FName NAME_APlayerController_ClientPrestreamTextures = FName(TEXT("ClientPrestreamTextures"));
	void APlayerController::ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups)
	{
		PlayerController_eventClientPrestreamTextures_Parms Parms;
		Parms.ForcedActor=ForcedActor;
		Parms.ForceDuration=ForceDuration;
		Parms.bEnableStreaming=bEnableStreaming ? true : false;
		Parms.CinematicTextureGroups=CinematicTextureGroups;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPrestreamTextures),&Parms);
	}
	static FName NAME_APlayerController_ClientReceiveLocalizedMessage = FName(TEXT("ClientReceiveLocalizedMessage"));
	void APlayerController::ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage>  Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject)
	{
		PlayerController_eventClientReceiveLocalizedMessage_Parms Parms;
		Parms.Message=Message;
		Parms.Switch=Switch;
		Parms.RelatedPlayerState_1=RelatedPlayerState_1;
		Parms.RelatedPlayerState_2=RelatedPlayerState_2;
		Parms.OptionalObject=OptionalObject;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientReceiveLocalizedMessage),&Parms);
	}
	static FName NAME_APlayerController_ClientRepObjRef = FName(TEXT("ClientRepObjRef"));
	void APlayerController::ClientRepObjRef(UObject* Object)
	{
		PlayerController_eventClientRepObjRef_Parms Parms;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRepObjRef),&Parms);
	}
	static FName NAME_APlayerController_ClientReset = FName(TEXT("ClientReset"));
	void APlayerController::ClientReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientReset),NULL);
	}
	static FName NAME_APlayerController_ClientRestart = FName(TEXT("ClientRestart"));
	void APlayerController::ClientRestart(APawn* NewPawn)
	{
		PlayerController_eventClientRestart_Parms Parms;
		Parms.NewPawn=NewPawn;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRestart),&Parms);
	}
	static FName NAME_APlayerController_ClientRetryClientRestart = FName(TEXT("ClientRetryClientRestart"));
	void APlayerController::ClientRetryClientRestart(APawn* NewPawn)
	{
		PlayerController_eventClientRetryClientRestart_Parms Parms;
		Parms.NewPawn=NewPawn;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRetryClientRestart),&Parms);
	}
	static FName NAME_APlayerController_ClientReturnToMainMenu = FName(TEXT("ClientReturnToMainMenu"));
	void APlayerController::ClientReturnToMainMenu(const FString& ReturnReason)
	{
		PlayerController_eventClientReturnToMainMenu_Parms Parms;
		Parms.ReturnReason=ReturnReason;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientReturnToMainMenu),&Parms);
	}
	static FName NAME_APlayerController_ClientReturnToMainMenuWithTextReason = FName(TEXT("ClientReturnToMainMenuWithTextReason"));
	void APlayerController::ClientReturnToMainMenuWithTextReason(FText const& ReturnReason)
	{
		PlayerController_eventClientReturnToMainMenuWithTextReason_Parms Parms;
		Parms.ReturnReason=ReturnReason;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientReturnToMainMenuWithTextReason),&Parms);
	}
	static FName NAME_APlayerController_ClientSetBlockOnAsyncLoading = FName(TEXT("ClientSetBlockOnAsyncLoading"));
	void APlayerController::ClientSetBlockOnAsyncLoading()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetBlockOnAsyncLoading),NULL);
	}
	static FName NAME_APlayerController_ClientSetCameraFade = FName(TEXT("ClientSetCameraFade"));
	void APlayerController::ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio)
	{
		PlayerController_eventClientSetCameraFade_Parms Parms;
		Parms.bEnableFading=bEnableFading ? true : false;
		Parms.FadeColor=FadeColor;
		Parms.FadeAlpha=FadeAlpha;
		Parms.FadeTime=FadeTime;
		Parms.bFadeAudio=bFadeAudio ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetCameraFade),&Parms);
	}
	static FName NAME_APlayerController_ClientSetCameraMode = FName(TEXT("ClientSetCameraMode"));
	void APlayerController::ClientSetCameraMode(FName NewCamMode)
	{
		PlayerController_eventClientSetCameraMode_Parms Parms;
		Parms.NewCamMode=NewCamMode;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetCameraMode),&Parms);
	}
	static FName NAME_APlayerController_ClientSetCinematicMode = FName(TEXT("ClientSetCinematicMode"));
	void APlayerController::ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD)
	{
		PlayerController_eventClientSetCinematicMode_Parms Parms;
		Parms.bInCinematicMode=bInCinematicMode ? true : false;
		Parms.bAffectsMovement=bAffectsMovement ? true : false;
		Parms.bAffectsTurning=bAffectsTurning ? true : false;
		Parms.bAffectsHUD=bAffectsHUD ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetCinematicMode),&Parms);
	}
	static FName NAME_APlayerController_ClientSetForceMipLevelsToBeResident = FName(TEXT("ClientSetForceMipLevelsToBeResident"));
	void APlayerController::ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups)
	{
		PlayerController_eventClientSetForceMipLevelsToBeResident_Parms Parms;
		Parms.Material=Material;
		Parms.ForceDuration=ForceDuration;
		Parms.CinematicTextureGroups=CinematicTextureGroups;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetForceMipLevelsToBeResident),&Parms);
	}
	static FName NAME_APlayerController_ClientSetHUD = FName(TEXT("ClientSetHUD"));
	void APlayerController::ClientSetHUD(TSubclassOf<AHUD>  NewHUDClass)
	{
		PlayerController_eventClientSetHUD_Parms Parms;
		Parms.NewHUDClass=NewHUDClass;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetHUD),&Parms);
	}
	static FName NAME_APlayerController_ClientSetSpectatorWaiting = FName(TEXT("ClientSetSpectatorWaiting"));
	void APlayerController::ClientSetSpectatorWaiting(bool bWaiting)
	{
		PlayerController_eventClientSetSpectatorWaiting_Parms Parms;
		Parms.bWaiting=bWaiting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetSpectatorWaiting),&Parms);
	}
	static FName NAME_APlayerController_ClientSetViewTarget = FName(TEXT("ClientSetViewTarget"));
	void APlayerController::ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams)
	{
		PlayerController_eventClientSetViewTarget_Parms Parms;
		Parms.A=A;
		Parms.TransitionParams=TransitionParams;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetViewTarget),&Parms);
	}
	static FName NAME_APlayerController_ClientSpawnCameraLensEffect = FName(TEXT("ClientSpawnCameraLensEffect"));
	void APlayerController::ClientSpawnCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase>  LensEffectEmitterClass)
	{
		PlayerController_eventClientSpawnCameraLensEffect_Parms Parms;
		Parms.LensEffectEmitterClass=LensEffectEmitterClass;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSpawnCameraLensEffect),&Parms);
	}
	static FName NAME_APlayerController_ClientStartOnlineSession = FName(TEXT("ClientStartOnlineSession"));
	void APlayerController::ClientStartOnlineSession()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStartOnlineSession),NULL);
	}
	static FName NAME_APlayerController_ClientStopCameraAnim = FName(TEXT("ClientStopCameraAnim"));
	void APlayerController::ClientStopCameraAnim(UCameraAnim* AnimToStop)
	{
		PlayerController_eventClientStopCameraAnim_Parms Parms;
		Parms.AnimToStop=AnimToStop;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStopCameraAnim),&Parms);
	}
	static FName NAME_APlayerController_ClientStopCameraShake = FName(TEXT("ClientStopCameraShake"));
	void APlayerController::ClientStopCameraShake(TSubclassOf<UCameraShake>  Shake, bool bImmediately)
	{
		PlayerController_eventClientStopCameraShake_Parms Parms;
		Parms.Shake=Shake;
		Parms.bImmediately=bImmediately ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStopCameraShake),&Parms);
	}
	static FName NAME_APlayerController_ClientStopForceFeedback = FName(TEXT("ClientStopForceFeedback"));
	void APlayerController::ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag)
	{
		PlayerController_eventClientStopForceFeedback_Parms Parms;
		Parms.ForceFeedbackEffect=ForceFeedbackEffect;
		Parms.Tag=Tag;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStopForceFeedback),&Parms);
	}
	static FName NAME_APlayerController_ClientTeamMessage = FName(TEXT("ClientTeamMessage"));
	void APlayerController::ClientTeamMessage(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime)
	{
		PlayerController_eventClientTeamMessage_Parms Parms;
		Parms.SenderPlayerState=SenderPlayerState;
		Parms.S=S;
		Parms.Type=Type;
		Parms.MsgLifeTime=MsgLifeTime;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientTeamMessage),&Parms);
	}
	static FName NAME_APlayerController_ClientTravelInternal = FName(TEXT("ClientTravelInternal"));
	void APlayerController::ClientTravelInternal(const FString& URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid)
	{
		PlayerController_eventClientTravelInternal_Parms Parms;
		Parms.URL=URL;
		Parms.TravelType=TravelType;
		Parms.bSeamless=bSeamless ? true : false;
		Parms.MapPackageGuid=MapPackageGuid;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientTravelInternal),&Parms);
	}
	static FName NAME_APlayerController_ClientUnmutePlayer = FName(TEXT("ClientUnmutePlayer"));
	void APlayerController::ClientUnmutePlayer(FUniqueNetIdRepl PlayerId)
	{
		PlayerController_eventClientUnmutePlayer_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientUnmutePlayer),&Parms);
	}
	static FName NAME_APlayerController_ClientUpdateLevelStreamingStatus = FName(TEXT("ClientUpdateLevelStreamingStatus"));
	void APlayerController::ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex)
	{
		PlayerController_eventClientUpdateLevelStreamingStatus_Parms Parms;
		Parms.PackageName=PackageName;
		Parms.bNewShouldBeLoaded=bNewShouldBeLoaded ? true : false;
		Parms.bNewShouldBeVisible=bNewShouldBeVisible ? true : false;
		Parms.bNewShouldBlockOnLoad=bNewShouldBlockOnLoad ? true : false;
		Parms.LODIndex=LODIndex;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientUpdateLevelStreamingStatus),&Parms);
	}
	static FName NAME_APlayerController_ClientUpdateMultipleLevelsStreamingStatus = FName(TEXT("ClientUpdateMultipleLevelsStreamingStatus"));
	void APlayerController::ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus> const& LevelStatuses)
	{
		PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms Parms;
		Parms.LevelStatuses=LevelStatuses;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientUpdateMultipleLevelsStreamingStatus),&Parms);
	}
	static FName NAME_APlayerController_ClientVoiceHandshakeComplete = FName(TEXT("ClientVoiceHandshakeComplete"));
	void APlayerController::ClientVoiceHandshakeComplete()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientVoiceHandshakeComplete),NULL);
	}
	static FName NAME_APlayerController_ClientWasKicked = FName(TEXT("ClientWasKicked"));
	void APlayerController::ClientWasKicked(FText const& KickReason)
	{
		PlayerController_eventClientWasKicked_Parms Parms;
		Parms.KickReason=KickReason;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientWasKicked),&Parms);
	}
	static FName NAME_APlayerController_OnServerStartedVisualLogger = FName(TEXT("OnServerStartedVisualLogger"));
	void APlayerController::OnServerStartedVisualLogger(bool bIsLogging)
	{
		PlayerController_eventOnServerStartedVisualLogger_Parms Parms;
		Parms.bIsLogging=bIsLogging ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_OnServerStartedVisualLogger),&Parms);
	}
	static FName NAME_APlayerController_ServerAcknowledgePossession = FName(TEXT("ServerAcknowledgePossession"));
	void APlayerController::ServerAcknowledgePossession(APawn* P)
	{
		PlayerController_eventServerAcknowledgePossession_Parms Parms;
		Parms.P=P;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerAcknowledgePossession),&Parms);
	}
	static FName NAME_APlayerController_ServerCamera = FName(TEXT("ServerCamera"));
	void APlayerController::ServerCamera(FName NewMode)
	{
		PlayerController_eventServerCamera_Parms Parms;
		Parms.NewMode=NewMode;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerCamera),&Parms);
	}
	static FName NAME_APlayerController_ServerChangeName = FName(TEXT("ServerChangeName"));
	void APlayerController::ServerChangeName(const FString& S)
	{
		PlayerController_eventServerChangeName_Parms Parms;
		Parms.S=S;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerChangeName),&Parms);
	}
	static FName NAME_APlayerController_ServerCheckClientPossession = FName(TEXT("ServerCheckClientPossession"));
	void APlayerController::ServerCheckClientPossession()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerCheckClientPossession),NULL);
	}
	static FName NAME_APlayerController_ServerCheckClientPossessionReliable = FName(TEXT("ServerCheckClientPossessionReliable"));
	void APlayerController::ServerCheckClientPossessionReliable()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerCheckClientPossessionReliable),NULL);
	}
	static FName NAME_APlayerController_ServerExecRPC = FName(TEXT("ServerExecRPC"));
	void APlayerController::ServerExecRPC(const FString& Msg)
	{
		PlayerController_eventServerExecRPC_Parms Parms;
		Parms.Msg=Msg;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerExecRPC),&Parms);
	}
	static FName NAME_APlayerController_ServerMutePlayer = FName(TEXT("ServerMutePlayer"));
	void APlayerController::ServerMutePlayer(FUniqueNetIdRepl PlayerId)
	{
		PlayerController_eventServerMutePlayer_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerMutePlayer),&Parms);
	}
	static FName NAME_APlayerController_ServerNotifyLoadedWorld = FName(TEXT("ServerNotifyLoadedWorld"));
	void APlayerController::ServerNotifyLoadedWorld(FName WorldPackageName)
	{
		PlayerController_eventServerNotifyLoadedWorld_Parms Parms;
		Parms.WorldPackageName=WorldPackageName;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerNotifyLoadedWorld),&Parms);
	}
	static FName NAME_APlayerController_ServerPause = FName(TEXT("ServerPause"));
	void APlayerController::ServerPause()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerPause),NULL);
	}
	static FName NAME_APlayerController_ServerRestartPlayer = FName(TEXT("ServerRestartPlayer"));
	void APlayerController::ServerRestartPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerRestartPlayer),NULL);
	}
	static FName NAME_APlayerController_ServerSetSpectatorLocation = FName(TEXT("ServerSetSpectatorLocation"));
	void APlayerController::ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot)
	{
		PlayerController_eventServerSetSpectatorLocation_Parms Parms;
		Parms.NewLoc=NewLoc;
		Parms.NewRot=NewRot;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerSetSpectatorLocation),&Parms);
	}
	static FName NAME_APlayerController_ServerSetSpectatorWaiting = FName(TEXT("ServerSetSpectatorWaiting"));
	void APlayerController::ServerSetSpectatorWaiting(bool bWaiting)
	{
		PlayerController_eventServerSetSpectatorWaiting_Parms Parms;
		Parms.bWaiting=bWaiting ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerSetSpectatorWaiting),&Parms);
	}
	static FName NAME_APlayerController_ServerShortTimeout = FName(TEXT("ServerShortTimeout"));
	void APlayerController::ServerShortTimeout()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerShortTimeout),NULL);
	}
	static FName NAME_APlayerController_ServerToggleAILogging = FName(TEXT("ServerToggleAILogging"));
	void APlayerController::ServerToggleAILogging()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerToggleAILogging),NULL);
	}
	static FName NAME_APlayerController_ServerUnmutePlayer = FName(TEXT("ServerUnmutePlayer"));
	void APlayerController::ServerUnmutePlayer(FUniqueNetIdRepl PlayerId)
	{
		PlayerController_eventServerUnmutePlayer_Parms Parms;
		Parms.PlayerId=PlayerId;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUnmutePlayer),&Parms);
	}
	static FName NAME_APlayerController_ServerUpdateCamera = FName(TEXT("ServerUpdateCamera"));
	void APlayerController::ServerUpdateCamera(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw)
	{
		PlayerController_eventServerUpdateCamera_Parms Parms;
		Parms.CamLoc=CamLoc;
		Parms.CamPitchAndYaw=CamPitchAndYaw;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUpdateCamera),&Parms);
	}
	static FName NAME_APlayerController_ServerUpdateLevelVisibility = FName(TEXT("ServerUpdateLevelVisibility"));
	void APlayerController::ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo const& LevelVisibility)
	{
		PlayerController_eventServerUpdateLevelVisibility_Parms Parms;
		Parms.LevelVisibility=LevelVisibility;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUpdateLevelVisibility),&Parms);
	}
	static FName NAME_APlayerController_ServerUpdateMultipleLevelsVisibility = FName(TEXT("ServerUpdateMultipleLevelsVisibility"));
	void APlayerController::ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo> const& LevelVisibilities)
	{
		PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms Parms;
		Parms.LevelVisibilities=LevelVisibilities;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUpdateMultipleLevelsVisibility),&Parms);
	}
	static FName NAME_APlayerController_ServerVerifyViewTarget = FName(TEXT("ServerVerifyViewTarget"));
	void APlayerController::ServerVerifyViewTarget()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerVerifyViewTarget),NULL);
	}
	static FName NAME_APlayerController_ServerViewNextPlayer = FName(TEXT("ServerViewNextPlayer"));
	void APlayerController::ServerViewNextPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerViewNextPlayer),NULL);
	}
	static FName NAME_APlayerController_ServerViewPrevPlayer = FName(TEXT("ServerViewPrevPlayer"));
	void APlayerController::ServerViewPrevPlayer()
	{
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerViewPrevPlayer),NULL);
	}
	static FName NAME_APlayerController_ServerViewSelf = FName(TEXT("ServerViewSelf"));
	void APlayerController::ServerViewSelf(FViewTargetTransitionParams TransitionParams)
	{
		PlayerController_eventServerViewSelf_Parms Parms;
		Parms.TransitionParams=TransitionParams;
		ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerViewSelf),&Parms);
	}
	void APlayerController::StaticRegisterNativesAPlayerController()
	{
		UClass* Class = APlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateTouchInterface", &APlayerController::execActivateTouchInterface },
			{ "AddPitchInput", &APlayerController::execAddPitchInput },
			{ "AddRollInput", &APlayerController::execAddRollInput },
			{ "AddYawInput", &APlayerController::execAddYawInput },
			{ "Camera", &APlayerController::execCamera },
			{ "CanRestartPlayer", &APlayerController::execCanRestartPlayer },
			{ "ClearAudioListenerAttenuationOverride", &APlayerController::execClearAudioListenerAttenuationOverride },
			{ "ClearAudioListenerOverride", &APlayerController::execClearAudioListenerOverride },
			{ "ClientAddTextureStreamingLoc", &APlayerController::execClientAddTextureStreamingLoc },
			{ "ClientCancelPendingMapChange", &APlayerController::execClientCancelPendingMapChange },
			{ "ClientCapBandwidth", &APlayerController::execClientCapBandwidth },
			{ "ClientClearCameraLensEffects", &APlayerController::execClientClearCameraLensEffects },
			{ "ClientCommitMapChange", &APlayerController::execClientCommitMapChange },
			{ "ClientEnableNetworkVoice", &APlayerController::execClientEnableNetworkVoice },
			{ "ClientEndOnlineSession", &APlayerController::execClientEndOnlineSession },
			{ "ClientFlushLevelStreaming", &APlayerController::execClientFlushLevelStreaming },
			{ "ClientForceGarbageCollection", &APlayerController::execClientForceGarbageCollection },
			{ "ClientGameEnded", &APlayerController::execClientGameEnded },
			{ "ClientGotoState", &APlayerController::execClientGotoState },
			{ "ClientIgnoreLookInput", &APlayerController::execClientIgnoreLookInput },
			{ "ClientIgnoreMoveInput", &APlayerController::execClientIgnoreMoveInput },
			{ "ClientMessage", &APlayerController::execClientMessage },
			{ "ClientMutePlayer", &APlayerController::execClientMutePlayer },
			{ "ClientPlayCameraAnim", &APlayerController::execClientPlayCameraAnim },
			{ "ClientPlayCameraShake", &APlayerController::execClientPlayCameraShake },
			{ "ClientPlayCameraShakeFromSource", &APlayerController::execClientPlayCameraShakeFromSource },
			{ "ClientPlayForceFeedback_Internal", &APlayerController::execClientPlayForceFeedback_Internal },
			{ "ClientPlaySound", &APlayerController::execClientPlaySound },
			{ "ClientPlaySoundAtLocation", &APlayerController::execClientPlaySoundAtLocation },
			{ "ClientPrepareMapChange", &APlayerController::execClientPrepareMapChange },
			{ "ClientPrestreamTextures", &APlayerController::execClientPrestreamTextures },
			{ "ClientReceiveLocalizedMessage", &APlayerController::execClientReceiveLocalizedMessage },
			{ "ClientRepObjRef", &APlayerController::execClientRepObjRef },
			{ "ClientReset", &APlayerController::execClientReset },
			{ "ClientRestart", &APlayerController::execClientRestart },
			{ "ClientRetryClientRestart", &APlayerController::execClientRetryClientRestart },
			{ "ClientReturnToMainMenu", &APlayerController::execClientReturnToMainMenu },
			{ "ClientReturnToMainMenuWithTextReason", &APlayerController::execClientReturnToMainMenuWithTextReason },
			{ "ClientSetBlockOnAsyncLoading", &APlayerController::execClientSetBlockOnAsyncLoading },
			{ "ClientSetCameraFade", &APlayerController::execClientSetCameraFade },
			{ "ClientSetCameraMode", &APlayerController::execClientSetCameraMode },
			{ "ClientSetCinematicMode", &APlayerController::execClientSetCinematicMode },
			{ "ClientSetForceMipLevelsToBeResident", &APlayerController::execClientSetForceMipLevelsToBeResident },
			{ "ClientSetHUD", &APlayerController::execClientSetHUD },
			{ "ClientSetSpectatorWaiting", &APlayerController::execClientSetSpectatorWaiting },
			{ "ClientSetViewTarget", &APlayerController::execClientSetViewTarget },
			{ "ClientSpawnCameraLensEffect", &APlayerController::execClientSpawnCameraLensEffect },
			{ "ClientStartOnlineSession", &APlayerController::execClientStartOnlineSession },
			{ "ClientStopCameraAnim", &APlayerController::execClientStopCameraAnim },
			{ "ClientStopCameraShake", &APlayerController::execClientStopCameraShake },
			{ "ClientStopCameraShakesFromSource", &APlayerController::execClientStopCameraShakesFromSource },
			{ "ClientStopForceFeedback", &APlayerController::execClientStopForceFeedback },
			{ "ClientTeamMessage", &APlayerController::execClientTeamMessage },
			{ "ClientTravel", &APlayerController::execClientTravel },
			{ "ClientTravelInternal", &APlayerController::execClientTravelInternal },
			{ "ClientUnmutePlayer", &APlayerController::execClientUnmutePlayer },
			{ "ClientUpdateLevelStreamingStatus", &APlayerController::execClientUpdateLevelStreamingStatus },
			{ "ClientUpdateMultipleLevelsStreamingStatus", &APlayerController::execClientUpdateMultipleLevelsStreamingStatus },
			{ "ClientVoiceHandshakeComplete", &APlayerController::execClientVoiceHandshakeComplete },
			{ "ClientWasKicked", &APlayerController::execClientWasKicked },
			{ "ConsoleKey", &APlayerController::execConsoleKey },
			{ "DeprojectMousePositionToWorld", &APlayerController::execDeprojectMousePositionToWorld },
			{ "DeprojectScreenPositionToWorld", &APlayerController::execDeprojectScreenPositionToWorld },
			{ "EnableCheats", &APlayerController::execEnableCheats },
			{ "FOV", &APlayerController::execFOV },
			{ "GetFocalLocation", &APlayerController::execGetFocalLocation },
			{ "GetHitResultUnderCursor", &APlayerController::execGetHitResultUnderCursor },
			{ "GetHitResultUnderCursorByChannel", &APlayerController::execGetHitResultUnderCursorByChannel },
			{ "GetHitResultUnderCursorForObjects", &APlayerController::execGetHitResultUnderCursorForObjects },
			{ "GetHitResultUnderFinger", &APlayerController::execGetHitResultUnderFinger },
			{ "GetHitResultUnderFingerByChannel", &APlayerController::execGetHitResultUnderFingerByChannel },
			{ "GetHitResultUnderFingerForObjects", &APlayerController::execGetHitResultUnderFingerForObjects },
			{ "GetHUD", &APlayerController::execGetHUD },
			{ "GetInputAnalogKeyState", &APlayerController::execGetInputAnalogKeyState },
			{ "GetInputAnalogStickState", &APlayerController::execGetInputAnalogStickState },
			{ "GetInputKeyTimeDown", &APlayerController::execGetInputKeyTimeDown },
			{ "GetInputMotionState", &APlayerController::execGetInputMotionState },
			{ "GetInputMouseDelta", &APlayerController::execGetInputMouseDelta },
			{ "GetInputTouchState", &APlayerController::execGetInputTouchState },
			{ "GetInputVectorKeyState", &APlayerController::execGetInputVectorKeyState },
			{ "GetMousePosition", &APlayerController::execGetMousePosition },
			{ "GetSpectatorPawn", &APlayerController::execGetSpectatorPawn },
			{ "GetViewportSize", &APlayerController::execGetViewportSize },
			{ "IsInputKeyDown", &APlayerController::execIsInputKeyDown },
			{ "K2_ClientPlayForceFeedback", &APlayerController::execK2_ClientPlayForceFeedback },
			{ "LocalTravel", &APlayerController::execLocalTravel },
			{ "OnServerStartedVisualLogger", &APlayerController::execOnServerStartedVisualLogger },
			{ "Pause", &APlayerController::execPause },
			{ "PlayDynamicForceFeedback", &APlayerController::execPlayDynamicForceFeedback },
			{ "PlayHapticEffect", &APlayerController::execPlayHapticEffect },
			{ "ProjectWorldLocationToScreen", &APlayerController::execProjectWorldLocationToScreen },
			{ "ResetControllerLightColor", &APlayerController::execResetControllerLightColor },
			{ "RestartLevel", &APlayerController::execRestartLevel },
			{ "SendToConsole", &APlayerController::execSendToConsole },
			{ "ServerAcknowledgePossession", &APlayerController::execServerAcknowledgePossession },
			{ "ServerCamera", &APlayerController::execServerCamera },
			{ "ServerChangeName", &APlayerController::execServerChangeName },
			{ "ServerCheckClientPossession", &APlayerController::execServerCheckClientPossession },
			{ "ServerCheckClientPossessionReliable", &APlayerController::execServerCheckClientPossessionReliable },
			{ "ServerExec", &APlayerController::execServerExec },
			{ "ServerExecRPC", &APlayerController::execServerExecRPC },
			{ "ServerMutePlayer", &APlayerController::execServerMutePlayer },
			{ "ServerNotifyLoadedWorld", &APlayerController::execServerNotifyLoadedWorld },
			{ "ServerPause", &APlayerController::execServerPause },
			{ "ServerRestartPlayer", &APlayerController::execServerRestartPlayer },
			{ "ServerSetSpectatorLocation", &APlayerController::execServerSetSpectatorLocation },
			{ "ServerSetSpectatorWaiting", &APlayerController::execServerSetSpectatorWaiting },
			{ "ServerShortTimeout", &APlayerController::execServerShortTimeout },
			{ "ServerToggleAILogging", &APlayerController::execServerToggleAILogging },
			{ "ServerUnmutePlayer", &APlayerController::execServerUnmutePlayer },
			{ "ServerUpdateCamera", &APlayerController::execServerUpdateCamera },
			{ "ServerUpdateLevelVisibility", &APlayerController::execServerUpdateLevelVisibility },
			{ "ServerUpdateMultipleLevelsVisibility", &APlayerController::execServerUpdateMultipleLevelsVisibility },
			{ "ServerVerifyViewTarget", &APlayerController::execServerVerifyViewTarget },
			{ "ServerViewNextPlayer", &APlayerController::execServerViewNextPlayer },
			{ "ServerViewPrevPlayer", &APlayerController::execServerViewPrevPlayer },
			{ "ServerViewSelf", &APlayerController::execServerViewSelf },
			{ "SetAudioListenerAttenuationOverride", &APlayerController::execSetAudioListenerAttenuationOverride },
			{ "SetAudioListenerOverride", &APlayerController::execSetAudioListenerOverride },
			{ "SetCinematicMode", &APlayerController::execSetCinematicMode },
			{ "SetControllerLightColor", &APlayerController::execSetControllerLightColor },
			{ "SetDisableHaptics", &APlayerController::execSetDisableHaptics },
			{ "SetHapticsByValue", &APlayerController::execSetHapticsByValue },
			{ "SetMouseCursorWidget", &APlayerController::execSetMouseCursorWidget },
			{ "SetMouseLocation", &APlayerController::execSetMouseLocation },
			{ "SetName", &APlayerController::execSetName },
			{ "SetViewTargetWithBlend", &APlayerController::execSetViewTargetWithBlend },
			{ "SetVirtualJoystickVisibility", &APlayerController::execSetVirtualJoystickVisibility },
			{ "StartFire", &APlayerController::execStartFire },
			{ "StopHapticEffect", &APlayerController::execStopHapticEffect },
			{ "SwitchLevel", &APlayerController::execSwitchLevel },
			{ "TestServerLevelVisibilityChange", &APlayerController::execTestServerLevelVisibilityChange },
			{ "ToggleSpeaking", &APlayerController::execToggleSpeaking },
			{ "WasInputKeyJustPressed", &APlayerController::execWasInputKeyJustPressed },
			{ "WasInputKeyJustReleased", &APlayerController::execWasInputKeyJustReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics
	{
		struct PlayerController_eventActivateTouchInterface_Parms
		{
			UTouchInterface* NewTouchInterface;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewTouchInterface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::NewProp_NewTouchInterface = { "NewTouchInterface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventActivateTouchInterface_Parms, NewTouchInterface), Z_Construct_UClass_UTouchInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::NewProp_NewTouchInterface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Activates a new touch interface for this player controller */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Activates a new touch interface for this player controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ActivateTouchInterface", nullptr, nullptr, sizeof(PlayerController_eventActivateTouchInterface_Parms), Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ActivateTouchInterface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_AddPitchInput_Statics
	{
		struct PlayerController_eventAddPitchInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventAddPitchInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Add Pitch (look up) input. This value is multiplied by InputPitchScale.\n\x09 * @param Val Amount to add to Pitch. This value is multiplied by InputPitchScale.\n\x09 */" },
		{ "Keywords", "up down" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Add Pitch (look up) input. This value is multiplied by InputPitchScale.\n@param Val Amount to add to Pitch. This value is multiplied by InputPitchScale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "AddPitchInput", nullptr, nullptr, sizeof(PlayerController_eventAddPitchInput_Parms), Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_AddPitchInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_AddRollInput_Statics
	{
		struct PlayerController_eventAddRollInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_AddRollInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventAddRollInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_AddRollInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_AddRollInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Add Roll input. This value is multiplied by InputRollScale.\n\x09 * @param Val Amount to add to Roll. This value is multiplied by InputRollScale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Add Roll input. This value is multiplied by InputRollScale.\n@param Val Amount to add to Roll. This value is multiplied by InputRollScale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_AddRollInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "AddRollInput", nullptr, nullptr, sizeof(PlayerController_eventAddRollInput_Parms), Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_AddRollInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_AddRollInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_AddYawInput_Statics
	{
		struct PlayerController_eventAddYawInput_Parms
		{
			float Val;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Val;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_AddYawInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventAddYawInput_Parms, Val), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_AddYawInput_Statics::NewProp_Val,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_AddYawInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Add Yaw (turn) input. This value is multiplied by InputYawScale.\n\x09 * @param Val Amount to add to Yaw. This value is multiplied by InputYawScale.\n\x09 */" },
		{ "Keywords", "left right turn" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Add Yaw (turn) input. This value is multiplied by InputYawScale.\n@param Val Amount to add to Yaw. This value is multiplied by InputYawScale." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_AddYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "AddYawInput", nullptr, nullptr, sizeof(PlayerController_eventAddYawInput_Parms), Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_AddYawInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_AddYawInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_Camera_Statics
	{
		struct PlayerController_eventCamera_Parms
		{
			FName NewMode;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_Camera_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventCamera_Parms, NewMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_Camera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_Camera_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_Camera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Change Camera mode\n\x09 * @param\x09New camera mode to set\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Change Camera mode\n@param       New camera mode to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_Camera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "Camera", nullptr, nullptr, sizeof(PlayerController_eventCamera_Parms), Z_Construct_UFunction_APlayerController_Camera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_Camera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_Camera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_Camera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_Camera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_Camera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics
	{
		struct PlayerController_eventCanRestartPlayer_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventCanRestartPlayer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventCanRestartPlayer_Parms), &Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "Comment", "/** Returns true if this controller thinks it's able to restart. Called from GameModeBase::PlayerCanRestart */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if this controller thinks it's able to restart. Called from GameModeBase::PlayerCanRestart" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "CanRestartPlayer", nullptr, nullptr, sizeof(PlayerController_eventCanRestartPlayer_Parms), Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_CanRestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClearAudioListenerAttenuationOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "Comment", "/**\n\x09 * Clear any overrides that have been applied to audio listener\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Clear any overrides that have been applied to audio listener" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClearAudioListenerOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics
	{
		static void NewProp_bOverrideLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation_SetBit(void* Obj)
	{
		((PlayerController_eventClientAddTextureStreamingLoc_Parms*)Obj)->bOverrideLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation = { "bOverrideLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientAddTextureStreamingLoc_Parms), &Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientAddTextureStreamingLoc_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_InLoc = { "InLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientAddTextureStreamingLoc_Parms, InLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_InLoc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Adds a location to the texture streaming system for the specified duration. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Adds a location to the texture streaming system for the specified duration." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientAddTextureStreamingLoc", nullptr, nullptr, sizeof(PlayerController_eventClientAddTextureStreamingLoc_Parms), Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Tells client to cancel any pending map change. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells client to cancel any pending map change." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientCancelPendingMapChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Cap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::NewProp_Cap = { "Cap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientCapBandwidth_Parms, Cap), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::NewProp_Cap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set CurrentNetSpeed to the lower of its current value and Cap. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set CurrentNetSpeed to the lower of its current value and Cap." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientCapBandwidth", nullptr, nullptr, sizeof(PlayerController_eventClientCapBandwidth_Parms), Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientCapBandwidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Removes all Camera Lens Effects. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Removes all Camera Lens Effects." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientClearCameraLensEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Actually performs the level transition prepared by PrepareMapChange(). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Actually performs the level transition prepared by PrepareMapChange()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientCommitMapChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientCommitMapChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics
	{
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((PlayerController_eventClientEnableNetworkVoice_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientEnableNetworkVoice_Parms), &Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Tell the client to enable or disable voice chat (not muting)\n\x09 * @param bEnable enable or disable voice chat\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to enable or disable voice chat (not muting)\n@param bEnable enable or disable voice chat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientEnableNetworkVoice", nullptr, nullptr, sizeof(PlayerController_eventClientEnableNetworkVoice_Parms), Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client that the session is about to start */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify client that the session is about to start" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientEndOnlineSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientEndOnlineSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tells the client to block until all pending level streaming actions are complete\n\x09 * happens at the end of the tick\n\x09 * primarily used to force update the client ASAP at join time\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the client to block until all pending level streaming actions are complete\nhappens at the end of the tick\nprimarily used to force update the client ASAP at join time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientFlushLevelStreaming", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Forces GC at the end of the tick on the client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Forces GC at the end of the tick on the client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientForceGarbageCollection", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics
	{
		static void NewProp_bIsWinner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsWinner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndGameFocus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner_SetBit(void* Obj)
	{
		((PlayerController_eventClientGameEnded_Parms*)Obj)->bIsWinner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner = { "bIsWinner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientGameEnded_Parms), &Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_EndGameFocus = { "EndGameFocus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientGameEnded_Parms, EndGameFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_EndGameFocus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Replicated function called by GameHasEnded().\n\x09 * @param\x09""EndGameFocus - actor to view with camera\n\x09 * @param\x09""bIsWinner - true if this controller is on winning team\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated function called by GameHasEnded().\n@param       EndGameFocus - actor to view with camera\n@param       bIsWinner - true if this controller is on winning team" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientGameEnded", nullptr, nullptr, sizeof(PlayerController_eventClientGameEnded_Parms), Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientGameEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientGotoState_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientGotoState_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Server uses this to force client into NewState .\n\x09 * @Note ALL STATE NAMES NEED TO BE DEFINED IN name table in UnrealNames.h to be correctly replicated (so they are mapped to the same thing on client and server).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Server uses this to force client into NewState .\n@Note ALL STATE NAMES NEED TO BE DEFINED IN name table in UnrealNames.h to be correctly replicated (so they are mapped to the same thing on client and server)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientGotoState", nullptr, nullptr, sizeof(PlayerController_eventClientGotoState_Parms), Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientGotoState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics
	{
		static void NewProp_bIgnore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore_SetBit(void* Obj)
	{
		((PlayerController_eventClientIgnoreLookInput_Parms*)Obj)->bIgnore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore = { "bIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientIgnoreLookInput_Parms), &Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calls IgnoreLookInput on client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Calls IgnoreLookInput on client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientIgnoreLookInput", nullptr, nullptr, sizeof(PlayerController_eventClientIgnoreLookInput_Parms), Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics
	{
		static void NewProp_bIgnore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore_SetBit(void* Obj)
	{
		((PlayerController_eventClientIgnoreMoveInput_Parms*)Obj)->bIgnore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore = { "bIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientIgnoreMoveInput_Parms), &Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Calls IgnoreMoveInput on client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Calls IgnoreMoveInput on client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientIgnoreMoveInput", nullptr, nullptr, sizeof(PlayerController_eventClientIgnoreMoveInput_Parms), Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientMessage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MsgLifeTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_MsgLifeTime = { "MsgLifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientMessage_Parms, MsgLifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientMessage_Parms, Type), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientMessage_Parms, S), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_S_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_S_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_MsgLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_S,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Outputs a message to HUD\n\x09 * @param S - message to display\n\x09 * @param Type - @todo document\n\x09 * @param MsgLifeTime - Optional length of time to display 0 = default time\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Outputs a message to HUD\n@param S - message to display\n@param Type - @todo document\n@param MsgLifeTime - Optional length of time to display 0 = default time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientMessage", nullptr, nullptr, sizeof(PlayerController_eventClientMessage_Parms), Z_Construct_UFunction_APlayerController_ClientMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientMutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to mute a player for this controller\n\x09 * @param PlayerId player id to mute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to mute a player for this controller\n@param PlayerId player id to mute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientMutePlayer", nullptr, nullptr, sizeof(PlayerController_eventClientMutePlayer_Parms), Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientMutePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomPlaySpace;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Space;
		static void NewProp_bRandomStartTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomStartTime;
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendInTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Rate;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_CustomPlaySpace = { "CustomPlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraAnim_Parms, CustomPlaySpace), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraAnim_Parms, Space), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bRandomStartTime_SetBit(void* Obj)
	{
		((PlayerController_eventClientPlayCameraAnim_Parms*)Obj)->bRandomStartTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bRandomStartTime = { "bRandomStartTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientPlayCameraAnim_Parms), &Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bRandomStartTime_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((PlayerController_eventClientPlayCameraAnim_Parms*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientPlayCameraAnim_Parms), &Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraAnim_Parms, BlendOutTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_BlendInTime = { "BlendInTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraAnim_Parms, BlendInTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_Rate = { "Rate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraAnim_Parms, Rate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraAnim_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_AnimToPlay = { "AnimToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraAnim_Parms, AnimToPlay), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_CustomPlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bRandomStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_BlendInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_Rate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::NewProp_AnimToPlay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Play the indicated CameraAnim on this camera.\n\x09 * @param AnimToPlay - Camera animation to play\n\x09 * @param Scale - \"Intensity\" scalar.  This is the scale at which the anim was first played.\n\x09 * @param Rate -  Multiplier for playback rate.  1.0 = normal.\n\x09 * @param BlendInTime - Time to interpolate in from zero, for smooth starts\n\x09 * @param BlendOutTime - Time to interpolate out to zero, for smooth finishes\n\x09 * @param bLoop - True if the animation should loop, false otherwise\n\x09 * @param bRandomStartTime - Whether or not to choose a random time to start playing.  Only really makes sense for bLoop = true\n\x09 * @param Space - Animation play area\n\x09 * @param CustomPlaySpace - Matrix used when Space = CAPS_UserDefined\n\x09 */" },
		{ "CPP_Default_BlendInTime", "0.000000" },
		{ "CPP_Default_BlendOutTime", "0.000000" },
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_bRandomStartTime", "false" },
		{ "CPP_Default_CustomPlaySpace", "" },
		{ "CPP_Default_Rate", "1.000000" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_Space", "CameraLocal" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play the indicated CameraAnim on this camera.\n@param AnimToPlay - Camera animation to play\n@param Scale - \"Intensity\" scalar.  This is the scale at which the anim was first played.\n@param Rate -  Multiplier for playback rate.  1.0 = normal.\n@param BlendInTime - Time to interpolate in from zero, for smooth starts\n@param BlendOutTime - Time to interpolate out to zero, for smooth finishes\n@param bLoop - True if the animation should loop, false otherwise\n@param bRandomStartTime - Whether or not to choose a random time to start playing.  Only really makes sense for bLoop = true\n@param Space - Animation play area\n@param CustomPlaySpace - Matrix used when Space = CAPS_UserDefined" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlayCameraAnim", nullptr, nullptr, sizeof(PlayerController_eventClientPlayCameraAnim_Parms), Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlaySpace;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Shake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraAnimPlaySpace, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraShake_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraShake_Parms, Shake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_UserPlaySpaceRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_PlaySpace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::NewProp_Shake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Play Camera Shake \n\x09 * @param Shake - Camera shake animation to play\n\x09 * @param Scale - Scalar defining how \"intense\" to play the anim\n\x09 * @param PlaySpace - Which coordinate system to play the shake in (used for CameraAnims within the shake).\n\x09 * @param UserPlaySpaceRot - Matrix used when PlaySpace = CAPS_UserDefined\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play Camera Shake\n@param Shake - Camera shake animation to play\n@param Scale - Scalar defining how \"intense\" to play the anim\n@param PlaySpace - Which coordinate system to play the shake in (used for CameraAnims within the shake).\n@param UserPlaySpaceRot - Matrix used when PlaySpace = CAPS_UserDefined" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlayCameraShake", nullptr, nullptr, sizeof(PlayerController_eventClientPlayCameraShake_Parms), Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPlayCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlayCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics
	{
		struct PlayerController_eventClientPlayCameraShakeFromSource_Parms
		{
			TSubclassOf<UCameraShake>  Shake;
			UCameraShakeSourceComponent* SourceComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Shake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraShakeFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::NewProp_SourceComponent_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayCameraShakeFromSource_Parms, Shake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::NewProp_Shake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Play Camera Shake localized to a given source\n\x09 * @param Shake - Camera shake animation to play\n\x09 * @param SourceComponent - The source from which the camera shakes originates\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play Camera Shake localized to a given source\n@param Shake - Camera shake animation to play\n@param SourceComponent - The source from which the camera shakes originates" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlayCameraShakeFromSource", nullptr, nullptr, sizeof(PlayerController_eventClientPlayCameraShakeFromSource_Parms), Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayForceFeedback_Internal_Parms, Params), Z_Construct_UScriptStruct_FForceFeedbackParameters, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlayForceFeedback_Internal_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_Params,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Internal replicated version of client play force feedback event. \n\x09 * Cannot be named ClientPlayForceFeedback as redirector for blueprint function version to K2_... does not work in that case\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Internal replicated version of client play force feedback event.\nCannot be named ClientPlayForceFeedback as redirector for blueprint function version to K2_... does not work in that case" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlayForceFeedback_Internal", nullptr, nullptr, sizeof(PlayerController_eventClientPlayForceFeedback_Internal_Parms), Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C41, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySound_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySound_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Play sound client-side (so only the client will hear it)\n\x09 * @param Sound\x09- Sound to play\n\x09 * @param VolumeMultiplier - Volume multiplier to apply to the sound\n\x09 * @param PitchMultiplier - Pitch multiplier to apply to the sound\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play sound client-side (so only the client will hear it)\n@param Sound - Sound to play\n@param VolumeMultiplier - Volume multiplier to apply to the sound\n@param PitchMultiplier - Pitch multiplier to apply to the sound" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlaySound", nullptr, nullptr, sizeof(PlayerController_eventClientPlaySound_Parms), Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPlaySound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_PitchMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_VolumeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Sound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Play sound client-side at the specified location\n\x09 * @param Sound\x09- Sound to play\n\x09 * @param Location - Location to play the sound at\n\x09 * @param VolumeMultiplier - Volume multiplier to apply to the sound\n\x09 * @param PitchMultiplier - Pitch multiplier to apply to the sound\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play sound client-side at the specified location\n@param Sound - Sound to play\n@param Location - Location to play the sound at\n@param VolumeMultiplier - Volume multiplier to apply to the sound\n@param PitchMultiplier - Pitch multiplier to apply to the sound" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlaySoundAtLocation", nullptr, nullptr, sizeof(PlayerController_eventClientPlaySoundAtLocation_Parms), Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics
	{
		static void NewProp_bLast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLast;
		static void NewProp_bFirst_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirst;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LevelName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast_SetBit(void* Obj)
	{
		((PlayerController_eventClientPrepareMapChange_Parms*)Obj)->bLast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast = { "bLast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientPrepareMapChange_Parms), &Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst_SetBit(void* Obj)
	{
		((PlayerController_eventClientPrepareMapChange_Parms*)Obj)->bFirst = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst = { "bFirst", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientPrepareMapChange_Parms), &Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPrepareMapChange_Parms, LevelName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_LevelName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Asynchronously loads the given level in preparation for a streaming map transition.\n\x09 * the server sends one function per level name since dynamic arrays can't be replicated\n\x09 * @param LevelNames - the names of the level packages to load. LevelNames[0] will be the new persistent (primary) level\n\x09 * @param bFirst - whether this is the first item in the list (so clear the list first)\n\x09 * @param bLast - whether this is the last item in the list (so start preparing the change after receiving it)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Asynchronously loads the given level in preparation for a streaming map transition.\nthe server sends one function per level name since dynamic arrays can't be replicated\n@param LevelNames - the names of the level packages to load. LevelNames[0] will be the new persistent (primary) level\n@param bFirst - whether this is the first item in the list (so clear the list first)\n@param bLast - whether this is the last item in the list (so start preparing the change after receiving it)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPrepareMapChange", nullptr, nullptr, sizeof(PlayerController_eventClientPrepareMapChange_Parms), Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPrepareMapChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
		static void NewProp_bEnableStreaming_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableStreaming;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForcedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit(void* Obj)
	{
		((PlayerController_eventClientPrestreamTextures_Parms*)Obj)->bEnableStreaming = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming = { "bEnableStreaming", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientPrestreamTextures_Parms), &Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForceDuration = { "ForceDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPrestreamTextures_Parms, ForceDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForcedActor = { "ForcedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientPrestreamTextures_Parms, ForcedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_CinematicTextureGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForcedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Forces the streaming system to disregard the normal logic for the specified duration and\n\x09 * instead always load all mip-levels for all textures used by the specified actor.\n\x09 * @param ForcedActor\x09\x09- The actor whose textures should be forced into memory.\n\x09 * @param ForceDuration\x09\x09- Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n\x09 * @param bEnableStreaming\x09- Whether to start (true) or stop (false) streaming\n\x09 * @param CinematicTextureGroups\x09- Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Forces the streaming system to disregard the normal logic for the specified duration and\ninstead always load all mip-levels for all textures used by the specified actor.\n@param ForcedActor           - The actor whose textures should be forced into memory.\n@param ForceDuration         - Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n@param bEnableStreaming      - Whether to start (true) or stop (false) streaming\n@param CinematicTextureGroups        - Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPrestreamTextures", nullptr, nullptr, sizeof(PlayerController_eventClientPrestreamTextures_Parms), Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientPrestreamTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_2;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Switch;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_2 = { "RelatedPlayerState_2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, RelatedPlayerState_2), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_1 = { "RelatedPlayerState_1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, RelatedPlayerState_1), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, Switch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, Message), Z_Construct_UClass_ULocalMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_OptionalObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** send client localized message id */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "send client localized message id" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientReceiveLocalizedMessage", nullptr, nullptr, sizeof(PlayerController_eventClientReceiveLocalizedMessage_Parms), Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientRepObjRef_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Development RPC for testing object reference replication */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Development RPC for testing object reference replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRepObjRef", nullptr, nullptr, sizeof(PlayerController_eventClientRepObjRef_Parms), Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientRepObjRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientReset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Tell client to reset the PlayerController */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell client to reset the PlayerController" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientRestart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientRestart_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientRestart_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRestart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRestart_Statics::NewProp_NewPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientRestart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Tell client to restart the level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell client to restart the level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRestart", nullptr, nullptr, sizeof(PlayerController_eventClientRestart_Parms), Z_Construct_UFunction_APlayerController_ClientRestart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRestart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientRestart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientRetryClientRestart_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::NewProp_NewPawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Assign Pawn to player, but avoid calling ClientRestart if we have already accepted this pawn */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Assign Pawn to player, but avoid calling ClientRestart if we have already accepted this pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRetryClientRestart", nullptr, nullptr, sizeof(PlayerController_eventClientRetryClientRestart_Parms), Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientRetryClientRestart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::NewProp_ReturnReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::NewProp_ReturnReason = { "ReturnReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientReturnToMainMenu_Parms, ReturnReason), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::NewProp_ReturnReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::NewProp_ReturnReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::NewProp_ReturnReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientReturnToMainMenu", nullptr, nullptr, sizeof(PlayerController_eventClientReturnToMainMenu_Parms), Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::NewProp_ReturnReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::NewProp_ReturnReason = { "ReturnReason", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientReturnToMainMenuWithTextReason_Parms, ReturnReason), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::NewProp_ReturnReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::NewProp_ReturnReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::NewProp_ReturnReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Return the client to the main menu gracefully */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Return the client to the main menu gracefully" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientReturnToMainMenuWithTextReason", nullptr, nullptr, sizeof(PlayerController_eventClientReturnToMainMenuWithTextReason_Parms), Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Tells the client to block until all pending level streaming actions are complete.\n\x09 * Happens at the end of the tick primarily used to force update the client ASAP at join time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the client to block until all pending level streaming actions are complete.\nHappens at the end of the tick primarily used to force update the client ASAP at join time." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetBlockOnAsyncLoading", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics
	{
		static void NewProp_bFadeAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeAlpha;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FadeColor;
		static void NewProp_bEnableFading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableFading;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio_SetBit(void* Obj)
	{
		((PlayerController_eventClientSetCameraFade_Parms*)Obj)->bFadeAudio = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio = { "bFadeAudio", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCameraFade_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraFade_Parms, FadeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeAlpha = { "FadeAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraFade_Parms, FadeAlpha), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeColor = { "FadeColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraFade_Parms, FadeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading_SetBit(void* Obj)
	{
		((PlayerController_eventClientSetCameraFade_Parms*)Obj)->bEnableFading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading = { "bEnableFading", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCameraFade_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell client to fade camera\n\x09 * @Param bEnableFading - true if we should apply FadeColor/FadeAmount to the screen\n\x09 * @Param FadeColor - Color to fade to\n\x09 * @Param FadeAlpha - Amount of fading to apply\n\x09 * @Param FadeTime - length of time for fade to occur over\n\x09 * @Param bFadeAudio - true to apply fading of audio alongside the video\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell client to fade camera\n@Param bEnableFading - true if we should apply FadeColor/FadeAmount to the screen\n@Param FadeColor - Color to fade to\n@Param FadeAlpha - Amount of fading to apply\n@Param FadeTime - length of time for fade to occur over\n@Param bFadeAudio - true to apply fading of audio alongside the video" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetCameraFade", nullptr, nullptr, sizeof(PlayerController_eventClientSetCameraFade_Parms), Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetCameraFade()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewCamMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::NewProp_NewCamMode = { "NewCamMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraMode_Parms, NewCamMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::NewProp_NewCamMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicated function to set camera style on client\n\x09 * @param\x09NewCamMode, name defining the new camera mode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated function to set camera style on client\n@param       NewCamMode, name defining the new camera mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetCameraMode", nullptr, nullptr, sizeof(PlayerController_eventClientSetCameraMode_Parms), Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetCameraMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics
	{
		static void NewProp_bAffectsHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsHUD;
		static void NewProp_bAffectsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsTurning;
		static void NewProp_bAffectsMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsMovement;
		static void NewProp_bInCinematicMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCinematicMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit(void* Obj)
	{
		((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bAffectsHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD = { "bAffectsHUD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit(void* Obj)
	{
		((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bAffectsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning = { "bAffectsTurning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit(void* Obj)
	{
		((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bAffectsMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement = { "bAffectsMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit(void* Obj)
	{
		((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bInCinematicMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode = { "bInCinematicMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called by the server to synchronize cinematic transitions with the client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called by the server to synchronize cinematic transitions with the client" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetCinematicMode", nullptr, nullptr, sizeof(PlayerController_eventClientSetCinematicMode_Parms), Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetCinematicMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration = { "ForceDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms, ForceDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Forces the streaming system to disregard the normal logic for the specified duration and\n\x09 * instead always load all mip-levels for all textures used by the specified material.\n\x09 *\n\x09 * @param Material\x09\x09- The material whose textures should be forced into memory.\n\x09 * @param ForceDuration\x09- Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n\x09 * @param CinematicTextureGroups\x09- Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Forces the streaming system to disregard the normal logic for the specified duration and\ninstead always load all mip-levels for all textures used by the specified material.\n\n@param Material              - The material whose textures should be forced into memory.\n@param ForceDuration - Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n@param CinematicTextureGroups        - Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetForceMipLevelsToBeResident", nullptr, nullptr, sizeof(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms), Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_NewHUDClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::NewProp_NewHUDClass = { "NewHUDClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetHUD_Parms, NewHUDClass), Z_Construct_UClass_AHUD_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::NewProp_NewHUDClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Set the client's class of HUD and spawns a new instance of it. If there was already a HUD active, it is destroyed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the client's class of HUD and spawns a new instance of it. If there was already a HUD active, it is destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetHUD", nullptr, nullptr, sizeof(PlayerController_eventClientSetHUD_Parms), Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics
	{
		static void NewProp_bWaiting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaiting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit(void* Obj)
	{
		((PlayerController_eventClientSetSpectatorWaiting_Parms*)Obj)->bWaiting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting = { "bWaiting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientSetSpectatorWaiting_Parms), &Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Indicate that the Spectator is waiting to join/respawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Indicate that the Spectator is waiting to join/respawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetSpectatorWaiting", nullptr, nullptr, sizeof(PlayerController_eventClientSetSpectatorWaiting_Parms), Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_A;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetViewTarget_Parms, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSetViewTarget_Parms, A), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_TransitionParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_A,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set the view target\n\x09 * @param A - new actor to set as view target\n\x09 * @param TransitionParams - parameters to use for controlling the transition\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the view target\n@param A - new actor to set as view target\n@param TransitionParams - parameters to use for controlling the transition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetViewTarget", nullptr, nullptr, sizeof(PlayerController_eventClientSetViewTarget_Parms), Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSetViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics
	{
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LensEffectEmitterClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::NewProp_LensEffectEmitterClass = { "LensEffectEmitterClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientSpawnCameraLensEffect_Parms, LensEffectEmitterClass), Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::NewProp_LensEffectEmitterClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Spawn a camera lens effect (e.g. blood). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Spawn a camera lens effect (e.g. blood)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSpawnCameraLensEffect", nullptr, nullptr, sizeof(PlayerController_eventClientSpawnCameraLensEffect_Parms), Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client that the session is starting */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify client that the session is starting" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStartOnlineSession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientStartOnlineSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimToStop;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::NewProp_AnimToStop = { "AnimToStop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientStopCameraAnim_Parms, AnimToStop), Z_Construct_UClass_UCameraAnim_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::NewProp_AnimToStop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Stop camera animation on client. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stop camera animation on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStopCameraAnim", nullptr, nullptr, sizeof(PlayerController_eventClientStopCameraAnim_Parms), Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientStopCameraAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStopCameraAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics
	{
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Shake;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((PlayerController_eventClientStopCameraShake_Parms*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientStopCameraShake_Parms), &Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientStopCameraShake_Parms, Shake), Z_Construct_UClass_UCameraShake_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_Shake,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Stop camera shake on client.  */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stop camera shake on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStopCameraShake", nullptr, nullptr, sizeof(PlayerController_eventClientStopCameraShake_Parms), Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientStopCameraShake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics
	{
		struct PlayerController_eventClientStopCameraShakesFromSource_Parms
		{
			UCameraShakeSourceComponent* SourceComponent;
			bool bImmediately;
		};
		static void NewProp_bImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately_SetBit(void* Obj)
	{
		((PlayerController_eventClientStopCameraShakesFromSource_Parms*)Obj)->bImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientStopCameraShakesFromSource_Parms), &Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientStopCameraShakesFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_SourceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_SourceComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Stop camera shake on client.  */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stop camera shake on client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStopCameraShakesFromSource", nullptr, nullptr, sizeof(PlayerController_eventClientStopCameraShakesFromSource_Parms), Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientStopForceFeedback_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientStopForceFeedback_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Stops a playing force feedback pattern\n\x09 * @param\x09""ForceFeedbackEffect\x09\x09If set only patterns from that effect will be stopped\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09If not none only the pattern with this tag will be stopped\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stops a playing force feedback pattern\n@param       ForceFeedbackEffect             If set only patterns from that effect will be stopped\n@param       Tag                                             If not none only the pattern with this tag will be stopped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStopForceFeedback", nullptr, nullptr, sizeof(PlayerController_eventClientStopForceFeedback_Parms), Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientStopForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MsgLifeTime;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenderPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_MsgLifeTime = { "MsgLifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, MsgLifeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, Type), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, S), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_S_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_S_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_SenderPlayerState = { "SenderPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, SenderPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_MsgLifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_S,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_SenderPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientTeamMessage", nullptr, nullptr, sizeof(PlayerController_eventClientTeamMessage_Parms), Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientTeamMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientTravel_Statics
	{
		struct PlayerController_eventClientTravel_Parms
		{
			FString URL;
			TEnumAsByte<ETravelType> TravelType;
			bool bSeamless;
			FGuid MapPackageGuid;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapPackageGuid;
		static void NewProp_bSeamless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeamless;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TravelType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_MapPackageGuid = { "MapPackageGuid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTravel_Parms, MapPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless_SetBit(void* Obj)
	{
		((PlayerController_eventClientTravel_Parms*)Obj)->bSeamless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless = { "bSeamless", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientTravel_Parms), &Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_TravelType = { "TravelType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTravel_Parms, TravelType), Z_Construct_UEnum_Engine_ETravelType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTravel_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_MapPackageGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_TravelType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientTravel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Travel to a different map or IP address. Calls the PreClientTravel event before doing anything.\n\x09 * NOTE: This is implemented as a locally executed wrapper for ClientTravelInternal, to avoid API compatability breakage\n\x09 *\n\x09 * @param URL\x09\x09\x09\x09""A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n\x09 * @param TravelType \x09\x09specifies whether the client should append URL options used in previous travels; if true is specified\n\x09 *\x09\x09\x09\x09\x09\x09\x09""for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n\x09 * @param bSeamless\x09\x09\x09Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n\x09 * @param MapPackageGuid\x09The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n\x09 * \x09\x09\x09\x09\x09\x09\x09so it is only needed for clients\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Travel to a different map or IP address. Calls the PreClientTravel event before doing anything.\nNOTE: This is implemented as a locally executed wrapper for ClientTravelInternal, to avoid API compatability breakage\n\n@param URL                           A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n@param TravelType            specifies whether the client should append URL options used in previous travels; if true is specified\n                                                     for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n@param bSeamless                     Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n@param MapPackageGuid        The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n                                                     so it is only needed for clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientTravel", nullptr, nullptr, sizeof(PlayerController_eventClientTravel_Parms), Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MapPackageGuid;
		static void NewProp_bSeamless_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSeamless;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TravelType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_MapPackageGuid = { "MapPackageGuid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTravelInternal_Parms, MapPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless_SetBit(void* Obj)
	{
		((PlayerController_eventClientTravelInternal_Parms*)Obj)->bSeamless = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless = { "bSeamless", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientTravelInternal_Parms), &Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_TravelType = { "TravelType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTravelInternal_Parms, TravelType), Z_Construct_UEnum_Engine_ETravelType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientTravelInternal_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_MapPackageGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_TravelType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Internal clientside implementation of ClientTravel - use ClientTravel to call this\n\x09 *\n\x09 * @param URL\x09\x09\x09\x09""A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n\x09 * @param TravelType \x09\x09specifies whether the client should append URL options used in previous travels; if true is specified\n\x09 *\x09\x09\x09\x09\x09\x09\x09""for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n\x09 * @param bSeamless\x09\x09\x09Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n\x09 * @param MapPackageGuid\x09The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n\x09 * \x09\x09\x09\x09\x09\x09\x09so it is only needed for clients\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Internal clientside implementation of ClientTravel - use ClientTravel to call this\n\n@param URL                           A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n@param TravelType            specifies whether the client should append URL options used in previous travels; if true is specified\n                                                     for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n@param bSeamless                     Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n@param MapPackageGuid        The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n                                                     so it is only needed for clients" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientTravelInternal", nullptr, nullptr, sizeof(PlayerController_eventClientTravelInternal_Parms), Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientTravelInternal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientUnmutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to unmute a player for this controller\n\x09 * @param PlayerId player id to unmute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to unmute a player for this controller\n@param PlayerId player id to unmute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientUnmutePlayer", nullptr, nullptr, sizeof(PlayerController_eventClientUnmutePlayer_Parms), Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientUnmutePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static void NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBlockOnLoad;
		static void NewProp_bNewShouldBeVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeVisible;
		static void NewProp_bNewShouldBeLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeLoaded;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientUpdateLevelStreamingStatus_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj)
	{
		((PlayerController_eventClientUpdateLevelStreamingStatus_Parms*)Obj)->bNewShouldBlockOnLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad = { "bNewShouldBlockOnLoad", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible_SetBit(void* Obj)
	{
		((PlayerController_eventClientUpdateLevelStreamingStatus_Parms*)Obj)->bNewShouldBeVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible = { "bNewShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit(void* Obj)
	{
		((PlayerController_eventClientUpdateLevelStreamingStatus_Parms*)Obj)->bNewShouldBeLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded = { "bNewShouldBeLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientUpdateLevelStreamingStatus_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicated Update streaming status\n\x09 * @param PackageName - Name of the level package name used for loading.\n\x09 * @param bNewShouldBeLoaded - Whether the level should be loaded\n\x09 * @param bNewShouldBeVisible - Whether the level should be visible if it is loaded\x09\n\x09 * @param bNewShouldBlockOnLoad - Whether we want to force a blocking load\n\x09 * @param LODIndex\x09\x09\x09\x09- Current LOD index for a streaming level\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated Update streaming status\n@param PackageName - Name of the level package name used for loading.\n@param bNewShouldBeLoaded - Whether the level should be loaded\n@param bNewShouldBeVisible - Whether the level should be visible if it is loaded\n@param bNewShouldBlockOnLoad - Whether we want to force a blocking load\n@param LODIndex                              - Current LOD index for a streaming level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientUpdateLevelStreamingStatus", nullptr, nullptr, sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelStatuses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelStatuses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelStatuses_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses = { "LevelStatuses", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms, LevelStatuses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses_Inner = { "LevelStatuses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicated Update streaming status.  This version allows for the streaming state of many levels to be sent in a single RPC.\n\x09 * @param LevelStatuses\x09The list of levels the client should have either streamed in or not, depending on state.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated Update streaming status.  This version allows for the streaming state of many levels to be sent in a single RPC.\n@param LevelStatuses The list of levels the client should have either streamed in or not, depending on state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientUpdateMultipleLevelsStreamingStatus", nullptr, nullptr, sizeof(PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms), Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tells the client that the server has all the information it needs and that it\n\x09 * is ok to start sending voice packets. The server will already send voice packets\n\x09 * when this function is called, since it is set server side and then forwarded\n\x09 *\n\x09 * NOTE: This is done as an RPC instead of variable replication because ordering matters\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the client that the server has all the information it needs and that it\nis ok to start sending voice packets. The server will already send voice packets\nwhen this function is called, since it is set server side and then forwarded\n\nNOTE: This is done as an RPC instead of variable replication because ordering matters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientVoiceHandshakeComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_KickReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::NewProp_KickReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventClientWasKicked_Parms, KickReason), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::NewProp_KickReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::NewProp_KickReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::NewProp_KickReason,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client they were kicked from the server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify client they were kicked from the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientWasKicked", nullptr, nullptr, sizeof(PlayerController_eventClientWasKicked_Parms), Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ClientWasKicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ConsoleKey_Statics
	{
		struct PlayerController_eventConsoleKey_Parms
		{
			FKey Key;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventConsoleKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Console control commands, useful when remote debugging so you can't touch the console the normal way */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Console control commands, useful when remote debugging so you can't touch the console the normal way" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ConsoleKey", nullptr, nullptr, sizeof(PlayerController_eventConsoleKey_Parms), Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ConsoleKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics
	{
		struct PlayerController_eventDeprojectMousePositionToWorld_Parms
		{
			FVector WorldLocation;
			FVector WorldDirection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventDeprojectMousePositionToWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventDeprojectMousePositionToWorld_Parms), &Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventDeprojectMousePositionToWorld_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventDeprojectMousePositionToWorld_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Convert current mouse 2D position to World Space 3D position and direction. Returns false if unable to determine value. **/" },
		{ "DisplayName", "ConvertMouseLocationToWorldSpace" },
		{ "Keywords", "deproject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Convert current mouse 2D position to World Space 3D position and direction. Returns false if unable to determine value. *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "DeprojectMousePositionToWorld", nullptr, nullptr, sizeof(PlayerController_eventDeprojectMousePositionToWorld_Parms), Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics
	{
		struct PlayerController_eventDeprojectScreenPositionToWorld_Parms
		{
			float ScreenX;
			float ScreenY;
			FVector WorldLocation;
			FVector WorldDirection;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventDeprojectScreenPositionToWorld_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventDeprojectScreenPositionToWorld_Parms), &Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, ScreenY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, ScreenX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Convert 2D screen position to World Space 3D position and direction. Returns false if unable to determine value. **/" },
		{ "DisplayName", "ConvertScreenLocationToWorldSpace" },
		{ "Keywords", "deproject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Convert 2D screen position to World Space 3D position and direction. Returns false if unable to determine value. *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "DeprojectScreenPositionToWorld", nullptr, nullptr, sizeof(PlayerController_eventDeprojectScreenPositionToWorld_Parms), Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_EnableCheats_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_EnableCheats_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Enables cheats within the game */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Enables cheats within the game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_EnableCheats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "EnableCheats", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_EnableCheats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EnableCheats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_EnableCheats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_EnableCheats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_FOV_Statics
	{
		struct PlayerController_eventFOV_Parms
		{
			float NewFOV;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_FOV_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventFOV_Parms, NewFOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_FOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_FOV_Statics::NewProp_NewFOV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_FOV_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Set the field of view to NewFOV */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the field of view to NewFOV" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_FOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "FOV", nullptr, nullptr, sizeof(PlayerController_eventFOV_Parms), Z_Construct_UFunction_APlayerController_FOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_FOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_FOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_FOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_FOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_FOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics
	{
		struct PlayerController_eventGetFocalLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetFocalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Returns the location the PlayerController is focused on.\n\x09 *  If there is a possessed Pawn, returns the Pawn's location.\n\x09 *  If there is a spectator Pawn, returns that Pawn's location.\n\x09 *  Otherwise, returns the PlayerController's spawn location (usually the last known Pawn location after it has died).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns the location the PlayerController is focused on.\n If there is a possessed Pawn, returns the Pawn's location.\n If there is a spectator Pawn, returns that Pawn's location.\n Otherwise, returns the PlayerController's spawn location (usually the last known Pawn location after it has died)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetFocalLocation", nullptr, nullptr, sizeof(PlayerController_eventGetFocalLocation_Parms), Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetFocalLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics
	{
		struct PlayerController_eventGetHitResultUnderCursor_Parms
		{
			TEnumAsByte<ECollisionChannel> TraceChannel;
			bool bTraceComplex;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderCursor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursor_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursor_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderCursor_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursor_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursor_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_TraceChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use new GetHitResultUnderCursorByChannel or GetHitResultUnderCursorForObject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "TraceChannel", "ECC_Visibility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderCursor", nullptr, nullptr, sizeof(PlayerController_eventGetHitResultUnderCursor_Parms), Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics
	{
		struct PlayerController_eventGetHitResultUnderCursorByChannel_Parms
		{
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderCursorByChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorByChannel_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderCursorByChannel_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_TraceChannel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the mouse cursor, looking on a trace channel */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the mouse cursor, looking on a trace channel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderCursorByChannel", nullptr, nullptr, sizeof(PlayerController_eventGetHitResultUnderCursorByChannel_Parms), Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics
	{
		struct PlayerController_eventGetHitResultUnderCursorForObjects_Parms
		{
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderCursorForObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorForObjects_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderCursorForObjects_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorForObjects_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the mouse cursor, looking for object types */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the mouse cursor, looking for object types" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderCursorForObjects", nullptr, nullptr, sizeof(PlayerController_eventGetHitResultUnderCursorForObjects_Parms), Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics
	{
		struct PlayerController_eventGetHitResultUnderFinger_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			TEnumAsByte<ECollisionChannel> TraceChannel;
			bool bTraceComplex;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderFinger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFinger_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFinger_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderFinger_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFinger_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFinger_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFinger_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use new GetHitResultUnderFingerByChannel or GetHitResultUnderFingerForObject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "TraceChannel", "ECC_Visibility" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderFinger", nullptr, nullptr, sizeof(PlayerController_eventGetHitResultUnderFinger_Parms), Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics
	{
		struct PlayerController_eventGetHitResultUnderFingerByChannel_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			TEnumAsByte<ETraceTypeQuery> TraceChannel;
			bool bTraceComplex;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderFingerByChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerByChannel_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderFingerByChannel_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerByChannel_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_TraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the finger, looking on a trace channel */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the finger, looking on a trace channel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderFingerByChannel", nullptr, nullptr, sizeof(PlayerController_eventGetHitResultUnderFingerByChannel_Parms), Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics
	{
		struct PlayerController_eventGetHitResultUnderFingerForObjects_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
			bool bTraceComplex;
			FHitResult HitResult;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static void NewProp_bTraceComplex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderFingerForObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerForObjects_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
	{
		((PlayerController_eventGetHitResultUnderFingerForObjects_Parms*)Obj)->bTraceComplex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerForObjects_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerForObjects_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_HitResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the finger, looking for object types */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the finger, looking for object types" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderFingerForObjects", nullptr, nullptr, sizeof(PlayerController_eventGetHitResultUnderFingerForObjects_Parms), Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetHUD_Statics
	{
		struct PlayerController_eventGetHUD_Parms
		{
			AHUD* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_GetHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetHUD_Parms, ReturnValue), Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHUD_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetHUD_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Gets the HUD currently being used by this player controller */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Gets the HUD currently being used by this player controller" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHUD", nullptr, nullptr, sizeof(PlayerController_eventGetHUD_Parms), Z_Construct_UFunction_APlayerController_GetHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHUD_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetHUD_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHUD_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics
	{
		struct PlayerController_eventGetInputAnalogKeyState_Parms
		{
			FKey Key;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogKeyState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputAnalogKeyState", nullptr, nullptr, sizeof(PlayerController_eventGetInputAnalogKeyState_Parms), Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics
	{
		struct PlayerController_eventGetInputAnalogStickState_Parms
		{
			TEnumAsByte<EControllerAnalogStick::Type> WhichStick;
			float StickX;
			float StickY;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickX;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WhichStick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickY = { "StickY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogStickState_Parms, StickY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickX = { "StickX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogStickState_Parms, StickX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_WhichStick = { "WhichStick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogStickState_Parms, WhichStick), Z_Construct_UEnum_Engine_EControllerAnalogStick, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_WhichStick,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the X and Y displacement of the given analog stick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the X and Y displacement of the given analog stick." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputAnalogStickState", nullptr, nullptr, sizeof(PlayerController_eventGetInputAnalogStickState_Parms), Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetInputAnalogStickState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics
	{
		struct PlayerController_eventGetInputKeyTimeDown_Parms
		{
			FKey Key;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputKeyTimeDown_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputKeyTimeDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputKeyTimeDown", nullptr, nullptr, sizeof(PlayerController_eventGetInputKeyTimeDown_Parms), Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics
	{
		struct PlayerController_eventGetInputMotionState_Parms
		{
			FVector Tilt;
			FVector RotationRate;
			FVector Gravity;
			FVector Acceleration;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Acceleration;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gravity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationRate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tilt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, RotationRate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Tilt = { "Tilt", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, Tilt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_RotationRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Tilt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the current motion state of the player's input device */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the current motion state of the player's input device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputMotionState", nullptr, nullptr, sizeof(PlayerController_eventGetInputMotionState_Parms), Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetInputMotionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics
	{
		struct PlayerController_eventGetInputMouseDelta_Parms
		{
			float DeltaX;
			float DeltaY;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputMouseDelta_Parms, DeltaY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputMouseDelta_Parms, DeltaX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves how far the mouse moved this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves how far the mouse moved this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputMouseDelta", nullptr, nullptr, sizeof(PlayerController_eventGetInputMouseDelta_Parms), Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetInputMouseDelta()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics
	{
		struct PlayerController_eventGetInputTouchState_Parms
		{
			TEnumAsByte<ETouchIndex::Type> FingerIndex;
			float LocationX;
			float LocationY;
			bool bIsCurrentlyPressed;
		};
		static void NewProp_bIsCurrentlyPressed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyPressed;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationX;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed_SetBit(void* Obj)
	{
		((PlayerController_eventGetInputTouchState_Parms*)Obj)->bIsCurrentlyPressed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed = { "bIsCurrentlyPressed", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetInputTouchState_Parms), &Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputTouchState_Parms, LocationY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputTouchState_Parms, LocationX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputTouchState_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_FingerIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the X and Y screen coordinates of the specified touch key. Returns false if the touch index is not down */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the X and Y screen coordinates of the specified touch key. Returns false if the touch index is not down" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputTouchState", nullptr, nullptr, sizeof(PlayerController_eventGetInputTouchState_Parms), Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetInputTouchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics
	{
		struct PlayerController_eventGetInputVectorKeyState_Parms
		{
			FKey Key;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputVectorKeyState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetInputVectorKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns the vector value for the given key/button. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns the vector value for the given key/button." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputVectorKeyState", nullptr, nullptr, sizeof(PlayerController_eventGetInputVectorKeyState_Parms), Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetInputVectorKeyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetMousePosition_Statics
	{
		struct PlayerController_eventGetMousePosition_Parms
		{
			float LocationX;
			float LocationY;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationY;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventGetMousePosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventGetMousePosition_Parms), &Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetMousePosition_Parms, LocationY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetMousePosition_Parms, LocationX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the X and Y screen coordinates of the mouse cursor. Returns false if there is no associated mouse device */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the X and Y screen coordinates of the mouse cursor. Returns false if there is no associated mouse device" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetMousePosition", nullptr, nullptr, sizeof(PlayerController_eventGetMousePosition_Parms), Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetMousePosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics
	{
		struct PlayerController_eventGetSpectatorPawn_Parms
		{
			ASpectatorPawn* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetSpectatorPawn_Parms, ReturnValue), Z_Construct_UClass_ASpectatorPawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Get the Pawn used when spectating. nullptr when not spectating. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Get the Pawn used when spectating. nullptr when not spectating." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetSpectatorPawn", nullptr, nullptr, sizeof(PlayerController_eventGetSpectatorPawn_Parms), Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetSpectatorPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_GetViewportSize_Statics
	{
		struct PlayerController_eventGetViewportSize_Parms
		{
			int32 SizeX;
			int32 SizeY;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SizeX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetViewportSize_Parms, SizeY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventGetViewportSize_Parms, SizeX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Helper to get the size of the HUD canvas for this player controller.  Returns 0 if there is no HUD */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Helper to get the size of the HUD canvas for this player controller.  Returns 0 if there is no HUD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetViewportSize", nullptr, nullptr, sizeof(PlayerController_eventGetViewportSize_Parms), Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_GetViewportSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics
	{
		struct PlayerController_eventIsInputKeyDown_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventIsInputKeyDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventIsInputKeyDown_Parms), &Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventIsInputKeyDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns true if the given key/button is pressed on the input of the controller (if present) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if the given key/button is pressed on the input of the controller (if present)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "IsInputKeyDown", nullptr, nullptr, sizeof(PlayerController_eventIsInputKeyDown_Parms), Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_IsInputKeyDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics
	{
		struct PlayerController_eventK2_ClientPlayForceFeedback_Parms
		{
			UForceFeedbackEffect* ForceFeedbackEffect;
			FName Tag;
			bool bLooping;
			bool bIgnoreTimeDilation;
			bool bPlayWhilePaused;
		};
		static void NewProp_bPlayWhilePaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayWhilePaused;
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused_SetBit(void* Obj)
	{
		((PlayerController_eventK2_ClientPlayForceFeedback_Parms*)Obj)->bPlayWhilePaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused = { "bPlayWhilePaused", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventK2_ClientPlayForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((PlayerController_eventK2_ClientPlayForceFeedback_Parms*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventK2_ClientPlayForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((PlayerController_eventK2_ClientPlayForceFeedback_Parms*)Obj)->bLooping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventK2_ClientPlayForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventK2_ClientPlayForceFeedback_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventK2_ClientPlayForceFeedback_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_Tag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_ForceFeedbackEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bIgnoreTimeDilation,bPlayWhilePaused" },
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Play a force feedback pattern on the player's controller\n\x09 * @param\x09""ForceFeedbackEffect\x09\x09The force feedback pattern to play\n\x09 * @param\x09""bLooping\x09\x09\x09\x09Whether the pattern should be played repeatedly or be a single one shot\n\x09 * @param\x09""bIgnoreTimeDilation\x09\x09Whether the pattern should ignore time dilation\n\x09 * @param\x09""bPlayWhilePaused\x09\x09Whether the pattern should continue to play while the game is paused\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09""A tag that allows stopping of an effect.  If another effect with this Tag is playing, it will be stopped and replaced\n\x09 */" },
		{ "DisplayName", "Client Play Force Feedback" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play a force feedback pattern on the player's controller\n@param       ForceFeedbackEffect             The force feedback pattern to play\n@param       bLooping                                Whether the pattern should be played repeatedly or be a single one shot\n@param       bIgnoreTimeDilation             Whether the pattern should ignore time dilation\n@param       bPlayWhilePaused                Whether the pattern should continue to play while the game is paused\n@param       Tag                                             A tag that allows stopping of an effect.  If another effect with this Tag is playing, it will be stopped and replaced" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "K2_ClientPlayForceFeedback", nullptr, nullptr, sizeof(PlayerController_eventK2_ClientPlayForceFeedback_Parms), Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_LocalTravel_Statics
	{
		struct PlayerController_eventLocalTravel_Parms
		{
			FString URL;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_LocalTravel_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_LocalTravel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventLocalTravel_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_LocalTravel_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_LocalTravel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Causes the client to travel to the given URL */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Causes the client to travel to the given URL" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_LocalTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "LocalTravel", nullptr, nullptr, sizeof(PlayerController_eventLocalTravel_Parms), Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_LocalTravel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_LocalTravel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics
	{
		static void NewProp_bIsLogging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLogging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging_SetBit(void* Obj)
	{
		((PlayerController_eventOnServerStartedVisualLogger_Parms*)Obj)->bIsLogging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging = { "bIsLogging", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventOnServerStartedVisualLogger_Parms), &Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Notify from server that Visual Logger is recording, to show that information on client about possible performance issues \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify from server that Visual Logger is recording, to show that information on client about possible performance issues" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "OnServerStartedVisualLogger", nullptr, nullptr, sizeof(PlayerController_eventOnServerStartedVisualLogger_Parms), Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_Pause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_Pause_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Command to try to pause the game. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Command to try to pause the game." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "Pause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics
	{
		struct PlayerController_eventPlayDynamicForceFeedback_Parms
		{
			float Intensity;
			float Duration;
			bool bAffectsLeftLarge;
			bool bAffectsLeftSmall;
			bool bAffectsRightLarge;
			bool bAffectsRightSmall;
			TEnumAsByte<EDynamicForceFeedbackAction::Type> Action;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Action;
		static void NewProp_bAffectsRightSmall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightSmall;
		static void NewProp_bAffectsRightLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightLarge;
		static void NewProp_bAffectsLeftSmall_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftSmall;
		static void NewProp_bAffectsLeftLarge_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftLarge;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Intensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, Action), Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall_SetBit(void* Obj)
	{
		((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsRightSmall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall = { "bAffectsRightSmall", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge_SetBit(void* Obj)
	{
		((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsRightLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge = { "bAffectsRightLarge", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall_SetBit(void* Obj)
	{
		((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsLeftSmall = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall = { "bAffectsLeftSmall", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge_SetBit(void* Obj)
	{
		((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsLeftLarge = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge = { "bAffectsLeftLarge", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, Intensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Intensity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bAffectsLeftLarge,bAffectsLeftSmall,bAffectsRightLarge,bAffectsRightSmall" },
		{ "bAffectsLeftLarge", "true" },
		{ "bAffectsLeftSmall", "true" },
		{ "bAffectsRightLarge", "true" },
		{ "bAffectsRightSmall", "true" },
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Latent action that controls the playing of force feedback \n\x09 * Begins playing when Start is called.  Calling Update or Stop if the feedback is not active will have no effect.\n\x09 * Completed will execute when Stop is called or the duration ends.\n\x09 * When Update is called the Intensity, Duration, and affect values will be updated with the current inputs\n\x09 * @param\x09Intensity\x09\x09\x09\x09How strong the feedback should be.  Valid values are between 0.0 and 1.0\n\x09 * @param\x09""Duration\x09\x09\x09\x09How long the feedback should play for.  If the value is negative it will play until stopped\n\x09 * @param   bAffectsLeftLarge\x09\x09Whether the intensity should be applied to the large left servo\n\x09 * @param   bAffectsLeftSmall\x09\x09Whether the intensity should be applied to the small left servo\n\x09 * @param   bAffectsRightLarge\x09\x09Whether the intensity should be applied to the large right servo\n\x09 * @param   bAffectsRightSmall\x09\x09Whether the intensity should be applied to the small right servo\n\x09 */" },
		{ "Duration", "-1" },
		{ "ExpandEnumAsExecs", "Action" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Latent action that controls the playing of force feedback\nBegins playing when Start is called.  Calling Update or Stop if the feedback is not active will have no effect.\nCompleted will execute when Stop is called or the duration ends.\nWhen Update is called the Intensity, Duration, and affect values will be updated with the current inputs\n@param       Intensity                               How strong the feedback should be.  Valid values are between 0.0 and 1.0\n@param       Duration                                How long the feedback should play for.  If the value is negative it will play until stopped\n@param   bAffectsLeftLarge           Whether the intensity should be applied to the large left servo\n@param   bAffectsLeftSmall           Whether the intensity should be applied to the small left servo\n@param   bAffectsRightLarge          Whether the intensity should be applied to the large right servo\n@param   bAffectsRightSmall          Whether the intensity should be applied to the small right servo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "PlayDynamicForceFeedback", nullptr, nullptr, sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics
	{
		struct PlayerController_eventPlayHapticEffect_Parms
		{
			UHapticFeedbackEffect_Base* HapticEffect;
			EControllerHand Hand;
			float Scale;
			bool bLoop;
		};
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((PlayerController_eventPlayHapticEffect_Parms*)Obj)->bLoop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventPlayHapticEffect_Parms), &Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventPlayHapticEffect_Parms, Scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventPlayHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventPlayHapticEffect_Parms, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_HapticEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Play a haptic feedback curve on the player's controller\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to play\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 * @param\x09Scale\x09\x09\x09\x09\x09Scale between 0.0 and 1.0 on the intensity of playback\n\x09 */" },
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play a haptic feedback curve on the player's controller\n@param       HapticEffect                    The haptic effect to play\n@param       Hand                                    Which hand to play the effect on\n@param       Scale                                   Scale between 0.0 and 1.0 on the intensity of playback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "PlayHapticEffect", nullptr, nullptr, sizeof(PlayerController_eventPlayHapticEffect_Parms), Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_PlayHapticEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics
	{
		struct PlayerController_eventProjectWorldLocationToScreen_Parms
		{
			FVector WorldLocation;
			FVector2D ScreenLocation;
			bool bPlayerViewportRelative;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bPlayerViewportRelative_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerViewportRelative;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ScreenLocation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventProjectWorldLocationToScreen_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventProjectWorldLocationToScreen_Parms), &Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative_SetBit(void* Obj)
	{
		((PlayerController_eventProjectWorldLocationToScreen_Parms*)Obj)->bPlayerViewportRelative = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative = { "bPlayerViewportRelative", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventProjectWorldLocationToScreen_Parms), &Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ScreenLocation = { "ScreenLocation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventProjectWorldLocationToScreen_Parms, ScreenLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventProjectWorldLocationToScreen_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ScreenLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Convert a World Space 3D position into a 2D Screen Space position.\n\x09 * @return true if the world coordinate was successfully projected to the screen.\n\x09 */" },
		{ "CPP_Default_bPlayerViewportRelative", "false" },
		{ "DisplayName", "ConvertWorldLocationToScreenLocation" },
		{ "Keywords", "project" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Convert a World Space 3D position into a 2D Screen Space position.\n@return true if the world coordinate was successfully projected to the screen." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ProjectWorldLocationToScreen", nullptr, nullptr, sizeof(PlayerController_eventProjectWorldLocationToScreen_Parms), Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Resets the light color of the player's controller to default\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Resets the light color of the player's controller to default" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ResetControllerLightColor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ResetControllerLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_RestartLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_RestartLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Restarts the current level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Restarts the current level" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_RestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "RestartLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_RestartLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_RestartLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_RestartLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_RestartLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SendToConsole_Statics
	{
		struct PlayerController_eventSendToConsole_Parms
		{
			FString Command;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SendToConsole_Statics::NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_SendToConsole_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSendToConsole_Parms, Command), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::NewProp_Command_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::NewProp_Command_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SendToConsole_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SendToConsole_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Sends a command to the console to execute if not shipping version */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sends a command to the console to execute if not shipping version" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SendToConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SendToConsole", nullptr, nullptr, sizeof(PlayerController_eventSendToConsole_Parms), Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SendToConsole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SendToConsole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_P;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerAcknowledgePossession_Parms, P), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::NewProp_P,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** acknowledge possession of pawn */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "acknowledge possession of pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerAcknowledgePossession", nullptr, nullptr, sizeof(PlayerController_eventServerAcknowledgePossession_Parms), Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerCamera_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ServerCamera_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerCamera_Parms, NewMode), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerCamera_Statics::NewProp_NewMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** change mode of camera */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "change mode of camera" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerCamera", nullptr, nullptr, sizeof(PlayerController_eventServerCamera_Parms), Z_Construct_UFunction_APlayerController_ServerCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerChangeName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerChangeName_Parms, S), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::NewProp_S_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::NewProp_S_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::NewProp_S,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Change name of server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Change name of server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerChangeName", nullptr, nullptr, sizeof(PlayerController_eventServerChangeName_Parms), Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerChangeName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Tells the server to make sure the possessed pawn is in sync with the client. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the server to make sure the possessed pawn is in sync with the client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerCheckClientPossession", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerCheckClientPossession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Reliable version of ServerCheckClientPossession to be used when there is no likely danger of spamming the network. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Reliable version of ServerCheckClientPossession to be used when there is no likely danger of spamming the network." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerCheckClientPossessionReliable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerExec_Statics
	{
		struct PlayerController_eventServerExec_Parms
		{
			FString Msg;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerExec_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ServerExec_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerExec_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerExec_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExec_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerExec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerExec_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerExec_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Executes command on server (non shipping builds only) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Executes command on server (non shipping builds only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerExec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerExec", nullptr, nullptr, sizeof(PlayerController_eventServerExec_Parms), Z_Construct_UFunction_APlayerController_ServerExec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerExec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerExec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerExec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerExecRPC_Parms, Msg), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::NewProp_Msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::NewProp_Msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::NewProp_Msg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** RPC used by ServerExec. Not intended to be called directly */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "RPC used by ServerExec. Not intended to be called directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerExecRPC", nullptr, nullptr, sizeof(PlayerController_eventServerExecRPC_Parms), Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerExecRPC()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerMutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server to mute a player for this controller\n\x09 * @param PlayerId player id to mute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the server to mute a player for this controller\n@param PlayerId player id to mute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerMutePlayer", nullptr, nullptr, sizeof(PlayerController_eventServerMutePlayer_Parms), Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerMutePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics
	{
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_WorldPackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::NewProp_WorldPackageName = { "WorldPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerNotifyLoadedWorld_Parms, WorldPackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::NewProp_WorldPackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called to notify the server when the client has loaded a new world via seamless traveling\n\x09 * @param WorldPackageName the name of the world package that was loaded\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called to notify the server when the client has loaded a new world via seamless traveling\n@param WorldPackageName the name of the world package that was loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerNotifyLoadedWorld", nullptr, nullptr, sizeof(PlayerController_eventServerNotifyLoadedWorld_Parms), Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerPause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerPause_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replicate pause request to the server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicate pause request to the server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerPause", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Attempts to restart this player, generally called from the client upon respawn request. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Attempts to restart this player, generally called from the client upon respawn request." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerRestartPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerRestartPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewRot;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewRot = { "NewRot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerSetSpectatorLocation_Parms, NewRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerSetSpectatorLocation_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewRot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewLoc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** When spectating, updates spectator location/rotation and pings the server to make sure spectating should continue. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "When spectating, updates spectator location/rotation and pings the server to make sure spectating should continue." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerSetSpectatorLocation", nullptr, nullptr, sizeof(PlayerController_eventServerSetSpectatorLocation_Parms), Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics
	{
		static void NewProp_bWaiting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWaiting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit(void* Obj)
	{
		((PlayerController_eventServerSetSpectatorWaiting_Parms*)Obj)->bWaiting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting = { "bWaiting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventServerSetSpectatorWaiting_Parms), &Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Indicate that the Spectator is waiting to join/respawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Indicate that the Spectator is waiting to join/respawn." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerSetSpectatorWaiting", nullptr, nullptr, sizeof(PlayerController_eventServerSetSpectatorWaiting_Parms), Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Notifies the server that the client has ticked gameplay code, and should no longer get the extended \"still loading\" timeout grace period */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notifies the server that the client has ticked gameplay code, and should no longer get the extended \"still loading\" timeout grace period" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerShortTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerShortTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Used by UGameplayDebuggingControllerComponent to replicate messages for AI debugging in network games. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used by UGameplayDebuggingControllerComponent to replicate messages for AI debugging in network games." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerToggleAILogging", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerToggleAILogging()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerUnmutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::NewProp_PlayerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server to unmute a player for this controller\n\x09 * @param PlayerId player id to unmute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the server to unmute a player for this controller\n@param PlayerId player id to unmute" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUnmutePlayer", nullptr, nullptr, sizeof(PlayerController_eventServerUnmutePlayer_Parms), Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerUnmutePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CamPitchAndYaw;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamLoc;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamPitchAndYaw = { "CamPitchAndYaw", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateCamera_Parms, CamPitchAndYaw), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamLoc = { "CamLoc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateCamera_Parms, CamLoc), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamPitchAndYaw,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamLoc,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** If PlayerCamera.bUseClientSideCameraUpdates is set, client will replicate camera positions to the server. */// @TODO - combine pitch/yaw into one int, maybe also send location compressed\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "If PlayerCamera.bUseClientSideCameraUpdates is set, client will replicate camera positions to the server. // @TODO - combine pitch/yaw into one int, maybe also send location compressed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUpdateCamera", nullptr, nullptr, sizeof(PlayerController_eventServerUpdateCamera_Parms), Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerUpdateCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelVisibility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::NewProp_LevelVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::NewProp_LevelVisibility = { "LevelVisibility", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateLevelVisibility_Parms, LevelVisibility), Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::NewProp_LevelVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::NewProp_LevelVisibility_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::NewProp_LevelVisibility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called when the client adds/removes a streamed level.\n\x09 * The server will only replicate references to Actors in visible levels so that it's impossible to send references to\n\x09 * Actors the client has not initialized.\n\x09 *\n\x09 * @param LevelVisibility\x09Visibility state for the level whose state changed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called when the client adds/removes a streamed level.\nThe server will only replicate references to Actors in visible levels so that it's impossible to send references to\nActors the client has not initialized.\n\n@param LevelVisibility       Visibility state for the level whose state changed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUpdateLevelVisibility", nullptr, nullptr, sizeof(PlayerController_eventServerUpdateLevelVisibility_Parms), Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelVisibilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LevelVisibilities;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelVisibilities_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities = { "LevelVisibilities", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms, LevelVisibilities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities_Inner = { "LevelVisibilities", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called when the client adds/removes a streamed level.  This version of the function allows you to pass the state of \n\x09 * multiple levels at once, to reduce the number of RPC events that will be sent.\n\x09 *\n\x09 * @param\x09LevelVisibilities\x09Visibility state for each level whose state has changed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called when the client adds/removes a streamed level.  This version of the function allows you to pass the state of\nmultiple levels at once, to reduce the number of RPC events that will be sent.\n\n@param       LevelVisibilities       Visibility state for each level whose state has changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUpdateMultipleLevelsVisibility", nullptr, nullptr, sizeof(PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms), Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Used by client to request server to confirm current viewtarget (server will respond with ClientSetViewTarget() ). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used by client to request server to confirm current viewtarget (server will respond with ClientSetViewTarget() )." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerVerifyViewTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Move camera to next player on round ended or spectating*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Move camera to next player on round ended or spectating" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerViewNextPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerViewNextPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Move camera to previous player on round ended or spectating */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Move camera to previous player on round ended or spectating" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerViewPrevPlayer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventServerViewSelf_Parms, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::NewProp_TransitionParams,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Move camera to current user */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Move camera to current user" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerViewSelf", nullptr, nullptr, sizeof(PlayerController_eventServerViewSelf_Parms), Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C40, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ServerViewSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics
	{
		struct PlayerController_eventSetAudioListenerAttenuationOverride_Parms
		{
			USceneComponent* AttachToComponent;
			FVector AttenuationLocationOVerride;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttenuationLocationOVerride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttenuationLocationOVerride = { "AttenuationLocationOVerride", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerAttenuationOverride_Parms, AttenuationLocationOVerride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerAttenuationOverride_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttenuationLocationOVerride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttachToComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetAudioListenerAttenuationOverride", nullptr, nullptr, sizeof(PlayerController_eventSetAudioListenerAttenuationOverride_Parms), Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics
	{
		struct PlayerController_eventSetAudioListenerOverride_Parms
		{
			USceneComponent* AttachToComponent;
			FVector Location;
			FRotator Rotation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerOverride_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerOverride_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerOverride_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_AttachToComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "Comment", "/**\n\x09 * Used to override the default positioning of the audio listener\n\x09 * \n\x09 * @param AttachToComponent Optional component to attach the audio listener to\n\x09 * @param Location Depending on whether Component is attached this is either an offset from its location or an absolute position\n\x09 * @param Rotation Depending on whether Component is attached this is either an offset from its rotation or an absolute rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used to override the default positioning of the audio listener\n\n@param AttachToComponent Optional component to attach the audio listener to\n@param Location Depending on whether Component is attached this is either an offset from its location or an absolute position\n@param Rotation Depending on whether Component is attached this is either an offset from its rotation or an absolute rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetAudioListenerOverride", nullptr, nullptr, sizeof(PlayerController_eventSetAudioListenerOverride_Parms), Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetAudioListenerOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics
	{
		struct PlayerController_eventSetCinematicMode_Parms
		{
			bool bInCinematicMode;
			bool bHidePlayer;
			bool bAffectsHUD;
			bool bAffectsMovement;
			bool bAffectsTurning;
		};
		static void NewProp_bAffectsTurning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsTurning;
		static void NewProp_bAffectsMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsMovement;
		static void NewProp_bAffectsHUD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAffectsHUD;
		static void NewProp_bHidePlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
		static void NewProp_bInCinematicMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInCinematicMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit(void* Obj)
	{
		((PlayerController_eventSetCinematicMode_Parms*)Obj)->bAffectsTurning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning = { "bAffectsTurning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit(void* Obj)
	{
		((PlayerController_eventSetCinematicMode_Parms*)Obj)->bAffectsMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement = { "bAffectsMovement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit(void* Obj)
	{
		((PlayerController_eventSetCinematicMode_Parms*)Obj)->bAffectsHUD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD = { "bAffectsHUD", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
	{
		((PlayerController_eventSetCinematicMode_Parms*)Obj)->bHidePlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit(void* Obj)
	{
		((PlayerController_eventSetCinematicMode_Parms*)Obj)->bInCinematicMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode = { "bInCinematicMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::Function_MetaDataParams[] = {
		{ "bAffectsHUD", "true" },
		{ "bHidePlayer", "true" },
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Server/SP only function for changing whether the player is in cinematic mode.  Updates values of various state variables, then replicates the call to the client\n\x09 * to sync the current cinematic mode.\n\x09 * @param\x09""bInCinematicMode\x09specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n\x09 * @param\x09""bHidePlayer\x09\x09\x09specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n\x09 * @param\x09""bAffectsHUD\x09\x09\x09specify true if we should show/hide the HUD to match the value of bCinematicMode\n\x09 * @param\x09""bAffectsMovement\x09specify true to disable movement in cinematic mode, enable it when leaving\n\x09 * @param\x09""bAffectsTurning\x09\x09specify true to disable turning in cinematic mode or enable it when leaving\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Server/SP only function for changing whether the player is in cinematic mode.  Updates values of various state variables, then replicates the call to the client\nto sync the current cinematic mode.\n@param       bInCinematicMode        specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n@param       bHidePlayer                     specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n@param       bAffectsHUD                     specify true if we should show/hide the HUD to match the value of bCinematicMode\n@param       bAffectsMovement        specify true to disable movement in cinematic mode, enable it when leaving\n@param       bAffectsTurning         specify true to disable turning in cinematic mode or enable it when leaving" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetCinematicMode", nullptr, nullptr, sizeof(PlayerController_eventSetCinematicMode_Parms), Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetCinematicMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics
	{
		struct PlayerController_eventSetControllerLightColor_Parms
		{
			FColor Color;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetControllerLightColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Sets the light color of the player's controller\n\x09 * @param\x09""Color\x09\x09\x09\x09\x09The color for the light to be\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sets the light color of the player's controller\n@param       Color                                   The color for the light to be" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetControllerLightColor", nullptr, nullptr, sizeof(PlayerController_eventSetControllerLightColor_Parms), Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetControllerLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics
	{
		struct PlayerController_eventSetDisableHaptics_Parms
		{
			bool bNewDisabled;
		};
		static void NewProp_bNewDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewDisabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled_SetBit(void* Obj)
	{
		((PlayerController_eventSetDisableHaptics_Parms*)Obj)->bNewDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled = { "bNewDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetDisableHaptics_Parms), &Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Allows the player controller to disable all haptic requests from being fired, e.g. in the case of a level loading\n\x09 *\n\x09 * @param\x09""bNewDisabled\x09If TRUE, the haptics will stop and prevented from being enabled again until set to FALSE\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Allows the player controller to disable all haptic requests from being fired, e.g. in the case of a level loading\n\n@param       bNewDisabled    If TRUE, the haptics will stop and prevented from being enabled again until set to FALSE" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetDisableHaptics", nullptr, nullptr, sizeof(PlayerController_eventSetDisableHaptics_Parms), Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetDisableHaptics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics
	{
		struct PlayerController_eventSetHapticsByValue_Parms
		{
			float Frequency;
			float Amplitude;
			EControllerHand Hand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Frequency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetHapticsByValue_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetHapticsByValue_Parms, Amplitude), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Amplitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Amplitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetHapticsByValue_Parms, Frequency), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Frequency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Amplitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Frequency,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Sets the value of the haptics for the specified hand directly, using frequency and amplitude.  NOTE:  If a curve is already\n\x09 * playing for this hand, it will be cancelled in favour of the specified values.\n\x09 *\n\x09 * @param\x09""Frequency\x09\x09\x09\x09The normalized frequency [0.0, 1.0] to play through the haptics system\n\x09 * @param\x09""Amplitude\x09\x09\x09\x09The normalized amplitude [0.0, 1.0] to set the haptic feedback to\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sets the value of the haptics for the specified hand directly, using frequency and amplitude.  NOTE:  If a curve is already\nplaying for this hand, it will be cancelled in favour of the specified values.\n\n@param       Frequency                               The normalized frequency [0.0, 1.0] to play through the haptics system\n@param       Amplitude                               The normalized amplitude [0.0, 1.0] to set the haptic feedback to\n@param       Hand                                    Which hand to play the effect on" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetHapticsByValue", nullptr, nullptr, sizeof(PlayerController_eventSetHapticsByValue_Parms), Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetHapticsByValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics
	{
		struct PlayerController_eventSetMouseCursorWidget_Parms
		{
			TEnumAsByte<EMouseCursor::Type> Cursor;
			UUserWidget* CursorWidget;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorWidget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Cursor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_CursorWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_CursorWidget = { "CursorWidget", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetMouseCursorWidget_Parms, CursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_CursorWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_CursorWidget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetMouseCursorWidget_Parms, Cursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_CursorWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_Cursor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "User Interface" },
		{ "Comment", "/**\n\x09 * Sets the Widget for the Mouse Cursor to display \n\x09 * @param Cursor - the cursor to set the widget for\n\x09 * @param CursorWidget - the widget to set the cursor to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sets the Widget for the Mouse Cursor to display\n@param Cursor - the cursor to set the widget for\n@param CursorWidget - the widget to set the cursor to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetMouseCursorWidget", nullptr, nullptr, sizeof(PlayerController_eventSetMouseCursorWidget_Parms), Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetMouseCursorWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics
	{
		struct PlayerController_eventSetMouseLocation_Parms
		{
			int32 X;
			int32 Y;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetMouseLocation_Parms, Y), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetMouseLocation_Parms, X), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_X_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Positions the mouse cursor in screen space, in pixels. */" },
		{ "DisplayName", "SetMousePosition" },
		{ "Keywords", "mouse" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Positions the mouse cursor in screen space, in pixels." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetMouseLocation", nullptr, nullptr, sizeof(PlayerController_eventSetMouseLocation_Parms), Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetMouseLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetName_Statics
	{
		struct PlayerController_eventSetName_Parms
		{
			FString S;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_S;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetName_Statics::NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_SetName_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetName_Parms, S), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetName_Statics::NewProp_S_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetName_Statics::NewProp_S_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetName_Statics::NewProp_S,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetName_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Tries to set the player's name to the given name. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tries to set the player's name to the given name." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetName", nullptr, nullptr, sizeof(PlayerController_eventSetName_Parms), Z_Construct_UFunction_APlayerController_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics
	{
		struct PlayerController_eventSetViewTargetWithBlend_Parms
		{
			AActor* NewViewTarget;
			float BlendTime;
			TEnumAsByte<EViewTargetBlendFunction> BlendFunc;
			float BlendExp;
			bool bLockOutgoing;
		};
		static void NewProp_bLockOutgoing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLockOutgoing;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendExp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendFunc;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewViewTarget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing_SetBit(void* Obj)
	{
		((PlayerController_eventSetViewTargetWithBlend_Parms*)Obj)->bLockOutgoing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing = { "bLockOutgoing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetViewTargetWithBlend_Parms), &Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendExp = { "BlendExp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, BlendExp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendFunc = { "BlendFunc", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, BlendFunc), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, BlendTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_NewViewTarget = { "NewViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, NewViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendFunc,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_NewViewTarget,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Set the view target blending with variable control\n\x09 * @param NewViewTarget - new actor to set as view target\n\x09 * @param BlendTime - time taken to blend\n\x09 * @param BlendFunc - Cubic, Linear etc functions for blending\n\x09 * @param BlendExp -  Exponent, used by certain blend functions to control the shape of the curve. \n\x09 * @param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend.\n\x09 */" },
		{ "CPP_Default_BlendExp", "0.000000" },
		{ "CPP_Default_BlendFunc", "VTBlend_Linear" },
		{ "CPP_Default_BlendTime", "0.000000" },
		{ "CPP_Default_bLockOutgoing", "false" },
		{ "Keywords", "Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the view target blending with variable control\n@param NewViewTarget - new actor to set as view target\n@param BlendTime - time taken to blend\n@param BlendFunc - Cubic, Linear etc functions for blending\n@param BlendExp -  Exponent, used by certain blend functions to control the shape of the curve.\n@param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetViewTargetWithBlend", nullptr, nullptr, sizeof(PlayerController_eventSetViewTargetWithBlend_Parms), Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics
	{
		struct PlayerController_eventSetVirtualJoystickVisibility_Parms
		{
			bool bVisible;
		};
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((PlayerController_eventSetVirtualJoystickVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventSetVirtualJoystickVisibility_Parms), &Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Set the virtual joystick visibility. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the virtual joystick visibility." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetVirtualJoystickVisibility", nullptr, nullptr, sizeof(PlayerController_eventSetVirtualJoystickVisibility_Parms), Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_StartFire_Statics
	{
		struct PlayerController_eventStartFire_Parms
		{
			uint8 FireModeNum;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FireModeNum;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_StartFire_Statics::NewProp_FireModeNum = { "FireModeNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventStartFire_Parms, FireModeNum), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_StartFire_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StartFire_Statics::NewProp_FireModeNum,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_StartFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Fire the player's currently selected weapon with the optional firemode. */" },
		{ "CPP_Default_FireModeNum", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Fire the player's currently selected weapon with the optional firemode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "StartFire", nullptr, nullptr, sizeof(PlayerController_eventStartFire_Parms), Z_Construct_UFunction_APlayerController_StartFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StartFire_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_StartFire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StartFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_StartFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_StartFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics
	{
		struct PlayerController_eventStopHapticEffect_Parms
		{
			EControllerHand Hand;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Hand;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventStopHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Stops a playing haptic feedback curve\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to stop\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to stop the effect for\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stops a playing haptic feedback curve\n@param       HapticEffect                    The haptic effect to stop\n@param       Hand                                    Which hand to stop the effect for" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "StopHapticEffect", nullptr, nullptr, sizeof(PlayerController_eventStopHapticEffect_Parms), Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_StopHapticEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_SwitchLevel_Statics
	{
		struct PlayerController_eventSwitchLevel_Parms
		{
			FString URL;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventSwitchLevel_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** SwitchLevel to the given MapURL. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "SwitchLevel to the given MapURL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SwitchLevel", nullptr, nullptr, sizeof(PlayerController_eventSwitchLevel_Parms), Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_SwitchLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics
	{
		struct PlayerController_eventTestServerLevelVisibilityChange_Parms
		{
			FName PackageName;
			FName FileName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventTestServerLevelVisibilityChange_Parms, FileName), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventTestServerLevelVisibilityChange_Parms, PackageName), METADATA_PARAMS(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_PackageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_PackageName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_PackageName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//~ This method is purely for debugging purposes.\n//~ It will trigger a ServerUpdateLevelVisibilityCall with the provided package name.\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "TestServerLevelVisibilityChange", nullptr, nullptr, sizeof(PlayerController_eventTestServerLevelVisibilityChange_Parms), Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040601, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics
	{
		struct PlayerController_eventToggleSpeaking_Parms
		{
			bool bInSpeaking;
		};
		static void NewProp_bInSpeaking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInSpeaking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking_SetBit(void* Obj)
	{
		((PlayerController_eventToggleSpeaking_Parms*)Obj)->bInSpeaking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking = { "bInSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventToggleSpeaking_Parms), &Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Toggle voice chat on and off\n\x09 * @param bSpeaking enable or disable voice chat\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Toggle voice chat on and off\n@param bSpeaking enable or disable voice chat" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ToggleSpeaking", nullptr, nullptr, sizeof(PlayerController_eventToggleSpeaking_Parms), Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020600, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_ToggleSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics
	{
		struct PlayerController_eventWasInputKeyJustPressed_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventWasInputKeyJustPressed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventWasInputKeyJustPressed_Parms), &Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventWasInputKeyJustPressed_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns true if the given key/button was up last frame and down this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if the given key/button was up last frame and down this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "WasInputKeyJustPressed", nullptr, nullptr, sizeof(PlayerController_eventWasInputKeyJustPressed_Parms), Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics
	{
		struct PlayerController_eventWasInputKeyJustReleased_Parms
		{
			FKey Key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PlayerController_eventWasInputKeyJustReleased_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(PlayerController_eventWasInputKeyJustReleased_Parms), &Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerController_eventWasInputKeyJustReleased_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns true if the given key/button was down last frame and up this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if the given key/button was down last frame and up this frame." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "WasInputKeyJustReleased", nullptr, nullptr, sizeof(PlayerController_eventWasInputKeyJustReleased_Parms), Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerController_NoRegister()
	{
		return APlayerController::StaticClass();
	}
	struct Z_Construct_UClass_APlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocalPlayerController_MetaData[];
#endif
		static void NewProp_bIsLocalPlayerController_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocalPlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpectatorPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpectatorPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTouchInterface_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTouchInterface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldPerformFullTickWhenPaused_MetaData[];
#endif
		static void NewProp_bShouldPerformFullTickWhenPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldPerformFullTickWhenPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InactiveStateInputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InactiveStateInputComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastCompletedSeamlessTravelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_LastCompletedSeamlessTravelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeamlessTravelCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFInt16PropertyParams NewProp_SeamlessTravelCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResultTraceDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitResultTraceDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentClickTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentClickTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultClickTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultClickTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMouseCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentMouseCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMouseCursor_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultMouseCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClickEventKeys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClickEventKeys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ClickEventKeys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForceFeedbackScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceFeedbackEnabled_MetaData[];
#endif
		static void NewProp_bForceFeedbackEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceFeedbackEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTouchOverEvents_MetaData[];
#endif
		static void NewProp_bEnableTouchOverEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTouchOverEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseOverEvents_MetaData[];
#endif
		static void NewProp_bEnableMouseOverEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseOverEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableTouchEvents_MetaData[];
#endif
		static void NewProp_bEnableTouchEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableTouchEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableClickEvents_MetaData[];
#endif
		static void NewProp_bEnableClickEvents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableClickEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowMouseCursor_MetaData[];
#endif
		static void NewProp_bShowMouseCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowMouseCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputRollScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputRollScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputPitchScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputPitchScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputYawScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputYawScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingSwapConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PendingSwapConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetPlayerIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NetPlayerIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerIsWaiting_MetaData[];
#endif
		static void NewProp_bPlayerIsWaiting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerIsWaiting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveForceFeedbackEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActiveForceFeedbackEffects;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveForceFeedbackEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CheatClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheatManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CheatManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpectatorSyncRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSpectatorSyncRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpectatorSyncLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSpectatorSyncLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSpectatorStateSynchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastSpectatorStateSynchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenPrimitiveComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenPrimitiveComponents;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenPrimitiveComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmoothTargetViewRotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SmoothTargetViewRotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetViewRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetViewRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoManageActiveCameraTarget_MetaData[];
#endif
		static void NewProp_bAutoManageActiveCameraTarget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoManageActiveCameraTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManagerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerCameraManagerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyHUD_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyHUD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllingDirTrackInst_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllingDirTrackInst;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcknowledgedPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcknowledgedPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AController,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerController_ActivateTouchInterface, "ActivateTouchInterface" }, // 4111921647
		{ &Z_Construct_UFunction_APlayerController_AddPitchInput, "AddPitchInput" }, // 4087796043
		{ &Z_Construct_UFunction_APlayerController_AddRollInput, "AddRollInput" }, // 3120835283
		{ &Z_Construct_UFunction_APlayerController_AddYawInput, "AddYawInput" }, // 1206269373
		{ &Z_Construct_UFunction_APlayerController_Camera, "Camera" }, // 3162879320
		{ &Z_Construct_UFunction_APlayerController_CanRestartPlayer, "CanRestartPlayer" }, // 160993323
		{ &Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride, "ClearAudioListenerAttenuationOverride" }, // 3130484744
		{ &Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride, "ClearAudioListenerOverride" }, // 3453075373
		{ &Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc, "ClientAddTextureStreamingLoc" }, // 4033962351
		{ &Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange, "ClientCancelPendingMapChange" }, // 1233357675
		{ &Z_Construct_UFunction_APlayerController_ClientCapBandwidth, "ClientCapBandwidth" }, // 4187210539
		{ &Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects, "ClientClearCameraLensEffects" }, // 3299315215
		{ &Z_Construct_UFunction_APlayerController_ClientCommitMapChange, "ClientCommitMapChange" }, // 1588298495
		{ &Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice, "ClientEnableNetworkVoice" }, // 1137649952
		{ &Z_Construct_UFunction_APlayerController_ClientEndOnlineSession, "ClientEndOnlineSession" }, // 1367515680
		{ &Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming, "ClientFlushLevelStreaming" }, // 3089750728
		{ &Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection, "ClientForceGarbageCollection" }, // 231575467
		{ &Z_Construct_UFunction_APlayerController_ClientGameEnded, "ClientGameEnded" }, // 1348009193
		{ &Z_Construct_UFunction_APlayerController_ClientGotoState, "ClientGotoState" }, // 603092328
		{ &Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput, "ClientIgnoreLookInput" }, // 1998882890
		{ &Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput, "ClientIgnoreMoveInput" }, // 3203727238
		{ &Z_Construct_UFunction_APlayerController_ClientMessage, "ClientMessage" }, // 4217541813
		{ &Z_Construct_UFunction_APlayerController_ClientMutePlayer, "ClientMutePlayer" }, // 3253059235
		{ &Z_Construct_UFunction_APlayerController_ClientPlayCameraAnim, "ClientPlayCameraAnim" }, // 183052530
		{ &Z_Construct_UFunction_APlayerController_ClientPlayCameraShake, "ClientPlayCameraShake" }, // 4067751364
		{ &Z_Construct_UFunction_APlayerController_ClientPlayCameraShakeFromSource, "ClientPlayCameraShakeFromSource" }, // 3296002632
		{ &Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal, "ClientPlayForceFeedback_Internal" }, // 2351916033
		{ &Z_Construct_UFunction_APlayerController_ClientPlaySound, "ClientPlaySound" }, // 4163215933
		{ &Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation, "ClientPlaySoundAtLocation" }, // 418937319
		{ &Z_Construct_UFunction_APlayerController_ClientPrepareMapChange, "ClientPrepareMapChange" }, // 3729866929
		{ &Z_Construct_UFunction_APlayerController_ClientPrestreamTextures, "ClientPrestreamTextures" }, // 1796847445
		{ &Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage, "ClientReceiveLocalizedMessage" }, // 2850707377
		{ &Z_Construct_UFunction_APlayerController_ClientRepObjRef, "ClientRepObjRef" }, // 3316532886
		{ &Z_Construct_UFunction_APlayerController_ClientReset, "ClientReset" }, // 1036238670
		{ &Z_Construct_UFunction_APlayerController_ClientRestart, "ClientRestart" }, // 2116378940
		{ &Z_Construct_UFunction_APlayerController_ClientRetryClientRestart, "ClientRetryClientRestart" }, // 248492941
		{ &Z_Construct_UFunction_APlayerController_ClientReturnToMainMenu, "ClientReturnToMainMenu" }, // 560306772
		{ &Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason, "ClientReturnToMainMenuWithTextReason" }, // 597700937
		{ &Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading, "ClientSetBlockOnAsyncLoading" }, // 3596603754
		{ &Z_Construct_UFunction_APlayerController_ClientSetCameraFade, "ClientSetCameraFade" }, // 2181891758
		{ &Z_Construct_UFunction_APlayerController_ClientSetCameraMode, "ClientSetCameraMode" }, // 2886526696
		{ &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode, "ClientSetCinematicMode" }, // 1801511223
		{ &Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident, "ClientSetForceMipLevelsToBeResident" }, // 867276952
		{ &Z_Construct_UFunction_APlayerController_ClientSetHUD, "ClientSetHUD" }, // 645231095
		{ &Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting, "ClientSetSpectatorWaiting" }, // 2010113109
		{ &Z_Construct_UFunction_APlayerController_ClientSetViewTarget, "ClientSetViewTarget" }, // 4285270687
		{ &Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect, "ClientSpawnCameraLensEffect" }, // 91507458
		{ &Z_Construct_UFunction_APlayerController_ClientStartOnlineSession, "ClientStartOnlineSession" }, // 3223627816
		{ &Z_Construct_UFunction_APlayerController_ClientStopCameraAnim, "ClientStopCameraAnim" }, // 121533274
		{ &Z_Construct_UFunction_APlayerController_ClientStopCameraShake, "ClientStopCameraShake" }, // 4245258325
		{ &Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource, "ClientStopCameraShakesFromSource" }, // 3670654225
		{ &Z_Construct_UFunction_APlayerController_ClientStopForceFeedback, "ClientStopForceFeedback" }, // 704384324
		{ &Z_Construct_UFunction_APlayerController_ClientTeamMessage, "ClientTeamMessage" }, // 106379883
		{ &Z_Construct_UFunction_APlayerController_ClientTravel, "ClientTravel" }, // 1766272935
		{ &Z_Construct_UFunction_APlayerController_ClientTravelInternal, "ClientTravelInternal" }, // 178059689
		{ &Z_Construct_UFunction_APlayerController_ClientUnmutePlayer, "ClientUnmutePlayer" }, // 3280506568
		{ &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus, "ClientUpdateLevelStreamingStatus" }, // 3998493093
		{ &Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus, "ClientUpdateMultipleLevelsStreamingStatus" }, // 1054913016
		{ &Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete, "ClientVoiceHandshakeComplete" }, // 3908304965
		{ &Z_Construct_UFunction_APlayerController_ClientWasKicked, "ClientWasKicked" }, // 2505311589
		{ &Z_Construct_UFunction_APlayerController_ConsoleKey, "ConsoleKey" }, // 1845766161
		{ &Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld, "DeprojectMousePositionToWorld" }, // 4080657024
		{ &Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld, "DeprojectScreenPositionToWorld" }, // 1901206344
		{ &Z_Construct_UFunction_APlayerController_EnableCheats, "EnableCheats" }, // 3629285801
		{ &Z_Construct_UFunction_APlayerController_FOV, "FOV" }, // 3242009439
		{ &Z_Construct_UFunction_APlayerController_GetFocalLocation, "GetFocalLocation" }, // 2673175440
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor, "GetHitResultUnderCursor" }, // 660706075
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel, "GetHitResultUnderCursorByChannel" }, // 1200929944
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects, "GetHitResultUnderCursorForObjects" }, // 2210742601
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger, "GetHitResultUnderFinger" }, // 1080492925
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel, "GetHitResultUnderFingerByChannel" }, // 386890787
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects, "GetHitResultUnderFingerForObjects" }, // 2153532883
		{ &Z_Construct_UFunction_APlayerController_GetHUD, "GetHUD" }, // 1488829825
		{ &Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState, "GetInputAnalogKeyState" }, // 2811361491
		{ &Z_Construct_UFunction_APlayerController_GetInputAnalogStickState, "GetInputAnalogStickState" }, // 4056525799
		{ &Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown, "GetInputKeyTimeDown" }, // 2998927317
		{ &Z_Construct_UFunction_APlayerController_GetInputMotionState, "GetInputMotionState" }, // 2447287442
		{ &Z_Construct_UFunction_APlayerController_GetInputMouseDelta, "GetInputMouseDelta" }, // 180063563
		{ &Z_Construct_UFunction_APlayerController_GetInputTouchState, "GetInputTouchState" }, // 1975178162
		{ &Z_Construct_UFunction_APlayerController_GetInputVectorKeyState, "GetInputVectorKeyState" }, // 502457827
		{ &Z_Construct_UFunction_APlayerController_GetMousePosition, "GetMousePosition" }, // 2950813620
		{ &Z_Construct_UFunction_APlayerController_GetSpectatorPawn, "GetSpectatorPawn" }, // 3684793115
		{ &Z_Construct_UFunction_APlayerController_GetViewportSize, "GetViewportSize" }, // 840194367
		{ &Z_Construct_UFunction_APlayerController_IsInputKeyDown, "IsInputKeyDown" }, // 408529516
		{ &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback, "K2_ClientPlayForceFeedback" }, // 3475891333
		{ &Z_Construct_UFunction_APlayerController_LocalTravel, "LocalTravel" }, // 437863321
		{ &Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger, "OnServerStartedVisualLogger" }, // 2733363326
		{ &Z_Construct_UFunction_APlayerController_Pause, "Pause" }, // 4030987804
		{ &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback, "PlayDynamicForceFeedback" }, // 3358965326
		{ &Z_Construct_UFunction_APlayerController_PlayHapticEffect, "PlayHapticEffect" }, // 4276003630
		{ &Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen, "ProjectWorldLocationToScreen" }, // 820597398
		{ &Z_Construct_UFunction_APlayerController_ResetControllerLightColor, "ResetControllerLightColor" }, // 1835821545
		{ &Z_Construct_UFunction_APlayerController_RestartLevel, "RestartLevel" }, // 3451526158
		{ &Z_Construct_UFunction_APlayerController_SendToConsole, "SendToConsole" }, // 2794561830
		{ &Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession, "ServerAcknowledgePossession" }, // 3555536689
		{ &Z_Construct_UFunction_APlayerController_ServerCamera, "ServerCamera" }, // 3304531457
		{ &Z_Construct_UFunction_APlayerController_ServerChangeName, "ServerChangeName" }, // 644080162
		{ &Z_Construct_UFunction_APlayerController_ServerCheckClientPossession, "ServerCheckClientPossession" }, // 2466716155
		{ &Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable, "ServerCheckClientPossessionReliable" }, // 3035680880
		{ &Z_Construct_UFunction_APlayerController_ServerExec, "ServerExec" }, // 1078621337
		{ &Z_Construct_UFunction_APlayerController_ServerExecRPC, "ServerExecRPC" }, // 2457921420
		{ &Z_Construct_UFunction_APlayerController_ServerMutePlayer, "ServerMutePlayer" }, // 2446826171
		{ &Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld, "ServerNotifyLoadedWorld" }, // 1555327931
		{ &Z_Construct_UFunction_APlayerController_ServerPause, "ServerPause" }, // 837019799
		{ &Z_Construct_UFunction_APlayerController_ServerRestartPlayer, "ServerRestartPlayer" }, // 859094376
		{ &Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation, "ServerSetSpectatorLocation" }, // 2329062217
		{ &Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting, "ServerSetSpectatorWaiting" }, // 1923042685
		{ &Z_Construct_UFunction_APlayerController_ServerShortTimeout, "ServerShortTimeout" }, // 1730792273
		{ &Z_Construct_UFunction_APlayerController_ServerToggleAILogging, "ServerToggleAILogging" }, // 3644253464
		{ &Z_Construct_UFunction_APlayerController_ServerUnmutePlayer, "ServerUnmutePlayer" }, // 295573846
		{ &Z_Construct_UFunction_APlayerController_ServerUpdateCamera, "ServerUpdateCamera" }, // 1054330980
		{ &Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility, "ServerUpdateLevelVisibility" }, // 3519247936
		{ &Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility, "ServerUpdateMultipleLevelsVisibility" }, // 3922862344
		{ &Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget, "ServerVerifyViewTarget" }, // 3455970254
		{ &Z_Construct_UFunction_APlayerController_ServerViewNextPlayer, "ServerViewNextPlayer" }, // 3072026620
		{ &Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer, "ServerViewPrevPlayer" }, // 4162696454
		{ &Z_Construct_UFunction_APlayerController_ServerViewSelf, "ServerViewSelf" }, // 2527928539
		{ &Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride, "SetAudioListenerAttenuationOverride" }, // 1949891478
		{ &Z_Construct_UFunction_APlayerController_SetAudioListenerOverride, "SetAudioListenerOverride" }, // 763387626
		{ &Z_Construct_UFunction_APlayerController_SetCinematicMode, "SetCinematicMode" }, // 4105627821
		{ &Z_Construct_UFunction_APlayerController_SetControllerLightColor, "SetControllerLightColor" }, // 2765253354
		{ &Z_Construct_UFunction_APlayerController_SetDisableHaptics, "SetDisableHaptics" }, // 783212395
		{ &Z_Construct_UFunction_APlayerController_SetHapticsByValue, "SetHapticsByValue" }, // 44163760
		{ &Z_Construct_UFunction_APlayerController_SetMouseCursorWidget, "SetMouseCursorWidget" }, // 542671982
		{ &Z_Construct_UFunction_APlayerController_SetMouseLocation, "SetMouseLocation" }, // 3978939277
		{ &Z_Construct_UFunction_APlayerController_SetName, "SetName" }, // 2990538842
		{ &Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend, "SetViewTargetWithBlend" }, // 2946445744
		{ &Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility, "SetVirtualJoystickVisibility" }, // 935900238
		{ &Z_Construct_UFunction_APlayerController_StartFire, "StartFire" }, // 573742400
		{ &Z_Construct_UFunction_APlayerController_StopHapticEffect, "StopHapticEffect" }, // 228343556
		{ &Z_Construct_UFunction_APlayerController_SwitchLevel, "SwitchLevel" }, // 2383242814
		{ &Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange, "TestServerLevelVisibilityChange" }, // 4261928123
		{ &Z_Construct_UFunction_APlayerController_ToggleSpeaking, "ToggleSpeaking" }, // 234082324
		{ &Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed, "WasInputKeyJustPressed" }, // 3936635797
		{ &Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased, "WasInputKeyJustReleased" }, // 3320860605
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PlayerControllers are used by human players to control Pawns.\n *\n * ControlRotation (accessed via GetControlRotation()), determines the aiming\n * orientation of the controlled Pawn.\n *\n * In networked games, PlayerControllers exist on the server for every player-controlled pawn,\n * and also on the controlling client's machine. They do NOT exist on a client's\n * machine for pawns controlled by remote players elsewhere on the network.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/PlayerController/\n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/PlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A Player Controller is an actor responsible for controlling a Pawn used by the player." },
		{ "ToolTip", "PlayerControllers are used by human players to control Pawns.\n\nControlRotation (accessed via GetControlRotation()), determines the aiming\norientation of the controlled Pawn.\n\nIn networked games, PlayerControllers exist on the server for every player-controlled pawn,\nand also on the controlling client's machine. They do NOT exist on a client's\nmachine for pawns controlled by remote players elsewhere on the network.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/PlayerController/" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_SpawnLocation_MetaData[] = {
		{ "Comment", "/** The location used internally when there is no pawn or spectator, to know where to spawn the spectator or focus the camera on death. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The location used internally when there is no pawn or spectator, to know where to spawn the spectator or focus the camera on death." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0020080000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_SpawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_SpawnLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController_MetaData[] = {
		{ "Comment", "/** Set during SpawnActor once and never again to indicate the intent of this controller instance (SERVER ONLY) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set during SpawnActor once and never again to indicate the intent of this controller instance (SERVER ONLY)" },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bIsLocalPlayerController = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController = { "bIsLocalPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_SpectatorPawn_MetaData[] = {
		{ "Comment", "/** The pawn used when spectating (nullptr if not spectating). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The pawn used when spectating (nullptr if not spectating)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SpectatorPawn = { "SpectatorPawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, SpectatorPawn), Z_Construct_UClass_ASpectatorPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_SpectatorPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_SpectatorPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentTouchInterface_MetaData[] = {
		{ "Comment", "/** The currently set touch interface */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The currently set touch interface" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentTouchInterface = { "CurrentTouchInterface", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, CurrentTouchInterface), Z_Construct_UClass_UTouchInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentTouchInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentTouchInterface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Whether we fully tick when the game is paused, if our tick function is allowed to do so. If false, we do a minimal update during the tick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether we fully tick when the game is paused, if our tick function is allowed to do so. If false, we do a minimal update during the tick." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bShouldPerformFullTickWhenPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused = { "bShouldPerformFullTickWhenPaused", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_InactiveStateInputComponent_MetaData[] = {
		{ "Comment", "/** InputComponent we use when player is in Inactive state. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "InputComponent we use when player is in Inactive state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InactiveStateInputComponent = { "InactiveStateInputComponent", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, InactiveStateInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_InactiveStateInputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_InactiveStateInputComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_LastCompletedSeamlessTravelCount_MetaData[] = {
		{ "Comment", "/** The value of SeamlessTravelCount, upon the last call to GameModeBase::HandleSeamlessTravelPlayer; used to detect seamless travel */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The value of SeamlessTravelCount, upon the last call to GameModeBase::HandleSeamlessTravelPlayer; used to detect seamless travel" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastCompletedSeamlessTravelCount = { "LastCompletedSeamlessTravelCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, LastCompletedSeamlessTravelCount), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_LastCompletedSeamlessTravelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_LastCompletedSeamlessTravelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_SeamlessTravelCount_MetaData[] = {
		{ "Comment", "/** Counter for this players seamless travels (used along with the below value, to restrict ServerNotifyLoadedWorld) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Counter for this players seamless travels (used along with the below value, to restrict ServerNotifyLoadedWorld)" },
	};
#endif
	const UE4CodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SeamlessTravelCount = { "SeamlessTravelCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, SeamlessTravelCount), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_SeamlessTravelCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_SeamlessTravelCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_HitResultTraceDistance_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Distance to trace when computing click events */" },
		{ "DisplayName", "Trace Distance" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Distance to trace when computing click events" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HitResultTraceDistance = { "HitResultTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, HitResultTraceDistance), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_HitResultTraceDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_HitResultTraceDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentClickTraceChannel_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Trace channel currently being used for determining what world object was clicked on. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Trace channel currently being used for determining what world object was clicked on." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentClickTraceChannel = { "CurrentClickTraceChannel", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, CurrentClickTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentClickTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentClickTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultClickTraceChannel_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Default trace channel used for determining what world object was clicked on. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Default trace channel used for determining what world object was clicked on." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultClickTraceChannel = { "DefaultClickTraceChannel", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, DefaultClickTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultClickTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultClickTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentMouseCursor_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Currently visible mouse cursor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Currently visible mouse cursor" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentMouseCursor = { "CurrentMouseCursor", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, CurrentMouseCursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentMouseCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentMouseCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultMouseCursor_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Type of mouse cursor to show by default */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Type of mouse cursor to show by default" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultMouseCursor = { "DefaultMouseCursor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, DefaultMouseCursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultMouseCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultMouseCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** List of keys that will cause click events to be forwarded, default to left click */" },
		{ "EditCondition", "bEnableClickEvents" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "List of keys that will cause click events to be forwarded, default to left click" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys = { "ClickEventKeys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, ClickEventKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys_Inner = { "ClickEventKeys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_ForceFeedbackScale_MetaData[] = {
		{ "Comment", "/** Scale applied to force feedback values */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Scale applied to force feedback values" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ForceFeedbackScale = { "ForceFeedbackScale", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, ForceFeedbackScale), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_ForceFeedbackScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_ForceFeedbackScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled_MetaData[] = {
		{ "Category", "Game|Feedback" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bForceFeedbackEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled = { "bForceFeedbackEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component touch over events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component touch over events should be generated." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bEnableTouchOverEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents = { "bEnableTouchOverEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component mouse over events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component mouse over events should be generated." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bEnableMouseOverEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents = { "bEnableMouseOverEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component touch events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component touch events should be generated." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bEnableTouchEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents = { "bEnableTouchEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component click events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component click events should be generated." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bEnableClickEvents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents = { "bEnableClickEvents", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether the mouse cursor should be displayed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the mouse cursor should be displayed." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bShowMouseCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor = { "bShowMouseCursor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_InputRollScale_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Roll input speed scaling */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Roll input speed scaling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InputRollScale = { "InputRollScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, InputRollScale), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_InputRollScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_InputRollScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_InputPitchScale_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Pitch input speed scaling */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Pitch input speed scaling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InputPitchScale = { "InputPitchScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, InputPitchScale), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_InputPitchScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_InputPitchScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_InputYawScale_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Yaw input speed scaling */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Yaw input speed scaling" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InputYawScale = { "InputYawScale", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, InputYawScale), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_InputYawScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_InputYawScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_NetConnection_MetaData[] = {
		{ "Comment", "/** The net connection this controller is communicating on, nullptr for local players on server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The net connection this controller is communicating on, nullptr for local players on server" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_NetConnection = { "NetConnection", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, NetConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_NetConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_NetConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_PendingSwapConnection_MetaData[] = {
		{ "Comment", "/**\n\x09 * This is set on the OLD PlayerController when performing a swap over a network connection\n\x09 * so we know what connection we're waiting on acknowledgment from to finish destroying this PC\n\x09 * (or when the connection is closed)\n\x09 * @see GameModeBase::SwapPlayerControllers()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "This is set on the OLD PlayerController when performing a swap over a network connection\nso we know what connection we're waiting on acknowledgment from to finish destroying this PC\n(or when the connection is closed)\n@see GameModeBase::SwapPlayerControllers()" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PendingSwapConnection = { "PendingSwapConnection", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, PendingSwapConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_PendingSwapConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_PendingSwapConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_NetPlayerIndex_MetaData[] = {
		{ "Comment", "/**\n\x09 * Index identifying players using the same base connection (splitscreen clients)\n\x09 * Used by netcode to match replicated PlayerControllers to the correct splitscreen viewport and child connection\n\x09 * replicated via special internal code, not through normal variable replication\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Index identifying players using the same base connection (splitscreen clients)\nUsed by netcode to match replicated PlayerControllers to the correct splitscreen viewport and child connection\nreplicated via special internal code, not through normal variable replication" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_NetPlayerIndex = { "NetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000200000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, NetPlayerIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_NetPlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_NetPlayerIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** True if PlayerController is currently waiting for the match to start or to respawn. Only valid in Spectating state. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "True if PlayerController is currently waiting for the match to start or to respawn. Only valid in Spectating state." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bPlayerIsWaiting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting = { "bPlayerIsWaiting", nullptr, (EPropertyFlags)0x0010000000020815, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects = { "ActiveForceFeedbackEffects", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, ActiveForceFeedbackEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects_Inner = { "ActiveForceFeedbackEffects", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActiveForceFeedbackEffect, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerInput_MetaData[] = {
		{ "Comment", "/** Object that manages player input. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Object that manages player input." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, PlayerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerInput_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_CheatClass_MetaData[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Class of my CheatManager.  The Cheat Manager is not created in shipping builds */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Class of my CheatManager.  The Cheat Manager is not created in shipping builds" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CheatClass = { "CheatClass", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, CheatClass), Z_Construct_UClass_UCheatManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_CheatClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_CheatClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_CheatManager_MetaData[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/** Object that manages \"cheat\" commands.  Not instantiated in shipping builds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Object that manages \"cheat\" commands.  Not instantiated in shipping builds." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CheatManager = { "CheatManager", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, CheatManager), Z_Construct_UClass_UCheatManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_CheatManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_CheatManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_ClientCap_MetaData[] = {
		{ "Comment", "/** Cap set by server on bandwidth from client to server in bytes/sec (only has impact if >=2600) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Cap set by server on bandwidth from client to server in bytes/sec (only has impact if >=2600)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ClientCap = { "ClientCap", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, ClientCap), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_ClientCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_ClientCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncRotation_MetaData[] = {
		{ "Comment", "/** Last rotation synced on the server for a spectator. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Last rotation synced on the server for a spectator." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncRotation = { "LastSpectatorSyncRotation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, LastSpectatorSyncRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncLocation_MetaData[] = {
		{ "Comment", "/** Last location synced on the server for a spectator. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Last location synced on the server for a spectator." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncLocation = { "LastSpectatorSyncLocation", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, LastSpectatorSyncLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorStateSynchTime_MetaData[] = {
		{ "Comment", "/** Used to make sure the client is kept synchronized when in a spectator state */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used to make sure the client is kept synchronized when in a spectator state" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorStateSynchTime = { "LastSpectatorStateSynchTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, LastSpectatorStateSynchTime), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorStateSynchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorStateSynchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents_MetaData[] = {
		{ "Comment", "/** Explicit components the camera shouldn't see (helpful for external systems to hide a component from a single player) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Explicit components the camera shouldn't see (helpful for external systems to hide a component from a single player)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents = { "HiddenPrimitiveComponents", nullptr, (EPropertyFlags)0x0014008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, HiddenPrimitiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents_Inner = { "HiddenPrimitiveComponents", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors_MetaData[] = {
		{ "Comment", "/** The actors which the camera shouldn't see - e.g. used to hide actors which the camera penetrates */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The actors which the camera shouldn't see - e.g. used to hide actors which the camera penetrates" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_SmoothTargetViewRotationSpeed_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Interp speed for blending remote view rotation for smoother client updates */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Interp speed for blending remote view rotation for smoother client updates" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SmoothTargetViewRotationSpeed = { "SmoothTargetViewRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, SmoothTargetViewRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_SmoothTargetViewRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_SmoothTargetViewRotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_TargetViewRotation_MetaData[] = {
		{ "Comment", "/** Used to replicate the view rotation of targets not owned/possessed by this PlayerController. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used to replicate the view rotation of targets not owned/possessed by this PlayerController." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_TargetViewRotation = { "TargetViewRotation", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, TargetViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_TargetViewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_TargetViewRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** \n\x09 * True to allow this player controller to manage the camera target for you,\n\x09 * typically by using the possessed pawn as the camera target. Set to false\n\x09 * if you want to manually control the camera target.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "True to allow this player controller to manage the camera target for you,\ntypically by using the possessed pawn as the camera target. Set to false\nif you want to manually control the camera target." },
	};
#endif
	void Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget_SetBit(void* Obj)
	{
		((APlayerController*)Obj)->bAutoManageActiveCameraTarget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget = { "bAutoManageActiveCameraTarget", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManagerClass_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** PlayerCamera class should be set for each game, otherwise Engine.PlayerCameraManager is used */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "PlayerCamera class should be set for each game, otherwise Engine.PlayerCameraManager is used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManagerClass = { "PlayerCameraManagerClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, PlayerCameraManagerClass), Z_Construct_UClass_APlayerCameraManager_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManagerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManagerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManager_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Camera manager associated with this Player Controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Camera manager associated with this Player Controller." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_MyHUD_MetaData[] = {
		{ "Comment", "/** Heads up display associated with this PlayerController. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Heads up display associated with this PlayerController." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_MyHUD = { "MyHUD", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, MyHUD), Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_MyHUD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_MyHUD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_ControllingDirTrackInst_MetaData[] = {
		{ "Comment", "/** Director track that's currently possessing this player controller, or none if not possessed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Director track that's currently possessing this player controller, or none if not possessed." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ControllingDirTrackInst = { "ControllingDirTrackInst", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, ControllingDirTrackInst), Z_Construct_UClass_UInterpTrackInstDirector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_ControllingDirTrackInst_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_ControllingDirTrackInst_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_AcknowledgedPawn_MetaData[] = {
		{ "Comment", "/** Used in net games so client can acknowledge it possessed a specific pawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used in net games so client can acknowledge it possessed a specific pawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_AcknowledgedPawn = { "AcknowledgedPawn", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, AcknowledgedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_AcknowledgedPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_AcknowledgedPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_Statics::NewProp_Player_MetaData[] = {
		{ "Comment", "/** UPlayer associated with this PlayerController.  Could be a local player or a net connection. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "UPlayer associated with this PlayerController.  Could be a local player or a net connection." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController, Player), Z_Construct_UClass_UPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SpawnLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SpectatorPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentTouchInterface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InactiveStateInputComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastCompletedSeamlessTravelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SeamlessTravelCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HitResultTraceDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentClickTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultClickTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentMouseCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultMouseCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ForceFeedbackScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InputRollScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InputPitchScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InputYawScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_NetConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PendingSwapConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_NetPlayerIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CheatClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CheatManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ClientCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorStateSynchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SmoothTargetViewRotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_TargetViewRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManagerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_MyHUD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ControllingDirTrackInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_AcknowledgedPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_Statics::ClassParams = {
		&APlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerController, 1453176106);
	template<> ENGINE_API UClass* StaticClass<APlayerController>()
	{
		return APlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerController(Z_Construct_UClass_APlayerController, &APlayerController::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerController"), false, nullptr, nullptr, nullptr);

	void APlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TargetViewRotation(TEXT("TargetViewRotation"));
		static const FName Name_SpawnLocation(TEXT("SpawnLocation"));

		const bool bIsValid = true
			&& Name_TargetViewRotation == ClassReps[(int32)ENetFields_Private::TargetViewRotation].Property->GetFName()
			&& Name_SpawnLocation == ClassReps[(int32)ENetFields_Private::SpawnLocation].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
