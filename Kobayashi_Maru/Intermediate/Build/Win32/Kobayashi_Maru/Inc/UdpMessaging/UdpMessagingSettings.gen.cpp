// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdpMessaging/Private/Shared/UdpMessagingSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessagingSettings() {}
// Cross Module References
	UDPMESSAGING_API UEnum* Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat();
	UPackage* Z_Construct_UPackage__Script_UdpMessaging();
	UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister();
	UDPMESSAGING_API UClass* Z_Construct_UClass_UUdpMessagingSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static UEnum* EUdpMessageFormat_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat, Z_Construct_UPackage__Script_UdpMessaging(), TEXT("EUdpMessageFormat"));
		}
		return Singleton;
	}
	template<> UDPMESSAGING_API UEnum* StaticEnum<EUdpMessageFormat>()
	{
		return EUdpMessageFormat_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUdpMessageFormat(EUdpMessageFormat_StaticEnum, TEXT("/Script/UdpMessaging"), TEXT("EUdpMessageFormat"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Hash() { return 2918465710U; }
	UEnum* Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UdpMessaging();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUdpMessageFormat"), 0, Get_Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUdpMessageFormat::None", (int64)EUdpMessageFormat::None },
				{ "EUdpMessageFormat::Json", (int64)EUdpMessageFormat::Json },
				{ "EUdpMessageFormat::TaggedProperty", (int64)EUdpMessageFormat::TaggedProperty },
				{ "EUdpMessageFormat::CborPlatformEndianness", (int64)EUdpMessageFormat::CborPlatformEndianness },
				{ "EUdpMessageFormat::CborStandardEndianness", (int64)EUdpMessageFormat::CborStandardEndianness },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CborPlatformEndianness.Comment", "/**\n\x09 * UDP messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\n\x09 * if generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead.\n\x09 */" },
				{ "CborPlatformEndianness.DisplayName", "CBOR (Platform Endianness)" },
				{ "CborPlatformEndianness.Name", "EUdpMessageFormat::CborPlatformEndianness" },
				{ "CborPlatformEndianness.ToolTip", "UDP messages are encoded in CBOR, using the platform endianness. This is the fastest and preferred option, but the CBOR data will not be readable by an external standard-compliant CBOR parser\nif generated from a little endian platform. If the data needs to be consumed outside the Unreal Engine, consider using CborStandardEndianness format instead." },
				{ "CborStandardEndianness.Comment", "/**\n\x09 * UDP messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\n\x09 * Useful if the UDP messages needs to be analyzed/consumed outside the Unreal Engine.\n\x09 */" },
				{ "CborStandardEndianness.DisplayName", "CBOR (Standard Endianness)" },
				{ "CborStandardEndianness.Name", "EUdpMessageFormat::CborStandardEndianness" },
				{ "CborStandardEndianness.ToolTip", "UDP messages are encoded in CBOR, using the CBOR standard-complinant endianness (big endian). It will perform slower on a little-endian platform, but the data will be readable by standard CBOR parsers.\nUseful if the UDP messages needs to be analyzed/consumed outside the Unreal Engine." },
				{ "Comment", "/** Defines the UDP message format available (how the message data is encoded). */" },
				{ "Json.Comment", "/** JSON format specified. Legacy - Not exposed to user.*/" },
				{ "Json.Hidden", "" },
				{ "Json.Name", "EUdpMessageFormat::Json" },
				{ "Json.ToolTip", "JSON format specified. Legacy - Not exposed to user." },
				{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
				{ "None.Comment", "/** No format specified. Legacy - Not exposed to user.*/" },
				{ "None.Hidden", "" },
				{ "None.Name", "EUdpMessageFormat::None" },
				{ "None.ToolTip", "No format specified. Legacy - Not exposed to user." },
				{ "TaggedProperty.Comment", "/** Tagged property format specified. Legacy - Not exposed to user.*/" },
				{ "TaggedProperty.Hidden", "" },
				{ "TaggedProperty.Name", "EUdpMessageFormat::TaggedProperty" },
				{ "TaggedProperty.ToolTip", "Tagged property format specified. Legacy - Not exposed to user." },
				{ "ToolTip", "Defines the UDP message format available (how the message data is encoded)." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UdpMessaging,
				nullptr,
				"EUdpMessageFormat",
				"EUdpMessageFormat",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UUdpMessagingSettings::StaticRegisterNativesUUdpMessagingSettings()
	{
	}
	UClass* Z_Construct_UClass_UUdpMessagingSettings_NoRegister()
	{
		return UUdpMessagingSettings::StaticClass();
	}
	struct Z_Construct_UClass_UUdpMessagingSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteTunnelEndpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RemoteTunnelEndpoints;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RemoteTunnelEndpoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TunnelMulticastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TunnelMulticastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TunnelUnicastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TunnelUnicastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTunnel_MetaData[];
#endif
		static void NewProp_EnableTunnel_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTunnel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticEndpoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticEndpoints;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StaticEndpoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastTimeToLive_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MulticastTimeToLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MessageFormat_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MessageFormat;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MessageFormat_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MulticastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MulticastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnicastEndpoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnicastEndpoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStopServiceWhenAppDeactivates_MetaData[];
#endif
		static void NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopServiceWhenAppDeactivates;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRepair_MetaData[];
#endif
		static void NewProp_bAutoRepair_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRepair;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableTransport_MetaData[];
#endif
		static void NewProp_EnableTransport_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableTransport;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUdpMessagingSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UdpMessaging,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Shared/UdpMessagingSettings.h" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoints of remote tunnel nodes.\n\x09 *\n\x09 * Use this setting to connect to remote tunnel services.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of remote tunnel nodes.\n\nUse this setting to connect to remote tunnel services.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, RemoteTunnelEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner = { "RemoteTunnelEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint = { "TunnelMulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, TunnelMulticastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/**\n\x09 * The local IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The local IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint = { "TunnelUnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, TunnelUnicastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData[] = {
		{ "Category", "Tunnel" },
		{ "Comment", "/** Whether the UDP tunnel is enabled. */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP tunnel is enabled." },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->EnableTunnel = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel = { "EnableTunnel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoints of static devices.\n\x09 *\n\x09 * Use this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoints of static devices.\n\nUse this setting to reach devices on other subnets, such as mobile phones on a WiFi network.\nThe format is IP_ADDRESS:PORT_NUMBER." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, StaticEndpoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner = { "StaticEndpoints", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The time-to-live (TTL) for sent multicast packets. */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The time-to-live (TTL) for sent multicast packets." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive = { "MulticastTimeToLive", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, MulticastTimeToLive), nullptr, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** The format used to serialize the UDP message payload. */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The format used to serialize the UDP message payload." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat = { "MessageFormat", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, MessageFormat), Z_Construct_UEnum_UdpMessaging_EUdpMessageFormat, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to send multicast packets to.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * The multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to send multicast packets to.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\nThe multicast IP address must be in the range 224.0.0.0 to 239.255.255.255.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_MULTICAST=`" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint = { "MulticastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, MulticastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * The IP endpoint to listen to and send packets from.\n\x09 *\n\x09 * The format is IP_ADDRESS:PORT_NUMBER.\n\x09 * 0.0.0.0:0 will bind to the default network adapter on Windows,\n\x09 * and all available network adapters on other operating systems.\n\x09 * Specifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\n\x09 * Specifying both the IP and Port will allow usage of static endpoint to reach this client\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "The IP endpoint to listen to and send packets from.\n\nThe format is IP_ADDRESS:PORT_NUMBER.\n0.0.0.0:0 will bind to the default network adapter on Windows,\nand all available network adapters on other operating systems.\nSpecifying an interface IP here, will use that interface for multicasting and static endpoint *might* also reach this client through <unicast ip:multicast port>\nSpecifying both the IP and Port will allow usage of static endpoint to reach this client\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_UNICAST=`" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint = { "UnicastEndpoint", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUdpMessagingSettings, UnicastEndpoint), METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData[] = {
		{ "Comment", "/** Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether to stop the transport service when the application deactivates, and restart it when the application is reactivated" },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->bStopServiceWhenAppDeactivates = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates = { "bStopServiceWhenAppDeactivates", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/** Whether the UDP transport channel should try to auto repair when in error. */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP transport channel should try to auto repair when in error." },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->bAutoRepair = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair = { "bAutoRepair", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData[] = {
		{ "Category", "Transport" },
		{ "Comment", "/**\n\x09 * Whether the UDP transport channel is enabled.\n\x09 * Can be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`\n\x09 */" },
		{ "ModuleRelativePath", "Private/Shared/UdpMessagingSettings.h" },
		{ "ToolTip", "Whether the UDP transport channel is enabled.\nCan be specified on the command line with `-UDPMESSAGING_TRANSPORT_ENABLE=`" },
	};
#endif
	void Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit(void* Obj)
	{
		((UUdpMessagingSettings*)Obj)->EnableTransport = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport = { "EnableTransport", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUdpMessagingSettings), &Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_RemoteTunnelEndpoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelMulticastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_TunnelUnicastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTunnel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_StaticEndpoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastTimeToLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MessageFormat_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_MulticastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_UnicastEndpoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bStopServiceWhenAppDeactivates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_bAutoRepair,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUdpMessagingSettings_Statics::NewProp_EnableTransport,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUdpMessagingSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUdpMessagingSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams = {
		&UUdpMessagingSettings::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUdpMessagingSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUdpMessagingSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUdpMessagingSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUdpMessagingSettings, 3770742454);
	template<> UDPMESSAGING_API UClass* StaticClass<UUdpMessagingSettings>()
	{
		return UUdpMessagingSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUdpMessagingSettings(Z_Construct_UClass_UUdpMessagingSettings, &UUdpMessagingSettings::StaticClass, TEXT("/Script/UdpMessaging"), TEXT("UUdpMessagingSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUdpMessagingSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
