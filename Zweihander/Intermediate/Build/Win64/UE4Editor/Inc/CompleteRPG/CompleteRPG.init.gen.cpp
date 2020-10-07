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
void EmptyLinkFunctionForGeneratedCodeCompleteRPG_init() {}
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_BeginGDCAttractMode__DelegateSignature();
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_EndGDCAttractMode__DelegateSignature();
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_BeginGDCKiteCine__DelegateSignature();
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_EndGDCKiteCine__DelegateSignature();
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_OnGDCKiteCineAborted__DelegateSignature();
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_OnGDCAttractModeAborted__DelegateSignature();
	COMPLETERPG_API UFunction* Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CompleteRPG_BeginGDCAttractMode__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompleteRPG_EndGDCAttractMode__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompleteRPG_BeginGDCKiteCine__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompleteRPG_EndGDCKiteCine__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompleteRPG_OnGDCKiteCineAborted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompleteRPG_OnGDCAttractModeAborted__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CompleteRPG_ControlModeChanged__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/CompleteRPG",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x0C20FE05,
				0xAF111860,
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
