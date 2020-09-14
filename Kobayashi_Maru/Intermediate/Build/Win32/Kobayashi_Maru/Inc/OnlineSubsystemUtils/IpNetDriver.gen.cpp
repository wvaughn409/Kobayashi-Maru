// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/IpNetDriver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpNetDriver() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	ENGINE_API UClass* Z_Construct_UClass_UNetDriver();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UIpNetDriver::StaticRegisterNativesUIpNetDriver()
	{
	}
	UClass* Z_Construct_UClass_UIpNetDriver_NoRegister()
	{
		return UIpNetDriver::StaticClass();
	}
	struct Z_Construct_UClass_UIpNetDriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResolutionConnectionTimeout_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ResolutionConnectionTimeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NbPacketsBetweenReceiveTimeTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NbPacketsBetweenReceiveTimeTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSecondsInReceive_MetaData[];
#endif
		static const UE4CodeGen_Private::FDoublePropertyParams NewProp_MaxSecondsInReceive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientDesiredSocketSendBufferBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ClientDesiredSocketSendBufferBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientDesiredSocketReceiveBufferBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ClientDesiredSocketReceiveBufferBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerDesiredSocketSendBufferBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ServerDesiredSocketSendBufferBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerDesiredSocketReceiveBufferBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ServerDesiredSocketReceiveBufferBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPortCountToTry_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxPortCountToTry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowPlayerPortUnreach_MetaData[];
#endif
		static void NewProp_AllowPlayerPortUnreach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AllowPlayerPortUnreach;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LogPortUnreach_MetaData[];
#endif
		static void NewProp_LogPortUnreach_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LogPortUnreach;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIpNetDriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// CVars\n" },
		{ "IncludePath", "IpNetDriver.h" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "CVars" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ResolutionConnectionTimeout_MetaData[] = {
		{ "Comment", "/** The amount of time to wait in seconds until we consider a connection to a resolution result as timed out */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "The amount of time to wait in seconds until we consider a connection to a resolution result as timed out" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ResolutionConnectionTimeout = { "ResolutionConnectionTimeout", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, ResolutionConnectionTimeout), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ResolutionConnectionTimeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ResolutionConnectionTimeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_NbPacketsBetweenReceiveTimeTest_MetaData[] = {
		{ "Comment", "/** Nb of packets to wait before testing if the receive time went over MaxSecondsInReceive */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Nb of packets to wait before testing if the receive time went over MaxSecondsInReceive" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_NbPacketsBetweenReceiveTimeTest = { "NbPacketsBetweenReceiveTimeTest", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, NbPacketsBetweenReceiveTimeTest), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_NbPacketsBetweenReceiveTimeTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_NbPacketsBetweenReceiveTimeTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxSecondsInReceive_MetaData[] = {
		{ "Comment", "/** Maximum time in seconds the TickDispatch can loop on received socket data*/" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Maximum time in seconds the TickDispatch can loop on received socket data" },
	};
#endif
	const UE4CodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxSecondsInReceive = { "MaxSecondsInReceive", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, MaxSecondsInReceive), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxSecondsInReceive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxSecondsInReceive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketSendBufferBytes_MetaData[] = {
		{ "Comment", "/** Number of bytes that will be passed to FSocket::SetSendBufferSize when initializing a client. */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Number of bytes that will be passed to FSocket::SetSendBufferSize when initializing a client." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketSendBufferBytes = { "ClientDesiredSocketSendBufferBytes", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, ClientDesiredSocketSendBufferBytes), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketSendBufferBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketSendBufferBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketReceiveBufferBytes_MetaData[] = {
		{ "Comment", "/** Number of bytes that will be passed to FSocket::SetReceiveBufferSize when initializing a client. */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Number of bytes that will be passed to FSocket::SetReceiveBufferSize when initializing a client." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketReceiveBufferBytes = { "ClientDesiredSocketReceiveBufferBytes", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, ClientDesiredSocketReceiveBufferBytes), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketReceiveBufferBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketReceiveBufferBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketSendBufferBytes_MetaData[] = {
		{ "Comment", "/** Number of bytes that will be passed to FSocket::SetSendBufferSize when initializing a server. */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Number of bytes that will be passed to FSocket::SetSendBufferSize when initializing a server." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketSendBufferBytes = { "ServerDesiredSocketSendBufferBytes", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, ServerDesiredSocketSendBufferBytes), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketSendBufferBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketSendBufferBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketReceiveBufferBytes_MetaData[] = {
		{ "Comment", "/** Number of bytes that will be passed to FSocket::SetReceiveBufferSize when initializing a server. */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Number of bytes that will be passed to FSocket::SetReceiveBufferSize when initializing a server." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketReceiveBufferBytes = { "ServerDesiredSocketReceiveBufferBytes", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, ServerDesiredSocketReceiveBufferBytes), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketReceiveBufferBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketReceiveBufferBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxPortCountToTry_MetaData[] = {
		{ "Comment", "/** Number of ports which will be tried if current one is not available for binding (i.e. if told to bind to port N, will try from N to N+MaxPortCountToTry inclusive) */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Number of ports which will be tried if current one is not available for binding (i.e. if told to bind to port N, will try from N to N+MaxPortCountToTry inclusive)" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxPortCountToTry = { "MaxPortCountToTry", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpNetDriver, MaxPortCountToTry), METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxPortCountToTry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxPortCountToTry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach_MetaData[] = {
		{ "Comment", "/** Does the game allow clients to remain after receiving ICMP port unreachable errors (handles flakey connections) */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Does the game allow clients to remain after receiving ICMP port unreachable errors (handles flakey connections)" },
	};
#endif
	void Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach_SetBit(void* Obj)
	{
		((UIpNetDriver*)Obj)->AllowPlayerPortUnreach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach = { "AllowPlayerPortUnreach", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIpNetDriver), &Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach_MetaData[] = {
		{ "Comment", "/** Should port unreachable messages be logged */" },
		{ "ModuleRelativePath", "Classes/IpNetDriver.h" },
		{ "ToolTip", "Should port unreachable messages be logged" },
	};
#endif
	void Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach_SetBit(void* Obj)
	{
		((UIpNetDriver*)Obj)->LogPortUnreach = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach = { "LogPortUnreach", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UIpNetDriver), &Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach_SetBit, METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIpNetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ResolutionConnectionTimeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_NbPacketsBetweenReceiveTimeTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxSecondsInReceive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketSendBufferBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ClientDesiredSocketReceiveBufferBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketSendBufferBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_ServerDesiredSocketReceiveBufferBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_MaxPortCountToTry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_AllowPlayerPortUnreach,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpNetDriver_Statics::NewProp_LogPortUnreach,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIpNetDriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpNetDriver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIpNetDriver_Statics::ClassParams = {
		&UIpNetDriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIpNetDriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UIpNetDriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIpNetDriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIpNetDriver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIpNetDriver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIpNetDriver, 2597376116);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UIpNetDriver>()
	{
		return UIpNetDriver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIpNetDriver(Z_Construct_UClass_UIpNetDriver, &UIpNetDriver::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UIpNetDriver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIpNetDriver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
