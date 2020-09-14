// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/InAppPurchaseQueryCallbackProxy2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInAppPurchaseQueryCallbackProxy2() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics
	{
		struct _Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms
		{
			TArray<FOnlineProxyStoreOffer> InAppOfferInformation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InAppOfferInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InAppOfferInformation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InAppOfferInformation_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation = { "InAppOfferInformation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms, InAppOfferInformation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_Inner = { "InAppOfferInformation", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::NewProp_InAppOfferInformation_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "InAppPurchaseQuery2Result__DelegateSignature", nullptr, nullptr, sizeof(_Script_OnlineSubsystemUtils_eventInAppPurchaseQuery2Result_Parms), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* EOnlineProxyStoreOfferDiscountType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EOnlineProxyStoreOfferDiscountType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EOnlineProxyStoreOfferDiscountType>()
	{
		return EOnlineProxyStoreOfferDiscountType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineProxyStoreOfferDiscountType(EOnlineProxyStoreOfferDiscountType_StaticEnum, TEXT("/Script/OnlineSubsystemUtils"), TEXT("EOnlineProxyStoreOfferDiscountType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Hash() { return 4208209038U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineProxyStoreOfferDiscountType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineProxyStoreOfferDiscountType::NotOnSale", (int64)EOnlineProxyStoreOfferDiscountType::NotOnSale },
				{ "EOnlineProxyStoreOfferDiscountType::Percentage", (int64)EOnlineProxyStoreOfferDiscountType::Percentage },
				{ "EOnlineProxyStoreOfferDiscountType::DiscountAmount", (int64)EOnlineProxyStoreOfferDiscountType::DiscountAmount },
				{ "EOnlineProxyStoreOfferDiscountType::PayAmount", (int64)EOnlineProxyStoreOfferDiscountType::PayAmount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DiscountAmount.Comment", "/** Offer price should be displayed as an amount off regular price */" },
				{ "DiscountAmount.DisplayName", "DiscountAmount" },
				{ "DiscountAmount.Name", "EOnlineProxyStoreOfferDiscountType::DiscountAmount" },
				{ "DiscountAmount.ToolTip", "Offer price should be displayed as an amount off regular price" },
				{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
				{ "NotOnSale.Comment", "/** Offer isn't on sale*/" },
				{ "NotOnSale.DisplayName", "NotOnSale" },
				{ "NotOnSale.Name", "EOnlineProxyStoreOfferDiscountType::NotOnSale" },
				{ "NotOnSale.ToolTip", "Offer isn't on sale" },
				{ "PayAmount.Comment", "/** Offer price should be displayed as a new price */" },
				{ "PayAmount.DisplayName", "PayAmount" },
				{ "PayAmount.Name", "EOnlineProxyStoreOfferDiscountType::PayAmount" },
				{ "PayAmount.ToolTip", "Offer price should be displayed as a new price" },
				{ "Percentage.Comment", "/** Offer price should be displayed as a percentage of regular price */" },
				{ "Percentage.DisplayName", "Percentage" },
				{ "Percentage.Name", "EOnlineProxyStoreOfferDiscountType::Percentage" },
				{ "Percentage.ToolTip", "Offer price should be displayed as a percentage of regular price" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
				nullptr,
				"EOnlineProxyStoreOfferDiscountType",
				"EOnlineProxyStoreOfferDiscountType",
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
class UScriptStruct* FOnlineProxyStoreOffer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("OnlineProxyStoreOffer"), sizeof(FOnlineProxyStoreOffer), Get_Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FOnlineProxyStoreOffer>()
{
	return FOnlineProxyStoreOffer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnlineProxyStoreOffer(FOnlineProxyStoreOffer::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("OnlineProxyStoreOffer"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFOnlineProxyStoreOffer
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFOnlineProxyStoreOffer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnlineProxyStoreOffer")),new UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFOnlineProxyStoreOffer;
	struct Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiscountType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DiscountType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DiscountType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpirationDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExpirationDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReleaseDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReleaseDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CurrencyCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumericPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumericPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PriceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PriceText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RegularPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegularPriceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_RegularPriceText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LongDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_LongDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Offer entry for display from online store\n */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Offer entry for display from online store" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnlineProxyStoreOffer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields = { "DynamicFields", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, DynamicFields), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_Key_KeyProp = { "DynamicFields_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_ValueProp = { "DynamicFields", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Type of discount currently running on this offer (if any) */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Type of discount currently running on this offer (if any)" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType = { "DiscountType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, DiscountType), Z_Construct_UEnum_OnlineSubsystemUtils_EOnlineProxyStoreOfferDiscountType, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Date this information is no longer valid (maybe due to sale ending, etc) */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Date this information is no longer valid (maybe due to sale ending, etc)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate = { "ExpirationDate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, ExpirationDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Date the offer was released */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Date the offer was released" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate = { "ReleaseDate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, ReleaseDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Price currency code */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Price currency code" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode = { "CurrencyCode", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, CurrencyCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Final-Price (Post-Sales/Discounts) in numeric form for comparison/sorting */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Final-Price (Post-Sales/Discounts) in numeric form for comparison/sorting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice = { "NumericPrice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, NumericPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Final-Pricing (Post-Sales/Discounts) as text for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Final-Pricing (Post-Sales/Discounts) as text for display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText = { "PriceText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, PriceText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Regular non-sale price in numeric form for comparison/sorting */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Regular non-sale price in numeric form for comparison/sorting" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice = { "RegularPrice", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, RegularPrice), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Regular non-sale price as text for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Regular non-sale price as text for display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText = { "RegularPriceText", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, RegularPriceText), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Full description for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Full description for display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription = { "LongDescription", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, LongDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Short description for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Short description for display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Title for display */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Title for display" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, Title), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId_MetaData[] = {
		{ "Category", "ProductInfo" },
		{ "Comment", "/** Unique offer identifier */" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Unique offer identifier" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnlineProxyStoreOffer, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DynamicFields_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_DiscountType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ExpirationDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_ReleaseDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_CurrencyCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_NumericPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_PriceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_RegularPriceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_LongDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::NewProp_OfferId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"OnlineProxyStoreOffer",
		sizeof(FOnlineProxyStoreOffer),
		alignof(FOnlineProxyStoreOffer),
		Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnlineProxyStoreOffer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnlineProxyStoreOffer"), sizeof(FOnlineProxyStoreOffer), Get_Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnlineProxyStoreOffer_Hash() { return 419569222U; }
	DEFINE_FUNCTION(UInAppPurchaseQueryCallbackProxy2::execCreateProxyObjectForInAppPurchaseQuery)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_TARRAY_REF(FString,Z_Param_Out_ProductIdentifiers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInAppPurchaseQueryCallbackProxy2**)Z_Param__Result=UInAppPurchaseQueryCallbackProxy2::CreateProxyObjectForInAppPurchaseQuery(Z_Param_PlayerController,Z_Param_Out_ProductIdentifiers);
		P_NATIVE_END;
	}
	void UInAppPurchaseQueryCallbackProxy2::StaticRegisterNativesUInAppPurchaseQueryCallbackProxy2()
	{
		UClass* Class = UInAppPurchaseQueryCallbackProxy2::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateProxyObjectForInAppPurchaseQuery", &UInAppPurchaseQueryCallbackProxy2::execCreateProxyObjectForInAppPurchaseQuery },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics
	{
		struct InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms
		{
			APlayerController* PlayerController;
			TArray<FString> ProductIdentifiers;
			UInAppPurchaseQueryCallbackProxy2* ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ReturnValue), Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, ProductIdentifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner = { "ProductIdentifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_ProductIdentifiers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams[] = {
		{ "Category", "Online|InAppPurchase" },
		{ "Comment", "// Queries a InAppPurchase for an integer value\n" },
		{ "DisplayName", "Read In App Purchase Information2" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Queries a InAppPurchase for an integer value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2, nullptr, "CreateProxyObjectForInAppPurchaseQuery", nullptr, nullptr, sizeof(InAppPurchaseQueryCallbackProxy2_eventCreateProxyObjectForInAppPurchaseQuery_Parms), Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_NoRegister()
	{
		return UInAppPurchaseQueryCallbackProxy2::StaticClass();
	}
	struct Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics
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
	UObject* (*const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery, "CreateProxyObjectForInAppPurchaseQuery" }, // 3310359862
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InAppPurchaseQueryCallbackProxy2.h" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Called when there is an unsuccessful InAppPurchase query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy2, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful InAppPurchase query\n" },
		{ "ModuleRelativePath", "Classes/InAppPurchaseQueryCallbackProxy2.h" },
		{ "ToolTip", "Called when there is a successful InAppPurchase query" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInAppPurchaseQueryCallbackProxy2, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_InAppPurchaseQuery2Result__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInAppPurchaseQueryCallbackProxy2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::ClassParams = {
		&UInAppPurchaseQueryCallbackProxy2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInAppPurchaseQueryCallbackProxy2, 1920143385);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UInAppPurchaseQueryCallbackProxy2>()
	{
		return UInAppPurchaseQueryCallbackProxy2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInAppPurchaseQueryCallbackProxy2(Z_Construct_UClass_UInAppPurchaseQueryCallbackProxy2, &UInAppPurchaseQueryCallbackProxy2::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UInAppPurchaseQueryCallbackProxy2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInAppPurchaseQueryCallbackProxy2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
