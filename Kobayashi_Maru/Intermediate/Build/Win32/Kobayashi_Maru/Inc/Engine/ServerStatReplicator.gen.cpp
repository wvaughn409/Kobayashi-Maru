// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/ServerStatReplicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeServerStatReplicator() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AServerStatReplicator();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AServerStatReplicator::StaticRegisterNativesAServerStatReplicator()
	{
	}
	UClass* Z_Construct_UClass_AServerStatReplicator_NoRegister()
	{
		return AServerStatReplicator::StaticClass();
	}
	struct Z_Construct_UClass_AServerStatReplicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetSaturated_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetSaturated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetGUIDInRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetGUIDInRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetGUIDOutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetGUIDOutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjPathBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_ObjPathBytes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsUnAckd_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsUnAckd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsPending_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsPending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetGUIDsAckd_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetGUIDsAckd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumInitiallyDormantActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumInitiallyDormantActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumDormantActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumDormantActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumNetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumNetActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumReplicatedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumReplicatedActorAttempts_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumReplicatedActorAttempts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRelevantDeletedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumRelevantDeletedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumRelevantActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumRelevantActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrioritizedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PrioritizedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumConsideredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumConsideredActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumActorChannels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumActorChannels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentOutVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PercentOutVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PercentInVoice_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_PercentInVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePacketsRecv_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoicePacketsRecv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoicePacketsSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoicePacketsSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceBytesRecv_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoiceBytesRecv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceBytesSent_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_VoiceBytesSent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLoss_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InLoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutLoss_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutLoss;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutBunches_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutBunches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBunches_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InBunches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPackets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPackets_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPackets;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetNumClients_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NetNumClients;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutPacketsClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutPacketsClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRateClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRateClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRateClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRateClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPacketsClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InPacketsClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRateClientAvg_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRateClientAvg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRateClientMin_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRateClientMin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRateClientMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRateClientMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxPacketOverhead_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_MaxPacketOverhead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_OutRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_InRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Channels_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Channels;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverwriteClientStats_MetaData[];
#endif
		static void NewProp_bOverwriteClientStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverwriteClientStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUpdateStatNet_MetaData[];
