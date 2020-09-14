// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollectionEngine/Public/ChaosTrailingEventFilter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosTrailingEventFilter() {}
// Cross Module References
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* EChaosTrailingSortMethod_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EChaosTrailingSortMethod"));
		}
		return Singleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EChaosTrailingSortMethod>()
	{
		return EChaosTrailingSortMethod_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChaosTrailingSortMethod(EChaosTrailingSortMethod_StaticEnum, TEXT("/Script/GeometryCollectionEngine"), TEXT("EChaosTrailingSortMethod"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Hash() { return 1647111726U; }
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChaosTrailingSortMethod"), 0, Get_Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChaosTrailingSortMethod::SortNone", (int64)EChaosTrailingSortMethod::SortNone },
				{ "EChaosTrailingSortMethod::SortByHighestMass", (int64)EChaosTrailingSortMethod::SortByHighestMass },
				{ "EChaosTrailingSortMethod::SortByHighestSpeed", (int64)EChaosTrailingSortMethod::SortByHighestSpeed },
				{ "EChaosTrailingSortMethod::SortByNearestFirst", (int64)EChaosTrailingSortMethod::SortByNearestFirst },
				{ "EChaosTrailingSortMethod::Count", (int64)EChaosTrailingSortMethod::Count },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// Enumeration defining how to sort trailing results\n" },
				{ "Count.Hidden", "" },
				{ "Count.Name", "EChaosTrailingSortMethod::Count" },
				{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
				{ "SortByHighestMass.Name", "EChaosTrailingSortMethod::SortByHighestMass" },
				{ "SortByHighestSpeed.Name", "EChaosTrailingSortMethod::SortByHighestSpeed" },
				{ "SortByNearestFirst.Name", "EChaosTrailingSortMethod::SortByNearestFirst" },
				{ "SortNone.Name", "EChaosTrailingSortMethod::SortNone" },
				{ "ToolTip", "Enumeration defining how to sort trailing results" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
				nullptr,
				"EChaosTrailingSortMethod",
				"EChaosTrailingSortMethod",
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
class UScriptStruct* FChaosTrailingEventRequestSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosTrailingEventRequestSettings"), sizeof(FChaosTrailingEventRequestSettings), Get_Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosTrailingEventRequestSettings>()
{
	return FChaosTrailingEventRequestSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosTrailingEventRequestSettings(FChaosTrailingEventRequestSettings::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("ChaosTrailingEventRequestSettings"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosTrailingEventRequestSettings
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosTrailingEventRequestSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosTrailingEventRequestSettings")),new UScriptStruct::TCppStructOps<FChaosTrailingEventRequestSettings>);
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosTrailingEventRequestSettings;
	struct Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAngularSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAngularSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxNumberOfResults_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxNumberOfResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosTrailingEventRequestSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_MetaData[] = {
		{ "Category", "Sort" },
		{ "Comment", "/** The method used to sort the breaking events. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The method used to sort the breaking events." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod = { "SortMethod", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, SortMethod), Z_Construct_UEnum_GeometryCollectionEngine_EChaosTrailingSortMethod, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum distance threshold for the results (if location is set on destruction event listener). */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The maximum distance threshold for the results (if location is set on destruction event listener)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance = { "MaxDistance", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MaxDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum angular speed threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The minimum angular speed threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed = { "MinAngularSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MinAngularSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum speed threshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The minimum speed threshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MinSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The minimum mass treshold for the results. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The minimum mass treshold for the results." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass = { "MinMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MinMass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The maximum number of results to return. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The maximum number of results to return." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults = { "MaxNumberOfResults", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventRequestSettings, MaxNumberOfResults), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_SortMethod_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinAngularSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MinMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::NewProp_MaxNumberOfResults,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosTrailingEventRequestSettings",
		sizeof(FChaosTrailingEventRequestSettings),
		alignof(FChaosTrailingEventRequestSettings),
		Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosTrailingEventRequestSettings"), sizeof(FChaosTrailingEventRequestSettings), Get_Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosTrailingEventRequestSettings_Hash() { return 2599190134U; }
class UScriptStruct* FChaosTrailingEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GEOMETRYCOLLECTIONENGINE_API uint32 Get_Z_Construct_UScriptStruct_FChaosTrailingEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosTrailingEventData, Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("ChaosTrailingEventData"), sizeof(FChaosTrailingEventData), Get_Z_Construct_UScriptStruct_FChaosTrailingEventData_Hash());
	}
	return Singleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FChaosTrailingEventData>()
{
	return FChaosTrailingEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChaosTrailingEventData(FChaosTrailingEventData::StaticStruct, TEXT("/Script/GeometryCollectionEngine"), TEXT("ChaosTrailingEventData"), false, nullptr, nullptr);
static struct FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosTrailingEventData
{
	FScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosTrailingEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChaosTrailingEventData")),new UScriptStruct::TCppStructOps<FChaosTrailingEventData>);
	}
} ScriptStruct_GeometryCollectionEngine_StaticRegisterNativesFChaosTrailingEventData;
	struct Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ParticleIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AngularVelocity;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// A trailing event data structure. \n" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "A trailing event data structure." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosTrailingEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The particle index of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The particle index of the trail." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex = { "ParticleIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventData, ParticleIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The mass of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The mass of the trail." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventData, Mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The angular velocity of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The angular velocity of the trail." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventData, AngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** The velocity of the trail. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "The velocity of the trail." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventData, Velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Filters" },
		{ "Comment", "/** Current trail location. */" },
		{ "ModuleRelativePath", "Public/ChaosTrailingEventFilter.h" },
		{ "ToolTip", "Current trail location." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChaosTrailingEventData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_ParticleIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_AngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::NewProp_Location,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"ChaosTrailingEventData",
		sizeof(FChaosTrailingEventData),
		alignof(FChaosTrailingEventData),
		Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChaosTrailingEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChaosTrailingEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GeometryCollectionEngine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChaosTrailingEventData"), sizeof(FChaosTrailingEventData), Get_Z_Construct_UScriptStruct_FChaosTrailingEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChaosTrailingEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChaosTrailingEventData_Hash() { return 1305910967U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
