// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/GameNetworkManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameNetworkManager() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStandbyType();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameNetworkManager();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
// End Cross Module References
	static UEnum* EStandbyType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_EStandbyType, Z_Construct_UPackage__Script_Engine(), TEXT("EStandbyType"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EStandbyType>()
	{
		return EStandbyType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EStandbyType(EStandbyType_StaticEnum, TEXT("/Script/Engine"), TEXT("EStandbyType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_EStandbyType_Hash() { return 2727818610U; }
	UEnum* Z_Construct_UEnum_Engine_EStandbyType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EStandbyType"), 0, Get_Z_Construct_UEnum_Engine_EStandbyType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "STDBY_Rx", (int64)STDBY_Rx },
				{ "STDBY_Tx", (int64)STDBY_Tx },
				{ "STDBY_BadPing", (int64)STDBY_BadPing },
				{ "STDBY_MAX", (int64)STDBY_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Describes which standby detection event occured so the game can take appropriate action. */" },
				{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
				{ "STDBY_BadPing.Name", "STDBY_BadPing" },
				{ "STDBY_MAX.Name", "STDBY_MAX" },
				{ "STDBY_Rx.Name", "STDBY_Rx" },
				{ "STDBY_Tx.Name", "STDBY_Tx" },
				{ "ToolTip", "Describes which standby detection event occured so the game can take appropriate action." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"EStandbyType",
				"EStandbyType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AGameNetworkManager::StaticRegisterNativesAGameNetworkManager()
	{
	}
	UClass* Z_Construct_UClass_AGameNetworkManager_NoRegister()
	{
		return AGameNetworkManager::StaticClass();
	}
	struct Z_Construct_UClass_AGameNetworkManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDistanceBasedRelevancy_MetaData[];
#endif
		static void NewProp_bUseDistanceBasedRelevancy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDistanceBasedRelevancy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData[];
#endif
		static void NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyDriftAllowance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyResolutionRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyResolutionRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyMinTimeMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementTimeDiscrepancyMaxTimeMargin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyResolution_MetaData[];
#endif
		static void NewProp_bMovementTimeDiscrepancyResolution_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMovementTimeDiscrepancyDetection_MetaData[];
#endif
		static void NewProp_bMovementTimeDiscrepancyDetection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMovementTimeDiscrepancyDetection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetCamUpdatePositionLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientNetCamUpdatePositionLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetCamUpdateDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientNetCamUpdateDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientErrorUpdateRateLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientErrorUpdateRateLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientAuthorativePosition_MetaData[];
#endif
		static void NewProp_ClientAuthorativePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ClientAuthorativePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientNetSendMoveThrottleOverPlayerCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ClientNetSendMoveThrottleAtNetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTimeStationary_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTimeStationary;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTimeThrottled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientNetSendMoveDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ClientNetSendMoveDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClientSmoothingDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClientSmoothingDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMoveDeltaTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMoveDeltaTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerForcedUpdateHitchCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerForcedUpdateHitchCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerForcedUpdateHitchThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerForcedUpdateHitchThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxClientForcedUpdateDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxClientForcedUpdateDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXCLIENTUPDATEINTERVAL_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXCLIENTUPDATEINTERVAL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CLIENTADJUSTUPDATECOST_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CLIENTADJUSTUPDATECOST;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXNEARZEROVELOCITYSQUARED;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MAXPOSITIONERRORSQUARED_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MAXPOSITIONERRORSQUARED;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveRepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveRepSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinInProgressStandbyWaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JoinInProgressStandbyWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentForBadPing_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentForBadPing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForTxStandby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForTxStandby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentMissingForRxStandby_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PercentMissingForRxStandby;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyTxCheatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyTxCheatTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandbyRxCheatTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StandbyRxCheatTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStandbyCheatTriggered_MetaData[];
#endif
		static void NewProp_bHasStandbyCheatTriggered_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStandbyCheatTriggered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsStandbyCheckingEnabled_MetaData[];
#endif
		static void NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsStandbyCheckingEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDynamicBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxDynamicBandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDynamicBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinDynamicBandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalNetBandwidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TotalNetBandwidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastNetSpeedUpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastNetSpeedUpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdjustedNetSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AdjustedNetSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeverePingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeverePingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BadPingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeverePacketLossThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeverePacketLossThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadPacketLossThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BadPacketLossThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameNetworkManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Handles game-specific networking management (cheat detection, bandwidth management, etc.).\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/GameNetworkManager.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Handles game-specific networking management (cheat detection, bandwidth management, etc.)." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_MetaData[] = {
		{ "Comment", "/** If true, actor network relevancy is constrained by whether they are within their NetCullDistanceSquared from the client's view point. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If true, actor network relevancy is constrained by whether they are within their NetCullDistanceSquared from the client's view point." },
	};
#endif
	void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_SetBit(void* Obj)
	{
		((AGameNetworkManager*)Obj)->bUseDistanceBasedRelevancy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy = { "bUseDistanceBasedRelevancy", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData[] = {
		{ "Comment", "/** \n\x09 * Whether client moves should be force corrected during time discrepancy resolution, useful for projects that have lenient \n\x09 * move error tolerance/ClientAuthorativePosition enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Whether client moves should be force corrected during time discrepancy resolution, useful for projects that have lenient\nmove error tolerance/ClientAuthorativePosition enabled." },
	};
#endif
	void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit(void* Obj)
	{
		((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyForceCorrectionsDuringResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution = { "bMovementTimeDiscrepancyForceCorrectionsDuringResolution", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData[] = {
		{ "Comment", "/** \n\x09 * Accepted drift in clocks between client and server as a percent per second allowed. \n\x09 *\n\x09 * 0.0 is \"no forgiveness\" and all logic would run on raw values, no tampering on the server side.\n\x09 * 0.02 would be a 2% per second difference \"forgiven\" - if the time discrepancy in a given second was less than 2%,\n\x09 * the error handling/detection code effectively ignores it.\n\x09 * \n\x09 * Increasing this value above 0% lessens the chance of false positives on time discrepancy (burst packet loss, performance\n\x09 * hitches), but also means anyone tampering with their client time below that percent will not be detected and no resolution\n\x09 * action will be taken, and anyone above that threshold will still gain the advantage of this % of time boost (if running at \n\x09 * 10% speed-up and this value is 0.05 or 5% allowance, they would only be resolved down to a 5% speed boost).\n\x09 *\n\x09 * Time discrepancy detection code DOES keep track of LifetimeRawTimeDiscrepancy, which is unaffected by this drift allowance,\n\x09 * so cheating below DriftAllowance percent could be tracked and acted on outside of an individual game. For example, if DriftAllowance\n\x09 * was 0.05 (meaning we're not going to actively prevent any cheating below 5% boosts to ensure less false positives for normal players),\n\x09 * we could still post-process analytics of the game showing that Player X regularly runs at 4% speed boost and take action.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Accepted drift in clocks between client and server as a percent per second allowed.\n\n0.0 is \"no forgiveness\" and all logic would run on raw values, no tampering on the server side.\n0.02 would be a 2% per second difference \"forgiven\" - if the time discrepancy in a given second was less than 2%,\nthe error handling/detection code effectively ignores it.\n\nIncreasing this value above 0% lessens the chance of false positives on time discrepancy (burst packet loss, performance\nhitches), but also means anyone tampering with their client time below that percent will not be detected and no resolution\naction will be taken, and anyone above that threshold will still gain the advantage of this % of time boost (if running at\n10% speed-up and this value is 0.05 or 5% allowance, they would only be resolved down to a 5% speed boost).\n\nTime discrepancy detection code DOES keep track of LifetimeRawTimeDiscrepancy, which is unaffected by this drift allowance,\nso cheating below DriftAllowance percent could be tracked and acted on outside of an individual game. For example, if DriftAllowance\nwas 0.05 (meaning we're not going to actively prevent any cheating below 5% boosts to ensure less false positives for normal players),\nwe could still post-process analytics of the game showing that Player X regularly runs at 4% speed boost and take action." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyDriftAllowance = { "MovementTimeDiscrepancyDriftAllowance", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyDriftAllowance), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyDriftAllowance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyResolutionRate_MetaData[] = {
		{ "Comment", "/** \n\x09 * During time discrepancy resolution, we \"pay back\" the time discrepancy at this rate for future moves until total error is zero.\n\x09 * 1.0 = 100% resolution rate, meaning the next X ServerMoves from the client are fully paying back the time, \n\x09 * 0.5 = 50% resolution rate, meaning future ServerMoves will spend 50% of tick continuing to move the character and 50% paying back.\n\x09 * Lowering from 100% could be used to produce less severe/noticeable corrections, although typically we would want to correct\n\x09 * the client as quickly as possible.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "During time discrepancy resolution, we \"pay back\" the time discrepancy at this rate for future moves until total error is zero.\n1.0 = 100% resolution rate, meaning the next X ServerMoves from the client are fully paying back the time,\n0.5 = 50% resolution rate, meaning future ServerMoves will spend 50% of tick continuing to move the character and 50% paying back.\nLowering from 100% could be used to produce less severe/noticeable corrections, although typically we would want to correct\nthe client as quickly as possible." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyResolutionRate = { "MovementTimeDiscrepancyResolutionRate", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyResolutionRate), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyResolutionRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyResolutionRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData[] = {
		{ "Comment", "/** Maximum time client can be behind. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Maximum time client can be behind." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMinTimeMargin = { "MovementTimeDiscrepancyMinTimeMargin", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyMinTimeMargin), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMinTimeMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData[] = {
		{ "Comment", "/** Maximum time client can be ahead before triggering movement time discrepancy detection/resolution (if enabled). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Maximum time client can be ahead before triggering movement time discrepancy detection/resolution (if enabled)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMaxTimeMargin = { "MovementTimeDiscrepancyMaxTimeMargin", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MovementTimeDiscrepancyMaxTimeMargin), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMaxTimeMargin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_MetaData[] = {
		{ "Comment", "/** Whether movement time discrepancy resolution is enabled (when detected, make client movement \"pay back\" excessive time discrepancies) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Whether movement time discrepancy resolution is enabled (when detected, make client movement \"pay back\" excessive time discrepancies)" },
	};
#endif
	void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_SetBit(void* Obj)
	{
		((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyResolution = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution = { "bMovementTimeDiscrepancyResolution", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_MetaData[] = {
		{ "Comment", "/** Whether movement time discrepancy detection is enabled. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Whether movement time discrepancy detection is enabled." },
	};
#endif
	void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_SetBit(void* Obj)
	{
		((AGameNetworkManager*)Obj)->bMovementTimeDiscrepancyDetection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection = { "bMovementTimeDiscrepancyDetection", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdatePositionLimit_MetaData[] = {
		{ "Comment", "/** Camera position change limit, when exceeded allows an immediate ServerUpdateCamera call. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Camera position change limit, when exceeded allows an immediate ServerUpdateCamera call." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdatePositionLimit = { "ClientNetCamUpdatePositionLimit", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetCamUpdatePositionLimit), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdatePositionLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdatePositionLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdateDeltaTime_MetaData[] = {
		{ "Comment", "/** Minimum delay between calls to ServerUpdateCamera, in seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Minimum delay between calls to ServerUpdateCamera, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdateDeltaTime = { "ClientNetCamUpdateDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetCamUpdateDeltaTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdateDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdateDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientErrorUpdateRateLimit_MetaData[] = {
		{ "Comment", "/** Minimum delay between the server sending error corrections to a client, in seconds. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Minimum delay between the server sending error corrections to a client, in seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientErrorUpdateRateLimit = { "ClientErrorUpdateRateLimit", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientErrorUpdateRateLimit), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientErrorUpdateRateLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientErrorUpdateRateLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_MetaData[] = {
		{ "Comment", "/** If client update is within MAXPOSITIONERRORSQUARED then he is authorative on his final position */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If client update is within MAXPOSITIONERRORSQUARED then he is authorative on his final position" },
	};
#endif
	void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_SetBit(void* Obj)
	{
		((AGameNetworkManager*)Obj)->ClientAuthorativePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition = { "ClientAuthorativePosition", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData[] = {
		{ "Comment", "/** When player count is greater than this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "When player count is greater than this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleOverPlayerCount = { "ClientNetSendMoveThrottleOverPlayerCount", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveThrottleOverPlayerCount), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleOverPlayerCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData[] = {
		{ "Comment", "/** When player net speed (CurrentNetSpeed, based on ConfiguredInternetSpeed or ConfiguredLanSpeed) is less than or equal to this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "When player net speed (CurrentNetSpeed, based on ConfiguredInternetSpeed or ConfiguredLanSpeed) is less than or equal to this amount, ClientNetSendMoveDeltaTimeThrottled is used instead of ClientNetSendMoveDeltaTime." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleAtNetSpeed = { "ClientNetSendMoveThrottleAtNetSpeed", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveThrottleAtNetSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleAtNetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeStationary_MetaData[] = {
		{ "Comment", "/** ClientNetSendMoveDeltaTimeStationary is used when players are determined to not be moving or changing their view. See ClientNetSendMoveDeltaTime for more info. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "ClientNetSendMoveDeltaTimeStationary is used when players are determined to not be moving or changing their view. See ClientNetSendMoveDeltaTime for more info." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeStationary = { "ClientNetSendMoveDeltaTimeStationary", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTimeStationary), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeStationary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeStationary_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData[] = {
		{ "Comment", "/** ClientNetSendMoveDeltaTimeThrottled is used in place of ClientNetSendMoveDeltaTime when player count is high or net speed is low. See ClientNetSendMoveDeltaTime for more info. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "ClientNetSendMoveDeltaTimeThrottled is used in place of ClientNetSendMoveDeltaTime when player count is high or net speed is low. See ClientNetSendMoveDeltaTime for more info." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeThrottled = { "ClientNetSendMoveDeltaTimeThrottled", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTimeThrottled), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeThrottled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTime_MetaData[] = {
		{ "Comment", "/**\n\x09 * ClientNetSendMoveDeltaTime is the default minimum time delta of CharacterMovement client moves to the server. When updates occur more frequently, they may be combined to save bandwidth.\n\x09 * This value is not used when player count is over ClientNetSendMoveThrottleOverPlayerCount or player net speed is <= ClientNetSendMoveThrottleAtNetSpeed (see ClientNetSendMoveDeltaTimeThrottled).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "ClientNetSendMoveDeltaTime is the default minimum time delta of CharacterMovement client moves to the server. When updates occur more frequently, they may be combined to save bandwidth.\nThis value is not used when player count is over ClientNetSendMoveThrottleOverPlayerCount or player net speed is <= ClientNetSendMoveThrottleAtNetSpeed (see ClientNetSendMoveDeltaTimeThrottled)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTime = { "ClientNetSendMoveDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ClientNetSendMoveDeltaTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientSmoothingDeltaTime_MetaData[] = {
		{ "Comment", "/** MaxClientSmoothingDeltaTime is the maximum delta time between server updates that clients are allowed to smooth between for position interpolation. This was previously (2 * MaxMoveDeltaTime). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MaxClientSmoothingDeltaTime is the maximum delta time between server updates that clients are allowed to smooth between for position interpolation. This was previously (2 * MaxMoveDeltaTime)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientSmoothingDeltaTime = { "MaxClientSmoothingDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MaxClientSmoothingDeltaTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientSmoothingDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientSmoothingDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxMoveDeltaTime_MetaData[] = {
		{ "Comment", "/** MaxMoveDeltaTime is the default maximum time delta of CharacterMovement ServerMoves. Should be less than or equal to MAXCLIENTUPDATEINTERVAL, otherwise server will interfere by forcing position updates. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MaxMoveDeltaTime is the default maximum time delta of CharacterMovement ServerMoves. Should be less than or equal to MAXCLIENTUPDATEINTERVAL, otherwise server will interfere by forcing position updates." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxMoveDeltaTime = { "MaxMoveDeltaTime", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MaxMoveDeltaTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxMoveDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxMoveDeltaTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchCooldown_MetaData[] = {
		{ "Comment", "/** Ignore forced client movement updates when server hitch was detected within this amount of time in the past. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Ignore forced client movement updates when server hitch was detected within this amount of time in the past." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchCooldown = { "ServerForcedUpdateHitchCooldown", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ServerForcedUpdateHitchCooldown), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchThreshold_MetaData[] = {
		{ "Comment", "/** Ignore forced client movement updates when server hitches for longer than this duration. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Ignore forced client movement updates when server hitches for longer than this duration." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchThreshold = { "ServerForcedUpdateHitchThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, ServerForcedUpdateHitchThreshold), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientForcedUpdateDuration_MetaData[] = {
		{ "Comment", "/** MaxClientForcedUpdateDuration is the maximum time duration over which the server will force updates, after MAXCLIENTUPDATEINTERVAL is initially exceeded. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MaxClientForcedUpdateDuration is the maximum time duration over which the server will force updates, after MAXCLIENTUPDATEINTERVAL is initially exceeded." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientForcedUpdateDuration = { "MaxClientForcedUpdateDuration", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MaxClientForcedUpdateDuration), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientForcedUpdateDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientForcedUpdateDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXCLIENTUPDATEINTERVAL_MetaData[] = {
		{ "Comment", "/** MAXCLIENTUPDATEINTERVAL is the maximum time between movement updates from the client before the server forces an update. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MAXCLIENTUPDATEINTERVAL is the maximum time between movement updates from the client before the server forces an update." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXCLIENTUPDATEINTERVAL = { "MAXCLIENTUPDATEINTERVAL", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MAXCLIENTUPDATEINTERVAL), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXCLIENTUPDATEINTERVAL_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXCLIENTUPDATEINTERVAL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_CLIENTADJUSTUPDATECOST_MetaData[] = {
		{ "Comment", "/** CLIENTADJUSTUPDATECOST is the bandwidth cost in bytes of sending a client adjustment update. 180 is greater than the actual cost, but represents a tweaked value reserving enough bandwidth for\n\x09other updates sent to the client.  Increase this value to reduce client adjustment update frequency, or if the amount of data sent in the clientadjustment() call increases */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "CLIENTADJUSTUPDATECOST is the bandwidth cost in bytes of sending a client adjustment update. 180 is greater than the actual cost, but represents a tweaked value reserving enough bandwidth for\n      other updates sent to the client.  Increase this value to reduce client adjustment update frequency, or if the amount of data sent in the clientadjustment() call increases" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_CLIENTADJUSTUPDATECOST = { "CLIENTADJUSTUPDATECOST", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, CLIENTADJUSTUPDATECOST), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_CLIENTADJUSTUPDATECOST_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_CLIENTADJUSTUPDATECOST_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData[] = {
		{ "Comment", "/** MAXNEARZEROVELOCITYSQUARED is the square of the max velocity that is considered zero (not corrected) in net play */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MAXNEARZEROVELOCITYSQUARED is the square of the max velocity that is considered zero (not corrected) in net play" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXNEARZEROVELOCITYSQUARED = { "MAXNEARZEROVELOCITYSQUARED", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MAXNEARZEROVELOCITYSQUARED), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXNEARZEROVELOCITYSQUARED_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXPOSITIONERRORSQUARED_MetaData[] = {
		{ "Comment", "/** MAXPOSITIONERRORSQUARED is the square of the max position error that is accepted (not corrected) in net play */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "MAXPOSITIONERRORSQUARED is the square of the max position error that is accepted (not corrected) in net play" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXPOSITIONERRORSQUARED = { "MAXPOSITIONERRORSQUARED", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MAXPOSITIONERRORSQUARED), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXPOSITIONERRORSQUARED_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXPOSITIONERRORSQUARED_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MoveRepSize_MetaData[] = {
		{ "Comment", "/** Average size of replicated move packet (ServerMove() packet size) from player */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Average size of replicated move packet (ServerMove() packet size) from player" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MoveRepSize = { "MoveRepSize", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MoveRepSize), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MoveRepSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MoveRepSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData[] = {
		{ "Comment", "/** The amount of time to wait before checking a connection for standby issues */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The amount of time to wait before checking a connection for standby issues" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_JoinInProgressStandbyWaitTime = { "JoinInProgressStandbyWaitTime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, JoinInProgressStandbyWaitTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_JoinInProgressStandbyWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentForBadPing_MetaData[] = {
		{ "Comment", "/** The percentage of clients with bad ping before triggering the standby code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The percentage of clients with bad ping before triggering the standby code" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentForBadPing = { "PercentForBadPing", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, PercentForBadPing), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentForBadPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentForBadPing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForTxStandby_MetaData[] = {
		{ "Comment", "/** The percentage of clients missing TX data before triggering the standby code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The percentage of clients missing TX data before triggering the standby code" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForTxStandby = { "PercentMissingForTxStandby", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, PercentMissingForTxStandby), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForTxStandby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForTxStandby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForRxStandby_MetaData[] = {
		{ "Comment", "/** The percentage of clients missing RX data before triggering the standby code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The percentage of clients missing RX data before triggering the standby code" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForRxStandby = { "PercentMissingForRxStandby", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, PercentMissingForRxStandby), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForRxStandby_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForRxStandby_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyTxCheatTime_MetaData[] = {
		{ "Comment", "/** The amount of time without packets before triggering the cheat code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyTxCheatTime = { "StandbyTxCheatTime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, StandbyTxCheatTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyTxCheatTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyTxCheatTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyRxCheatTime_MetaData[] = {
		{ "Comment", "/** The amount of time without packets before triggering the cheat code */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The amount of time without packets before triggering the cheat code" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyRxCheatTime = { "StandbyRxCheatTime", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, StandbyRxCheatTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyRxCheatTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyRxCheatTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_MetaData[] = {
		{ "Comment", "/** Used to determine whether we've already caught a cheat or not */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Used to determine whether we've already caught a cheat or not" },
	};
#endif
	void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_SetBit(void* Obj)
	{
		((AGameNetworkManager*)Obj)->bHasStandbyCheatTriggered = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered = { "bHasStandbyCheatTriggered", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData[] = {
		{ "Comment", "/** Used to determine if checking for standby cheats should occur */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Used to determine if checking for standby cheats should occur" },
	};
#endif
	void Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit(void* Obj)
	{
		((AGameNetworkManager*)Obj)->bIsStandbyCheckingEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled = { "bIsStandbyCheckingEnabled", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(AGameNetworkManager), &Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxDynamicBandwidth_MetaData[] = {
		{ "Comment", "/** Maximum bandwidth dynamically set per connection */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Maximum bandwidth dynamically set per connection" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxDynamicBandwidth = { "MaxDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MaxDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxDynamicBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxDynamicBandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MinDynamicBandwidth_MetaData[] = {
		{ "Comment", "/** Minimum bandwidth dynamically set per connection */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Minimum bandwidth dynamically set per connection" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MinDynamicBandwidth = { "MinDynamicBandwidth", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, MinDynamicBandwidth), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MinDynamicBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MinDynamicBandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_TotalNetBandwidth_MetaData[] = {
		{ "Comment", "/** Total available bandwidth for listen server, split dynamically across net connections */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Total available bandwidth for listen server, split dynamically across net connections" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_TotalNetBandwidth = { "TotalNetBandwidth", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, TotalNetBandwidth), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_TotalNetBandwidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_TotalNetBandwidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_LastNetSpeedUpdateTime_MetaData[] = {
		{ "Comment", "/**  Last time netspeed was updated for server (by client entering or leaving) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Last time netspeed was updated for server (by client entering or leaving)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_LastNetSpeedUpdateTime = { "LastNetSpeedUpdateTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, LastNetSpeedUpdateTime), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_LastNetSpeedUpdateTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_LastNetSpeedUpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_AdjustedNetSpeed_MetaData[] = {
		{ "Comment", "/** Current adjusted net speed - Used for dynamically managing netspeed for listen servers*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Current adjusted net speed - Used for dynamically managing netspeed for listen servers" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_AdjustedNetSpeed = { "AdjustedNetSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, AdjustedNetSpeed), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_AdjustedNetSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_AdjustedNetSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePingThreshold_MetaData[] = {
		{ "Comment", "/** Similar to BadPingThreshold, but used to track exceptionally bad pings. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "Similar to BadPingThreshold, but used to track exceptionally bad pings." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePingThreshold = { "SeverePingThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, SeverePingThreshold), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPingThreshold_MetaData[] = {
		{ "Comment", "/** The point we determine the server is either delaying packets or has bad upstream. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "The point we determine the server is either delaying packets or has bad upstream." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPingThreshold = { "BadPingThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, BadPingThreshold), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePacketLossThreshold_MetaData[] = {
		{ "Comment", "/* If the packet loss goes over this threshold, we have severe packet loss. Value is between 0 and 1*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If the packet loss goes over this threshold, we have severe packet loss. Value is between 0 and 1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePacketLossThreshold = { "SeverePacketLossThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, SeverePacketLossThreshold), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePacketLossThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePacketLossThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPacketLossThreshold_MetaData[] = {
		{ "Comment", "/* If packet loss goes over this value, we have bad packet loss. Value is between 0 and 1.*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameNetworkManager.h" },
		{ "ToolTip", "If packet loss goes over this value, we have bad packet loss. Value is between 0 and 1." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPacketLossThreshold = { "BadPacketLossThreshold", nullptr, (EPropertyFlags)0x0010000000044000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameNetworkManager, BadPacketLossThreshold), METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPacketLossThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPacketLossThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameNetworkManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bUseDistanceBasedRelevancy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyForceCorrectionsDuringResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyDriftAllowance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyResolutionRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMinTimeMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MovementTimeDiscrepancyMaxTimeMargin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bMovementTimeDiscrepancyDetection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdatePositionLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetCamUpdateDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientErrorUpdateRateLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientAuthorativePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleOverPlayerCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveThrottleAtNetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeStationary,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTimeThrottled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ClientNetSendMoveDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientSmoothingDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxMoveDeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_ServerForcedUpdateHitchThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxClientForcedUpdateDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXCLIENTUPDATEINTERVAL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_CLIENTADJUSTUPDATECOST,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXNEARZEROVELOCITYSQUARED,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MAXPOSITIONERRORSQUARED,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MoveRepSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_JoinInProgressStandbyWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentForBadPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForTxStandby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_PercentMissingForRxStandby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyTxCheatTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_StandbyRxCheatTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bHasStandbyCheatTriggered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_bIsStandbyCheckingEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MaxDynamicBandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_MinDynamicBandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_TotalNetBandwidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_LastNetSpeedUpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_AdjustedNetSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_SeverePacketLossThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameNetworkManager_Statics::NewProp_BadPacketLossThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameNetworkManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameNetworkManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameNetworkManager_Statics::ClassParams = {
		&AGameNetworkManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameNetworkManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameNetworkManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameNetworkManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameNetworkManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameNetworkManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameNetworkManager, 1311774950);
	template<> ENGINE_API UClass* StaticClass<AGameNetworkManager>()
	{
		return AGameNetworkManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameNetworkManager(Z_Construct_UClass_AGameNetworkManager, &AGameNetworkManager::StaticClass, TEXT("/Script/Engine"), TEXT("AGameNetworkManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameNetworkManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
