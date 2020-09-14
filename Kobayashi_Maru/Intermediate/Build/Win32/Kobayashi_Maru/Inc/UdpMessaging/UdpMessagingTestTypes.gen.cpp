// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UdpMessaging/Private/Tests/UdpMessagingTestTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUdpMessagingTestTypes() {}
// Cross Module References
	UDPMESSAGING_API UScriptStruct* Z_Construct_UScriptStruct_FUdpMockMessage();
	UPackage* Z_Construct_UPackage__Script_UdpMessaging();
// End Cross Module References
class UScriptStruct* FUdpMockMessage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UDPMESSAGING_API uint32 Get_Z_Construct_UScriptStruct_FUdpMockMessage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUdpMockMessage, Z_Construct_UPackage__Script_UdpMessaging(), TEXT("UdpMockMessage"), sizeof(FUdpMockMessage), Get_Z_Construct_UScriptStruct_FUdpMockMessage_Hash());
	}
	return Singleton;
}
template<> UDPMESSAGING_API UScriptStruct* StaticStruct<FUdpMockMessage>()
{
	return FUdpMockMessage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUdpMockMessage(FUdpMockMessage::StaticStruct, TEXT("/Script/UdpMessaging"), TEXT("UdpMockMessage"), false, nullptr, nullptr);
static struct FScriptStruct_UdpMessaging_StaticRegisterNativesFUdpMockMessage
{
	FScriptStruct_UdpMessaging_StaticRegisterNativesFUdpMockMessage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UdpMockMessage")),new UScriptStruct::TCppStructOps<FUdpMockMessage>);
	}
} ScriptStruct_UdpMessaging_StaticRegisterNativesFUdpMockMessage;
	struct Z_Construct_UScriptStruct_FUdpMockMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/Tests/UdpMessagingTestTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUdpMockMessage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Private/Tests/UdpMessagingTestTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUdpMockMessage, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUdpMockMessage_Statics::NewProp_Data_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUdpMockMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UdpMessaging,
		nullptr,
		&NewStructOps,
		"UdpMockMessage",
		sizeof(FUdpMockMessage),
		alignof(FUdpMockMessage),
		Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUdpMockMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUdpMockMessage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUdpMockMessage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UdpMessaging();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UdpMockMessage"), sizeof(FUdpMockMessage), Get_Z_Construct_UScriptStruct_FUdpMockMessage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUdpMockMessage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUdpMockMessage_Hash() { return 7982100U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
