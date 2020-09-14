// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraGPUSortInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraGPUSortInfo() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static UEnum* ENiagaraSortMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraSortMode, Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraSortMode"));
		}
		return Singleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraSortMode>()
	{
		return ENiagaraSortMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ENiagaraSortMode(ENiagaraSortMode_StaticEnum, TEXT("/Script/Niagara"), TEXT("ENiagaraSortMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Niagara_ENiagaraSortMode_Hash() { return 3533146017U; }
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraSortMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ENiagaraSortMode"), 0, Get_Z_Construct_UEnum_Niagara_ENiagaraSortMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ENiagaraSortMode::None", (int64)ENiagaraSortMode::None },
				{ "ENiagaraSortMode::ViewDepth", (int64)ENiagaraSortMode::ViewDepth },
				{ "ENiagaraSortMode::ViewDistance", (int64)ENiagaraSortMode::ViewDistance },
				{ "ENiagaraSortMode::CustomAscending", (int64)ENiagaraSortMode::CustomAscending },
				{ "ENiagaraSortMode::CustomDecending", (int64)ENiagaraSortMode::CustomDecending },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CustomAscending.Comment", "/** Custom sorting according to a per particle attribute. Which attribute is defined by the renderer's CustomSortingBinding which defaults to Particles.NormalizedAge. Lower values are rendered before higher values. */" },
				{ "CustomAscending.Name", "ENiagaraSortMode::CustomAscending" },
				{ "CustomAscending.ToolTip", "Custom sorting according to a per particle attribute. Which attribute is defined by the renderer's CustomSortingBinding which defaults to Particles.NormalizedAge. Lower values are rendered before higher values." },
				{ "CustomDecending.Comment", "/** Custom sorting according to a per particle attribute. Which attribute is defined by the renderer's CustomSortingBinding which defaults to Particles.NormalizedAge. Higher values are rendered before lower values. */" },
				{ "CustomDecending.Name", "ENiagaraSortMode::CustomDecending" },
				{ "CustomDecending.ToolTip", "Custom sorting according to a per particle attribute. Which attribute is defined by the renderer's CustomSortingBinding which defaults to Particles.NormalizedAge. Higher values are rendered before lower values." },
				{ "ModuleRelativePath", "Classes/NiagaraGPUSortInfo.h" },
				{ "None.Comment", "/** Perform no additional sorting prior to rendering.*/" },
				{ "None.Name", "ENiagaraSortMode::None" },
				{ "None.ToolTip", "Perform no additional sorting prior to rendering." },
				{ "ViewDepth.Comment", "/** Sort by depth to the camera's near plane.*/" },
				{ "ViewDepth.Name", "ENiagaraSortMode::ViewDepth" },
				{ "ViewDepth.ToolTip", "Sort by depth to the camera's near plane." },
				{ "ViewDistance.Comment", "/** Sort by distance to the camera's origin.*/" },
				{ "ViewDistance.Name", "ENiagaraSortMode::ViewDistance" },
				{ "ViewDistance.ToolTip", "Sort by distance to the camera's origin." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
				nullptr,
				"ENiagaraSortMode",
				"ENiagaraSortMode",
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
