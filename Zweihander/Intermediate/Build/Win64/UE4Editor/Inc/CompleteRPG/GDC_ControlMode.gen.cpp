// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/Public/GDC_ControlMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGDC_ControlMode() {}
// Cross Module References
	COMPLETERPG_API UEnum* Z_Construct_UEnum_CompleteRPG_EGDCControlMode();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
// End Cross Module References
	static UEnum* EGDCControlMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CompleteRPG_EGDCControlMode, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("EGDCControlMode"));
		}
		return Singleton;
	}
	template<> COMPLETERPG_API UEnum* StaticEnum<EGDCControlMode::Type>()
	{
		return EGDCControlMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EGDCControlMode(EGDCControlMode_StaticEnum, TEXT("/Script/CompleteRPG"), TEXT("EGDCControlMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CompleteRPG_EGDCControlMode_Hash() { return 2326005769U; }
	UEnum* Z_Construct_UEnum_CompleteRPG_EGDCControlMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EGDCControlMode"), 0, Get_Z_Construct_UEnum_CompleteRPG_EGDCControlMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EGDCControlMode::Walk", (int64)EGDCControlMode::Walk },
				{ "EGDCControlMode::HoverDrone", (int64)EGDCControlMode::HoverDrone },
				{ "EGDCControlMode::MAX", (int64)EGDCControlMode::MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HoverDrone.Name", "EGDCControlMode::HoverDrone" },
				{ "MAX.Name", "EGDCControlMode::MAX" },
				{ "ModuleRelativePath", "Public/GDC_ControlMode.h" },
				{ "Walk.Name", "EGDCControlMode::Walk" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CompleteRPG,
				nullptr,
				"EGDCControlMode",
				"EGDCControlMode::Type",
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
