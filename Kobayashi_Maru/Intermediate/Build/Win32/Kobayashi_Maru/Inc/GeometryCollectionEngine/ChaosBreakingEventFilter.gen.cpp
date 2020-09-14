// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/ChaosBreakingEventFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosBreakingEventFilter() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EChaosBreakingSortMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosBreakingSortMethod"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosBreakingSortMethod>()
	{
		return EChaosBreakingSortMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChaosBreakingSortMethod(EChaosBreakingSortMethod_StaticEnum, TEXT("/Script/GeometryCollectionEngine"), TEXT("EChaosBreakingSortMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Hash() { return 3507453931U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChaosBreakingSortMethod"), 0, Get_Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChaosBreakingSortMethod::SortNone", (int64)EChaosBreakingSortMethod::SortNone },
				{ "EChaosBreakingSortMethod::SortByHighestMass", (int64)EChaosBreakingSortMethod::SortByHighestMass },
				{ "EChaosBreakingSortMethod::SortByHighestSpeed", (int64)EChaosBreakingSortMethod::SortByHighestSpeed },
				{ "EChaosBreakingSortMethod::SortByNearestFirst", (int64)EChaosBreakingSortMethod::SortByNearestFirst },
				{ "EChaosBreakingSortMethod::Count", (int64)EChaosBreakingSortMethod::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enumeration defining how to sort breaking results\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EChaosBreakingSortMethod::Count" },
				{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
				{ "SortByHighestMass.Name", "EChaosBreakingSortMethod::SortByHighestMass" },
				{ "SortByHighestSpeed.Name", "EChaosBreakingSortMethod::SortByHighestSpeed" },
				{ "SortByNearestFirst.Name", "EChaosBreakingSortMethod::SortByNearestFirst" },
				{ "SortNone.Name", "EChaosBreakingSortMethod::SortNone" },
				{ "ToolTip", "Enumeration defining how to sort breaking results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
				nullptr,
				"EChaosBreakingSortMethod",
				"EChaosBreakingSortMethod",
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
class UScriptStruct* FChaosBreakingEventRequestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosBreakingEventRequestSettings"), sizeof(FChaosBreakingEventRequestSettings), Get_Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosBreakingEventRequestSettings>()
{
	return FChaosBreakingEventRequestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosBreakingEventRequestSettings(FChaosBreakingEventRequestSettings::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("ChaosBreakingEventRequestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosBreakingEventRequestSettings
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosBreakingEventRequestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosBreakingEventRequestSettings")),new UScriptStruct::TCppStructOps<FChaosBreakingEventRequestSettings>);
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosBreakingEventRequestSettings;
	struct Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Settings used to refine breaking event requests\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "Settings used to refine breaking event requests" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakingEventRequestSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the breaking events. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The method used to sort the breaking events." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosBreakingSortMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum mass threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum speed threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum speed threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum breaking radius threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The minimum breaking radius threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius = { "MinRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MinRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults = { "MaxNumberOfResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventRequestSettings, MaxNumberOfResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MinRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::NewProp_MaxNumberOfResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosBreakingEventRequestSettings",
		sizeof(FChaosBreakingEventRequestSettings),
		alignof(FChaosBreakingEventRequestSettings),
		Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosBreakingEventRequestSettings"), sizeof(FChaosBreakingEventRequestSettings), Get_Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosBreakingEventRequestSettings_Hash() { return 3750523342U; }
class UScriptStruct* FChaosBreakingEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosBreakingEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosBreakingEventData, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosBreakingEventData"), sizeof(FChaosBreakingEventData), Get_Z_Construct_UScriptStruct_FChaosBreakingEventData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosBreakingEventData>()
{
	return FChaosBreakingEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosBreakingEventData(FChaosBreakingEventData::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("ChaosBreakingEventData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosBreakingEventData
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosBreakingEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosBreakingEventData")),new UScriptStruct::TCppStructOps<FChaosBreakingEventData>);
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosBreakingEventData;
	struct Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A breaking event data structure. \n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "A breaking event data structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosBreakingEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The mass of the breaking event\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The mass of the breaking event" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// The velocity of the breaking event\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "The velocity of the breaking event" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "// Location of the breaking event (centroid)\n" },
		{ "ModuleRelativePath", "Public/ChaosBreakingEventFilter.h" },
		{ "ToolTip", "Location of the breaking event (centroid)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosBreakingEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosBreakingEventData",
		sizeof(FChaosBreakingEventData),
		alignof(FChaosBreakingEventData),
		Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosBreakingEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosBreakingEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosBreakingEventData"), sizeof(FChaosBreakingEventData), Get_Z_Construct_UScriptStruct_FChaosBreakingEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosBreakingEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosBreakingEventData_Hash() { return 1546281501U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
