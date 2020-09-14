// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeManagement/Public/ITimedDataInput.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeITimedDataInput() {}
// Cross Module References
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputState();
	UPackage* Z_Construct_UPackage__Script_TimeManagement();
	TIMEMANAGEMENT_API UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType();
	TIMEMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataInputEvaluationData();
	TIMEMANAGEMENT_API UScriptStruct* Z_Construct_UScriptStruct_FTimedDataChannelSampleTime();
// End Cross Module References
	static UEnum* ETimedDataInputState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TimeManagement_ETimedDataInputState, Z_Construct_UPackage__Script_TimeManagement(), TEXT("ETimedDataInputState"));
		}
		return Singleton;
	}
	template<> TIMEMANAGEMENT_API UEnum* StaticEnum<ETimedDataInputState>()
	{
		return ETimedDataInputState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimedDataInputState(ETimedDataInputState_StaticEnum, TEXT("/Script/TimeManagement"), TEXT("ETimedDataInputState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Hash() { return 732053622U; }
	UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TimeManagement();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimedDataInputState"), 0, Get_Z_Construct_UEnum_TimeManagement_ETimedDataInputState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimedDataInputState::Connected", (int64)ETimedDataInputState::Connected },
				{ "ETimedDataInputState::Unresponsive", (int64)ETimedDataInputState::Unresponsive },
				{ "ETimedDataInputState::Disconnected", (int64)ETimedDataInputState::Disconnected },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Connected.Comment", "/** The input is connected. */" },
				{ "Connected.Name", "ETimedDataInputState::Connected" },
				{ "Connected.ToolTip", "The input is connected." },
				{ "Disconnected.Comment", "/** The input is not connected. */" },
				{ "Disconnected.Name", "ETimedDataInputState::Disconnected" },
				{ "Disconnected.ToolTip", "The input is not connected." },
				{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
				{ "Unresponsive.Comment", "/** The input is connected but no data is available. */" },
				{ "Unresponsive.Name", "ETimedDataInputState::Unresponsive" },
				{ "Unresponsive.ToolTip", "The input is connected but no data is available." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TimeManagement,
				nullptr,
				"ETimedDataInputState",
				"ETimedDataInputState",
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
	static UEnum* ETimedDataInputEvaluationType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType, Z_Construct_UPackage__Script_TimeManagement(), TEXT("ETimedDataInputEvaluationType"));
		}
		return Singleton;
	}
	template<> TIMEMANAGEMENT_API UEnum* StaticEnum<ETimedDataInputEvaluationType>()
	{
		return ETimedDataInputEvaluationType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimedDataInputEvaluationType(ETimedDataInputEvaluationType_StaticEnum, TEXT("/Script/TimeManagement"), TEXT("ETimedDataInputEvaluationType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Hash() { return 3350809330U; }
	UEnum* Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TimeManagement();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimedDataInputEvaluationType"), 0, Get_Z_Construct_UEnum_TimeManagement_ETimedDataInputEvaluationType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimedDataInputEvaluationType::None", (int64)ETimedDataInputEvaluationType::None },
				{ "ETimedDataInputEvaluationType::Timecode", (int64)ETimedDataInputEvaluationType::Timecode },
				{ "ETimedDataInputEvaluationType::PlatformTime", (int64)ETimedDataInputEvaluationType::PlatformTime },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
				{ "None.Comment", "/** There is no special evaluation type for that input. */" },
				{ "None.Name", "ETimedDataInputEvaluationType::None" },
				{ "None.ToolTip", "There is no special evaluation type for that input." },
				{ "PlatformTime.Comment", "/** The input is evaluated from the engine's time. Note that the engine's time is relative to FPlatformTime::Seconds. */" },
				{ "PlatformTime.Name", "ETimedDataInputEvaluationType::PlatformTime" },
				{ "PlatformTime.ToolTip", "The input is evaluated from the engine's time. Note that the engine's time is relative to FPlatformTime::Seconds." },
				{ "Timecode.Comment", "/** The input is evaluated from the engine's timecode. */" },
				{ "Timecode.Name", "ETimedDataInputEvaluationType::Timecode" },
				{ "Timecode.ToolTip", "The input is evaluated from the engine's timecode." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TimeManagement,
				nullptr,
				"ETimedDataInputEvaluationType",
				"ETimedDataInputEvaluationType",
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
class UScriptStruct* FTimedDataInputEvaluationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TIMEMANAGEMENT_API uint32 Get_Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData, Z_Construct_UPackage__Script_TimeManagement(), TEXT("TimedDataInputEvaluationData"), sizeof(FTimedDataInputEvaluationData), Get_Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Hash());
	}
	return Singleton;
}
template<> TIMEMANAGEMENT_API UScriptStruct* StaticStruct<FTimedDataInputEvaluationData>()
{
	return FTimedDataInputEvaluationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimedDataInputEvaluationData(FTimedDataInputEvaluationData::StaticStruct, TEXT("/Script/TimeManagement"), TEXT("TimedDataInputEvaluationData"), false, nullptr, nullptr);
static struct FScriptStruct_TimeManagement_StaticRegisterNativesFTimedDataInputEvaluationData
{
	FScriptStruct_TimeManagement_StaticRegisterNativesFTimedDataInputEvaluationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimedDataInputEvaluationData")),new UScriptStruct::TCppStructOps<FTimedDataInputEvaluationData>);
	}
} ScriptStruct_TimeManagement_StaticRegisterNativesFTimedDataInputEvaluationData;
	struct Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToOldestSampleSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToOldestSampleSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceToNewestSampleSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceToNewestSampleSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataInputEvaluationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Distance between evaluation time and newest sample in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
		{ "ToolTip", "Distance between evaluation time and newest sample in seconds" },
		{ "Units", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds = { "DistanceToOldestSampleSeconds", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimedDataInputEvaluationData, DistanceToOldestSampleSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds_MetaData[] = {
		{ "Category", "Evaluation" },
		{ "Comment", "/**\n\x09 * Distance between evaluation time and newest sample in seconds\n\x09 */" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
		{ "ToolTip", "Distance between evaluation time and newest sample in seconds" },
		{ "Units", "s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds = { "DistanceToNewestSampleSeconds", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTimedDataInputEvaluationData, DistanceToNewestSampleSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToOldestSampleSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::NewProp_DistanceToNewestSampleSeconds,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
		nullptr,
		&NewStructOps,
		"TimedDataInputEvaluationData",
		sizeof(FTimedDataInputEvaluationData),
		alignof(FTimedDataInputEvaluationData),
		Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataInputEvaluationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TimeManagement();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimedDataInputEvaluationData"), sizeof(FTimedDataInputEvaluationData), Get_Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimedDataInputEvaluationData_Hash() { return 3167437866U; }
class UScriptStruct* FTimedDataChannelSampleTime::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TIMEMANAGEMENT_API uint32 Get_Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimedDataChannelSampleTime, Z_Construct_UPackage__Script_TimeManagement(), TEXT("TimedDataChannelSampleTime"), sizeof(FTimedDataChannelSampleTime), Get_Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Hash());
	}
	return Singleton;
}
template<> TIMEMANAGEMENT_API UScriptStruct* StaticStruct<FTimedDataChannelSampleTime>()
{
	return FTimedDataChannelSampleTime::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTimedDataChannelSampleTime(FTimedDataChannelSampleTime::StaticStruct, TEXT("/Script/TimeManagement"), TEXT("TimedDataChannelSampleTime"), false, nullptr, nullptr);
static struct FScriptStruct_TimeManagement_StaticRegisterNativesFTimedDataChannelSampleTime
{
	FScriptStruct_TimeManagement_StaticRegisterNativesFTimedDataChannelSampleTime()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TimedDataChannelSampleTime")),new UScriptStruct::TCppStructOps<FTimedDataChannelSampleTime>);
	}
} ScriptStruct_TimeManagement_StaticRegisterNativesFTimedDataChannelSampleTime;
	struct Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ITimedDataInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimedDataChannelSampleTime>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TimeManagement,
		nullptr,
		&NewStructOps,
		"TimedDataChannelSampleTime",
		sizeof(FTimedDataChannelSampleTime),
		alignof(FTimedDataChannelSampleTime),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimedDataChannelSampleTime()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TimeManagement();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TimedDataChannelSampleTime"), sizeof(FTimedDataChannelSampleTime), Get_Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTimedDataChannelSampleTime_Hash() { return 2333956478U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
