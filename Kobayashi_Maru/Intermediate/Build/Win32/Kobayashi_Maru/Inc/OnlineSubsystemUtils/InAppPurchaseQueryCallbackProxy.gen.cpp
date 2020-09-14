// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseQueryCallbackProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseQueryCallbackProxy() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQueryResult_Parms
		{
			TArray<FInAppPurchaseProductInfo> InAppPurchaseInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAppPurchaseInformation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseInformation_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::NewProp_InAppPurchaseInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::NewProp_InAppPurchaseInformation = { "InAppPurchaseInformation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseQueryResult_Parms, InAppPurchaseInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::NewProp_InAppPurchaseInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::NewProp_InAppPurchaseInformation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::NewProp_InAppPurchaseInformation_Inner = { "InAppPurchaseInformation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseProductInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::NewProp_InAppPurchaseInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::NewProp_InAppPurchaseInformation_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseQueryResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventInAppPurchaseQueryResult_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UInAppPurchaseQueryCallbackProxy::execCreateProxyObjectForInAppPurchaseQuery)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductIdentifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseQueryCallbackProxy**)Z_Param__Result=UInAppPurchaseQueryCallbackProxy::CreateProxyObjectForInAppPurchaseQuery(Z_Param_PlayerController,Z_Param_Out_ProductIdentifiers);
		P_NATIVE_END;
	}
	void UInAppPurchaseQueryCallbackProxy::StaticRegisterNativesUInAppPurchaseQueryCallbackProxy()
	{
		UClass* Class = UInAppPurchaseQueryCallbackProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseQuery", &UInAppPurchaseQueryCallbackProxy::execCreateProxyObjectForInAppPurchaseQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics
	{
		struct InAppPurchaseQueryCallbackProxy_eventCreateProxyObjectForInAppPurchaseQuery_Parms
		{
			APlayerController* PlayerController;
			TArray<FString> ProductIdentifiers;
			UInAppPurchaseQueryCallbackProxy* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductIdentifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ProductIdentifiers;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductIdentifiers_Inner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ProductIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy_eventCreateProxyObjectForInAppPurchaseQuery_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Queries a InAppPurchase for an integer value\n" },
		{ "DisplayName", "Read In App Purchase Information" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy.h" },
		{ "ToolTip", "Queries a InAppPurchase for an integer value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy, nullptr, "CreateProxyObjectForInAppPurchaseQuery", nullptr, nullptr, sizeof(InAppPurchaseQueryCallbackProxy_eventCreateProxyObjectForInAppPurchaseQuery_Parms), Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_NoRegister()
	{
		return UInAppPurchaseQueryCallbackProxy::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics
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
	UObject* (*const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy_CreateProxyObjectForInAppPurchaseQuery, "CreateProxyObjectForInAppPurchaseQuery" }, // 2005655216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseQueryCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful InAppPurchase query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful InAppPurchase query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQueryResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseQueryCallbackProxy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::ClassParams = {
		&UInAppPurchaseQueryCallbackProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInAppPurchaseQueryCallbackProxy, 719282993);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseQueryCallbackProxy>()
	{
		return UInAppPurchaseQueryCallbackProxy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInAppPurchaseQueryCallbackProxy(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy, &UInAppPurchaseQueryCallbackProxy::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UInAppPurchaseQueryCallbackProxy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseQueryCallbackProxy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
