// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconHost.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconHost() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHost();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
// End Cross Module References
	void AOnlineBeaconHost::StaticRegisterNativesAOnlineBeaconHost()
	{
	}
	UClass* Z_Construct_UClass_AOnlineBeaconHost_NoRegister()
	{
		return AOnlineBeaconHost::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBeaconHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClientActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ClientActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ListenPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBeaconHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeacon,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Main actor that listens for side channel communication from another Unreal Engine application\n *\n * The AOnlineBeaconHost listens for connections to route to a registered AOnlineBeaconHostObject \n * The AOnlineBeaconHostObject is responsible for spawning the server version of the AOnlineBeaconClient\n * The AOnlineBeaconHost pairs the two client actors, verifies the validity of the exchange, and accepts/continues the connection\n */" },
		{ "IncludePath", "OnlineBeaconHost.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "Main actor that listens for side channel communication from another Unreal Engine application\n\nThe AOnlineBeaconHost listens for connections to route to a registered AOnlineBeaconHostObject\nThe AOnlineBeaconHostObject is responsible for spawning the server version of the AOnlineBeaconClient\nThe AOnlineBeaconHost pairs the two client actors, verifies the validity of the exchange, and accepts/continues the connection" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors_MetaData[] = {
		{ "Comment", "/** List of all client beacon actors with active connections */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "List of all client beacon actors with active connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors = { "ClientActors", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconHost, ClientActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors_Inner = { "ClientActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ListenPort_MetaData[] = {
		{ "Comment", "/** Configured listen port for this beacon host */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHost.h" },
		{ "ToolTip", "Configured listen port for this beacon host" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ListenPort = { "ListenPort", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconHost, ListenPort), METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ListenPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ListenPort_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconHost_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ClientActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHost_Statics::NewProp_ListenPort,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBeaconHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconHost>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconHost_Statics::ClassParams = {
		&AOnlineBeaconHost::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOnlineBeaconHost_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBeaconHost()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnlineBeaconHost_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnlineBeaconHost, 585670174);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconHost>()
	{
		return AOnlineBeaconHost::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnlineBeaconHost(Z_Construct_UClass_AOnlineBeaconHost, &AOnlineBeaconHost::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("AOnlineBeaconHost"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconHost);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
