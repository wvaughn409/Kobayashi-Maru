// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/IpConnection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIpConnection() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpConnection();
	ENGINE_API UClass* Z_Construct_UClass_UNetConnection();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References
	void UIpConnection::StaticRegisterNativesUIpConnection()
	{
	}
	UClass* Z_Construct_UClass_UIpConnection_NoRegister()
	{
		return UIpConnection::StaticClass();
	}
	struct Z_Construct_UClass_UIpConnection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketErrorDisconnectDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SocketErrorDisconnectDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIpConnection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNetConnection,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IpConnection.h" },
		{ "ModuleRelativePath", "Classes/IpConnection.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay_MetaData[] = {
		{ "Comment", "/** Instead of disconnecting immediately on a socket error, wait for some time to see if we can recover. Specified in Seconds. */" },
		{ "ModuleRelativePath", "Classes/IpConnection.h" },
		{ "ToolTip", "Instead of disconnecting immediately on a socket error, wait for some time to see if we can recover. Specified in Seconds." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay = { "SocketErrorDisconnectDelay", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIpConnection, SocketErrorDisconnectDelay), METADATA_PARAMS(Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIpConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIpConnection_Statics::NewProp_SocketErrorDisconnectDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIpConnection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIpConnection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIpConnection_Statics::ClassParams = {
		&UIpConnection::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIpConnection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIpConnection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIpConnection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIpConnection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIpConnection, 1285952846);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UIpConnection>()
	{
		return UIpConnection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIpConnection(Z_Construct_UClass_UIpConnection, &UIpConnection::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UIpConnection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIpConnection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
