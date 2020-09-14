// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Public/OnlineBeaconHostObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineBeaconHostObject() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconHostObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_AOnlineBeaconClient_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	void AOnlineBeaconHostObject::StaticRegisterNativesAOnlineBeaconHostObject()
	{
	}
	UClass* Z_Construct_UClass_AOnlineBeaconHostObject_NoRegister()
	{
		return AOnlineBeaconHostObject::StaticClass();
	}
	struct Z_Construct_UClass_AOnlineBeaconHostObject_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientBeaconActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClientBeaconActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeaconTypeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BeaconTypeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AOnlineBeaconHostObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for any unique beacon connectivity, paired with an AOnlineBeaconClient implementation \n *\n * By defining a beacon type and implementing the ability to spawn unique AOnlineBeaconClients, any two instances of the engine\n * can communicate with each other without officially connecting through normal Unreal networking\n */" },
		{ "IncludePath", "OnlineBeaconHostObject.h" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Base class for any unique beacon connectivity, paired with an AOnlineBeaconClient implementation\n\nBy defining a beacon type and implementing the ability to spawn unique AOnlineBeaconClients, any two instances of the engine\ncan communicate with each other without officially connecting through normal Unreal networking" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_MetaData[] = {
		{ "Comment", "/** List of all client beacon actors with active connections */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "List of all client beacon actors with active connections" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors = { "ClientActors", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconHostObject, ClientActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_Inner = { "ClientActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AOnlineBeaconClient_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass_MetaData[] = {
		{ "Comment", "/** Class reference for spawning client beacon actor */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Class reference for spawning client beacon actor" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass = { "ClientBeaconActorClass", nullptr, (EPropertyFlags)0x0024080000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconHostObject, ClientBeaconActorClass), Z_Construct_UClass_AOnlineBeaconClient_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName_MetaData[] = {
		{ "Comment", "/** Custom name for this beacon */" },
		{ "ModuleRelativePath", "Public/OnlineBeaconHostObject.h" },
		{ "ToolTip", "Custom name for this beacon" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName = { "BeaconTypeName", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AOnlineBeaconHostObject, BeaconTypeName), METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_ClientBeaconActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AOnlineBeaconHostObject_Statics::NewProp_BeaconTypeName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AOnlineBeaconHostObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOnlineBeaconHostObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AOnlineBeaconHostObject_Statics::ClassParams = {
		&AOnlineBeaconHostObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AOnlineBeaconHostObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AOnlineBeaconHostObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AOnlineBeaconHostObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AOnlineBeaconHostObject, 1094951690);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<AOnlineBeaconHostObject>()
	{
		return AOnlineBeaconHostObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AOnlineBeaconHostObject(Z_Construct_UClass_AOnlineBeaconHostObject, &AOnlineBeaconHostObject::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("AOnlineBeaconHostObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AOnlineBeaconHostObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
