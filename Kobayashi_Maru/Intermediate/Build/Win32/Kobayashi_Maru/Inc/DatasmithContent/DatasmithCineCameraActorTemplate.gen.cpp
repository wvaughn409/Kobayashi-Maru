// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithCineCameraActorTemplate() {}
// Cross Module References
	DATASMITHCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate();
// End Cross Module References
class UScriptStruct* FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATASMITHCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate, Z_Construct_UPackage__Script_DatasmithContent(), TEXT("DatasmithCameraLookatTrackingSettingsTemplate"), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Hash());
	}
	return Singleton;
}
template<> DATASMITHCONTENT_API UScriptStruct* StaticStruct<FDatasmithCameraLookatTrackingSettingsTemplate>()
{
	return FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate(FDatasmithCameraLookatTrackingSettingsTemplate::StaticStruct, TEXT("/Script/DatasmithContent"), TEXT("DatasmithCameraLookatTrackingSettingsTemplate"), false, nullptr, nullptr);
static struct FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraLookatTrackingSettingsTemplate
{
	FScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraLookatTrackingSettingsTemplate()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DatasmithCameraLookatTrackingSettingsTemplate")),new UScriptStruct::TCppStructOps<FDatasmithCameraLookatTrackingSettingsTemplate>);
	}
} ScriptStruct_DatasmithContent_StaticRegisterNativesFDatasmithCameraLookatTrackingSettingsTemplate;
	struct Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ActorToTrack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowRoll_MetaData[];
#endif
		static void NewProp_bAllowRoll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableLookAtTracking_MetaData[];
#endif
		static void NewProp_bEnableLookAtTracking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableLookAtTracking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDatasmithCameraLookatTrackingSettingsTemplate>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDatasmithCameraLookatTrackingSettingsTemplate, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_SetBit(void* Obj)
	{
		((FDatasmithCameraLookatTrackingSettingsTemplate*)Obj)->bAllowRoll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll = { "bAllowRoll", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_SetBit(void* Obj)
	{
		((FDatasmithCameraLookatTrackingSettingsTemplate*)Obj)->bEnableLookAtTracking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking = { "bEnableLookAtTracking", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), &Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_ActorToTrack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bAllowRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::NewProp_bEnableLookAtTracking,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
		nullptr,
		&NewStructOps,
		"DatasmithCameraLookatTrackingSettingsTemplate",
		sizeof(FDatasmithCameraLookatTrackingSettingsTemplate),
		alignof(FDatasmithCameraLookatTrackingSettingsTemplate),
		Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DatasmithContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DatasmithCameraLookatTrackingSettingsTemplate"), sizeof(FDatasmithCameraLookatTrackingSettingsTemplate), Get_Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate_Hash() { return 1522881443U; }
	void UDatasmithCineCameraActorTemplate::StaticRegisterNativesUDatasmithCineCameraActorTemplate()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate_NoRegister()
	{
		return UDatasmithCineCameraActorTemplate::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookatTrackingSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LookatTrackingSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDatasmithObjectTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/ObjectTemplates/DatasmithCineCameraActorTemplate.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings = { "LookatTrackingSettings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithCineCameraActorTemplate, LookatTrackingSettings), Z_Construct_UScriptStruct_FDatasmithCameraLookatTrackingSettingsTemplate, METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::NewProp_LookatTrackingSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithCineCameraActorTemplate>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::ClassParams = {
		&UDatasmithCineCameraActorTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithCineCameraActorTemplate()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithCineCameraActorTemplate_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithCineCameraActorTemplate, 3998865150);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithCineCameraActorTemplate>()
	{
		return UDatasmithCineCameraActorTemplate::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithCineCameraActorTemplate(Z_Construct_UClass_UDatasmithCineCameraActorTemplate, &UDatasmithCineCameraActorTemplate::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithCineCameraActorTemplate"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithCineCameraActorTemplate);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
