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
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionEngine_init() {}
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature();
	GEOMETRYCOLLECTIONENGINE_API UFunction* Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosCollisionEvents__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosBreakingEvents__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GeometryCollectionEngine_OnChaosTrailingEvents__DelegateSignature,
			};
			static const UE4CodeGen_Private::FPackageParams PackageParams = {
				"/Script/GeometryCollectionEngine",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE783A6AE,
				0x5C4C276E,
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
