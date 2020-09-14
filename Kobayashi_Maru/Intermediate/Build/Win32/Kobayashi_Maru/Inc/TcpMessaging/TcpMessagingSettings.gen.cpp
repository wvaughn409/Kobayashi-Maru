// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TcpMessaging/Private/Settings/TcpMessagingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTcpMessagingSettings() {}
// Cross Module References
	TCPMESSAGING_API UClass* Z_Construct_UClass_UTcpMessagingSettings_NoRegister();
	TCPMESSAGING_API UClass* Z_Construct_UClass_UTcpMessagingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TcpMessaging();
// End Cross Module References
	void UTcpMessagingSettings::StaticRegisterNativesUTcpMessagingSettings()
	{
	}
	UClass* Z_Construct_UClass_UTcpMessagingSettings_NoRegister()
	{
		return UTcpMessagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTcpMessagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopServiceWhenAppDeactivates_MetaData[];
#endif
		static void NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopServiceWhenAppDeactivates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionRetryDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ConnectionRetryDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectToEndpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ConnectToEndpoints;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ConnectToEndpoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListenEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ListenEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTransport_MetaData[];
#endif
		static void NewProp_EnableTransport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTransport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTcpMessagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TcpMessaging,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/TcpMessagingSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData[] = {
		{ "Comment", "/** Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated" },
	};
#endif
	void Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj)
	{
		((UTcpMessagingSettings*)Obj)->bStopServiceWhenAppDeactivates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates = { "bStopServiceWhenAppDeactivates", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTcpMessagingSettings), &Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Delay time between attempts to re-establish outgoing connections that become disconnected or fail to connect\n\x09 * 0 disables reconnection\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "Delay time between attempts to re-establish outgoing connections that become disconnected or fail to connect\n0 disables reconnection" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay = { "ConnectionRetryDelay", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTcpMessagingSettings, ConnectionRetryDelay), METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoints to try to establish outgoing connection to.\n\x09 *\n\x09 * Use this setting to connect to a remote peer.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints to try to establish outgoing connection to.\n\nUse this setting to connect to a remote peer.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints = { "ConnectToEndpoints", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTcpMessagingSettings, ConnectToEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_Inner = { "ConnectToEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen for incoming connections.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER or blank to disable listening.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to listen for incoming connections.\n\nThe format is IP_ADDRESS:PORT_NUMBER or blank to disable listening." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint = { "ListenEndpoint", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTcpMessagingSettings, ListenEndpoint), METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** Whether the TCP transport channel is enabled */" },
		{ "ModuleRelativePath", "Private/Settings/TcpMessagingSettings.h" },
		{ "ToolTip", "Whether the TCP transport channel is enabled" },
	};
#endif
	void Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void* Obj)
	{
		((UTcpMessagingSettings*)Obj)->EnableTransport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport = { "EnableTransport", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTcpMessagingSettings), &Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTcpMessagingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectionRetryDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ConnectToEndpoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_ListenEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTcpMessagingSettings_Statics::NewProp_EnableTransport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTcpMessagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTcpMessagingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTcpMessagingSettings_Statics::ClassParams = {
		&UTcpMessagingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTcpMessagingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTcpMessagingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTcpMessagingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTcpMessagingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTcpMessagingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTcpMessagingSettings, 1432980272);
	template<> TCPMESSAGING_API UClass* StaticClass<UTcpMessagingSettings>()
	{
		return UTcpMessagingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTcpMessagingSettings(Z_Construct_UClass_UTcpMessagingSettings, &UTcpMessagingSettings::StaticClass, TEXT("/Script/TcpMessaging"), TEXT("UTcpMessagingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTcpMessagingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
