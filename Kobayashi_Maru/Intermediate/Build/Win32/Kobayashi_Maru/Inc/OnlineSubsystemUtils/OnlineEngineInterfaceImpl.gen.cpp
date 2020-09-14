// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/OnlineEngineInterfaceImpl.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineEngineInterfaceImpl() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineEngineInterface();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UOnlineEngineInterfaceImpl::StaticRegisterNativesUOnlineEngineInterfaceImpl()
	{
	}
	UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl_NoRegister()
	{
		return UOnlineEngineInterfaceImpl::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceSubsystemNameOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_VoiceSubsystemNameOverride;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineEngineInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineEngineInterfaceImpl.h" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride_MetaData[] = {
		{ "Comment", "/** Allow the subsystem used for voice functions to be overridden, in case it needs to be different than the default subsystem. May be useful on console platforms. */" },
		{ "ModuleRelativePath", "Private/OnlineEngineInterfaceImpl.h" },
		{ "ToolTip", "Allow the subsystem used for voice functions to be overridden, in case it needs to be different than the default subsystem. May be useful on console platforms." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride = { "VoiceSubsystemNameOverride", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlineEngineInterfaceImpl, VoiceSubsystemNameOverride), METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::NewProp_VoiceSubsystemNameOverride,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineEngineInterfaceImpl>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::ClassParams = {
		&UOnlineEngineInterfaceImpl::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineEngineInterfaceImpl()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineEngineInterfaceImpl_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineEngineInterfaceImpl, 1084375584);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineEngineInterfaceImpl>()
	{
		return UOnlineEngineInterfaceImpl::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineEngineInterfaceImpl(Z_Construct_UClass_UOnlineEngineInterfaceImpl, &UOnlineEngineInterfaceImpl::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UOnlineEngineInterfaceImpl"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineEngineInterfaceImpl);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
