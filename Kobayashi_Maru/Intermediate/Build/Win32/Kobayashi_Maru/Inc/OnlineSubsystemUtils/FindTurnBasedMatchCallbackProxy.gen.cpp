// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/FindTurnBasedMatchCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindTurnBasedMatchCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms
		{
			FString MatchID;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms, MatchID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::NewProp_MatchID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "OnlineTurnBasedMatchResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventOnlineTurnBasedMatchResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UFindTurnBasedMatchCallbackProxy::execFindTurnBasedMatch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_MatchActor);
		P_GET_PROPERTY(FIntProperty,Z_Param_MinPlayers);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxPlayers);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerGroup);
		P_GET_UBOOL(Z_Param_ShowExistingMatches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFindTurnBasedMatchCallbackProxy**)Z_Param__Result=UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchActor,Z_Param_MinPlayers,Z_Param_MaxPlayers,Z_Param_PlayerGroup,Z_Param_ShowExistingMatches);
		P_NATIVE_END;
	}
	void UFindTurnBasedMatchCallbackProxy::StaticRegisterNativesUFindTurnBasedMatchCallbackProxy()
	{
		UClass* Class = UFindTurnBasedMatchCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindTurnBasedMatch", &UFindTurnBasedMatchCallbackProxy::execFindTurnBasedMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics
	{
		struct FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			TScriptInterface<ITurnBasedMatchInterface> MatchActor;
			int32 MinPlayers;
			int32 MaxPlayers;
			int32 PlayerGroup;
			bool ShowExistingMatches;
			UFindTurnBasedMatchCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_ShowExistingMatches_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowExistingMatches;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayerGroup;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxPlayers;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinPlayers;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_MatchActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, ReturnValue), Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches_SetBit(void* Obj)
	{
		((FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms*)Obj)->ShowExistingMatches = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches = { "ShowExistingMatches", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms), &Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerGroup = { "PlayerGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, PlayerGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MaxPlayers = { "MaxPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, MaxPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MinPlayers = { "MinPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, MinPlayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MatchActor = { "MatchActor", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, MatchActor), Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_ShowExistingMatches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MaxPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MinPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_MatchActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "Comment", "// Use the platform matchmaking service (like Game Center) to find a match.\n" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
		{ "ToolTip", "Use the platform matchmaking service (like Game Center) to find a match." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy, nullptr, "FindTurnBasedMatch", nullptr, nullptr, sizeof(FindTurnBasedMatchCallbackProxy_eventFindTurnBasedMatch_Parms), Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_NoRegister()
	{
		return UFindTurnBasedMatchCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch, "FindTurnBasedMatch" }, // 2919630410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FindTurnBasedMatchCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when matchmaking failed\n" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
		{ "ToolTip", "Called when matchmaking failed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindTurnBasedMatchCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when matchmaking succeeded.\n" },
		{ "ModuleRelativePath", "Classes/FindTurnBasedMatchCallbackProxy.h" },
		{ "ToolTip", "Called when matchmaking succeeded." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFindTurnBasedMatchCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_OnlineTurnBasedMatchResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindTurnBasedMatchCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::ClassParams = {
		&UFindTurnBasedMatchCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFindTurnBasedMatchCallbackProxy, 447006958);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UFindTurnBasedMatchCallbackProxy>()
	{
		return UFindTurnBasedMatchCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFindTurnBasedMatchCallbackProxy(Z_Construct_UClass_UFindTurnBasedMatchCallbackProxy, &UFindTurnBasedMatchCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UFindTurnBasedMatchCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFindTurnBasedMatchCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
