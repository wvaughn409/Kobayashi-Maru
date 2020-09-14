// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LocationServicesBPLibrary/Classes/LocationServicesImpl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationServicesImpl() {}
// Cross Module References
	LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister();
	LOCATIONSERVICESBPLIBRARY_API UClass* Z_Construct_UClass_ULocationServicesImpl();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_LocationServicesBPLibrary();
	LOCATIONSERVICESBPLIBRARY_API UFunction* Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature();
// End Cross Module References
	void ULocationServicesImpl::StaticRegisterNativesULocationServicesImpl()
	{
	}
	UClass* Z_Construct_UClass_ULocationServicesImpl_NoRegister()
	{
		return ULocationServicesImpl::StaticClass();
	}
	struct Z_Construct_UClass_ULocationServicesImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLocationChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLocationChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationServicesImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LocationServicesBPLibrary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LocationServicesImpl.h" },
		{ "ModuleRelativePath", "Classes/LocationServicesImpl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged_MetaData[] = {
		{ "Category", "Services|Mobile|Location" },
		{ "ModuleRelativePath", "Classes/LocationServicesImpl.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged = { "OnLocationChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULocationServicesImpl, OnLocationChanged), Z_Construct_UDelegateFunction_LocationServicesBPLibrary_LocationServicesData_OnLocationChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocationServicesImpl_Statics::NewProp_OnLocationChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationServicesImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationServicesImpl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocationServicesImpl_Statics::ClassParams = {
		&ULocationServicesImpl::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::PropPointers),
		0,
		0x008000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationServicesImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationServicesImpl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocationServicesImpl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocationServicesImpl, 4064258248);
	template<> LOCATIONSERVICESBPLIBRARY_API UClass* StaticClass<ULocationServicesImpl>()
	{
		return ULocationServicesImpl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocationServicesImpl(Z_Construct_UClass_ULocationServicesImpl, &ULocationServicesImpl::StaticClass, TEXT("/Script/LocationServicesBPLibrary"), TEXT("ULocationServicesImpl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationServicesImpl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
