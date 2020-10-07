// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/FaunaAvianCreatureInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFaunaAvianCreatureInfo() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaAvianCreatureInfo_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaAvianCreatureInfo();
	COMPLETERPG_API UClass* Z_Construct_UClass_UFaunaCreatureInfo();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
// End Cross Module References
	void UFaunaAvianCreatureInfo::StaticRegisterNativesUFaunaAvianCreatureInfo()
	{
	}
	UClass* Z_Construct_UClass_UFaunaAvianCreatureInfo_NoRegister()
	{
		return UFaunaAvianCreatureInfo::StaticClass();
	}
	struct Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupVerticalVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroupVerticalVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeightAboveTerrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHeightAboveTerrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinHeightAboveTerrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinHeightAboveTerrain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFaunaCreatureInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n * \n */" },
		{ "IncludePath", "FaunaAvianCreatureInfo.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FaunaAvianCreatureInfo.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_GroupVerticalVariance_MetaData[] = {
		{ "Category", "AvianProperties" },
		{ "Comment", "/** Variance in heights for avian creatures spawned as a group */" },
		{ "ModuleRelativePath", "Public/FaunaAvianCreatureInfo.h" },
		{ "ToolTip", "Variance in heights for avian creatures spawned as a group" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_GroupVerticalVariance = { "GroupVerticalVariance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaAvianCreatureInfo, GroupVerticalVariance), METADATA_PARAMS(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_GroupVerticalVariance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_GroupVerticalVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MaxHeightAboveTerrain_MetaData[] = {
		{ "Category", "AvianProperties" },
		{ "Comment", "/** Max height that the creature should spawn above the terrain below, respects the creature's max altitude\n\x09    specified elsewhere, so if the chosen height above the terrain is greater than the allowed altitude\n\x09\x09it will be lowered down to but not below MinHeightAboveTerrain */" },
		{ "ModuleRelativePath", "Public/FaunaAvianCreatureInfo.h" },
		{ "ToolTip", "Max height that the creature should spawn above the terrain below, respects the creature's max altitude\n          specified elsewhere, so if the chosen height above the terrain is greater than the allowed altitude\n              it will be lowered down to but not below MinHeightAboveTerrain" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MaxHeightAboveTerrain = { "MaxHeightAboveTerrain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaAvianCreatureInfo, MaxHeightAboveTerrain), METADATA_PARAMS(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MaxHeightAboveTerrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MaxHeightAboveTerrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MinHeightAboveTerrain_MetaData[] = {
		{ "Category", "AvianProperties" },
		{ "Comment", "/** Min height that the creature should spawn above the terrain below, respects the creature's min altitude\n\x09    specified elsewhere, so if the chosen height above the terrain is lower than the allowed altitude\n\x09\x09it will be increased up to but not exceeding MaxHeightAboveTerrain */" },
		{ "ModuleRelativePath", "Public/FaunaAvianCreatureInfo.h" },
		{ "ToolTip", "Min height that the creature should spawn above the terrain below, respects the creature's min altitude\n          specified elsewhere, so if the chosen height above the terrain is lower than the allowed altitude\n              it will be increased up to but not exceeding MaxHeightAboveTerrain" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MinHeightAboveTerrain = { "MinHeightAboveTerrain", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFaunaAvianCreatureInfo, MinHeightAboveTerrain), METADATA_PARAMS(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MinHeightAboveTerrain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MinHeightAboveTerrain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_GroupVerticalVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MaxHeightAboveTerrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::NewProp_MinHeightAboveTerrain,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFaunaAvianCreatureInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::ClassParams = {
		&UFaunaAvianCreatureInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFaunaAvianCreatureInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFaunaAvianCreatureInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFaunaAvianCreatureInfo, 3571836917);
	template<> COMPLETERPG_API UClass* StaticClass<UFaunaAvianCreatureInfo>()
	{
		return UFaunaAvianCreatureInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFaunaAvianCreatureInfo(Z_Construct_UClass_UFaunaAvianCreatureInfo, &UFaunaAvianCreatureInfo::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UFaunaAvianCreatureInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFaunaAvianCreatureInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
