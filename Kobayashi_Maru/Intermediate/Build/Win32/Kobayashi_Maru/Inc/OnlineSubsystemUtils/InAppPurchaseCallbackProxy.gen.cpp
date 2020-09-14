// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo();
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseResult_Parms
		{
			TEnumAsByte<EInAppPurchaseState::Type> PurchaseStatus;
			FInAppPurchaseProductInfo InAppPurchaseReceipts;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseReceipts_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseReceipts;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PurchaseStatus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts = { "InAppPurchaseReceipts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult_Parms, InAppPurchaseReceipts), Z_Construct_UScriptStruct_FInAppPurchaseProductInfo, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult_Parms, PurchaseStatus), Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::NewProp_PurchaseStatus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FInAppPurchaseReceiptInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseReceiptInfo"), sizeof(FInAppPurchaseReceiptInfo), Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseReceiptInfo>()
{
	return FInAppPurchaseReceiptInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInAppPurchaseReceiptInfo(FInAppPurchaseReceiptInfo::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("InAppPurchaseReceiptInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseReceiptInfo
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseReceiptInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InAppPurchaseReceiptInfo")),new UScriptStruct::TCppStructOps<FInAppPurchaseReceiptInfo>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseReceiptInfo;
	struct Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ValidationInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseReceiptInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ValidationInfo_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ValidationInfo = { "ValidationInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo, ValidationInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ValidationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ValidationInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The item name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
		{ "ToolTip", "The item name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ValidationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::NewProp_ItemName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"InAppPurchaseReceiptInfo",
		sizeof(FInAppPurchaseReceiptInfo),
		alignof(FInAppPurchaseReceiptInfo),
		Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InAppPurchaseReceiptInfo"), sizeof(FInAppPurchaseReceiptInfo), Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo_Hash() { return 2239341644U; }
	DEFINE_FUNCTION(UInAppPurchaseCallbackProxy::execCreateProxyObjectForInAppPurchase)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FInAppPurchaseProductRequest,Z_Param_Out_ProductRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseCallbackProxy**)Z_Param__Result=UInAppPurchaseCallbackProxy::CreateProxyObjectForInAppPurchase(Z_Param_PlayerController,Z_Param_Out_ProductRequest);
		P_NATIVE_END;
	}
	void UInAppPurchaseCallbackProxy::StaticRegisterNativesUInAppPurchaseCallbackProxy()
	{
		UClass* Class = UInAppPurchaseCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchase", &UInAppPurchaseCallbackProxy::execCreateProxyObjectForInAppPurchase },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics
	{
		struct InAppPurchaseCallbackProxy_eventCreateProxyObjectForInAppPurchase_Parms
		{
			APlayerController* PlayerController;
			FInAppPurchaseProductRequest ProductRequest;
			UInAppPurchaseCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductRequest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProductRequest;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy_eventCreateProxyObjectForInAppPurchase_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest = { "ProductRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy_eventCreateProxyObjectForInAppPurchase_Parms, ProductRequest), Z_Construct_UScriptStruct_FInAppPurchaseProductRequest, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy_eventCreateProxyObjectForInAppPurchase_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DisplayName", "Make an In-App Purchase" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchase", nullptr, nullptr, sizeof(InAppPurchaseCallbackProxy_eventCreateProxyObjectForInAppPurchase_Parms), Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy_NoRegister()
	{
		return UInAppPurchaseCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseCallbackProxy_CreateProxyObjectForInAppPurchase, "CreateProxyObjectForInAppPurchase" }, // 186502878
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::ClassParams = {
		&UInAppPurchaseCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInAppPurchaseCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInAppPurchaseCallbackProxy, 159073834);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseCallbackProxy>()
	{
		return UInAppPurchaseCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInAppPurchaseCallbackProxy(Z_Construct_UClass_UInAppPurchaseCallbackProxy, &UInAppPurchaseCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UInAppPurchaseCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
