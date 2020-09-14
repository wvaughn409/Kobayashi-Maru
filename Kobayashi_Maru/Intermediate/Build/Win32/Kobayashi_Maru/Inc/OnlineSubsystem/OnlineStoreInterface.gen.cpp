// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Interfaces/OnlineStoreInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineStoreInterface() {}
// Cross Module References
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest();
// End Cross Module References
	static UEnum* EInAppPurchaseState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("EInAppPurchaseState"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEM_API UEnum* StaticEnum<EInAppPurchaseState::Type>()
	{
		return EInAppPurchaseState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInAppPurchaseState(EInAppPurchaseState_StaticEnum, TEXT("/Script/OnlineSubsystem"), TEXT("EInAppPurchaseState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Hash() { return 3790999729U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInAppPurchaseState"), 0, Get_Z_Construct_UEnum_OnlineSubsystem_EInAppPurchaseState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInAppPurchaseState::Unknown", (int64)EInAppPurchaseState::Unknown },
				{ "EInAppPurchaseState::Success", (int64)EInAppPurchaseState::Success },
				{ "EInAppPurchaseState::Failed", (int64)EInAppPurchaseState::Failed },
				{ "EInAppPurchaseState::Cancelled", (int64)EInAppPurchaseState::Cancelled },
				{ "EInAppPurchaseState::Invalid", (int64)EInAppPurchaseState::Invalid },
				{ "EInAppPurchaseState::NotAllowed", (int64)EInAppPurchaseState::NotAllowed },
				{ "EInAppPurchaseState::Restored", (int64)EInAppPurchaseState::Restored },
				{ "EInAppPurchaseState::AlreadyOwned", (int64)EInAppPurchaseState::AlreadyOwned },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AlreadyOwned.DisplayName", "AlreadyOwned" },
				{ "AlreadyOwned.Name", "EInAppPurchaseState::AlreadyOwned" },
				{ "BlueprintType", "true" },
				{ "Cancelled.DisplayName", "Cancelled" },
				{ "Cancelled.Name", "EInAppPurchaseState::Cancelled" },
				{ "Comment", "/**\n * Possible result states of an in-app purchase transaction\n */" },
				{ "Failed.DisplayName", "Failed" },
				{ "Failed.Name", "EInAppPurchaseState::Failed" },
				{ "Invalid.DisplayName", "Invalid" },
				{ "Invalid.Name", "EInAppPurchaseState::Invalid" },
				{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
				{ "NotAllowed.DisplayName", "NotAllowed" },
				{ "NotAllowed.Name", "EInAppPurchaseState::NotAllowed" },
				{ "Restored.DisplayName", "Restored" },
				{ "Restored.Name", "EInAppPurchaseState::Restored" },
				{ "Success.DisplayName", "Success" },
				{ "Success.Name", "EInAppPurchaseState::Success" },
				{ "ToolTip", "Possible result states of an in-app purchase transaction" },
				{ "Unknown.DisplayName", "Unknown" },
				{ "Unknown.Name", "EInAppPurchaseState::Unknown" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystem,
				nullptr,
				"EInAppPurchaseState",
				"EInAppPurchaseState::Type",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInAppPurchaseRestoreInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("InAppPurchaseRestoreInfo"), sizeof(FInAppPurchaseRestoreInfo), Get_Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FInAppPurchaseRestoreInfo>()
{
	return FInAppPurchaseRestoreInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInAppPurchaseRestoreInfo(FInAppPurchaseRestoreInfo::StaticStruct, TEXT("/Script/OnlineSubsystem"), TEXT("InAppPurchaseRestoreInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseRestoreInfo
{
	FScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseRestoreInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InAppPurchaseRestoreInfo")),new UScriptStruct::TCppStructOps<FInAppPurchaseRestoreInfo>);
	}
} ScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseRestoreInfo;
	struct Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransactionIdentifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TransactionIdentifier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiptData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiptData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Identifier_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Identifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction restored purchase information\n */" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Micro-transaction restored purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseRestoreInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier = { "TransactionIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo, TransactionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The opaque receipt data for the platform\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The opaque receipt data for the platform" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData = { "ReceiptData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo, ReceiptData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseRestoreInfo, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_TransactionIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_ReceiptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::NewProp_Identifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"InAppPurchaseRestoreInfo",
		sizeof(FInAppPurchaseRestoreInfo),
		alignof(FInAppPurchaseRestoreInfo),
		Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InAppPurchaseRestoreInfo"), sizeof(FInAppPurchaseRestoreInfo), Get_Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseRestoreInfo_Hash() { return 230749033U; }
class UScriptStruct* FInAppPurchaseProductInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("InAppPurchaseProductInfo"), sizeof(FInAppPurchaseProductInfo), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FInAppPurchaseProductInfo>()
{
	return FInAppPurchaseProductInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInAppPurchaseProductInfo(FInAppPurchaseProductInfo::StaticStruct, TEXT("/Script/OnlineSubsystem"), TEXT("InAppPurchaseProductInfo"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseProductInfo
{
	FScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseProductInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InAppPurchaseProductInfo")),new UScriptStruct::TCppStructOps<FInAppPurchaseProductInfo>);
	}
} ScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseProductInfo;
	struct Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction purchase information\n */" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Micro-transaction purchase information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Opaque receipt data for the transaction\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Opaque receipt data for the transaction" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData = { "ReceiptData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, ReceiptData), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized grouping separator of the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized grouping separator of the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator = { "GroupingSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, GroupingSeparator), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized decimal separator used in the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized decimal separator used in the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator = { "DecimalSeparator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DecimalSeparator), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency symbol of the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized currency symbol of the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol = { "CurrencySymbol", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, CurrencySymbol), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized currency code of the price\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized currency code of the price" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Raw price without currency code and symbol\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Raw price without currency code and symbol" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice = { "RawPrice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, RawPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display price name\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized display price name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice = { "DisplayPrice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DisplayPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display description name\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized display description name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription = { "DisplayDescription", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DisplayDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The localized display name\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The localized display name" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// the unique transaction identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "the unique transaction identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier = { "TransactionIdentifier", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, TransactionIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The unique product identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier = { "Identifier", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductInfo, Identifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_ReceiptData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_GroupingSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DecimalSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencySymbol,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_RawPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_TransactionIdentifier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::NewProp_Identifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"InAppPurchaseProductInfo",
		sizeof(FInAppPurchaseProductInfo),
		alignof(FInAppPurchaseProductInfo),
		Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InAppPurchaseProductInfo"), sizeof(FInAppPurchaseProductInfo), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductInfo_Hash() { return 96950306U; }
class UScriptStruct* FInAppPurchaseProductRequest::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("InAppPurchaseProductRequest"), sizeof(FInAppPurchaseProductRequest), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FInAppPurchaseProductRequest>()
{
	return FInAppPurchaseProductRequest::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInAppPurchaseProductRequest(FInAppPurchaseProductRequest::StaticStruct, TEXT("/Script/OnlineSubsystem"), TEXT("InAppPurchaseProductRequest"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseProductRequest
{
	FScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseProductRequest()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InAppPurchaseProductRequest")),new UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest>);
	}
} ScriptStruct_OnlineSubsystem_StaticRegisterNativesFInAppPurchaseProductRequest;
	struct Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Micro-transaction request information\n */" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Micro-transaction request information" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInAppPurchaseProductRequest>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// Flag to determine whether this is a consumable purchase, or not.\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "Flag to determine whether this is a consumable purchase, or not." },
	};
#endif
	void Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_SetBit(void* Obj)
	{
		((FInAppPurchaseProductRequest*)Obj)->bIsConsumable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable = { "bIsConsumable", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInAppPurchaseProductRequest), &Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "// The unique product identifier that matches the one from your targeted store.\n" },
		{ "ModuleRelativePath", "Public/Interfaces/OnlineStoreInterface.h" },
		{ "ToolTip", "The unique product identifier that matches the one from your targeted store." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier = { "ProductIdentifier", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInAppPurchaseProductRequest, ProductIdentifier), METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_bIsConsumable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::NewProp_ProductIdentifier,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"InAppPurchaseProductRequest",
		sizeof(FInAppPurchaseProductRequest),
		alignof(FInAppPurchaseProductRequest),
		Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInAppPurchaseProductRequest()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InAppPurchaseProductRequest"), sizeof(FInAppPurchaseProductRequest), Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInAppPurchaseProductRequest_Hash() { return 24128355U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
