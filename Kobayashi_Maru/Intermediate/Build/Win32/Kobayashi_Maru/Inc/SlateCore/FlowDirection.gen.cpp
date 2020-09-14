// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SlateCore/Public/Layout/FlowDirection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlowDirection() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EFlowDirectionPreference();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static UEnum* EFlowDirectionPreference_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EFlowDirectionPreference, Z_Construct_UPackage__Script_SlateCore(), TEXT("EFlowDirectionPreference"));
		}
		return Singleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EFlowDirectionPreference>()
	{
		return EFlowDirectionPreference_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFlowDirectionPreference(EFlowDirectionPreference_StaticEnum, TEXT("/Script/SlateCore"), TEXT("EFlowDirectionPreference"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Hash() { return 1336462791U; }
	UEnum* Z_Construct_UEnum_SlateCore_EFlowDirectionPreference()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SlateCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFlowDirectionPreference"), 0, Get_Z_Construct_UEnum_SlateCore_EFlowDirectionPreference_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EFlowDirectionPreference::Inherit", (int64)EFlowDirectionPreference::Inherit },
				{ "EFlowDirectionPreference::Culture", (int64)EFlowDirectionPreference::Culture },
				{ "EFlowDirectionPreference::LeftToRight", (int64)EFlowDirectionPreference::LeftToRight },
				{ "EFlowDirectionPreference::RightToLeft", (int64)EFlowDirectionPreference::RightToLeft },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/**\n * \n */" },
				{ "Culture.Comment", "/** Begins laying out widgets using the current cultures layout direction preference, flipping the directionality of flows. */" },
				{ "Culture.Name", "EFlowDirectionPreference::Culture" },
				{ "Culture.ToolTip", "Begins laying out widgets using the current cultures layout direction preference, flipping the directionality of flows." },
				{ "Inherit.Comment", "/** Inherits the flow direction set by the parent widget. */" },
				{ "Inherit.Name", "EFlowDirectionPreference::Inherit" },
				{ "Inherit.ToolTip", "Inherits the flow direction set by the parent widget." },
				{ "LeftToRight.Comment", "/** Forces a Left to Right layout flow. */" },
				{ "LeftToRight.Name", "EFlowDirectionPreference::LeftToRight" },
				{ "LeftToRight.ToolTip", "Forces a Left to Right layout flow." },
				{ "ModuleRelativePath", "Public/Layout/FlowDirection.h" },
				{ "RightToLeft.Comment", "/** Forces a Right to Left layout flow. */" },
				{ "RightToLeft.Name", "EFlowDirectionPreference::RightToLeft" },
				{ "RightToLeft.ToolTip", "Forces a Right to Left layout flow." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
				nullptr,
				"EFlowDirectionPreference",
				"EFlowDirectionPreference",
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
