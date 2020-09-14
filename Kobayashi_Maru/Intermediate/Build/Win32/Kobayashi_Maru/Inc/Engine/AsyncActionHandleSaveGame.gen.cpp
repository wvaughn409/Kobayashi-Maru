// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/GameFramework/AsyncActionHandleSaveGame.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAsyncActionHandleSaveGame() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics
	{
		struct _Script_Engine_eventOnAsyncHandleSaveGame_Parms
		{
			USaveGame* SaveGame;
			bool bSuccess;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((_Script_Engine_eventOnAsyncHandleSaveGame_Parms*)Obj)->bSuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_Engine_eventOnAsyncHandleSaveGame_Parms), &Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Engine_eventOnAsyncHandleSaveGame_Parms, SaveGame), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_bSuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::NewProp_SaveGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnAsyncHandleSaveGame__DelegateSignature", nullptr, nullptr, sizeof(_Script_Engine_eventOnAsyncHandleSaveGame_Parms), Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAsyncActionHandleSaveGame::execAsyncLoadGameFromSlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionHandleSaveGame**)Z_Param__Result=UAsyncActionHandleSaveGame::AsyncLoadGameFromSlot(Z_Param_WorldContextObject,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAsyncActionHandleSaveGame::execAsyncSaveGameToSlot)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(USaveGame,Z_Param_SaveGameObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
		P_GET_PROPERTY(FIntProperty,Z_Param_UserIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAsyncActionHandleSaveGame**)Z_Param__Result=UAsyncActionHandleSaveGame::AsyncSaveGameToSlot(Z_Param_WorldContextObject,Z_Param_SaveGameObject,Z_Param_SlotName,Z_Param_UserIndex);
		P_NATIVE_END;
	}
	void UAsyncActionHandleSaveGame::StaticRegisterNativesUAsyncActionHandleSaveGame()
	{
		UClass* Class = UAsyncActionHandleSaveGame::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AsyncLoadGameFromSlot", &UAsyncActionHandleSaveGame::execAsyncLoadGameFromSlot },
			{ "AsyncSaveGameToSlot", &UAsyncActionHandleSaveGame::execAsyncSaveGameToSlot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics
	{
		struct AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms
		{
			UObject* WorldContextObject;
			FString SlotName;
			int32 UserIndex;
			UAsyncActionHandleSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * Schedule an async load of a specific slot. UGameplayStatics::AsyncLoadGameFromSlot is the native version of this.\n\x09 * When the load has succeeded or failed, the completed pin is activated with success/failure and the newly loaded save game object if valid.\n\x09 * Keep in mind that some platforms may not support trying to load and save at the same time.\n\x09 *\n\x09 * @param SlotName\x09\x09\x09Name of the save game slot to load from.\n\x09 * @param UserIndex\x09\x09\x09""For some platforms, master user index to identify the user doing the loading.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Schedule an async load of a specific slot. UGameplayStatics::AsyncLoadGameFromSlot is the native version of this.\nWhen the load has succeeded or failed, the completed pin is activated with success/failure and the newly loaded save game object if valid.\nKeep in mind that some platforms may not support trying to load and save at the same time.\n\n@param SlotName                      Name of the save game slot to load from.\n@param UserIndex                     For some platforms, master user index to identify the user doing the loading." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionHandleSaveGame, nullptr, "AsyncLoadGameFromSlot", nullptr, nullptr, sizeof(AsyncActionHandleSaveGame_eventAsyncLoadGameFromSlot_Parms), Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics
	{
		struct AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms
		{
			UObject* WorldContextObject;
			USaveGame* SaveGameObject;
			FString SlotName;
			int32 UserIndex;
			UAsyncActionHandleSaveGame* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, ReturnValue), Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, UserIndex), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, SlotName), METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SlotName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_SaveGameObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "SaveGame" },
		{ "Comment", "/**\n\x09 * Schedule an async save to a specific slot. UGameplayStatics::AsyncSaveGameToSlot is the native version of this.\n\x09 * When the save has succeeded or failed, the completed pin is activated with success/failure and the save game object.\n\x09 * Keep in mind that some platforms may not support trying to load and save at the same time.\n\x09 *\n\x09 * @param SaveGameObject\x09Object that contains data about the save game that we want to write out.\n\x09 * @param SlotName\x09\x09\x09Name of the save game slot to load from.\n\x09 * @param UserIndex\x09\x09\x09""For some platforms, master user index to identify the user doing the loading.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Schedule an async save to a specific slot. UGameplayStatics::AsyncSaveGameToSlot is the native version of this.\nWhen the save has succeeded or failed, the completed pin is activated with success/failure and the save game object.\nKeep in mind that some platforms may not support trying to load and save at the same time.\n\n@param SaveGameObject        Object that contains data about the save game that we want to write out.\n@param SlotName                      Name of the save game slot to load from.\n@param UserIndex                     For some platforms, master user index to identify the user doing the loading." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAsyncActionHandleSaveGame, nullptr, "AsyncSaveGameToSlot", nullptr, nullptr, sizeof(AsyncActionHandleSaveGame_eventAsyncSaveGameToSlot_Parms), Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame_NoRegister()
	{
		return UAsyncActionHandleSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveGameObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncLoadGameFromSlot, "AsyncLoadGameFromSlot" }, // 2620218470
		{ &Z_Construct_UFunction_UAsyncActionHandleSaveGame_AsyncSaveGameToSlot, "AsyncSaveGameToSlot" }, // 2912630309
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game */" },
		{ "IncludePath", "GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Async action to handle async load/save of a USaveGame. This can be subclassed by a specific game" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject_MetaData[] = {
		{ "Comment", "/** The object that was either saved or loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "The object that was either saved or loaded" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject = { "SaveGameObject", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncActionHandleSaveGame, SaveGameObject), Z_Construct_UClass_USaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed_MetaData[] = {
		{ "Comment", "/** Delegate called when the save/load completes */" },
		{ "ModuleRelativePath", "Classes/GameFramework/AsyncActionHandleSaveGame.h" },
		{ "ToolTip", "Delegate called when the save/load completes" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAsyncActionHandleSaveGame, Completed), Z_Construct_UDelegateFunction_Engine_OnAsyncHandleSaveGame__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_SaveGameObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::NewProp_Completed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAsyncActionHandleSaveGame>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::ClassParams = {
		&UAsyncActionHandleSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAsyncActionHandleSaveGame()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAsyncActionHandleSaveGame_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAsyncActionHandleSaveGame, 1674260470);
	template<> ENGINE_API UClass* StaticClass<UAsyncActionHandleSaveGame>()
	{
		return UAsyncActionHandleSaveGame::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAsyncActionHandleSaveGame(Z_Construct_UClass_UAsyncActionHandleSaveGame, &UAsyncActionHandleSaveGame::StaticClass, TEXT("/Script/Engine"), TEXT("UAsyncActionHandleSaveGame"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAsyncActionHandleSaveGame);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
