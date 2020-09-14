// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseRestoreCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseRestoreCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo();
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms
		{
			TEnumAsByte<EInAppPurchaseState::Type> CompletionStatus;
			TArray<FInAppPurchaseRestoreInfo> InAppRestorePurchaseInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAppRestorePurchaseInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAppRestorePurchaseInformation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAppRestorePurchaseInformation_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompletionStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation = { "InAppRestorePurchaseInformation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms, InAppRestorePurchaseInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_Inner = { "InAppRestorePurchaseInformation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_CompletionStatus = { "CompletionStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms, CompletionStatus), Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_InAppRestorePurchaseInformation_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::NewProp_CompletionStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseRestoreResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventInAppPurchaseRestoreResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInAppPurchaseRestoreCallbackProxy::execCreateProxyObjectForInAppPurchaseRestore)
	{
		P_GET_TARRAY_REF(FInAppPurchaseProductRequest,Z_Param_Out_ConsumableProductFlags);
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseRestoreCallbackProxy**)Z_Param__Result=UInAppPurchaseRestoreCallbackProxy::CreateProxyObjectForInAppPurchaseRestore(Z_Param_Out_ConsumableProductFlags,Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void UInAppPurchaseRestoreCallbackProxy::StaticRegisterNativesUInAppPurchaseRestoreCallbackProxy()
	{
		UClass* Class = UInAppPurchaseRestoreCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseRestore", &UInAppPurchaseRestoreCallbackProxy::execCreateProxyObjectForInAppPurchaseRestore },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics
	{
		struct InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms
		{
			TArray<FInAppPurchaseProductRequest> ConsumableProductFlags;
			APlayerController* PlayerController;
			UInAppPurchaseRestoreCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConsumableProductFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConsumableProductFlags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConsumableProductFlags_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms, ConsumableProductFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner = { "ConsumableProductFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::NewProp_ConsumableProductFlags_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DisplayName", "Restore In-App Purchases" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchaseRestore", nullptr, nullptr, sizeof(InAppPurchaseRestoreCallbackProxy_eventCreateProxyObjectForInAppPurchaseRestore_Parms), Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_NoRegister()
	{
		return UInAppPurchaseRestoreCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseRestoreCallbackProxy_CreateProxyObjectForInAppPurchaseRestore, "CreateProxyObjectForInAppPurchaseRestore" }, // 3845290418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseRestoreCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseRestoreCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseRestoreCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseRestoreResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseRestoreCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::ClassParams = {
		&UInAppPurchaseRestoreCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInAppPurchaseRestoreCallbackProxy, 43580086);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseRestoreCallbackProxy>()
	{
		return UInAppPurchaseRestoreCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInAppPurchaseRestoreCallbackProxy(Z_Construct_UClass_UInAppPurchaseRestoreCallbackProxy, &UInAppPurchaseRestoreCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UInAppPurchaseRestoreCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseRestoreCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
