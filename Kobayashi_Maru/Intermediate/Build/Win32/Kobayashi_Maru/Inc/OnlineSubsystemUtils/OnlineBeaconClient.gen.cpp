// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconClient() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeacon();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister();
// End Cross Module References
	static UEnum* EBeaconConnectionState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("EBeaconConnectionState"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<EBeaconConnectionState>()
	{
		return EBeaconConnectionState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBeaconConnectionState(EBeaconConnectionState_StaticEnum, TEXT("/Script/OnlineSubsystemUtils"), TEXT("EBeaconConnectionState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Hash() { return 2490430079U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBeaconConnectionState"), 0, Get_Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBeaconConnectionState::Invalid", (int64)EBeaconConnectionState::Invalid },
				{ "EBeaconConnectionState::Closed", (int64)EBeaconConnectionState::Closed },
				{ "EBeaconConnectionState::Pending", (int64)EBeaconConnectionState::Pending },
				{ "EBeaconConnectionState::Open", (int64)EBeaconConnectionState::Open },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Closed.Comment", "// Connection is invalid, possibly uninitialized.\n" },
				{ "Closed.Name", "EBeaconConnectionState::Closed" },
				{ "Closed.ToolTip", "Connection is invalid, possibly uninitialized." },
				{ "Comment", "/**\n * State of a connection.\n */" },
				{ "Invalid.Name", "EBeaconConnectionState::Invalid" },
				{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
				{ "Open.Comment", "// Connection is awaiting connection.\n" },
				{ "Open.Name", "EBeaconConnectionState::Open" },
				{ "Open.ToolTip", "Connection is awaiting connection." },
				{ "Pending.Comment", "// Connection permanently closed.\n" },
				{ "Pending.Name", "EBeaconConnectionState::Pending" },
				{ "Pending.ToolTip", "Connection permanently closed." },
				{ "ToolTip", "State of a connection." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
				nullptr,
				"EBeaconConnectionState",
				"EBeaconConnectionState",
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
	DEFINE_FUNCTION(AOnlineBeaconClient::execClientOnConnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientOnConnected_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AOnlineBeaconClient_ClientOnConnected = FName(TEXT("ClientOnConnected"));
	void AOnlineBeaconClient::ClientOnConnected()
	{
		ProcessEvent(FindFunctionChecked(NAME_AOnlineBeaconClient_ClientOnConnected),NULL);
	}
	void AOnlineBeaconClient::StaticRegisterNativesAOnlineBeaconClient()
	{
		UClass* Class = AOnlineBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientOnConnected", &AOnlineBeaconClient::execClientOnConnected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called on the server side to open up the actor channel that will allow RPCs to occur\n\x09 * (DO NOT OVERLOAD, implement OnConnected() instead)\n\x09 */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Called on the server side to open up the actor channel that will allow RPCs to occur\n(DO NOT OVERLOAD, implement OnConnected() instead)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AOnlineBeaconClient, nullptr, "ClientOnConnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister()
	{
		return AOnlineBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConnectionState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ConnectionState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ConnectionState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconConnection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeaconConnection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BeaconOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeacon,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AOnlineBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AOnlineBeaconClient_ClientOnConnected, "ClientOnConnected" }, // 746600580
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any unique beacon connectivity, paired with an AOnlineBeaconHostObject implementation \n *\n * This is the actual actor that replicates across client/server and where all RPCs occur\n * On the host, the life cycle is managed by an AOnlineBeaconHostObject\n * On the client, the life cycle is managed by the game \n */" },
		{ "IncludePath", "OnlineBeaconClient.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Base class for any unique beacon connectivity, paired with an AOnlineBeaconHostObject implementation\n\nThis is the actual actor that replicates across client/server and where all RPCs occur\nOn the host, the life cycle is managed by an AOnlineBeaconHostObject\nOn the client, the life cycle is managed by the game" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState_MetaData[] = {
		{ "Comment", "/** State of the connection */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "State of the connection" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState = { "ConnectionState", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconClient, ConnectionState), Z_Construct_UEnum_OnlineSubsystemUtils_EBeaconConnectionState, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconConnection_MetaData[] = {
		{ "Comment", "/** Network connection associated with this beacon client instance */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Network connection associated with this beacon client instance" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconConnection = { "BeaconConnection", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconClient, BeaconConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconConnection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconConnection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconOwner_MetaData[] = {
		{ "Comment", "/** Owning beacon host of this beacon actor (server only) */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconClient.h" },
		{ "ToolTip", "Owning beacon host of this beacon actor (server only)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconOwner = { "BeaconOwner", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconClient, BeaconOwner), Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_ConnectionState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconConnection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconClient_Statics::NewProp_BeaconOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconClient_Statics::ClassParams = {
		&AOnlineBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AOnlineBeaconClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnlineBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnlineBeaconClient, 84092101);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconClient>()
	{
		return AOnlineBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnlineBeaconClient(Z_Construct_UClass_AOnlineBeaconClient, &AOnlineBeaconClient::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("AOnlineBeaconClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
