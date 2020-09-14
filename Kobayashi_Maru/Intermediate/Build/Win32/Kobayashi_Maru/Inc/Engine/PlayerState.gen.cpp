// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/PlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerState() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(APlayerState::execGetPlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetPlayerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_UniqueId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_UniqueId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_PlayerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_bIsInactive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bIsInactive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_PlayerName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_PlayerName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlayerState::execOnRep_Score)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Score();
		P_NATIVE_END;
	}
	static FName NAME_APlayerState_ReceiveCopyProperties = FName(TEXT("ReceiveCopyProperties"));
	void APlayerState::ReceiveCopyProperties(APlayerState* NewPlayerState)
	{
		PlayerState_eventReceiveCopyProperties_Parms Parms;
		Parms.NewPlayerState=NewPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveCopyProperties),&Parms);
	}
	static FName NAME_APlayerState_ReceiveOverrideWith = FName(TEXT("ReceiveOverrideWith"));
	void APlayerState::ReceiveOverrideWith(APlayerState* OldPlayerState)
	{
		PlayerState_eventReceiveOverrideWith_Parms Parms;
		Parms.OldPlayerState=OldPlayerState;
		ProcessEvent(FindFunctionChecked(NAME_APlayerState_ReceiveOverrideWith),&Parms);
	}
	void APlayerState::StaticRegisterNativesAPlayerState()
	{
		UClass* Class = APlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetPlayerName", &APlayerState::execGetPlayerName },
			{ "OnRep_bIsInactive", &APlayerState::execOnRep_bIsInactive },
			{ "OnRep_PlayerId", &APlayerState::execOnRep_PlayerId },
			{ "OnRep_PlayerName", &APlayerState::execOnRep_PlayerName },
			{ "OnRep_Score", &APlayerState::execOnRep_Score },
			{ "OnRep_UniqueId", &APlayerState::execOnRep_UniqueId },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlayerState_GetPlayerName_Statics
	{
		struct PlayerState_eventGetPlayerName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerState_eventGetPlayerName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/** returns current player name */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "returns current player name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "GetPlayerName", nullptr, nullptr, sizeof(PlayerState_eventGetPlayerName_Parms), Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_GetPlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_GetPlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_bIsInactive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_bIsInactive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_bIsInactive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_PlayerId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_PlayerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_PlayerName", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_PlayerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_PlayerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_Score_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_Score", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_Score()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_Score_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "OnRep_UniqueId", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_OnRep_UniqueId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_OnRep_UniqueId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::NewProp_NewPlayerState = { "NewPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerState_eventReceiveCopyProperties_Parms, NewPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::NewProp_NewPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/*\n\x09* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when traveling to a new level\n\x09*\n\x09* @param NewPlayerState\x09\x09New PlayerState, which we fill with the current properties\n\x09*/" },
		{ "DisplayName", "CopyProperties" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when traveling to a new level\n*\n* @param NewPlayerState         New PlayerState, which we fill with the current properties" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "ReceiveCopyProperties", nullptr, nullptr, sizeof(PlayerState_eventReceiveCopyProperties_Parms), Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveCopyProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_ReceiveCopyProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldPlayerState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::NewProp_OldPlayerState = { "OldPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerState_eventReceiveOverrideWith_Parms, OldPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::NewProp_OldPlayerState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/*\n\x09* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when reconnecting\n\x09*\n\x09* @param OldPlayerState\x09\x09Old PlayerState, which we use to fill the new one with\n\x09*/" },
		{ "DisplayName", "OverrideWith" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "* Can be implemented in Blueprint Child to move more properties from old to new PlayerState when reconnecting\n*\n* @param OldPlayerState         Old PlayerState, which we use to fill the new one with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerState, nullptr, "ReceiveOverrideWith", nullptr, nullptr, sizeof(PlayerState_eventReceiveOverrideWith_Parms), Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlayerState_ReceiveOverrideWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlayerState_ReceiveOverrideWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlayerState_NoRegister()
	{
		return APlayerState::StaticClass();
	}
	struct Z_Construct_UClass_APlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNamePrivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerNamePrivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnPrivate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PawnPrivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniqueId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UniqueId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedNetworkAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SavedNetworkAddress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineMessageClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EngineMessageClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFromPreviousLevel_MetaData[];
#endif
		static void NewProp_bFromPreviousLevel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromPreviousLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInactive_MetaData[];
#endif
		static void NewProp_bIsInactive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInactive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsABot_MetaData[];
#endif
		static void NewProp_bIsABot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsABot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlySpectator_MetaData[];
#endif
		static void NewProp_bOnlySpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlySpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpectator_MetaData[];
#endif
		static void NewProp_bIsSpectator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpectator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldUpdateReplicatedPing_MetaData[];
#endif
		static void NewProp_bShouldUpdateReplicatedPing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldUpdateReplicatedPing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Score_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerState_GetPlayerName, "GetPlayerName" }, // 2143745194
		{ &Z_Construct_UFunction_APlayerState_OnRep_bIsInactive, "OnRep_bIsInactive" }, // 3033436223
		{ &Z_Construct_UFunction_APlayerState_OnRep_PlayerId, "OnRep_PlayerId" }, // 24297229
		{ &Z_Construct_UFunction_APlayerState_OnRep_PlayerName, "OnRep_PlayerName" }, // 3808293743
		{ &Z_Construct_UFunction_APlayerState_OnRep_Score, "OnRep_Score" }, // 3170410327
		{ &Z_Construct_UFunction_APlayerState_OnRep_UniqueId, "OnRep_UniqueId" }, // 1293344570
		{ &Z_Construct_UFunction_APlayerState_ReceiveCopyProperties, "ReceiveCopyProperties" }, // 4060238035
		{ &Z_Construct_UFunction_APlayerState_ReceiveOverrideWith, "ReceiveOverrideWith" }, // 359363841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A PlayerState is created for every player on a server (or in a standalone game).\n * PlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GameFramework/PlayerState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A PlayerState is created for every player on a server (or in a standalone game).\nPlayerStates are replicated to all clients, and contain network game relevant information about the player, such as playername, score, etc." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData[] = {
		{ "Comment", "/** Player name, or blank if none. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Player name, or blank if none." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate = { "PlayerNamePrivate", "OnRep_PlayerName", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, PlayerNamePrivate), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerState" },
		{ "Comment", "/** The pawn that is controlled by by this player state. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "The pawn that is controlled by by this player state." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate = { "PawnPrivate", nullptr, (EPropertyFlags)0x0040000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, PawnPrivate), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId = { "UniqueId", "OnRep_UniqueId", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, UniqueId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData[] = {
		{ "Comment", "/** Used to match up InactivePlayerState with rejoining playercontroller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Used to match up InactivePlayerState with rejoining playercontroller." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress = { "SavedNetworkAddress", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, SavedNetworkAddress), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData[] = {
		{ "Comment", "/** This is used for sending game agnostic messages that can be localized */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "This is used for sending game agnostic messages that can be localized" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass = { "EngineMessageClass", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, EngineMessageClass), Z_Construct_UClass_ULocalMessage_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, StartTime), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bFromPreviousLevel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel = { "bFromPreviousLevel", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsInactive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive = { "bIsInactive", "OnRep_bIsInactive", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsABot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot = { "bIsABot", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bOnlySpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator = { "bOnlySpectator", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bIsSpectator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator = { "bIsSpectator", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "Comment", "/**\n\x09 * Whether or not this player's replicated Ping value is updated automatically.\n\x09 * Since player states are always relevant by default, in cases where there are many players replicating,\n\x09 * replicating the ping value can cause additional unnecessary overhead on servers if the value isn't\n\x09 * needed on clients.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
		{ "ToolTip", "Whether or not this player's replicated Ping value is updated automatically.\nSince player states are always relevant by default, in cases where there are many players replicating,\nreplicating the ping value can cause additional unnecessary overhead on servers if the value isn't\nneeded on clients." },
	};
#endif
	void Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_SetBit(void* Obj)
	{
		((APlayerState*)Obj)->bShouldUpdateReplicatedPing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing = { "bShouldUpdateReplicatedPing", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(APlayerState), &Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_Ping_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000034, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, Ping), nullptr, METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_Ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_Ping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId = { "PlayerId", "OnRep_PlayerId", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, PlayerId), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData[] = {
		{ "Category", "PlayerState" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerState_Statics::NewProp_Score = { "Score", "OnRep_Score", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerState, Score), METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::NewProp_Score_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerNamePrivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PawnPrivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_UniqueId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_SavedNetworkAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_EngineMessageClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_StartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bFromPreviousLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsInactive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsABot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bOnlySpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bIsSpectator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_bShouldUpdateReplicatedPing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_Ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_PlayerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerState_Statics::NewProp_Score,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerState_Statics::ClassParams = {
		&APlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlayerState_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerState, 1564495755);
	template<> ENGINE_API UClass* StaticClass<APlayerState>()
	{
		return APlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerState(Z_Construct_UClass_APlayerState, &APlayerState::StaticClass, TEXT("/Script/Engine"), TEXT("APlayerState"), false, nullptr, nullptr, nullptr);

	void APlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Score(TEXT("Score"));
		static const FName Name_PlayerId(TEXT("PlayerId"));
		static const FName Name_Ping(TEXT("Ping"));
		static const FName Name_bIsSpectator(TEXT("bIsSpectator"));
		static const FName Name_bOnlySpectator(TEXT("bOnlySpectator"));
		static const FName Name_bIsABot(TEXT("bIsABot"));
		static const FName Name_bIsInactive(TEXT("bIsInactive"));
		static const FName Name_bFromPreviousLevel(TEXT("bFromPreviousLevel"));
		static const FName Name_StartTime(TEXT("StartTime"));
		static const FName Name_UniqueId(TEXT("UniqueId"));
		static const FName Name_PlayerNamePrivate(TEXT("PlayerNamePrivate"));

		const bool bIsValid = true
			&& Name_Score == ClassReps[(int32)ENetFields_Private::Score].Property->GetFName()
			&& Name_PlayerId == ClassReps[(int32)ENetFields_Private::PlayerId].Property->GetFName()
			&& Name_Ping == ClassReps[(int32)ENetFields_Private::Ping].Property->GetFName()
			&& Name_bIsSpectator == ClassReps[(int32)ENetFields_Private::bIsSpectator].Property->GetFName()
			&& Name_bOnlySpectator == ClassReps[(int32)ENetFields_Private::bOnlySpectator].Property->GetFName()
			&& Name_bIsABot == ClassReps[(int32)ENetFields_Private::bIsABot].Property->GetFName()
			&& Name_bIsInactive == ClassReps[(int32)ENetFields_Private::bIsInactive].Property->GetFName()
			&& Name_bFromPreviousLevel == ClassReps[(int32)ENetFields_Private::bFromPreviousLevel].Property->GetFName()
			&& Name_StartTime == ClassReps[(int32)ENetFields_Private::StartTime].Property->GetFName()
			&& Name_UniqueId == ClassReps[(int32)ENetFields_Private::UniqueId].Property->GetFName()
			&& Name_PlayerNamePrivate == ClassReps[(int32)ENetFields_Private::PlayerNamePrivate].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
