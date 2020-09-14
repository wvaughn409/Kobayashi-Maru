// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/AchievementQueryCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAchievementQueryCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UAchievementQueryCallbackProxy::execCacheAchievementDescriptions)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAchievementQueryCallbackProxy**)Z_Param__Result=UAchievementQueryCallbackProxy::CacheAchievementDescriptions(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAchievementQueryCallbackProxy::execCacheAchievements)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAchievementQueryCallbackProxy**)Z_Param__Result=UAchievementQueryCallbackProxy::CacheAchievements(Z_Param_WorldContextObject,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UAchievementQueryCallbackProxy::StaticRegisterNativesUAchievementQueryCallbackProxy()
	{
		UClass* Class = UAchievementQueryCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CacheAchievementDescriptions", &UAchievementQueryCallbackProxy::execCacheAchievementDescriptions },
			{ "CacheAchievements", &UAchievementQueryCallbackProxy::execCacheAchievements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics
	{
		struct AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UAchievementQueryCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, ReturnValue), Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Fetches and caches achievement descriptions from the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Fetches and caches achievement descriptions from the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementQueryCallbackProxy, nullptr, "CacheAchievementDescriptions", nullptr, nullptr, sizeof(AchievementQueryCallbackProxy_eventCacheAchievementDescriptions_Parms), Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics
	{
		struct AchievementQueryCallbackProxy_eventCacheAchievements_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			UAchievementQueryCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, ReturnValue), Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AchievementQueryCallbackProxy_eventCacheAchievements_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Achievements" },
		{ "Comment", "// Fetches and caches achievement progress from the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Fetches and caches achievement progress from the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAchievementQueryCallbackProxy, nullptr, "CacheAchievements", nullptr, nullptr, sizeof(AchievementQueryCallbackProxy_eventCacheAchievements_Parms), Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy_NoRegister()
	{
		return UAchievementQueryCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievementDescriptions, "CacheAchievementDescriptions" }, // 643961863
		{ &Z_Construct_UFunction_UAchievementQueryCallbackProxy_CacheAchievements, "CacheAchievements" }, // 421288823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AchievementQueryCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementQueryCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/AchievementQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAchievementQueryCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAchievementQueryCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::ClassParams = {
		&UAchievementQueryCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAchievementQueryCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAchievementQueryCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAchievementQueryCallbackProxy, 485055069);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UAchievementQueryCallbackProxy>()
	{
		return UAchievementQueryCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAchievementQueryCallbackProxy(Z_Construct_UClass_UAchievementQueryCallbackProxy, &UAchievementQueryCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UAchievementQueryCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAchievementQueryCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
