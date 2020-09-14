// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBlueprintCallProxyBase() {}
// Cross Module References
	ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Net/OnlineBlueprintCallProxyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "EmptyOnlineDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Engine_EmptyOnlineDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UOnlineBlueprintCallProxyBase::StaticRegisterNativesUOnlineBlueprintCallProxyBase()
	{
	}
	UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase_NoRegister()
	{
		return UOnlineBlueprintCallProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Net/OnlineBlueprintCallProxyBase.h" },
		{ "ModuleRelativePath", "Public/Net/OnlineBlueprintCallProxyBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineBlueprintCallProxyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::ClassParams = {
		&UOnlineBlueprintCallProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineBlueprintCallProxyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineBlueprintCallProxyBase, 3933721785);
	template<> ENGINE_API UClass* StaticClass<UOnlineBlueprintCallProxyBase>()
	{
		return UOnlineBlueprintCallProxyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineBlueprintCallProxyBase(Z_Construct_UClass_UOnlineBlueprintCallProxyBase, &UOnlineBlueprintCallProxyBase::StaticClass, TEXT("/Script/Engine"), TEXT("UOnlineBlueprintCallProxyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineBlueprintCallProxyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
