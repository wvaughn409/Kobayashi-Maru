// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/ChaosCollisionEventFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosCollisionEventFilter() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EChaosCollisionSortMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosCollisionSortMethod"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosCollisionSortMethod>()
	{
		return EChaosCollisionSortMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChaosCollisionSortMethod(EChaosCollisionSortMethod_StaticEnum, TEXT("/Script/GeometryCollectionEngine"), TEXT("EChaosCollisionSortMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Hash() { return 1263847947U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChaosCollisionSortMethod"), 0, Get_Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChaosCollisionSortMethod::SortNone", (int64)EChaosCollisionSortMethod::SortNone },
				{ "EChaosCollisionSortMethod::SortByHighestMass", (int64)EChaosCollisionSortMethod::SortByHighestMass },
				{ "EChaosCollisionSortMethod::SortByHighestSpeed", (int64)EChaosCollisionSortMethod::SortByHighestSpeed },
				{ "EChaosCollisionSortMethod::SortByHighestImpulse", (int64)EChaosCollisionSortMethod::SortByHighestImpulse },
				{ "EChaosCollisionSortMethod::SortByNearestFirst", (int64)EChaosCollisionSortMethod::SortByNearestFirst },
				{ "EChaosCollisionSortMethod::Count", (int64)EChaosCollisionSortMethod::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enumeration defining how to sort collision results\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EChaosCollisionSortMethod::Count" },
				{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
				{ "SortByHighestImpulse.Name", "EChaosCollisionSortMethod::SortByHighestImpulse" },
				{ "SortByHighestMass.Name", "EChaosCollisionSortMethod::SortByHighestMass" },
				{ "SortByHighestSpeed.Name", "EChaosCollisionSortMethod::SortByHighestSpeed" },
				{ "SortByNearestFirst.Name", "EChaosCollisionSortMethod::SortByNearestFirst" },
				{ "SortNone.Name", "EChaosCollisionSortMethod::SortNone" },
				{ "ToolTip", "Enumeration defining how to sort collision results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
				nullptr,
				"EChaosCollisionSortMethod",
				"EChaosCollisionSortMethod",
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
class UScriptStruct* FChaosCollisionEventRequestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosCollisionEventRequestSettings"), sizeof(FChaosCollisionEventRequestSettings), Get_Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosCollisionEventRequestSettings>()
{
	return FChaosCollisionEventRequestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosCollisionEventRequestSettings(FChaosCollisionEventRequestSettings::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("ChaosCollisionEventRequestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosCollisionEventRequestSettings
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosCollisionEventRequestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosCollisionEventRequestSettings")),new UScriptStruct::TCppStructOps<FChaosCollisionEventRequestSettings>);
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosCollisionEventRequestSettings;
	struct Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SortMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SortMethod_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Settings used to define collision event requests\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "Settings used to define collision event requests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosCollisionEventRequestSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the collision events. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The method used to sort the collision events." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosCollisionSortMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum impulse threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The minimum impulse threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse = { "MinImpulse", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MinImpulse), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The min speed threshold for the results (compared with min of particle 1 speed and particle 2 speed). */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The min speed threshold for the results (compared with min of particle 1 speed and particle 2 speed)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass). */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The minimum mass threshold for the results (compared with min of particle 1 mass and particle 2 mass)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults = { "MaxNumberResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventRequestSettings, MaxNumberResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::NewProp_MaxNumberResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosCollisionEventRequestSettings",
		sizeof(FChaosCollisionEventRequestSettings),
		alignof(FChaosCollisionEventRequestSettings),
		Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosCollisionEventRequestSettings"), sizeof(FChaosCollisionEventRequestSettings), Get_Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosCollisionEventRequestSettings_Hash() { return 2406107828U; }
class UScriptStruct* FChaosCollisionEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosCollisionEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosCollisionEventData, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosCollisionEventData"), sizeof(FChaosCollisionEventData), Get_Z_Construct_UScriptStruct_FChaosCollisionEventData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosCollisionEventData>()
{
	return FChaosCollisionEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosCollisionEventData(FChaosCollisionEventData::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("ChaosCollisionEventData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosCollisionEventData
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosCollisionEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosCollisionEventData")),new UScriptStruct::TCppStructOps<FChaosCollisionEventData>);
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosCollisionEventData;
	struct Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Impulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass2_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass1_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A collision event data structure\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "A collision event data structure" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosCollisionEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The accumulated impulse vector of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The accumulated impulse vector of the collision event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventData, Impulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The mass of object 2 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The mass of object 2 of the collision event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2 = { "Mass2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventData, Mass2), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The mass of object 1 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The mass of object 1 of the collision event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1 = { "Mass1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventData, Mass1), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The velocity of object 2 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The velocity of object 2 of the collision event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2 = { "Velocity2", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventData, Velocity2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The velocity of object 1 of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "The velocity of object 1 of the collision event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1 = { "Velocity1", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventData, Velocity1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Normal of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "Normal of the collision event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventData, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Location of the collision event\n" },
		{ "ModuleRelativePath", "Public/ChaosCollisionEventFilter.h" },
		{ "ToolTip", "Location of the collision event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosCollisionEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Impulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Mass1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Velocity1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosCollisionEventData",
		sizeof(FChaosCollisionEventData),
		alignof(FChaosCollisionEventData),
		Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosCollisionEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosCollisionEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosCollisionEventData"), sizeof(FChaosCollisionEventData), Get_Z_Construct_UScriptStruct_FChaosCollisionEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosCollisionEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosCollisionEventData_Hash() { return 3120279969U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
