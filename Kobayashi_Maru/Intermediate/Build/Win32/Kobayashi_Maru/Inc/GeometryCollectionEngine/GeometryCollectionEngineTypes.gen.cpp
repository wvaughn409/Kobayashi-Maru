// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionEngineTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionEngineTypes() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum();
// End Cross Module References
	static UEnum* ECollectionGroupEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ECollectionGroupEnum"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<ECollectionGroupEnum>()
	{
		return ECollectionGroupEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollectionGroupEnum(ECollectionGroupEnum_StaticEnum, TEXT("/Script/GeometryCollectionEngine"), TEXT("ECollectionGroupEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Hash() { return 2950022618U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollectionGroupEnum"), 0, Get_Z_Construct_UEnum_GeometryCollectionEngine_ECollectionGroupEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollectionGroupEnum::Chaos_Traansform", (int64)ECollectionGroupEnum::Chaos_Traansform },
				{ "ECollectionGroupEnum::Chaos_Max", (int64)ECollectionGroupEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "ECollectionGroupEnum::Chaos_Max" },
				{ "Chaos_Traansform.DisplayName", "Transform" },
				{ "Chaos_Traansform.Name", "ECollectionGroupEnum::Chaos_Traansform" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionEngineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
				nullptr,
				"ECollectionGroupEnum",
				"ECollectionGroupEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECollectionAttributeEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ECollectionAttributeEnum"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<ECollectionAttributeEnum>()
	{
		return ECollectionAttributeEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECollectionAttributeEnum(ECollectionAttributeEnum_StaticEnum, TEXT("/Script/GeometryCollectionEngine"), TEXT("ECollectionAttributeEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Hash() { return 4239630591U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECollectionAttributeEnum"), 0, Get_Z_Construct_UEnum_GeometryCollectionEngine_ECollectionAttributeEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECollectionAttributeEnum::Chaos_Active", (int64)ECollectionAttributeEnum::Chaos_Active },
				{ "ECollectionAttributeEnum::Chaos_DynamicState", (int64)ECollectionAttributeEnum::Chaos_DynamicState },
				{ "ECollectionAttributeEnum::Chaos_CollisionGroup", (int64)ECollectionAttributeEnum::Chaos_CollisionGroup },
				{ "ECollectionAttributeEnum::Chaos_Max", (int64)ECollectionAttributeEnum::Chaos_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Chaos_Active.DisplayName", "Active" },
				{ "Chaos_Active.Name", "ECollectionAttributeEnum::Chaos_Active" },
				{ "Chaos_CollisionGroup.DisplayName", "CollisionGroup" },
				{ "Chaos_CollisionGroup.Name", "ECollectionAttributeEnum::Chaos_CollisionGroup" },
				{ "Chaos_DynamicState.DisplayName", "DynamicState" },
				{ "Chaos_DynamicState.Name", "ECollectionAttributeEnum::Chaos_DynamicState" },
				{ "Chaos_Max.Comment", "//\n" },
				{ "Chaos_Max.Hidden", "" },
				{ "Chaos_Max.Name", "ECollectionAttributeEnum::Chaos_Max" },
				{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionEngineTypes.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
				nullptr,
				"ECollectionAttributeEnum",
				"ECollectionAttributeEnum",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
