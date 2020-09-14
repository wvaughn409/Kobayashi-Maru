// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraSettings() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEffectType_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
// End Cross Module References
	void UNiagaraSettings::StaticRegisterNativesUNiagaraSettings()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraSettings_NoRegister()
	{
		return UNiagaraSettings::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectTypePtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultEffectTypePtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QualityLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_QualityLevels;
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_QualityLevels_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEffectType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultEffectType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterEnums_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterEnums;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterEnums_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalPayloadTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalPayloadTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalPayloadTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalParameterTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalParameterTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdditionalParameterTypes_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Niagara" },
		{ "IncludePath", "NiagaraSettings.h" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr = { "DefaultEffectTypePtr", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultEffectTypePtr), Z_Construct_UClass_UNiagaraEffectType_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/** The quality levels Niagara uses. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "The quality levels Niagara uses." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels = { "QualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, QualityLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_MetaData)) };
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner = { "QualityLevels", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData[] = {
		{ "AllowedClasses", "NiagaraEffectType" },
		{ "Category", "Niagara" },
		{ "Comment", "/** Default effect type to use for effects that don't define their own. Can be null. */" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
		{ "ToolTip", "Default effect type to use for effects that don't define their own. Can be null." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType = { "DefaultEffectType", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, DefaultEffectType), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData[] = {
		{ "AllowedClasses", "Enum" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterEnums), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner = { "AdditionalParameterEnums", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData[] = {
		{ "AllowedClasses", "ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalPayloadTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner = { "AdditionalPayloadTypes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData[] = {
		{ "AllowedClasses", "ScriptStruct" },
		{ "Category", "Niagara" },
		{ "ModuleRelativePath", "Public/NiagaraSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraSettings, AdditionalParameterTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner = { "AdditionalParameterTypes", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectTypePtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_QualityLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_DefaultEffectType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterEnums_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalPayloadTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraSettings_Statics::NewProp_AdditionalParameterTypes_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams = {
		&UNiagaraSettings::StaticClass,
		"Niagara",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraSettings, 3941609216);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraSettings>()
	{
		return UNiagaraSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraSettings(Z_Construct_UClass_UNiagaraSettings, &UNiagaraSettings::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
