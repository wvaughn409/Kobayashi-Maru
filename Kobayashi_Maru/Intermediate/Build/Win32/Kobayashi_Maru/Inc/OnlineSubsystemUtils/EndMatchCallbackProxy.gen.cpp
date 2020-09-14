// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/EndMatchCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndMatchCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UEndMatchCallbackProxy();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome();
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UEndMatchCallbackProxy::execEndMatch)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_TINTERFACE(ITurnBasedMatchInterface,Z_Param_MatchActor);
		P_GET_PROPERTY(FStrProperty,Z_Param_MatchID);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocalPlayerOutcome);
		P_GET_PROPERTY(FByteProperty,Z_Param_OtherPlayersOutcome);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEndMatchCallbackProxy**)Z_Param__Result=UEndMatchCallbackProxy::EndMatch(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MatchActor,Z_Param_MatchID,EMPMatchOutcome::Outcome(Z_Param_LocalPlayerOutcome),EMPMatchOutcome::Outcome(Z_Param_OtherPlayersOutcome));
		P_NATIVE_END;
	}
	void UEndMatchCallbackProxy::StaticRegisterNativesUEndMatchCallbackProxy()
	{
		UClass* Class = UEndMatchCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndMatch", &UEndMatchCallbackProxy::execEndMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics
	{
		struct EndMatchCallbackProxy_eventEndMatch_Parms
		{
			UObject* WorldContextObject;
			APlayerController* PlayerController;
			TScriptInterface<ITurnBasedMatchInterface> MatchActor;
			FString MatchID;
			TEnumAsByte<EMPMatchOutcome::Outcome> LocalPlayerOutcome;
			TEnumAsByte<EMPMatchOutcome::Outcome> OtherPlayersOutcome;
			UEndMatchCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OtherPlayersOutcome;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocalPlayerOutcome;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchID;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_MatchActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, ReturnValue), Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_OtherPlayersOutcome = { "OtherPlayersOutcome", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, OtherPlayersOutcome), Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_LocalPlayerOutcome = { "LocalPlayerOutcome", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, LocalPlayerOutcome), Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchID = { "MatchID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, MatchID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchActor = { "MatchActor", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, MatchActor), Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EndMatchCallbackProxy_eventEndMatch_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_OtherPlayersOutcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_LocalPlayerOutcome,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_MatchActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|TurnBased" },
		{ "Comment", "// End a match that is in progress while it is the current player's turn\n" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
		{ "ToolTip", "End a match that is in progress while it is the current player's turn" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEndMatchCallbackProxy, nullptr, "EndMatch", nullptr, nullptr, sizeof(EndMatchCallbackProxy_eventEndMatch_Parms), Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEndMatchCallbackProxy_NoRegister()
	{
		return UEndMatchCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UEndMatchCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UEndMatchCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEndMatchCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEndMatchCallbackProxy_EndMatch, "EndMatch" }, // 3362671147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndMatchCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EndMatchCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when ending the match fails\n" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
		{ "ToolTip", "Called when ending the match fails" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndMatchCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when the match ends successfully\n" },
		{ "ModuleRelativePath", "Classes/EndMatchCallbackProxy.h" },
		{ "ToolTip", "Called when the match ends successfully" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEndMatchCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEndMatchCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEndMatchCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEndMatchCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEndMatchCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEndMatchCallbackProxy_Statics::ClassParams = {
		&UEndMatchCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEndMatchCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEndMatchCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEndMatchCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEndMatchCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEndMatchCallbackProxy, 1103947510);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UEndMatchCallbackProxy>()
	{
		return UEndMatchCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEndMatchCallbackProxy(Z_Construct_UClass_UEndMatchCallbackProxy, &UEndMatchCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UEndMatchCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEndMatchCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
