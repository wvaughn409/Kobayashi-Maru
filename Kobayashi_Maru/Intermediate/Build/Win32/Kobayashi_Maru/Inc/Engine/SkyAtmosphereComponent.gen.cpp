// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/SkyAtmosphereComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyAtmosphereComponent() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTentDistribution();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_ASkyAtmosphere_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkyAtmosphere();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
// End Cross Module References
	static UEnum* ESkyAtmosphereTransformMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode, Z_Construct_UPackage__Script_Engine(), TEXT("ESkyAtmosphereTransformMode"));
		}
		return Singleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<ESkyAtmosphereTransformMode>()
	{
		return ESkyAtmosphereTransformMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESkyAtmosphereTransformMode(ESkyAtmosphereTransformMode_StaticEnum, TEXT("/Script/Engine"), TEXT("ESkyAtmosphereTransformMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Hash() { return 204382114U; }
	UEnum* Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESkyAtmosphereTransformMode"), 0, Get_Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin", (int64)ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin },
				{ "ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform", (int64)ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform },
				{ "ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform", (int64)ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
				{ "PlanetCenterAtComponentTransform.Name", "ESkyAtmosphereTransformMode::PlanetCenterAtComponentTransform" },
				{ "PlanetTopAtAbsoluteWorldOrigin.Name", "ESkyAtmosphereTransformMode::PlanetTopAtAbsoluteWorldOrigin" },
				{ "PlanetTopAtComponentTransform.Name", "ESkyAtmosphereTransformMode::PlanetTopAtComponentTransform" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Engine,
				nullptr,
				"ESkyAtmosphereTransformMode",
				"ESkyAtmosphereTransformMode",
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
class UScriptStruct* FTentDistribution::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FTentDistribution_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTentDistribution, Z_Construct_UPackage__Script_Engine(), TEXT("TentDistribution"), sizeof(FTentDistribution), Get_Z_Construct_UScriptStruct_FTentDistribution_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTentDistribution>()
{
	return FTentDistribution::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTentDistribution(FTentDistribution::StaticStruct, TEXT("/Script/Engine"), TEXT("TentDistribution"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFTentDistribution
{
	FScriptStruct_Engine_StaticRegisterNativesFTentDistribution()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TentDistribution")),new UScriptStruct::TCppStructOps<FTentDistribution>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFTentDistribution;
	struct Z_Construct_UScriptStruct_FTentDistribution_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TipValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TipAltitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TipAltitude;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTentDistribution_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTentDistribution>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width_MetaData[] = {
		{ "Category", "Tent" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTentDistribution, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue_MetaData[] = {
		{ "Category", "Tent" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue = { "TipValue", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTentDistribution, TipValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude_MetaData[] = {
		{ "Category", "Tent" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "UIMax", "60.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude = { "TipAltitude", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTentDistribution, TipAltitude), METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTentDistribution_Statics::NewProp_TipAltitude,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTentDistribution_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"TentDistribution",
		sizeof(FTentDistribution),
		alignof(FTentDistribution),
		Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTentDistribution_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTentDistribution()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTentDistribution_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TentDistribution"), sizeof(FTentDistribution), Get_Z_Construct_UScriptStruct_FTentDistribution_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTentDistribution_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTentDistribution_Hash() { return 839060085U; }
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetHeightFogContribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightFogContribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetAerialPespectiveViewDistanceScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAerialPespectiveViewDistanceScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetSkyLuminanceFactor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkyLuminanceFactor(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetOtherAbsorption)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOtherAbsorption(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetOtherAbsorptionScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOtherAbsorptionScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieExponentialDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieExponentialDistribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAnisotropy)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieAnisotropy(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAbsorption)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieAbsorption(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieAbsorptionScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieAbsorptionScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieScattering)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieScattering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetMieScatteringScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMieScatteringScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighExponentialDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayleighExponentialDistribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighScattering)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayleighScattering(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execSetRayleighScatteringScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRayleighScatteringScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USkyAtmosphereComponent::execOverrideAtmosphereLightDirection)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AtmosphereLightIndex);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LightDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OverrideAtmosphereLightDirection(Z_Param_AtmosphereLightIndex,Z_Param_Out_LightDirection);
		P_NATIVE_END;
	}
	void USkyAtmosphereComponent::StaticRegisterNativesUSkyAtmosphereComponent()
	{
		UClass* Class = USkyAtmosphereComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OverrideAtmosphereLightDirection", &USkyAtmosphereComponent::execOverrideAtmosphereLightDirection },
			{ "SetAerialPespectiveViewDistanceScale", &USkyAtmosphereComponent::execSetAerialPespectiveViewDistanceScale },
			{ "SetHeightFogContribution", &USkyAtmosphereComponent::execSetHeightFogContribution },
			{ "SetMieAbsorption", &USkyAtmosphereComponent::execSetMieAbsorption },
			{ "SetMieAbsorptionScale", &USkyAtmosphereComponent::execSetMieAbsorptionScale },
			{ "SetMieAnisotropy", &USkyAtmosphereComponent::execSetMieAnisotropy },
			{ "SetMieExponentialDistribution", &USkyAtmosphereComponent::execSetMieExponentialDistribution },
			{ "SetMieScattering", &USkyAtmosphereComponent::execSetMieScattering },
			{ "SetMieScatteringScale", &USkyAtmosphereComponent::execSetMieScatteringScale },
			{ "SetOtherAbsorption", &USkyAtmosphereComponent::execSetOtherAbsorption },
			{ "SetOtherAbsorptionScale", &USkyAtmosphereComponent::execSetOtherAbsorptionScale },
			{ "SetRayleighExponentialDistribution", &USkyAtmosphereComponent::execSetRayleighExponentialDistribution },
			{ "SetRayleighScattering", &USkyAtmosphereComponent::execSetRayleighScattering },
			{ "SetRayleighScatteringScale", &USkyAtmosphereComponent::execSetRayleighScatteringScale },
			{ "SetSkyLuminanceFactor", &USkyAtmosphereComponent::execSetSkyLuminanceFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics
	{
		struct SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms
		{
			int32 AtmosphereLightIndex;
			FVector LightDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LightDirection;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtmosphereLightIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection = { "LightDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms, LightDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex = { "AtmosphereLightIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms, AtmosphereLightIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_LightDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::NewProp_AtmosphereLightIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "OverrideAtmosphereLightDirection", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventOverrideAtmosphereLightDirection_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetAerialPespectiveViewDistanceScale", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetAerialPespectiveViewDistanceScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics
	{
		struct SkyAtmosphereComponent_eventSetHeightFogContribution_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetHeightFogContribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetHeightFogContribution", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetHeightFogContribution_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieAbsorption_Parms
		{
			FLinearColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAbsorption_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAbsorption", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetMieAbsorption_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAbsorptionScale", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetMieAbsorptionScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieAnisotropy_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieAnisotropy_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieAnisotropy", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetMieAnisotropy_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieExponentialDistribution", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetMieExponentialDistribution_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieScattering_Parms
		{
			FLinearColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieScattering_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieScattering", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetMieScattering_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetMieScatteringScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetMieScatteringScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetMieScatteringScale", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetMieScatteringScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics
	{
		struct SkyAtmosphereComponent_eventSetOtherAbsorption_Parms
		{
			FLinearColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetOtherAbsorption_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Absorption" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetOtherAbsorption", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetOtherAbsorption_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Absorption Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetOtherAbsorptionScale", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetOtherAbsorptionScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics
	{
		struct SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighExponentialDistribution", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetRayleighExponentialDistribution_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics
	{
		struct SkyAtmosphereComponent_eventSetRayleighScattering_Parms
		{
			FLinearColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighScattering_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighScattering", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetRayleighScattering_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics
	{
		struct SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms
		{
			float NewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetRayleighScatteringScale", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetRayleighScatteringScale_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics
	{
		struct SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms
		{
			FLinearColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USkyAtmosphereComponent, nullptr, "SetSkyLuminanceFactor", nullptr, nullptr, sizeof(SkyAtmosphereComponent_eventSetSkyLuminanceFactor_Parms), Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USkyAtmosphereComponent_NoRegister()
	{
		return USkyAtmosphereComponent::StaticClass();
	}
	struct Z_Construct_UClass_USkyAtmosphereComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStaticLightingBuiltGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bStaticLightingBuiltGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmittanceMinLightElevationAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TransmittanceMinLightElevationAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightFogContribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightFogContribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AerialPespectiveViewDistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AerialPespectiveViewDistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyLuminanceFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SkyLuminanceFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherTentDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherTentDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherAbsorption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OtherAbsorption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherAbsorptionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OtherAbsorptionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MieExponentialDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MieExponentialDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MieAnisotropy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MieAnisotropy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MieAbsorption_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MieAbsorption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MieAbsorptionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MieAbsorptionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MieScattering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MieScattering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MieScatteringScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MieScatteringScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayleighExponentialDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayleighExponentialDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayleighScattering_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RayleighScattering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RayleighScatteringScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RayleighScatteringScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MultiScatteringFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MultiScatteringFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtmosphereHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AtmosphereHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundAlbedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroundAlbedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BottomRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransformMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransformMode_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkyAtmosphereComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USkyAtmosphereComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_OverrideAtmosphereLightDirection, "OverrideAtmosphereLightDirection" }, // 469766296
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetAerialPespectiveViewDistanceScale, "SetAerialPespectiveViewDistanceScale" }, // 2623582203
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetHeightFogContribution, "SetHeightFogContribution" }, // 1793482755
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorption, "SetMieAbsorption" }, // 2520367132
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAbsorptionScale, "SetMieAbsorptionScale" }, // 2261761508
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieAnisotropy, "SetMieAnisotropy" }, // 1298790288
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieExponentialDistribution, "SetMieExponentialDistribution" }, // 1667106707
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScattering, "SetMieScattering" }, // 347572028
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetMieScatteringScale, "SetMieScatteringScale" }, // 1943315730
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorption, "SetOtherAbsorption" }, // 1135741933
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetOtherAbsorptionScale, "SetOtherAbsorptionScale" }, // 2263897415
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighExponentialDistribution, "SetRayleighExponentialDistribution" }, // 852082304
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScattering, "SetRayleighScattering" }, // 2292980494
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetRayleighScatteringScale, "SetRayleighScatteringScale" }, // 3281614266
		{ &Z_Construct_UFunction_USkyAtmosphereComponent_SetSkyLuminanceFactor, "SetSkyLuminanceFactor" }, // 2285990459
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SkyAtmosphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID_MetaData[] = {
		{ "Comment", "/**\n\x09 * GUID used to associate a atmospheric component with precomputed lighting/shadowing information across levels.\n\x09 * The GUID changes whenever the atmospheric properties change, e.g. LUTs.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "GUID used to associate a atmospheric component with precomputed lighting/shadowing information across levels.\nThe GUID changes whenever the atmospheric properties change, e.g. LUTs." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID = { "bStaticLightingBuiltGUID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, bStaticLightingBuiltGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle_MetaData[] = {
		{ "Category", "Art direction" },
		{ "ClampMax", "90.000000" },
		{ "ClampMin", "-90.000000" },
		{ "Comment", "/** The minimum elevation angle in degree that should be used to evaluate the sun transmittance to the ground. Useful to maintain a visible sun light and shadow on meshes even when the sun has started going below the horizon. This does not affect the aerial perspective.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The minimum elevation angle in degree that should be used to evaluate the sun transmittance to the ground. Useful to maintain a visible sun light and shadow on meshes even when the sun has started going below the horizon. This does not affect the aerial perspective." },
		{ "UIMax", "90.000000" },
		{ "UIMin", "-90.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle = { "TransmittanceMinLightElevationAngle", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, TransmittanceMinLightElevationAngle), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution_MetaData[] = {
		{ "Category", "Art direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Scale the sky and atmosphere lights contribution to the height fog when SupportSkyAtmosphereAffectsHeightFog project setting is true.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Scale the sky and atmosphere lights contribution to the height fog when SupportSkyAtmosphereAffectsHeightFog project setting is true." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution = { "HeightFogContribution", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, HeightFogContribution), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData[] = {
		{ "Category", "Art direction" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Makes the aerial perspective look thicker by scaling distances from view to surfaces (opaque and translucent). */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Makes the aerial perspective look thicker by scaling distances from view to surfaces (opaque and translucent)." },
		{ "UIMax", "3.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale = { "AerialPespectiveViewDistanceScale", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, AerialPespectiveViewDistanceScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor_MetaData[] = {
		{ "Category", "Art direction" },
		{ "Comment", "/** Scales the luminance of pixels representing the sky, i.e. not belonging to any surface. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Scales the luminance of pixels representing the sky, i.e. not belonging to any surface." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor = { "SkyLuminanceFactor", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, SkyLuminanceFactor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "Comment", "/** Represents the altitude based tent distribution of absorption particles in the atmosphere. */" },
		{ "DisplayName", "Tent Distribution" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Represents the altitude based tent distribution of absorption particles in the atmosphere." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution = { "OtherTentDistribution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, OtherTentDistribution), Z_Construct_UScriptStruct_FTentDistribution, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "Comment", "/** Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. The default values represents ozone molecules absorption in the Earth atmosphere. */" },
		{ "DisplayName", "Absorption" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. The default values represents ozone molecules absorption in the Earth atmosphere." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption = { "OtherAbsorption", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, OtherAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere - Absorption" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. This approximates ozone molecules distribution in the Earth atmosphere. */" },
		{ "DisplayName", "Absorption Scale" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "3.000000" },
		{ "ToolTip", "Absorption coefficients for another atmosphere layer. Density increase from 0 to 1 between 10 to 25km and decreases from 1 to 0 between 25 to 40km. This approximates ozone molecules distribution in the Earth atmosphere." },
		{ "UIMax", "0.200000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale = { "OtherAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, OtherAbsorptionScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The altitude in kilometer at which Mie effects are reduced to 40%.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Mie effects are reduced to 40%." },
		{ "UIMax", "10.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution = { "MieExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieExponentialDistribution), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMax", "0.999000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** A value of 0 mean light is uniformly scattered. A value closer to 1 means lights will scatter more forward, resulting in halos around light sources. */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "A value of 0 mean light is uniformly scattered. A value closer to 1 means lights will scatter more forward, resulting in halos around light sources." },
		{ "UIMax", "0.999000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy = { "MieAnisotropy", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieAnisotropy), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "Comment", "/** The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be absorbed more. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Mie absorption coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be absorbed more." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption = { "MieAbsorption", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieAbsorption), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Mie absorption coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie absorption coefficient scale." },
		{ "UIMax", "5.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale = { "MieAbsorptionScale", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieAbsorptionScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "Comment", "/** The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be scattered more. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Mie scattering coefficients resulting from particles in the air at an altitude of 0 kilometer. As it becomes higher, light will be scattered more." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering = { "MieScattering", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere - Mie" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Mie scattering coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Mie scattering coefficient scale." },
		{ "UIMax", "5.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale = { "MieScatteringScale", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MieScatteringScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/** The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "5.000000" },
		{ "ToolTip", "The altitude in kilometer at which Rayleigh scattering effect is reduced to 40%." },
		{ "UIMax", "20.000000" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution = { "RayleighExponentialDistribution", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighExponentialDistribution), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "Comment", "/** The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The Rayleigh scattering coefficients resulting from molecules in the air at an altitude of 0 kilometer." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering = { "RayleighScattering", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighScattering), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale_MetaData[] = {
		{ "Category", "Atmosphere - Rayleigh" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Rayleigh scattering coefficient scale.*/" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "SliderExponent", "4.000000" },
		{ "ToolTip", "Rayleigh scattering coefficient scale." },
		{ "UIMax", "2.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale = { "RayleighScatteringScale", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, RayleighScatteringScale), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMax", "2.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Render multi scattering as if sun light would bounce around in the atmosphere. This is achieved using a dual scattering approach. */" },
		{ "DisplayName", "MultiScattering" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Render multi scattering as if sun light would bounce around in the atmosphere. This is achieved using a dual scattering approach." },
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor = { "MultiScatteringFactor", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, MultiScatteringFactor), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ClampMin", "10.000000" },
		{ "Comment", "/** The planet radius. (kilometers from the center to the ground level). */" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The planet radius. (kilometers from the center to the ground level)." },
		{ "UIMax", "200.000000" },
		{ "UIMin", "10.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight = { "AtmosphereHeight", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, AtmosphereHeight), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** The ground albedo that will tint the astmophere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The ground albedo that will tint the astmophere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo = { "GroundAlbedo", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, GroundAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius_MetaData[] = {
		{ "Category", "Planet" },
		{ "ClampMax", "10000.000000" },
		{ "ClampMin", "100.000000" },
		{ "Comment", "/** The planet radius. (kilometers from the center to the ground level). */" },
		{ "DisplayName", "Ground Radius" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The planet radius. (kilometers from the center to the ground level)." },
		{ "UIMax", "7000.000000" },
		{ "UIMin", "6000.000000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius = { "BottomRadius", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, BottomRadius), METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_MetaData[] = {
		{ "Category", "Planet" },
		{ "Comment", "/** The ground albedo that will tint the astmophere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "The ground albedo that will tint the astmophere when the sun light will bounce on it. Only taken into account when MultiScattering>0.0." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode = { "TransformMode", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USkyAtmosphereComponent, TransformMode), Z_Construct_UEnum_Engine_ESkyAtmosphereTransformMode, METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_bStaticLightingBuiltGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransmittanceMinLightElevationAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_HeightFogContribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AerialPespectiveViewDistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_SkyLuminanceFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherTentDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_OtherAbsorptionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieExponentialDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAnisotropy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieAbsorptionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScattering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MieScatteringScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighExponentialDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScattering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_RayleighScatteringScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_MultiScatteringFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_AtmosphereHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_GroundAlbedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_BottomRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkyAtmosphereComponent_Statics::NewProp_TransformMode_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkyAtmosphereComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkyAtmosphereComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USkyAtmosphereComponent_Statics::ClassParams = {
		&USkyAtmosphereComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkyAtmosphereComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkyAtmosphereComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USkyAtmosphereComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USkyAtmosphereComponent, 605333207);
	template<> ENGINE_API UClass* StaticClass<USkyAtmosphereComponent>()
	{
		return USkyAtmosphereComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USkyAtmosphereComponent(Z_Construct_UClass_USkyAtmosphereComponent, &USkyAtmosphereComponent::StaticClass, TEXT("/Script/Engine"), TEXT("USkyAtmosphereComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkyAtmosphereComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USkyAtmosphereComponent)
	void ASkyAtmosphere::StaticRegisterNativesASkyAtmosphere()
	{
	}
	UClass* Z_Construct_UClass_ASkyAtmosphere_NoRegister()
	{
		return ASkyAtmosphere::StaticClass();
	}
	struct Z_Construct_UClass_ASkyAtmosphere_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphereComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkyAtmosphereComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkyAtmosphere_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Fog" },
		{ "Comment", "/**\n *\x09""A placeable actor that simulates sky and light scattering in the atmosphere.\n *\x09@see TODO address to the documentation.\n */" },
		{ "HideCategories", "Info Object Input Input Collision" },
		{ "IncludePath", "Components/SkyAtmosphereComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A placeable actor that simulates sky and light scattering in the atmosphere.\n@see TODO address to the documentation." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** Arrow component to indicate default sun rotation */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
		{ "ToolTip", "Arrow component to indicate default sun rotation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyAtmosphere, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Atmosphere" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Components/SkyAtmosphereComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent = { "SkyAtmosphereComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyAtmosphere, SkyAtmosphereComponent), Z_Construct_UClass_USkyAtmosphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyAtmosphere_Statics::NewProp_SkyAtmosphereComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkyAtmosphere_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkyAtmosphere>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASkyAtmosphere_Statics::ClassParams = {
		&ASkyAtmosphere::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyAtmosphere_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkyAtmosphere()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASkyAtmosphere_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkyAtmosphere, 3454486268);
	template<> ENGINE_API UClass* StaticClass<ASkyAtmosphere>()
	{
		return ASkyAtmosphere::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkyAtmosphere(Z_Construct_UClass_ASkyAtmosphere, &ASkyAtmosphere::StaticClass, TEXT("/Script/Engine"), TEXT("ASkyAtmosphere"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyAtmosphere);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
