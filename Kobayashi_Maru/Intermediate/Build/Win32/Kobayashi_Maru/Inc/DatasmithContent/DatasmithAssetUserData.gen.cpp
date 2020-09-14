// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DatasmithContent/Public/DatasmithAssetUserData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDatasmithAssetUserData() {}
// Cross Module References
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetUserData_NoRegister();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	UPackage* Z_Construct_UPackage__Script_DatasmithContent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DATASMITHCONTENT_API UClass* Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister();
// End Cross Module References
	void UDatasmithAssetUserData::StaticRegisterNativesUDatasmithAssetUserData()
	{
	}
	UClass* Z_Construct_UClass_UDatasmithAssetUserData_NoRegister()
	{
		return UDatasmithAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UDatasmithAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectTemplates_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectTemplates;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectTemplates_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectTemplates_ValueProp;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MetaData;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MetaData_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MetaData_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDatasmithAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_DatasmithContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Asset user data that can be used with Datasmith on Actors and other objects  */" },
		{ "DisplayName", "Datasmith User Data" },
		{ "IncludePath", "DatasmithAssetUserData.h" },
		{ "ModuleRelativePath", "Public/DatasmithAssetUserData.h" },
		{ "ScriptName", "DatasmithUserData" },
		{ "ToolTip", "Asset user data that can be used with Datasmith on Actors and other objects" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_MetaData[] = {
		{ "ModuleRelativePath", "Public/DatasmithAssetUserData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates = { "ObjectTemplates", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithAssetUserData, ObjectTemplates), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_Key_KeyProp = { "ObjectTemplates_Key", nullptr, (EPropertyFlags)0x0004000800000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_ValueProp = { "ObjectTemplates", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UDatasmithObjectTemplate_NoRegister, METADATA_PARAMS(nullptr, 0) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "Datasmith User Data" },
		{ "DisplayName", "Metadata" },
		{ "ModuleRelativePath", "Public/DatasmithAssetUserData.h" },
		{ "ScriptName", "Metadata" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData = { "MetaData", nullptr, (EPropertyFlags)0x0010040000020005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDatasmithAssetUserData, MetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_Key_KeyProp = { "MetaData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_ValueProp = { "MetaData", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDatasmithAssetUserData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_ObjectTemplates_ValueProp,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDatasmithAssetUserData_Statics::NewProp_MetaData_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDatasmithAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDatasmithAssetUserData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDatasmithAssetUserData_Statics::ClassParams = {
		&UDatasmithAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDatasmithAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDatasmithAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDatasmithAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDatasmithAssetUserData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDatasmithAssetUserData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDatasmithAssetUserData, 2433471557);
	template<> DATASMITHCONTENT_API UClass* StaticClass<UDatasmithAssetUserData>()
	{
		return UDatasmithAssetUserData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDatasmithAssetUserData(Z_Construct_UClass_UDatasmithAssetUserData, &UDatasmithAssetUserData::StaticClass, TEXT("/Script/DatasmithContent"), TEXT("UDatasmithAssetUserData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDatasmithAssetUserData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
