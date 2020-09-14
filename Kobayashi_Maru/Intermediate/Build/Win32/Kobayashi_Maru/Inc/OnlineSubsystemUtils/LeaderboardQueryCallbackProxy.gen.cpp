// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/LeaderboardQueryCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardQueryCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms
		{
			int32 LeaderboardValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LeaderboardValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::NewProp_LeaderboardValue = { "LeaderboardValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms, LeaderboardValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::NewProp_LeaderboardValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "LeaderboardQueryResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventLeaderboardQueryResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ULeaderboardQueryCallbackProxy::execCreateProxyObjectForIntQuery)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULeaderboardQueryCallbackProxy**)Z_Param__Result=ULeaderboardQueryCallbackProxy::CreateProxyObjectForIntQuery(Z_Param_PlayerController,Z_Param_StatName);
		P_NATIVE_END;
	}
	void ULeaderboardQueryCallbackProxy::StaticRegisterNativesULeaderboardQueryCallbackProxy()
	{
		UClass* Class = ULeaderboardQueryCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForIntQuery", &ULeaderboardQueryCallbackProxy::execCreateProxyObjectForIntQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics
	{
		struct LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms
		{
			APlayerController* PlayerController;
			FName StatName;
			ULeaderboardQueryCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, ReturnValue), Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, StatName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_StatName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Leaderboard" },
		{ "Comment", "// Queries a leaderboard for an integer value\n" },
		{ "DisplayName", "Read Leaderboard Integer" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Queries a leaderboard for an integer value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardQueryCallbackProxy, nullptr, "CreateProxyObjectForIntQuery", nullptr, nullptr, sizeof(LeaderboardQueryCallbackProxy_eventCreateProxyObjectForIntQuery_Parms), Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy_NoRegister()
	{
		return ULeaderboardQueryCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery, "CreateProxyObjectForIntQuery" }, // 28267199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LeaderboardQueryCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful leaderboard query\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful leaderboard query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeaderboardQueryCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful leaderboard query\n" },
		{ "ModuleRelativePath", "Classes/LeaderboardQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful leaderboard query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeaderboardQueryCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_LeaderboardQueryResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardQueryCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::ClassParams = {
		&ULeaderboardQueryCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaderboardQueryCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeaderboardQueryCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeaderboardQueryCallbackProxy, 667108068);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULeaderboardQueryCallbackProxy>()
	{
		return ULeaderboardQueryCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeaderboardQueryCallbackProxy(Z_Construct_UClass_ULeaderboardQueryCallbackProxy, &ULeaderboardQueryCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("ULeaderboardQueryCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardQueryCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