#endif
		static void NewProp_bUpdateStatNet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdateStatNet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AServerStatReplicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class used to replicate server \"stat net\" data over. For server only values, the client data is\n * is overwritten when bUpdateStatNet == true. For data that both the client and server set, the server\n * data will only overwrite if bUpdateStatNet == true && bOverwriteClientStats == true. \n */" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Engine/ServerStatReplicator.h" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Class used to replicate server \"stat net\" data over. For server only values, the client data is\nis overwritten when bUpdateStatNet == true. For data that both the client and server set, the server\ndata will only overwrite if bUpdateStatNet == true && bOverwriteClientStats == true." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated = { "NetSaturated", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NetSaturated), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate = { "NetGUIDInRate", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NetGUIDInRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate = { "NetGUIDOutRate", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NetGUIDOutRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes = { "ObjPathBytes", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, ObjPathBytes), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd = { "NumNetGUIDsUnAckd", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsUnAckd), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending = { "NumNetGUIDsPending", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsPending), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd = { "NumNetGUIDsAckd", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetGUIDsAckd), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors = { "NumInitiallyDormantActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumInitiallyDormantActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors = { "NumDormantActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumDormantActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors = { "NumNetActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumNetActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors = { "NumActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors = { "NumReplicatedActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumReplicatedActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts = { "NumReplicatedActorAttempts", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumReplicatedActorAttempts), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors = { "NumRelevantDeletedActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumRelevantDeletedActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors = { "NumRelevantActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumRelevantActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors = { "PrioritizedActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, PrioritizedActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors = { "NumConsideredActors", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumConsideredActors), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels = { "NumActorChannels", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NumActorChannels), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice = { "PercentOutVoice", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, PercentOutVoice), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice = { "PercentInVoice", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, PercentInVoice), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv = { "VoicePacketsRecv", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, VoicePacketsRecv), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent = { "VoicePacketsSent", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, VoicePacketsSent), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv = { "VoiceBytesRecv", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, VoiceBytesRecv), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent = { "VoiceBytesSent", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, VoiceBytesSent), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss = { "InLoss", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InLoss), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss = { "OutLoss", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutLoss), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches = { "OutBunches", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutBunches), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches = { "InBunches", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InBunches), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets = { "OutPackets", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutPackets), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets = { "InPackets", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InPackets), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients = { "NetNumClients", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, NetNumClients), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg = { "OutPacketsClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin = { "OutPacketsClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax = { "OutPacketsClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutPacketsClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg = { "OutRateClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutRateClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin = { "OutRateClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutRateClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax = { "OutRateClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutRateClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg = { "InPacketsClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin = { "InPacketsClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax = { "InPacketsClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InPacketsClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg = { "InRateClientAvg", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InRateClientAvg), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin = { "InRateClientMin", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InRateClientMin), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax = { "InRateClientMax", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InRateClientMax), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead = { "MaxPacketOverhead", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, MaxPacketOverhead), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate = { "OutRate", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, OutRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate = { "InRate", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, InRate), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels_MetaData[] = {
		{ "Comment", "/** @see Network stats counters in EngineStats.h */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "@see Network stats counters in EngineStats.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels = { "Channels", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AServerStatReplicator, Channels), METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_MetaData[] = {
		{ "Category", "ServerStats" },
		{ "Comment", "/** Whether to overwrite client data stat net with data from the server or not */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "Whether to overwrite client data stat net with data from the server or not" },
	};
#endif
	void Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_SetBit(void* Obj)
	{
		((AServerStatReplicator*)Obj)->bOverwriteClientStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats = { "bOverwriteClientStats", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AServerStatReplicator), &Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_MetaData[] = {
		{ "Category", "ServerStats" },
		{ "Comment", "/** Whether to update stat net with data from the server or not */" },
		{ "ModuleRelativePath", "Classes/Engine/ServerStatReplicator.h" },
		{ "ToolTip", "Whether to update stat net with data from the server or not" },
	};
#endif
	void Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_SetBit(void* Obj)
	{
		((AServerStatReplicator*)Obj)->bUpdateStatNet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet = { "bUpdateStatNet", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AServerStatReplicator), &Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_SetBit, METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetSaturated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDInRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetGUIDOutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_ObjPathBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsUnAckd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsPending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetGUIDsAckd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumInitiallyDormantActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumDormantActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumNetActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumReplicatedActorAttempts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantDeletedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumRelevantActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PrioritizedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumConsideredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NumActorChannels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentOutVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_PercentInVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsRecv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoicePacketsSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesRecv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_VoiceBytesSent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InLoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutLoss,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutBunches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InBunches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPackets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_NetNumClients,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutPacketsClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRateClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InPacketsClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientAvg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRateClientMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_MaxPacketOverhead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_OutRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_InRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_Channels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bOverwriteClientStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AServerStatReplicator_Statics::NewProp_bUpdateStatNet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AServerStatReplicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AServerStatReplicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AServerStatReplicator_Statics::ClassParams = {
		&AServerStatReplicator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AServerStatReplicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AServerStatReplicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AServerStatReplicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AServerStatReplicator, 2666878765);
	template<> ENGINE_API UClass* StaticClass<AServerStatReplicator>()
	{
		return AServerStatReplicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AServerStatReplicator(Z_Construct_UClass_AServerStatReplicator, &AServerStatReplicator::StaticClass, TEXT("/Script/Engine"), TEXT("AServerStatReplicator"), false, nullptr, nullptr, nullptr);

	void AServerStatReplicator::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Channels(TEXT("Channels"));
		static const FName Name_InRate(TEXT("InRate"));
		static const FName Name_OutRate(TEXT("OutRate"));
		static const FName Name_MaxPacketOverhead(TEXT("MaxPacketOverhead"));
		static const FName Name_InRateClientMax(TEXT("InRateClientMax"));
		static const FName Name_InRateClientMin(TEXT("InRateClientMin"));
		static const FName Name_InRateClientAvg(TEXT("InRateClientAvg"));
		static const FName Name_InPacketsClientMax(TEXT("InPacketsClientMax"));
		static const FName Name_InPacketsClientMin(TEXT("InPacketsClientMin"));
		static const FName Name_InPacketsClientAvg(TEXT("InPacketsClientAvg"));
		static const FName Name_OutRateClientMax(TEXT("OutRateClientMax"));
		static const FName Name_OutRateClientMin(TEXT("OutRateClientMin"));
		static const FName Name_OutRateClientAvg(TEXT("OutRateClientAvg"));
		static const FName Name_OutPacketsClientMax(TEXT("OutPacketsClientMax"));
		static const FName Name_OutPacketsClientMin(TEXT("OutPacketsClientMin"));
		static const FName Name_OutPacketsClientAvg(TEXT("OutPacketsClientAvg"));
		static const FName Name_NetNumClients(TEXT("NetNumClients"));
		static const FName Name_InPackets(TEXT("InPackets"));
		static const FName Name_OutPackets(TEXT("OutPackets"));
		static const FName Name_InBunches(TEXT("InBunches"));
		static const FName Name_OutBunches(TEXT("OutBunches"));
		static const FName Name_OutLoss(TEXT("OutLoss"));
		static const FName Name_InLoss(TEXT("InLoss"));
		static const FName Name_VoiceBytesSent(TEXT("VoiceBytesSent"));
		static const FName Name_VoiceBytesRecv(TEXT("VoiceBytesRecv"));
		static const FName Name_VoicePacketsSent(TEXT("VoicePacketsSent"));
		static const FName Name_VoicePacketsRecv(TEXT("VoicePacketsRecv"));
		static const FName Name_PercentInVoice(TEXT("PercentInVoice"));
		static const FName Name_PercentOutVoice(TEXT("PercentOutVoice"));
		static const FName Name_NumActorChannels(TEXT("NumActorChannels"));
		static const FName Name_NumConsideredActors(TEXT("NumConsideredActors"));
		static const FName Name_PrioritizedActors(TEXT("PrioritizedActors"));
		static const FName Name_NumRelevantActors(TEXT("NumRelevantActors"));
		static const FName Name_NumRelevantDeletedActors(TEXT("NumRelevantDeletedActors"));
		static const FName Name_NumReplicatedActorAttempts(TEXT("NumReplicatedActorAttempts"));
		static const FName Name_NumReplicatedActors(TEXT("NumReplicatedActors"));
		static const FName Name_NumActors(TEXT("NumActors"));
		static const FName Name_NumNetActors(TEXT("NumNetActors"));
		static const FName Name_NumDormantActors(TEXT("NumDormantActors"));
		static const FName Name_NumInitiallyDormantActors(TEXT("NumInitiallyDormantActors"));
		static const FName Name_NumNetGUIDsAckd(TEXT("NumNetGUIDsAckd"));
		static const FName Name_NumNetGUIDsPending(TEXT("NumNetGUIDsPending"));
		static const FName Name_NumNetGUIDsUnAckd(TEXT("NumNetGUIDsUnAckd"));
		static const FName Name_ObjPathBytes(TEXT("ObjPathBytes"));
		static const FName Name_NetGUIDOutRate(TEXT("NetGUIDOutRate"));
		static const FName Name_NetGUIDInRate(TEXT("NetGUIDInRate"));
		static const FName Name_NetSaturated(TEXT("NetSaturated"));

		const bool bIsValid = true
			&& Name_Channels == ClassReps[(int32)ENetFields_Private::Channels].Property->GetFName()
			&& Name_InRate == ClassReps[(int32)ENetFields_Private::InRate].Property->GetFName()
			&& Name_OutRate == ClassReps[(int32)ENetFields_Private::OutRate].Property->GetFName()
			&& Name_MaxPacketOverhead == ClassReps[(int32)ENetFields_Private::MaxPacketOverhead].Property->GetFName()
			&& Name_InRateClientMax == ClassReps[(int32)ENetFields_Private::InRateClientMax].Property->GetFName()
			&& Name_InRateClientMin == ClassReps[(int32)ENetFields_Private::InRateClientMin].Property->GetFName()
			&& Name_InRateClientAvg == ClassReps[(int32)ENetFields_Private::InRateClientAvg].Property->GetFName()
			&& Name_InPacketsClientMax == ClassReps[(int32)ENetFields_Private::InPacketsClientMax].Property->GetFName()
			&& Name_InPacketsClientMin == ClassReps[(int32)ENetFields_Private::InPacketsClientMin].Property->GetFName()
			&& Name_InPacketsClientAvg == ClassReps[(int32)ENetFields_Private::InPacketsClientAvg].Property->GetFName()
			&& Name_OutRateClientMax == ClassReps[(int32)ENetFields_Private::OutRateClientMax].Property->GetFName()
			&& Name_OutRateClientMin == ClassReps[(int32)ENetFields_Private::OutRateClientMin].Property->GetFName()
			&& Name_OutRateClientAvg == ClassReps[(int32)ENetFields_Private::OutRateClientAvg].Property->GetFName()
			&& Name_OutPacketsClientMax == ClassReps[(int32)ENetFields_Private::OutPacketsClientMax].Property->GetFName()
			&& Name_OutPacketsClientMin == ClassReps[(int32)ENetFields_Private::OutPacketsClientMin].Property->GetFName()
			&& Name_OutPacketsClientAvg == ClassReps[(int32)ENetFields_Private::OutPacketsClientAvg].Property->GetFName()
			&& Name_NetNumClients == ClassReps[(int32)ENetFields_Private::NetNumClients].Property->GetFName()
			&& Name_InPackets == ClassReps[(int32)ENetFields_Private::InPackets].Property->GetFName()
			&& Name_OutPackets == ClassReps[(int32)ENetFields_Private::OutPackets].Property->GetFName()
			&& Name_InBunches == ClassReps[(int32)ENetFields_Private::InBunches].Property->GetFName()
			&& Name_OutBunches == ClassReps[(int32)ENetFields_Private::OutBunches].Property->GetFName()
			&& Name_OutLoss == ClassReps[(int32)ENetFields_Private::OutLoss].Property->GetFName()
			&& Name_InLoss == ClassReps[(int32)ENetFields_Private::InLoss].Property->GetFName()
			&& Name_VoiceBytesSent == ClassReps[(int32)ENetFields_Private::VoiceBytesSent].Property->GetFName()
			&& Name_VoiceBytesRecv == ClassReps[(int32)ENetFields_Private::VoiceBytesRecv].Property->GetFName()
			&& Name_VoicePacketsSent == ClassReps[(int32)ENetFields_Private::VoicePacketsSent].Property->GetFName()
			&& Name_VoicePacketsRecv == ClassReps[(int32)ENetFields_Private::VoicePacketsRecv].Property->GetFName()
			&& Name_PercentInVoice == ClassReps[(int32)ENetFields_Private::PercentInVoice].Property->GetFName()
			&& Name_PercentOutVoice == ClassReps[(int32)ENetFields_Private::PercentOutVoice].Property->GetFName()
			&& Name_NumActorChannels == ClassReps[(int32)ENetFields_Private::NumActorChannels].Property->GetFName()
			&& Name_NumConsideredActors == ClassReps[(int32)ENetFields_Private::NumConsideredActors].Property->GetFName()
			&& Name_PrioritizedActors == ClassReps[(int32)ENetFields_Private::PrioritizedActors].Property->GetFName()
			&& Name_NumRelevantActors == ClassReps[(int32)ENetFields_Private::NumRelevantActors].Property->GetFName()
			&& Name_NumRelevantDeletedActors == ClassReps[(int32)ENetFields_Private::NumRelevantDeletedActors].Property->GetFName()
			&& Name_NumReplicatedActorAttempts == ClassReps[(int32)ENetFields_Private::NumReplicatedActorAttempts].Property->GetFName()
			&& Name_NumReplicatedActors == ClassReps[(int32)ENetFields_Private::NumReplicatedActors].Property->GetFName()
			&& Name_NumActors == ClassReps[(int32)ENetFields_Private::NumActors].Property->GetFName()
			&& Name_NumNetActors == ClassReps[(int32)ENetFields_Private::NumNetActors].Property->GetFName()
			&& Name_NumDormantActors == ClassReps[(int32)ENetFields_Private::NumDormantActors].Property->GetFName()
			&& Name_NumInitiallyDormantActors == ClassReps[(int32)ENetFields_Private::NumInitiallyDormantActors].Property->GetFName()
			&& Name_NumNetGUIDsAckd == ClassReps[(int32)ENetFields_Private::NumNetGUIDsAckd].Property->GetFName()
			&& Name_NumNetGUIDsPending == ClassReps[(int32)ENetFields_Private::NumNetGUIDsPending].Property->GetFName()
			&& Name_NumNetGUIDsUnAckd == ClassReps[(int32)ENetFields_Private::NumNetGUIDsUnAckd].Property->GetFName()
			&& Name_ObjPathBytes == ClassReps[(int32)ENetFields_Private::ObjPathBytes].Property->GetFName()
			&& Name_NetGUIDOutRate == ClassReps[(int32)ENetFields_Private::NetGUIDOutRate].Property->GetFName()
			&& Name_NetGUIDInRate == ClassReps[(int32)ENetFields_Private::NetGUIDInRate].Property->GetFName()
			&& Name_NetSaturated == ClassReps[(int32)ENetFields_Private::NetSaturated].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AServerStatReplicator"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AServerStatReplicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
