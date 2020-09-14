// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/OnlineSessionClient.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineSessionClient() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlineSessionClient();
	ENGINE_API UClass* Z_Construct_UClass_UOnlineSession();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UOnlineSessionClient::StaticRegisterNativesUOnlineSessionClient()
	{
	}
	UClass* Z_Construct_UClass_UOnlineSessionClient_NoRegister()
	{
		return UOnlineSessionClient::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineSessionClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHandlingDisconnect_MetaData[];
#endif
		static void NewProp_bHandlingDisconnect_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHandlingDisconnect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFromInvite_MetaData[];
#endif
		static void NewProp_bIsFromInvite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFromInvite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineSessionClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnlineSession,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineSessionClient.h" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_MetaData[] = {
		{ "Comment", "/** Have we started returning to main menu already */" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
		{ "ToolTip", "Have we started returning to main menu already" },
	};
#endif
	void Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_SetBit(void* Obj)
	{
		((UOnlineSessionClient*)Obj)->bHandlingDisconnect = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect = { "bHandlingDisconnect", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlineSessionClient), &Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_MetaData[] = {
		{ "Comment", "/** Is this join from an invite */" },
		{ "ModuleRelativePath", "Classes/OnlineSessionClient.h" },
		{ "ToolTip", "Is this join from an invite" },
	};
#endif
	void Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_SetBit(void* Obj)
	{
		((UOnlineSessionClient*)Obj)->bIsFromInvite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite = { "bIsFromInvite", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlineSessionClient), &Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bHandlingDisconnect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlineSessionClient_Statics::NewProp_bIsFromInvite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineSessionClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineSessionClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineSessionClient_Statics::ClassParams = {
		&UOnlineSessionClient::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineSessionClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineSessionClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineSessionClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineSessionClient, 2955871925);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlineSessionClient>()
	{
		return UOnlineSessionClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineSessionClient(Z_Construct_UClass_UOnlineSessionClient, &UOnlineSessionClient::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UOnlineSessionClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineSessionClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
