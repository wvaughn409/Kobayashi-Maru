// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseCallbackProxy2() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms
		{
			EInAppPurchaseStatus PurchaseStatus;
			TArray<FInAppPurchaseReceiptInfo2> InAppPurchaseReceipts;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAppPurchaseReceipts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAppPurchaseReceipts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAppPurchaseReceipts_Inner;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PurchaseStatus;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PurchaseStatus_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts = { "InAppPurchaseReceipts", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms, InAppPurchaseReceipts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_Inner = { "InAppPurchaseReceipts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus = { "PurchaseStatus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms, PurchaseStatus), Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_InAppPurchaseReceipts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::NewProp_PurchaseStatus_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseResult2__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventInAppPurchaseResult2_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EInAppPurchaseStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EInAppPurchaseStatus"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EInAppPurchaseStatus>()
	{
		return EInAppPurchaseStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInAppPurchaseStatus(EInAppPurchaseStatus_StaticEnum, TEXT("/Script/OnlineSubsystemUtils"), TEXT("EInAppPurchaseStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Hash() { return 53626964U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInAppPurchaseStatus"), 0, Get_Z_Construct_UEnum_OnlineSubsystemUtils_EInAppPurchaseStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInAppPurchaseStatus::Invalid", (int64)EInAppPurchaseStatus::Invalid },
				{ "EInAppPurchaseStatus::Failed", (int64)EInAppPurchaseStatus::Failed },
				{ "EInAppPurchaseStatus::Deferred", (int64)EInAppPurchaseStatus::Deferred },
				{ "EInAppPurchaseStatus::Canceled", (int64)EInAppPurchaseStatus::Canceled },
				{ "EInAppPurchaseStatus::Purchased", (int64)EInAppPurchaseStatus::Purchased },
				{ "EInAppPurchaseStatus::Restored", (int64)EInAppPurchaseStatus::Restored },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Canceled.Comment", "/** purchase canceled by user */" },
				{ "Canceled.DisplayName", "Canceled" },
				{ "Canceled.Name", "EInAppPurchaseStatus::Canceled" },
				{ "Canceled.ToolTip", "purchase canceled by user" },
				{ "Comment", "/**\n * State of a purchase transaction\n */" },
				{ "Deferred.Comment", "/** purchase has been deferred (neither failed nor completed) */" },
				{ "Deferred.DisplayName", "Deferred" },
				{ "Deferred.Name", "EInAppPurchaseStatus::Deferred" },
				{ "Deferred.ToolTip", "purchase has been deferred (neither failed nor completed)" },
				{ "Failed.Comment", "/** purchase completed but failed */" },
				{ "Failed.DisplayName", "Failed" },
				{ "Failed.Name", "EInAppPurchaseStatus::Failed" },
				{ "Failed.ToolTip", "purchase completed but failed" },
				{ "Invalid.DisplayName", "Invalid" },
				{ "Invalid.Name", "EInAppPurchaseStatus::Invalid" },
				{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
				{ "Purchased.Comment", "/** purchase succeeded */" },
				{ "Purchased.DisplayName", "Purchased" },
				{ "Purchased.Name", "EInAppPurchaseStatus::Purchased" },
				{ "Purchased.ToolTip", "purchase succeeded" },
				{ "Restored.Comment", "/** restore succeeded */" },
				{ "Restored.DisplayName", "Restored" },
				{ "Restored.Name", "EInAppPurchaseStatus::Restored" },
				{ "Restored.ToolTip", "restore succeeded" },
				{ "ToolTip", "State of a purchase transaction" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
				nullptr,
				"EInAppPurchaseStatus",
				"EInAppPurchaseStatus",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInAppPurchaseReceiptInfo2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseReceiptInfo2"), sizeof(FInAppPurchaseReceiptInfo2), Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseReceiptInfo2>()
{
	return FInAppPurchaseReceiptInfo2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInAppPurchaseReceiptInfo2(FInAppPurchaseReceiptInfo2::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("InAppPurchaseReceiptInfo2"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseReceiptInfo2
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseReceiptInfo2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InAppPurchaseReceiptInfo2")),new UScriptStruct::TCppStructOps<FInAppPurchaseReceiptInfo2>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseReceiptInfo2;
	struct Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseReceiptInfo2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo = { "ValidationInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo2, ValidationInfo), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId = { "ItemId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo2, ItemId), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The item name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The item name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName = { "ItemName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseReceiptInfo2, ItemName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ValidationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::NewProp_ItemName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"InAppPurchaseReceiptInfo2",
		sizeof(FInAppPurchaseReceiptInfo2),
		alignof(FInAppPurchaseReceiptInfo2),
		Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InAppPurchaseReceiptInfo2"), sizeof(FInAppPurchaseReceiptInfo2), Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseReceiptInfo2_Hash() { return 3130742622U; }
class UScriptStruct* FInAppPurchaseProductInfo2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseProductInfo2"), sizeof(FInAppPurchaseProductInfo2), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseProductInfo2>()
{
	return FInAppPurchaseProductInfo2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInAppPurchaseProductInfo2(FInAppPurchaseProductInfo2::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("InAppPurchaseProductInfo2"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseProductInfo2
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseProductInfo2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InAppPurchaseProductInfo2")),new UScriptStruct::TCppStructOps<FInAppPurchaseProductInfo2>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseProductInfo2;
	struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DynamicFields_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_DynamicFields;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DynamicFields_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DynamicFields_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiptData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiptData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupingSeparator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GroupingSeparator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecimalSeparator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DecimalSeparator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencySymbol_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencySymbol;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RawPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RawPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductInfo2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Dynamic fields from raw Json data.\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Dynamic fields from raw Json data." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields = { "DynamicFields", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DynamicFields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_Key_KeyProp = { "DynamicFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_ValueProp = { "DynamicFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_ReceiptData_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Opaque receipt data for the transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Opaque receipt data for the transaction" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_ReceiptData = { "ReceiptData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, ReceiptData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_ReceiptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_ReceiptData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_GroupingSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized grouping separator of the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized grouping separator of the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_GroupingSeparator = { "GroupingSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, GroupingSeparator), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_GroupingSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_GroupingSeparator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DecimalSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized decimal separator used in the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized decimal separator used in the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DecimalSeparator = { "DecimalSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DecimalSeparator), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DecimalSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DecimalSeparator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencySymbol_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency symbol of the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized currency symbol of the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencySymbol = { "CurrencySymbol", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, CurrencySymbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencySymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencySymbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency code of the price\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized currency code of the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_RawPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Raw price without currency code and symbol\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Raw price without currency code and symbol" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_RawPrice = { "RawPrice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, RawPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_RawPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_RawPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display price name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized display price name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayPrice = { "DisplayPrice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DisplayPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayDescription_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display description name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized display description name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayDescription = { "DisplayDescription", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DisplayDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display name\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The localized display name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_TransactionIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_TransactionIdentifier = { "TransactionIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, TransactionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_TransactionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_TransactionIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo2, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DynamicFields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_ReceiptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_GroupingSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DecimalSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencySymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_RawPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_TransactionIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::NewProp_Identifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"InAppPurchaseProductInfo2",
		sizeof(FInAppPurchaseProductInfo2),
		alignof(FInAppPurchaseProductInfo2),
		Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InAppPurchaseProductInfo2"), sizeof(FInAppPurchaseProductInfo2), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo2_Hash() { return 3523524643U; }
class UScriptStruct* FInAppPurchaseProductRequest2::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("InAppPurchaseProductRequest2"), sizeof(FInAppPurchaseProductRequest2), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FInAppPurchaseProductRequest2>()
{
	return FInAppPurchaseProductRequest2::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInAppPurchaseProductRequest2(FInAppPurchaseProductRequest2::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("InAppPurchaseProductRequest2"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseProductRequest2
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseProductRequest2()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InAppPurchaseProductRequest2")),new UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest2>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFInAppPurchaseProductRequest2;
	struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsConsumable_MetaData[];
#endif
		static void NewProp_bIsConsumable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConsumable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProductIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ProductIdentifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction request information\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Micro-transaction request information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest2>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Flag to determine whether this is a consumable purchase, or not.\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Flag to determine whether this is a consumable purchase, or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_SetBit(void* Obj)
	{
		((FInAppPurchaseProductRequest2*)Obj)->bIsConsumable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable = { "bIsConsumable", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInAppPurchaseProductRequest2), &Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier that matches the one from your targeted store.\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "The unique product identifier that matches the one from your targeted store." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier = { "ProductIdentifier", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductRequest2, ProductIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_bIsConsumable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::NewProp_ProductIdentifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"InAppPurchaseProductRequest2",
		sizeof(FInAppPurchaseProductRequest2),
		alignof(FInAppPurchaseProductRequest2),
		Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InAppPurchaseProductRequest2"), sizeof(FInAppPurchaseProductRequest2), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2_Hash() { return 4073308136U; }
	DEFINE_FUNCTION(UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseQueryOwned)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseCallbackProxy2**)Z_Param__Result=UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseQueryOwned(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseUnprocessedPurchases)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseCallbackProxy2**)Z_Param__Result=UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchaseUnprocessedPurchases(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchase)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_STRUCT_REF(FInAppPurchaseProductRequest2,Z_Param_Out_ProductRequest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseCallbackProxy2**)Z_Param__Result=UInAppPurchaseCallbackProxy2::CreateProxyObjectForInAppPurchase(Z_Param_PlayerController,Z_Param_Out_ProductRequest);
		P_NATIVE_END;
	}
	void UInAppPurchaseCallbackProxy2::StaticRegisterNativesUInAppPurchaseCallbackProxy2()
	{
		UClass* Class = UInAppPurchaseCallbackProxy2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchase", &UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchase },
			{ "CreateProxyObjectForInAppPurchaseQueryOwned", &UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseQueryOwned },
			{ "CreateProxyObjectForInAppPurchaseUnprocessedPurchases", &UInAppPurchaseCallbackProxy2::execCreateProxyObjectForInAppPurchaseUnprocessedPurchases },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics
	{
		struct InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms
		{
			APlayerController* PlayerController;
			FInAppPurchaseProductRequest2 ProductRequest;
			UInAppPurchaseCallbackProxy2* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest = { "ProductRequest", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms, ProductRequest), Z_Construct_UScriptStruct_FInAppPurchaseProductRequest2, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_ProductRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Kicks off a transaction for the provided product identifier\n" },
		{ "DisplayName", "Make an In-App Purchase v2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Kicks off a transaction for the provided product identifier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchase", nullptr, nullptr, sizeof(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchase_Parms), Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics
	{
		struct InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms
		{
			APlayerController* PlayerController;
			UInAppPurchaseCallbackProxy2* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "DisplayName", "Query for Owned Purchases" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseQueryOwned", nullptr, nullptr, sizeof(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQueryOwned_Parms), Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics
	{
		struct InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms
		{
			APlayerController* PlayerController;
			UInAppPurchaseCallbackProxy2* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "DisplayName", "Process any New Unprocessed Purchases v2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseUnprocessedPurchases", nullptr, nullptr, sizeof(InAppPurchaseCallbackProxy2_eventCreateProxyObjectForInAppPurchaseUnprocessedPurchases_Parms), Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2_NoRegister()
	{
		return UInAppPurchaseCallbackProxy2::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics
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
	UObject* (*const Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase, "CreateProxyObjectForInAppPurchase" }, // 1109995398
		{ &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned, "CreateProxyObjectForInAppPurchaseQueryOwned" }, // 3138595950
		{ &Z_Construct_UFunction_UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases, "CreateProxyObjectForInAppPurchaseUnprocessedPurchases" }, // 105274773
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseCallbackProxy2.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Called when there is an unsuccessful In-App Purchase transaction" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseCallbackProxy2, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful In-App Purchase transaction\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseCallbackProxy2.h" },
		{ "ToolTip", "Called when there is a successful In-App Purchase transaction" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseCallbackProxy2, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseResult2__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseCallbackProxy2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::ClassParams = {
		&UInAppPurchaseCallbackProxy2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseCallbackProxy2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInAppPurchaseCallbackProxy2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInAppPurchaseCallbackProxy2, 3097713211);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseCallbackProxy2>()
	{
		return UInAppPurchaseCallbackProxy2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInAppPurchaseCallbackProxy2(Z_Construct_UClass_UInAppPurchaseCallbackProxy2, &UInAppPurchaseCallbackProxy2::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UInAppPurchaseCallbackProxy2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseCallbackProxy2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
