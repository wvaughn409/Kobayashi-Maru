// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/SpectatorBeaconClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorBeaconClient() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ASpectatorBeaconClient();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient();
	ONLINESUBSYSTEMUTILS_API UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FSpectatorReservation();
// End Cross Module References
	static UEnum* ESpectatorClientRequestType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("ESpectatorClientRequestType"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEMUTILS_API UEnum* StaticEnum<ESpectatorClientRequestType>()
	{
		return ESpectatorClientRequestType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESpectatorClientRequestType(ESpectatorClientRequestType_StaticEnum, TEXT("/Script/OnlineSubsystemUtils"), TEXT("ESpectatorClientRequestType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Hash() { return 688857290U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESpectatorClientRequestType"), 0, Get_Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESpectatorClientRequestType::NonePending", (int64)ESpectatorClientRequestType::NonePending },
				{ "ESpectatorClientRequestType::ExistingSessionReservation", (int64)ESpectatorClientRequestType::ExistingSessionReservation },
				{ "ESpectatorClientRequestType::ReservationUpdate", (int64)ESpectatorClientRequestType::ReservationUpdate },
				{ "ESpectatorClientRequestType::EmptyServerReservation", (int64)ESpectatorClientRequestType::EmptyServerReservation },
				{ "ESpectatorClientRequestType::Reconnect", (int64)ESpectatorClientRequestType::Reconnect },
				{ "ESpectatorClientRequestType::Abandon", (int64)ESpectatorClientRequestType::Abandon },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Abandon.Comment", "/** Abandon the reservation beacon (game specific handling)*/" },
				{ "Abandon.Name", "ESpectatorClientRequestType::Abandon" },
				{ "Abandon.ToolTip", "Abandon the reservation beacon (game specific handling)" },
				{ "Comment", "/**\n* Types of reservation requests that can be made by this beacon\n*/" },
				{ "EmptyServerReservation.Comment", "/** Reservation to configure an empty server  */" },
				{ "EmptyServerReservation.Name", "ESpectatorClientRequestType::EmptyServerReservation" },
				{ "EmptyServerReservation.ToolTip", "Reservation to configure an empty server" },
				{ "ExistingSessionReservation.Comment", "/** Make a reservation with an existing session */" },
				{ "ExistingSessionReservation.Name", "ESpectatorClientRequestType::ExistingSessionReservation" },
				{ "ExistingSessionReservation.ToolTip", "Make a reservation with an existing session" },
				{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
				{ "NonePending.Comment", "/** None pending */" },
				{ "NonePending.Name", "ESpectatorClientRequestType::NonePending" },
				{ "NonePending.ToolTip", "None pending" },
				{ "Reconnect.Comment", "/** Simple reconnect (checks for existing reservation) */" },
				{ "Reconnect.Name", "ESpectatorClientRequestType::Reconnect" },
				{ "Reconnect.ToolTip", "Simple reconnect (checks for existing reservation)" },
				{ "ReservationUpdate.Comment", "/** Make an update to an existing reservation */" },
				{ "ReservationUpdate.Name", "ESpectatorClientRequestType::ReservationUpdate" },
				{ "ReservationUpdate.ToolTip", "Make an update to an existing reservation" },
				{ "ToolTip", "Types of reservation requests that can be made by this beacon" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
				nullptr,
				"ESpectatorClientRequestType",
				"ESpectatorClientRequestType",
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
	DEFINE_FUNCTION(ASpectatorBeaconClient::execServerCancelReservationRequest)
	{
		P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_Spectator);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerCancelReservationRequest_Validate(Z_Param_Spectator))
		{
			RPC_ValidateFailed(TEXT("ServerCancelReservationRequest_Validate"));
			return;
		}
		P_THIS->ServerCancelReservationRequest_Implementation(Z_Param_Spectator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpectatorBeaconClient::execServerReservationRequest)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SessionId);
		P_GET_STRUCT(FSpectatorReservation,Z_Param_Reservation);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->ServerReservationRequest_Validate(Z_Param_SessionId,Z_Param_Reservation))
		{
			RPC_ValidateFailed(TEXT("ServerReservationRequest_Validate"));
			return;
		}
		P_THIS->ServerReservationRequest_Implementation(Z_Param_SessionId,Z_Param_Reservation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpectatorBeaconClient::execClientSendReservationFull)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSendReservationFull_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpectatorBeaconClient::execClientSendReservationUpdates)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumRemainingReservations);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSendReservationUpdates_Implementation(Z_Param_NumRemainingReservations);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpectatorBeaconClient::execClientCancelReservationResponse)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientCancelReservationResponse_Implementation(ESpectatorReservationResult::Type(Z_Param_ReservationResponse));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpectatorBeaconClient::execClientReservationResponse)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_ReservationResponse);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientReservationResponse_Implementation(ESpectatorReservationResult::Type(Z_Param_ReservationResponse));
		P_NATIVE_END;
	}
	static FName NAME_ASpectatorBeaconClient_ClientCancelReservationResponse = FName(TEXT("ClientCancelReservationResponse"));
	void ASpectatorBeaconClient::ClientCancelReservationResponse(ESpectatorReservationResult::Type ReservationResponse)
	{
		SpectatorBeaconClient_eventClientCancelReservationResponse_Parms Parms;
		Parms.ReservationResponse=ReservationResponse;
		ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientCancelReservationResponse),&Parms);
	}
	static FName NAME_ASpectatorBeaconClient_ClientReservationResponse = FName(TEXT("ClientReservationResponse"));
	void ASpectatorBeaconClient::ClientReservationResponse(ESpectatorReservationResult::Type ReservationResponse)
	{
		SpectatorBeaconClient_eventClientReservationResponse_Parms Parms;
		Parms.ReservationResponse=ReservationResponse;
		ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientReservationResponse),&Parms);
	}
	static FName NAME_ASpectatorBeaconClient_ClientSendReservationFull = FName(TEXT("ClientSendReservationFull"));
	void ASpectatorBeaconClient::ClientSendReservationFull()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientSendReservationFull),NULL);
	}
	static FName NAME_ASpectatorBeaconClient_ClientSendReservationUpdates = FName(TEXT("ClientSendReservationUpdates"));
	void ASpectatorBeaconClient::ClientSendReservationUpdates(int32 NumRemainingReservations)
	{
		SpectatorBeaconClient_eventClientSendReservationUpdates_Parms Parms;
		Parms.NumRemainingReservations=NumRemainingReservations;
		ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ClientSendReservationUpdates),&Parms);
	}
	static FName NAME_ASpectatorBeaconClient_ServerCancelReservationRequest = FName(TEXT("ServerCancelReservationRequest"));
	void ASpectatorBeaconClient::ServerCancelReservationRequest(FUniqueNetIdRepl const& Spectator)
	{
		SpectatorBeaconClient_eventServerCancelReservationRequest_Parms Parms;
		Parms.Spectator=Spectator;
		ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ServerCancelReservationRequest),&Parms);
	}
	static FName NAME_ASpectatorBeaconClient_ServerReservationRequest = FName(TEXT("ServerReservationRequest"));
	void ASpectatorBeaconClient::ServerReservationRequest(const FString& SessionId, FSpectatorReservation const& Reservation)
	{
		SpectatorBeaconClient_eventServerReservationRequest_Parms Parms;
		Parms.SessionId=SessionId;
		Parms.Reservation=Reservation;
		ProcessEvent(FindFunctionChecked(NAME_ASpectatorBeaconClient_ServerReservationRequest),&Parms);
	}
	void ASpectatorBeaconClient::StaticRegisterNativesASpectatorBeaconClient()
	{
		UClass* Class = ASpectatorBeaconClient::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientCancelReservationResponse", &ASpectatorBeaconClient::execClientCancelReservationResponse },
			{ "ClientReservationResponse", &ASpectatorBeaconClient::execClientReservationResponse },
			{ "ClientSendReservationFull", &ASpectatorBeaconClient::execClientSendReservationFull },
			{ "ClientSendReservationUpdates", &ASpectatorBeaconClient::execClientSendReservationUpdates },
			{ "ServerCancelReservationRequest", &ASpectatorBeaconClient::execServerCancelReservationRequest },
			{ "ServerReservationRequest", &ASpectatorBeaconClient::execServerReservationRequest },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventClientCancelReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::NewProp_ReservationResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Response from the host session after making a cancellation request\n\x09*\n\x09* @param ReservationResponse response from server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a cancellation request\n\n@param ReservationResponse response from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientCancelReservationResponse", nullptr, nullptr, sizeof(SpectatorBeaconClient_eventClientCancelReservationResponse_Parms), Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReservationResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse = { "ReservationResponse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventClientReservationResponse_Parms, ReservationResponse), Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorReservationResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::NewProp_ReservationResponse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Response from the host session after making a reservation request\n\x09*\n\x09* @param ReservationResponse response from server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session after making a reservation request\n\n@param ReservationResponse response from server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientReservationResponse", nullptr, nullptr, sizeof(SpectatorBeaconClient_eventClientReservationResponse_Parms), Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Response from the host session that the reservation is full */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation is full" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientSendReservationFull", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumRemainingReservations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations = { "NumRemainingReservations", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventClientSendReservationUpdates_Parms, NumRemainingReservations), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::NewProp_NumRemainingReservations,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Response from the host session that the reservation count has changed\n\x09*\n\x09* @param NumRemainingReservations number of slots remaining until a full session\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Response from the host session that the reservation count has changed\n\n@param NumRemainingReservations number of slots remaining until a full session" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ClientSendReservationUpdates", nullptr, nullptr, sizeof(SpectatorBeaconClient_eventClientSendReservationUpdates_Parms), Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spectator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Spectator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::NewProp_Spectator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::NewProp_Spectator = { "Spectator", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventServerCancelReservationRequest_Parms, Spectator), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::NewProp_Spectator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::NewProp_Spectator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::NewProp_Spectator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Tell the server to cancel a pending or existing reservation\n\x09*\n\x09* @param Spectator id of the spectator for the reservation to cancel\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Tell the server to cancel a pending or existing reservation\n\n@param Spectator id of the spectator for the reservation to cancel" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ServerCancelReservationRequest", nullptr, nullptr, sizeof(SpectatorBeaconClient_eventServerCancelReservationRequest_Parms), Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reservation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Reservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation = { "Reservation", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventServerReservationRequest_Parms, Reservation), Z_Construct_UScriptStruct_FSpectatorReservation, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId = { "SessionId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpectatorBeaconClient_eventServerReservationRequest_Parms, SessionId), METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_Reservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::NewProp_SessionId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Tell the server about the reservation request being made\n\x09*\n\x09* @param SessionId expected session id on the other end (must match)\n\x09* @param Reservation pending reservation request to make with server\n\x09*/" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Tell the server about the reservation request being made\n\n@param SessionId expected session id on the other end (must match)\n@param Reservation pending reservation request to make with server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpectatorBeaconClient, nullptr, "ServerReservationRequest", nullptr, nullptr, sizeof(SpectatorBeaconClient_eventServerReservationRequest_Parms), Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpectatorBeaconClient_NoRegister()
	{
		return ASpectatorBeaconClient::StaticClass();
	}
	struct Z_Construct_UClass_ASpectatorBeaconClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCancelReservation_MetaData[];
