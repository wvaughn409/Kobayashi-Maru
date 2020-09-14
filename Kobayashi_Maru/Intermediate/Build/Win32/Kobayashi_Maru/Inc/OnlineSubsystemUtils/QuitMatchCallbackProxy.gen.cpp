// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/QuitMatchCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuitMatchCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UQuitMatchCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UQuitMatchCallbackProxy::execQuitMatch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_PROPERTY(FByteProperty,Z_Param_Outcome);
		P_GET_PROPERTY(FIntProperty,Z_Param_TurnTimeoutInSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UQuitMatchCallbackProxy**)Z_Param__Result=UQuitMatchCallbackProxy::QuitMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchID,EMPMatchOutcome::Outcome(Z_Param_Outcome),Z_Param_TurnTimeoutInSeconds);
		P_NATIVE_END;
	}
	void UQuitMatchCallbackProxy::StaticRegisterNativesUQuitMatchCallbackProxy()
	{
		UClass* Class = UQuitMatchCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QuitMatch", &UQuitMatchCallbackProxy::execQuitMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics
	{
		struct QuitMatchCallbackProxy_eventQuitMatch_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			FString MatchID;
			TEnumAsByte<EMPMatchOutcome::Outcome> Outcome;
			int32 TurnTimeoutInSeconds;
			UQuitMatchCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TurnTimeoutInSeconds;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Outcome;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuitMatchCallbackProxy_eventQuitMatch_Parms, ReturnValue), Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_TurnTimeoutInSeconds = { "TurnTimeoutInSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuitMatchCallbackProxy_eventQuitMatch_Parms, TurnTimeoutInSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_Outcome = { "Outcome", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuitMatchCallbackProxy_eventQuitMatch_Parms, Outcome), Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuitMatchCallbackProxy_eventQuitMatch_Parms, MatchID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuitMatchCallbackProxy_eventQuitMatch_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuitMatchCallbackProxy_eventQuitMatch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_TurnTimeoutInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_Outcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "Comment", "// Quits the turn based match\n" },
		{ "ModuleRelativePath", "Classes/QuitMatchCallbackProxy.h" },
		{ "ToolTip", "Quits the turn based match" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuitMatchCallbackProxy, nullptr, "QuitMatch", nullptr, nullptr, sizeof(QuitMatchCallbackProxy_eventQuitMatch_Parms), Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuitMatchCallbackProxy_NoRegister()
	{
		return UQuitMatchCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UQuitMatchCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuitMatchCallbackProxy_QuitMatch, "QuitMatch" }, // 2947429018
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "QuitMatchCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/QuitMatchCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/QuitMatchCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuitMatchCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/QuitMatchCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UQuitMatchCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuitMatchCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::ClassParams = {
		&UQuitMatchCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuitMatchCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuitMatchCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuitMatchCallbackProxy, 2971259298);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UQuitMatchCallbackProxy>()
	{
		return UQuitMatchCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuitMatchCallbackProxy(Z_Construct_UClass_UQuitMatchCallbackProxy, &UQuitMatchCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UQuitMatchCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuitMatchCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
