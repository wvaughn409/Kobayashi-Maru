// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobilePatchingUtils_init() {}
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature();
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature();
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature();
	MOBILEPATCHINGUTILS_API UFunction* Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_MobilePatchingUtils()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallSucceeded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnContentInstallFailed__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentSucceeded__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_MobilePatchingUtils_OnRequestContentFailed__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/MobilePatchingUtils",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF6E5BF9E,
				0xD54F7B54,
				METADATA_PARAMS(nullptr, 0)
			};
			UE4CodeGen_Private::ConstructUPackage(ReturnPackage, PackageParams);
		}
		return ReturnPackage;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
