// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Source/Public/Interfaces/OnlineTurnBasedInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineTurnBasedInterface() {}
// Cross Module References
	ONLINESUBSYSTEM_API UEnum* Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
// End Cross Module References
	static UEnum* EMPMatchOutcome_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome, Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("EMPMatchOutcome"));
		}
		return Singleton;
	}
	template<> ONLINESUBSYSTEM_API UEnum* StaticEnum<EMPMatchOutcome::Outcome>()
	{
		return EMPMatchOutcome_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMPMatchOutcome(EMPMatchOutcome_StaticEnum, TEXT("/Script/OnlineSubsystem"), TEXT("EMPMatchOutcome"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Hash() { return 687547621U; }
	UEnum* Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_OnlineSubsystem();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMPMatchOutcome"), 0, Get_Z_Construct_UEnum_OnlineSubsystem_EMPMatchOutcome_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMPMatchOutcome::None", (int64)EMPMatchOutcome::None },
				{ "EMPMatchOutcome::Quit", (int64)EMPMatchOutcome::Quit },
				{ "EMPMatchOutcome::Won", (int64)EMPMatchOutcome::Won },
				{ "EMPMatchOutcome::Lost", (int64)EMPMatchOutcome::Lost },
				{ "EMPMatchOutcome::Tied", (int64)EMPMatchOutcome::Tied },
				{ "EMPMatchOutcome::TimeExpired", (int64)EMPMatchOutcome::TimeExpired },
				{ "EMPMatchOutcome::First", (int64)EMPMatchOutcome::First },
				{ "EMPMatchOutcome::Second", (int64)EMPMatchOutcome::Second },
				{ "EMPMatchOutcome::Third", (int64)EMPMatchOutcome::Third },
				{ "EMPMatchOutcome::Fourth", (int64)EMPMatchOutcome::Fourth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/**\n* EMPMatchOutcome represents all the possible outcomes for this player in a match\n*/" },
				{ "First.Name", "EMPMatchOutcome::First" },
				{ "Fourth.Name", "EMPMatchOutcome::Fourth" },
				{ "Lost.Name", "EMPMatchOutcome::Lost" },
				{ "ModuleRelativePath", "Public/Interfaces/OnlineTurnBasedInterface.h" },
				{ "None.Name", "EMPMatchOutcome::None" },
				{ "Quit.Name", "EMPMatchOutcome::Quit" },
				{ "Second.Name", "EMPMatchOutcome::Second" },
				{ "Third.Name", "EMPMatchOutcome::Third" },
				{ "Tied.Name", "EMPMatchOutcome::Tied" },
				{ "TimeExpired.Name", "EMPMatchOutcome::TimeExpired" },
				{ "ToolTip", "EMPMatchOutcome represents all the possible outcomes for this player in a match" },
				{ "Won.Name", "EMPMatchOutcome::Won" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystem,
				nullptr,
				"EMPMatchOutcome",
				"EMPMatchOutcome::Outcome",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Namespaced,
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
