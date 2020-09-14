// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardAssetProvider() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardAssetProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AIModule();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IBlackboardAssetProvider::execGetBlackboardAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlackboardData**)Z_Param__Result=P_THIS->GetBlackboardAsset();
		P_NATIVE_END;
	}
	void UBlackboardAssetProvider::StaticRegisterNativesUBlackboardAssetProvider()
	{
		UClass* Class = UBlackboardAssetProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBlackboardAsset", &IBlackboardAssetProvider::execGetBlackboardAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics
	{
		struct BlackboardAssetProvider_eventGetBlackboardAsset_Parms
		{
			UBlackboardData* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlackboardAssetProvider_eventGetBlackboardAsset_Parms, ReturnValue), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameplayTags" },
		{ "Comment", "/** Returns BlackboardData referenced by the owner object. */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardAssetProvider.h" },
		{ "ToolTip", "Returns BlackboardData referenced by the owner object." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardAssetProvider, nullptr, "GetBlackboardAsset", nullptr, nullptr, sizeof(BlackboardAssetProvider_eventGetBlackboardAsset_Parms), Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlackboardAssetProvider_NoRegister()
	{
		return UBlackboardAssetProvider::StaticClass();
	}
	struct Z_Construct_UClass_UBlackboardAssetProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlackboardAssetProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlackboardAssetProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackboardAssetProvider_GetBlackboardAsset, "GetBlackboardAsset" }, // 3168495911
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardAssetProvider.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlackboardAssetProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBlackboardAssetProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardAssetProvider_Statics::ClassParams = {
		&UBlackboardAssetProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardAssetProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlackboardAssetProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlackboardAssetProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlackboardAssetProvider, 673593605);
	template<> AIMODULE_API UClass* StaticClass<UBlackboardAssetProvider>()
	{
		return UBlackboardAssetProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlackboardAssetProvider(Z_Construct_UClass_UBlackboardAssetProvider, &UBlackboardAssetProvider::StaticClass, TEXT("/Script/AIModule"), TEXT("UBlackboardAssetProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardAssetProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
