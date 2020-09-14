// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Private/OnlinePIESettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePIESettings() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FPIELoginSettingsInternal();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister();
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UOnlinePIESettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
// End Cross Module References
class UScriptStruct* FPIELoginSettingsInternal::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONLINESUBSYSTEMUTILS_API uint32 Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPIELoginSettingsInternal, Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("PIELoginSettingsInternal"), sizeof(FPIELoginSettingsInternal), Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Hash());
	}
	return Singleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FPIELoginSettingsInternal>()
{
	return FPIELoginSettingsInternal::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPIELoginSettingsInternal(FPIELoginSettingsInternal::StaticStruct, TEXT("/Script/OnlineSubsystemUtils"), TEXT("PIELoginSettingsInternal"), false, nullptr, nullptr);
static struct FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPIELoginSettingsInternal
{
	FScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPIELoginSettingsInternal()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PIELoginSettingsInternal")),new UScriptStruct::TCppStructOps<FPIELoginSettingsInternal>);
	}
} ScriptStruct_OnlineSubsystemUtils_StaticRegisterNativesFPIELoginSettingsInternal;
	struct Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenBytes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TokenBytes;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TokenBytes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Stores PIE login credentials\n */" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ToolTip", "Stores PIE login credentials" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPIELoginSettingsInternal>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_MetaData[] = {
		{ "Comment", "/** Token stored as an array of bytes, encrypted */" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ToolTip", "Token stored as an array of bytes, encrypted" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes = { "TokenBytes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, TokenBytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_Inner = { "TokenBytes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Type" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Type of account. Needed to identity the auth method to use (epic, internal, facebook, etc)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, Type), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Password" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "PasswordField", "TRUE" },
		{ "Tooltip", "Credentials of the user logging in (password or auth token)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token = { "Token", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, Token), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "User Id" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Id of the user logging in (email, display name, facebook id, etc)" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPIELoginSettingsInternal, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_TokenBytes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
		nullptr,
		&NewStructOps,
		"PIELoginSettingsInternal",
		sizeof(FPIELoginSettingsInternal),
		alignof(FPIELoginSettingsInternal),
		Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPIELoginSettingsInternal()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystemUtils();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PIELoginSettingsInternal"), sizeof(FPIELoginSettingsInternal), Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPIELoginSettingsInternal_Hash() { return 1041780591U; }
	void UOnlinePIESettings::StaticRegisterNativesUOnlinePIESettings()
	{
	}
	UClass* Z_Construct_UClass_UOnlinePIESettings_NoRegister()
	{
		return UOnlinePIESettings::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePIESettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Logins_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Logins;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Logins_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOnlinePIEEnabled_MetaData[];
#endif
		static void NewProp_bOnlinePIEEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlinePIEEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePIESettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Setup login credentials for the Play In Editor (PIE) feature\n */" },
		{ "DisplayName", "Play Credentials" },
		{ "IncludePath", "OnlinePIESettings.h" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Setup login credentials for the Play In Editor (PIE) feature" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Credentials" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Login credentials, at least one for each instance of PIE that is intended to be run" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins = { "Logins", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnlinePIESettings, Logins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner = { "Logins", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPIELoginSettingsInternal, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_MetaData[] = {
		{ "Category", "Logins" },
		{ "DisplayName", "Enable Logins" },
		{ "ModuleRelativePath", "Private/OnlinePIESettings.h" },
		{ "Tooltip", "Attempt to login with user credentials on a backend service before launching the PIE instance." },
	};
#endif
	void Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit(void* Obj)
	{
		((UOnlinePIESettings*)Obj)->bOnlinePIEEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled = { "bOnlinePIEEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOnlinePIESettings), &Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_Logins_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnlinePIESettings_Statics::NewProp_bOnlinePIEEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePIESettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePIESettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams = {
		&UOnlinePIESettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePIESettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePIESettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePIESettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePIESettings, 1614030500);
	template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UOnlinePIESettings>()
	{
		return UOnlinePIESettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePIESettings(Z_Construct_UClass_UOnlinePIESettings, &UOnlinePIESettings::StaticClass, TEXT("/Script/OnlineSubsystemUtils"), TEXT("UOnlinePIESettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePIESettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