#endif
		static void NewProp_bCancelReservation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCancelReservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPendingReservationSent_MetaData[];
#endif
		static void NewProp_bPendingReservationSent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPendingReservationSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RequestType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RequestType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingReservation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingReservation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestSessionId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DestSessionId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpectatorBeaconClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AOnlineBeaconClient,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpectatorBeaconClient_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientCancelReservationResponse, "ClientCancelReservationResponse" }, // 902129259
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientReservationResponse, "ClientReservationResponse" }, // 3117310732
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationFull, "ClientSendReservationFull" }, // 3409110954
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ClientSendReservationUpdates, "ClientSendReservationUpdates" }, // 3479421135
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ServerCancelReservationRequest, "ServerCancelReservationRequest" }, // 3651350047
		{ &Z_Construct_UFunction_ASpectatorBeaconClient_ServerReservationRequest, "ServerReservationRequest" }, // 4166324081
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconClient_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A beacon client used for making reservations with an existing game session\n*/" },
		{ "IncludePath", "SpectatorBeaconClient.h" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "A beacon client used for making reservations with an existing game session" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_MetaData[] = {
		{ "Comment", "/** Has the reservation request been canceled */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been canceled" },
	};
#endif
	void Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_SetBit(void* Obj)
	{
		((ASpectatorBeaconClient*)Obj)->bCancelReservation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation = { "bCancelReservation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpectatorBeaconClient), &Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData[] = {
		{ "Comment", "/** Has the reservation request been delivered */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Has the reservation request been delivered" },
	};
#endif
	void Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit(void* Obj)
	{
		((ASpectatorBeaconClient*)Obj)->bPendingReservationSent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent = { "bPendingReservationSent", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpectatorBeaconClient), &Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType_MetaData[] = {
		{ "Comment", "/** Type of request currently being handled by this client beacon */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Type of request currently being handled by this client beacon" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType = { "RequestType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpectatorBeaconClient, RequestType), Z_Construct_UEnum_OnlineSubsystemUtils_ESpectatorClientRequestType, METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_PendingReservation_MetaData[] = {
		{ "Comment", "/** Pending reservation that will be sent upon connection with the intended host */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Pending reservation that will be sent upon connection with the intended host" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_PendingReservation = { "PendingReservation", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpectatorBeaconClient, PendingReservation), Z_Construct_UScriptStruct_FSpectatorReservation, METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_PendingReservation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_PendingReservation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_DestSessionId_MetaData[] = {
		{ "Comment", "/** Session Id of the destination host */" },
		{ "ModuleRelativePath", "Public/SpectatorBeaconClient.h" },
		{ "ToolTip", "Session Id of the destination host" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_DestSessionId = { "DestSessionId", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpectatorBeaconClient, DestSessionId), METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_DestSessionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_DestSessionId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpectatorBeaconClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bCancelReservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_bPendingReservationSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_RequestType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_PendingReservation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpectatorBeaconClient_Statics::NewProp_DestSessionId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpectatorBeaconClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpectatorBeaconClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpectatorBeaconClient_Statics::ClassParams = {
		&ASpectatorBeaconClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpectatorBeaconClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ASpectatorBeaconClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpectatorBeaconClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpectatorBeaconClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpectatorBeaconClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpectatorBeaconClient, 4070661242);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ASpectatorBeaconClient>()
	{
		return ASpectatorBeaconClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpectatorBeaconClient(Z_Construct_UClass_ASpectatorBeaconClient, &ASpectatorBeaconClient::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("ASpectatorBeaconClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpectatorBeaconClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
