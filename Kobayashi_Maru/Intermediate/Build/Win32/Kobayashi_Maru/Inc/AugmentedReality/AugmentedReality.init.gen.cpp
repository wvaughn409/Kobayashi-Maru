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
void EmptyLinkFunctionForGeneratedCodeAugmentedReality_init() {}
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature();
	AUGMENTEDREALITY_API UFunction* Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AugmentedReality()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_OnARTrackingStateChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_OnARTransformUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_ARSaveWorldPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_ARGetCandidateObjectPin__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_TrackableDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_TrackablePlaneDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_TrackablePointDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_TrackableImageDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_TrackableFaceDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_TrackableEnvProbeDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_AugmentedReality_TrackableObjectDelegate__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/AugmentedReality",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAA739771,
				0x8CFBCABD,
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
