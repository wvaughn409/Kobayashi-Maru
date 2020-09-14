// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeacon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeacon() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver_NoRegister();
// End Cross Module References
	void AOnlineBeacon::StaticRegisterNativesAOnlineBeacon()
	{
	}
	UClass* Z_Construct_UClass_AOnlineBeacon_NoRegister()
	{
		return AOnlineBeacon::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBeacon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetDriver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NetDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconConnectionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeaconConnectionTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconConnectionInitialTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BeaconConnectionInitialTimeout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBeacon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for beacon communication (Unreal Networking, but outside normal gameplay traffic)\n */" },
		{ "IncludePath", "OnlineBeacon.h" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Base class for beacon communication (Unreal Networking, but outside normal gameplay traffic)" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver_MetaData[] = {
		{ "Comment", "/** Net driver routing network traffic */" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Net driver routing network traffic" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver = { "NetDriver", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeacon, NetDriver), Z_Construct_UClass_UNetDriver_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout_MetaData[] = {
		{ "Comment", "/** Time beacon will wait for packets after establishing a connection before giving up */" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Time beacon will wait for packets after establishing a connection before giving up" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout = { "BeaconConnectionTimeout", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeacon, BeaconConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout_MetaData[] = {
		{ "Comment", "/** Time beacon will wait to establish a connection with the beacon host */" },
		{ "ModuleRelativePath", "Public/OnlineBeacon.h" },
		{ "ToolTip", "Time beacon will wait to establish a connection with the beacon host" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout = { "BeaconConnectionInitialTimeout", nullptr, (EPropertyFlags)0x0020080000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeacon, BeaconConnectionInitialTimeout), METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeacon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_NetDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeacon_Statics::NewProp_BeaconConnectionInitialTimeout,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBeacon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeacon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeacon_Statics::ClassParams = {
		&AOnlineBeacon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOnlineBeacon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBeacon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeacon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBeacon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnlineBeacon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnlineBeacon, 2065721254);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeacon>()
	{
		return AOnlineBeacon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnlineBeacon(Z_Construct_UClass_AOnlineBeacon, &AOnlineBeacon::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("AOnlineBeacon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeacon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
