// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/NamedInterfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedInterfaces() {}
// Cross Module References
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNamedInterfaceDef();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNamedInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UNamedInterfaces_NoRegister();
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UNamedInterfaces();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
class UScriptStruct* FNamedInterfaceDef::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterfaceDef, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("NamedInterfaceDef"), sizeof(FNamedInterfaceDef), Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FNamedInterfaceDef>()
{
	return FNamedInterfaceDef::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedInterfaceDef(FNamedInterfaceDef::StaticStruct, TEXT("/Script/OnlineSubsystem"), TEXT("NamedInterfaceDef"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystem_StaticRegisterNativesFNamedInterfaceDef
{
	FScriptStruct_OnlineSubsystem_StaticRegisterNativesFNamedInterfaceDef()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedInterfaceDef")),new UScriptStruct::TCppStructOps<FNamedInterfaceDef>);
	}
} ScriptStruct_OnlineSubsystem_StaticRegisterNativesFNamedInterfaceDef;
	struct Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceClassName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InterfaceClassName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds a name to class name mapping for adding the named interfaces automatically */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds a name to class name mapping for adding the named interfaces automatically" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedInterfaceDef>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName_MetaData[] = {
		{ "Comment", "/** The class to load and create for the named interface */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The class to load and create for the named interface" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName = { "InterfaceClassName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedInterfaceDef, InterfaceClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName_MetaData[] = {
		{ "Comment", "/** The name to bind this object to */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The name to bind this object to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedInterfaceDef, InterfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"NamedInterfaceDef",
		sizeof(FNamedInterfaceDef),
		alignof(FNamedInterfaceDef),
		Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedInterfaceDef()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedInterfaceDef"), sizeof(FNamedInterfaceDef), Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedInterfaceDef_Hash() { return 1213436329U; }
class UScriptStruct* FNamedInterface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNamedInterface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterface, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("NamedInterface"), sizeof(FNamedInterface), Get_Z_Construct_UScriptStruct_FNamedInterface_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FNamedInterface>()
{
	return FNamedInterface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNamedInterface(FNamedInterface::StaticStruct, TEXT("/Script/OnlineSubsystem"), TEXT("NamedInterface"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystem_StaticRegisterNativesFNamedInterface
{
	FScriptStruct_OnlineSubsystem_StaticRegisterNativesFNamedInterface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NamedInterface")),new UScriptStruct::TCppStructOps<FNamedInterface>);
	}
} ScriptStruct_OnlineSubsystem_StaticRegisterNativesFNamedInterface;
	struct Z_Construct_UScriptStruct_FNamedInterface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InterfaceObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds a named object interface for dynamically bound interfaces */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds a named object interface for dynamically bound interfaces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedInterface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject_MetaData[] = {
		{ "Comment", "/** The object to store at this location */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The object to store at this location" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject = { "InterfaceObject", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedInterface, InterfaceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName_MetaData[] = {
		{ "Comment", "/** The name to bind this object to */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The name to bind this object to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNamedInterface, InterfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"NamedInterface",
		sizeof(FNamedInterface),
		alignof(FNamedInterface),
		Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedInterface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNamedInterface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NamedInterface"), sizeof(FNamedInterface), Get_Z_Construct_UScriptStruct_FNamedInterface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNamedInterface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNamedInterface_Hash() { return 540111217U; }
	void UNamedInterfaces::StaticRegisterNativesUNamedInterfaces()
	{
	}
	UClass* Z_Construct_UClass_UNamedInterfaces_NoRegister()
	{
		return UNamedInterfaces::StaticClass();
	}
	struct Z_Construct_UClass_UNamedInterfaces_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedInterfaceDefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamedInterfaceDefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NamedInterfaceDefs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NamedInterfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NamedInterfaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NamedInterfaces_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedInterfaces_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Named interfaces are a registry of UObjects accessible by an FName key that will persist for the lifetime of the process\n */" },
		{ "IncludePath", "NamedInterfaces.h" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Named interfaces are a registry of UObjects accessible by an FName key that will persist for the lifetime of the process" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_MetaData[] = {
		{ "Comment", "/** The list of named interfaces to automatically create and store */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The list of named interfaces to automatically create and store" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs = { "NamedInterfaceDefs", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNamedInterfaces, NamedInterfaceDefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_Inner = { "NamedInterfaceDefs", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedInterfaceDef, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_MetaData[] = {
		{ "Comment", "/** Holds the set of registered named interfaces */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds the set of registered named interfaces" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces = { "NamedInterfaces", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNamedInterfaces, NamedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_Inner = { "NamedInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNamedInterface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedInterfaces_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedInterfaces>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNamedInterfaces_Statics::ClassParams = {
		&UNamedInterfaces::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedInterfaces()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNamedInterfaces_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNamedInterfaces, 2100125207);
	template<> ONLINESUBSYSTEM_API UClass* StaticClass<UNamedInterfaces>()
	{
		return UNamedInterfaces::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNamedInterfaces(Z_Construct_UClass_UNamedInterfaces, &UNamedInterfaces::StaticClass, TEXT("/Script/OnlineSubsystem"), TEXT("UNamedInterfaces"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedInterfaces);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
