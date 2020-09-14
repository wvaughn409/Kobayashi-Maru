// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Atmosphere/AtmosphericFogComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphericFogComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters();
	ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FAtmospherePrecomputeInstanceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData, Z_Construct_UPackage__Script_Engine(), TEXT("AtmospherePrecomputeInstanceData"), sizeof(FAtmospherePrecomputeInstanceData), Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAtmospherePrecomputeInstanceData>()
{
	return FAtmospherePrecomputeInstanceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtmospherePrecomputeInstanceData(FAtmospherePrecomputeInstanceData::StaticStruct, TEXT("/Script/Engine"), TEXT("AtmospherePrecomputeInstanceData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeInstanceData
{
	FScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeInstanceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtmospherePrecomputeInstanceData")),new UScriptStruct::TCppStructOps<FAtmospherePrecomputeInstanceData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeInstanceData;
	struct Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Used to store data during RerunConstructionScripts" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtmospherePrecomputeInstanceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FSceneComponentInstanceData,
		&NewStructOps,
		"AtmospherePrecomputeInstanceData",
		sizeof(FAtmospherePrecomputeInstanceData),
		alignof(FAtmospherePrecomputeInstanceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtmospherePrecomputeInstanceData"), sizeof(FAtmospherePrecomputeInstanceData), Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeInstanceData_Hash() { return 591624523U; }
class UScriptStruct* FAtmospherePrecomputeParameters::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters, Z_Construct_UPackage__Script_Engine(), TEXT("AtmospherePrecomputeParameters"), sizeof(FAtmospherePrecomputeParameters), Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAtmospherePrecomputeParameters>()
{
	return FAtmospherePrecomputeParameters::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtmospherePrecomputeParameters(FAtmospherePrecomputeParameters::StaticStruct, TEXT("/Script/Engine"), TEXT("AtmospherePrecomputeParameters"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeParameters
{
	FScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeParameters()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtmospherePrecomputeParameters")),new UScriptStruct::TCppStructOps<FAtmospherePrecomputeParameters>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFAtmospherePrecomputeParameters;
	struct Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterNuNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterNuNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterMuSNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterMuSNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterMuNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterMuNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatterAltitudeSampleNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterAltitudeSampleNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceTexHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IrradianceTexHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceTexWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IrradianceTexWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmittanceTexHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransmittanceTexHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmittanceTexWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransmittanceTexWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxScatteringOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxScatteringOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecayHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DecayHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure storing Data for pre-computation */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Structure storing Data for pre-computation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtmospherePrecomputeParameters>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterNuNum_MetaData[] = {
		{ "Comment", "/** Inscatter Texture Width */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Inscatter Texture Width" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterNuNum = { "InscatterNuNum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterNuNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterNuNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterNuNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuSNum_MetaData[] = {
		{ "Comment", "/** Inscatter Texture Width */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Inscatter Texture Width" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuSNum = { "InscatterMuSNum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterMuSNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuSNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuSNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuNum_MetaData[] = {
		{ "Comment", "/** Inscatter Texture Height */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Inscatter Texture Height" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuNum = { "InscatterMuNum", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterMuNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterAltitudeSampleNum_MetaData[] = {
		{ "Category", "AtmosphereParam" },
		{ "Comment", "/** Number of different altitudes at which to sample inscatter color (size of 3D texture Z dimension)*/" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Number of different altitudes at which to sample inscatter color (size of 3D texture Z dimension)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterAltitudeSampleNum = { "InscatterAltitudeSampleNum", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, InscatterAltitudeSampleNum), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterAltitudeSampleNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterAltitudeSampleNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexHeight_MetaData[] = {
		{ "Comment", "/** Irradiance Texture Height */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Irradiance Texture Height" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexHeight = { "IrradianceTexHeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, IrradianceTexHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexWidth_MetaData[] = {
		{ "Comment", "/** Irradiance Texture Width */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Irradiance Texture Width" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexWidth = { "IrradianceTexWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, IrradianceTexWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexHeight_MetaData[] = {
		{ "Comment", "/** Transmittance Texture Height */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Transmittance Texture Height" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexHeight = { "TransmittanceTexHeight", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, TransmittanceTexHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexWidth_MetaData[] = {
		{ "Comment", "/** Transmittance Texture Width */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Transmittance Texture Width" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexWidth = { "TransmittanceTexWidth", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, TransmittanceTexWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_MaxScatteringOrder_MetaData[] = {
		{ "Category", "AtmosphereParam" },
		{ "Comment", "/** Maximum scattering order */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Maximum scattering order" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_MaxScatteringOrder = { "MaxScatteringOrder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, MaxScatteringOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_MaxScatteringOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_MaxScatteringOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DecayHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DecayHeight = { "DecayHeight", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, DecayHeight_DEPRECATED), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DecayHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DecayHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DensityHeight_MetaData[] = {
		{ "Category", "AtmosphereParam" },
		{ "Comment", "/** Rayleigh scattering density height scale, ranges from [0...1] */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Rayleigh scattering density height scale, ranges from [0...1]" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DensityHeight = { "DensityHeight", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtmospherePrecomputeParameters, DensityHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DensityHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DensityHeight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterNuNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuSNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterMuNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_InscatterAltitudeSampleNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_IrradianceTexWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_TransmittanceTexWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_MaxScatteringOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DecayHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::NewProp_DensityHeight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AtmospherePrecomputeParameters",
		sizeof(FAtmospherePrecomputeParameters),
		alignof(FAtmospherePrecomputeParameters),
		Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtmospherePrecomputeParameters"), sizeof(FAtmospherePrecomputeParameters), Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters_Hash() { return 1784957674U; }
	DEFINE_FUNCTION(UAtmosphericFogComponent::execStartPrecompute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartPrecompute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetPrecomputeParams)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DensityHeight);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxScatteringOrder);
		P_GET_PROPERTY(FIntProperty,Z_Param_InscatterAltitudeSampleNum);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPrecomputeParams(Z_Param_DensityHeight,Z_Param_MaxScatteringOrder,Z_Param_InscatterAltitudeSampleNum);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execDisableGroundScattering)
	{
		P_GET_UBOOL(Z_Param_NewGroundScattering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableGroundScattering(Z_Param_NewGroundScattering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execDisableSunDisk)
	{
		P_GET_UBOOL(Z_Param_NewSunDisk);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisableSunDisk(Z_Param_NewSunDisk);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDistanceOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDistanceOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceOffset(Z_Param_NewDistanceOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetStartDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStartDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartDistance(Z_Param_NewStartDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetAltitudeScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewAltitudeScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAltitudeScale(Z_Param_NewAltitudeScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDistanceScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDistanceScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceScale(Z_Param_NewDistanceScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDensityOffset)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDensityOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDensityOffset(Z_Param_NewDensityOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDensityMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewDensityMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDensityMultiplier(Z_Param_NewDensityMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetFogMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFogMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogMultiplier(Z_Param_NewFogMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetSunMultiplier)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewSunMultiplier);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSunMultiplier(Z_Param_NewSunMultiplier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDefaultLightColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultLightColor(Z_Param_NewLightColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDefaultBrightness)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewBrightness);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultBrightness(Z_Param_NewBrightness);
		P_NATIVE_END;
	}
	void UAtmosphericFogComponent::StaticRegisterNativesUAtmosphericFogComponent()
	{
		UClass* Class = UAtmosphericFogComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisableGroundScattering", &UAtmosphericFogComponent::execDisableGroundScattering },
			{ "DisableSunDisk", &UAtmosphericFogComponent::execDisableSunDisk },
			{ "SetAltitudeScale", &UAtmosphericFogComponent::execSetAltitudeScale },
			{ "SetDefaultBrightness", &UAtmosphericFogComponent::execSetDefaultBrightness },
			{ "SetDefaultLightColor", &UAtmosphericFogComponent::execSetDefaultLightColor },
			{ "SetDensityMultiplier", &UAtmosphericFogComponent::execSetDensityMultiplier },
			{ "SetDensityOffset", &UAtmosphericFogComponent::execSetDensityOffset },
			{ "SetDistanceOffset", &UAtmosphericFogComponent::execSetDistanceOffset },
			{ "SetDistanceScale", &UAtmosphericFogComponent::execSetDistanceScale },
			{ "SetFogMultiplier", &UAtmosphericFogComponent::execSetFogMultiplier },
			{ "SetPrecomputeParams", &UAtmosphericFogComponent::execSetPrecomputeParams },
			{ "SetStartDistance", &UAtmosphericFogComponent::execSetStartDistance },
			{ "SetSunMultiplier", &UAtmosphericFogComponent::execSetSunMultiplier },
			{ "StartPrecompute", &UAtmosphericFogComponent::execStartPrecompute },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics
	{
		struct AtmosphericFogComponent_eventDisableGroundScattering_Parms
		{
			bool NewGroundScattering;
		};
		static void NewProp_NewGroundScattering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewGroundScattering;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering_SetBit(void* Obj)
	{
		((AtmosphericFogComponent_eventDisableGroundScattering_Parms*)Obj)->NewGroundScattering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering = { "NewGroundScattering", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtmosphericFogComponent_eventDisableGroundScattering_Parms), &Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set DisableGroundScattering */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set DisableGroundScattering" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "DisableGroundScattering", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventDisableGroundScattering_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics
	{
		struct AtmosphericFogComponent_eventDisableSunDisk_Parms
		{
			bool NewSunDisk;
		};
		static void NewProp_NewSunDisk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewSunDisk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk_SetBit(void* Obj)
	{
		((AtmosphericFogComponent_eventDisableSunDisk_Parms*)Obj)->NewSunDisk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk = { "NewSunDisk", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AtmosphericFogComponent_eventDisableSunDisk_Parms), &Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set DisableSunDisk */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set DisableSunDisk" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "DisableSunDisk", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventDisableSunDisk_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics
	{
		struct AtmosphericFogComponent_eventSetAltitudeScale_Parms
		{
			float NewAltitudeScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewAltitudeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::NewProp_NewAltitudeScale = { "NewAltitudeScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetAltitudeScale_Parms, NewAltitudeScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::NewProp_NewAltitudeScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set AltitudeScale */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set AltitudeScale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetAltitudeScale", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetAltitudeScale_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics
	{
		struct AtmosphericFogComponent_eventSetDefaultBrightness_Parms
		{
			float NewBrightness;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewBrightness;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::NewProp_NewBrightness = { "NewBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDefaultBrightness_Parms, NewBrightness), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::NewProp_NewBrightness,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set brightness of the light */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set brightness of the light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDefaultBrightness", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetDefaultBrightness_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics
	{
		struct AtmosphericFogComponent_eventSetDefaultLightColor_Parms
		{
			FLinearColor NewLightColor;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDefaultLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::NewProp_NewLightColor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set color of the light */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDefaultLightColor", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetDefaultLightColor_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics
	{
		struct AtmosphericFogComponent_eventSetDensityMultiplier_Parms
		{
			float NewDensityMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDensityMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::NewProp_NewDensityMultiplier = { "NewDensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDensityMultiplier_Parms, NewDensityMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::NewProp_NewDensityMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set DensityMultiplier */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set DensityMultiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDensityMultiplier", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetDensityMultiplier_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics
	{
		struct AtmosphericFogComponent_eventSetDensityOffset_Parms
		{
			float NewDensityOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDensityOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::NewProp_NewDensityOffset = { "NewDensityOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDensityOffset_Parms, NewDensityOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::NewProp_NewDensityOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set DensityOffset */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set DensityOffset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDensityOffset", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetDensityOffset_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics
	{
		struct AtmosphericFogComponent_eventSetDistanceOffset_Parms
		{
			float NewDistanceOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDistanceOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::NewProp_NewDistanceOffset = { "NewDistanceOffset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDistanceOffset_Parms, NewDistanceOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::NewProp_NewDistanceOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set DistanceOffset */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set DistanceOffset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDistanceOffset", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetDistanceOffset_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics
	{
		struct AtmosphericFogComponent_eventSetDistanceScale_Parms
		{
			float NewDistanceScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewDistanceScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::NewProp_NewDistanceScale = { "NewDistanceScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDistanceScale_Parms, NewDistanceScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::NewProp_NewDistanceScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set DistanceScale */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set DistanceScale" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDistanceScale", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetDistanceScale_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics
	{
		struct AtmosphericFogComponent_eventSetFogMultiplier_Parms
		{
			float NewFogMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFogMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::NewProp_NewFogMultiplier = { "NewFogMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetFogMultiplier_Parms, NewFogMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::NewProp_NewFogMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set FogMultiplier */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set FogMultiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetFogMultiplier", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetFogMultiplier_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics
	{
		struct AtmosphericFogComponent_eventSetPrecomputeParams_Parms
		{
			float DensityHeight;
			int32 MaxScatteringOrder;
			int32 InscatterAltitudeSampleNum;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InscatterAltitudeSampleNum;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxScatteringOrder;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityHeight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_InscatterAltitudeSampleNum = { "InscatterAltitudeSampleNum", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, InscatterAltitudeSampleNum), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_MaxScatteringOrder = { "MaxScatteringOrder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, MaxScatteringOrder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_DensityHeight = { "DensityHeight", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, DensityHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_InscatterAltitudeSampleNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_MaxScatteringOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_DensityHeight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set PrecomputeParams, only valid in Editor mode */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set PrecomputeParams, only valid in Editor mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetPrecomputeParams", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetPrecomputeParams_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics
	{
		struct AtmosphericFogComponent_eventSetStartDistance_Parms
		{
			float NewStartDistance;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewStartDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::NewProp_NewStartDistance = { "NewStartDistance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetStartDistance_Parms, NewStartDistance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::NewProp_NewStartDistance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set StartDistance */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set StartDistance" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetStartDistance", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetStartDistance_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics
	{
		struct AtmosphericFogComponent_eventSetSunMultiplier_Parms
		{
			float NewSunMultiplier;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewSunMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::NewProp_NewSunMultiplier = { "NewSunMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetSunMultiplier_Parms, NewSunMultiplier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::NewProp_NewSunMultiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Set SunMultiplier */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set SunMultiplier" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetSunMultiplier", nullptr, nullptr, sizeof(AtmosphericFogComponent_eventSetSunMultiplier_Parms), Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "StartPrecompute", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister()
	{
		return UAtmosphericFogComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAtmosphericFogComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IrradianceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IrradianceTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransmittanceTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TransmittanceTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrecomputeParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrecomputeParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableGroundScattering_MetaData[];
#endif
		static void NewProp_bDisableGroundScattering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableGroundScattering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAtmosphereAffectsSunIlluminance_MetaData[];
#endif
		static void NewProp_bAtmosphereAffectsSunIlluminance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAtmosphereAffectsSunIlluminance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableSunDisk_MetaData[];
#endif
		static void NewProp_bDisableSunDisk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableSunDisk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLightColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultLightColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBrightness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultBrightness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunDiscScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunDiscScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AltitudeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AltitudeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DensityMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DensityMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SunMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SunMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtmosphericFogComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAtmosphericFogComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering, "DisableGroundScattering" }, // 4028284845
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk, "DisableSunDisk" }, // 3326517390
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale, "SetAltitudeScale" }, // 1329007546
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness, "SetDefaultBrightness" }, // 2567732961
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor, "SetDefaultLightColor" }, // 969200910
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier, "SetDensityMultiplier" }, // 282319969
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset, "SetDensityOffset" }, // 3445689278
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset, "SetDistanceOffset" }, // 3110846738
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale, "SetDistanceScale" }, // 2790743453
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier, "SetFogMultiplier" }, // 3721639689
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams, "SetPrecomputeParams" }, // 4081932106
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance, "SetStartDistance" }, // 1451295061
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier, "SetSunMultiplier" }, // 2079008787
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_StartPrecompute, "StartPrecompute" }, // 3944414505
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to create fogging effects such as clouds.\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Atmosphere/AtmosphericFogComponent.h" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Used to create fogging effects such as clouds." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_IrradianceTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_IrradianceTexture = { "IrradianceTexture", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, IrradianceTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_IrradianceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_IrradianceTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_TransmittanceTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_TransmittanceTexture = { "TransmittanceTexture", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, TransmittanceTexture_DEPRECATED), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_TransmittanceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_TransmittanceTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_PrecomputeParams_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_PrecomputeParams = { "PrecomputeParams", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, PrecomputeParams), Z_Construct_UScriptStruct_FAtmospherePrecomputeParameters, METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_PrecomputeParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_PrecomputeParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableGroundScattering_MetaData[] = {
		{ "Category", "Ground" },
		{ "Comment", "/** Disable color scattering from ground. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ScriptName", "DisableGroundScatteringValue" },
		{ "ToolTip", "Disable color scattering from ground." },
	};
#endif
	void Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableGroundScattering_SetBit(void* Obj)
	{
		((UAtmosphericFogComponent*)Obj)->bDisableGroundScattering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableGroundScattering = { "bDisableGroundScattering", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtmosphericFogComponent), &Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableGroundScattering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableGroundScattering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableGroundScattering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bAtmosphereAffectsSunIlluminance_MetaData[] = {
		{ "Category", "Sun" },
		{ "Comment", "/** Set to true if the atmosphere should affect the selected sun light illuminance. The light will be tinted based on its zenith angle and atmosphere properties as if all surfaces were at the ground level 0 meter. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Set to true if the atmosphere should affect the selected sun light illuminance. The light will be tinted based on its zenith angle and atmosphere properties as if all surfaces were at the ground level 0 meter." },
	};
#endif
	void Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bAtmosphereAffectsSunIlluminance_SetBit(void* Obj)
	{
		((UAtmosphericFogComponent*)Obj)->bAtmosphereAffectsSunIlluminance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bAtmosphereAffectsSunIlluminance = { "bAtmosphereAffectsSunIlluminance", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtmosphericFogComponent), &Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bAtmosphereAffectsSunIlluminance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bAtmosphereAffectsSunIlluminance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bAtmosphereAffectsSunIlluminance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableSunDisk_MetaData[] = {
		{ "Category", "Sun" },
		{ "Comment", "/** Disable sun disk rendering. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ScriptName", "DisableSunDiskValue" },
		{ "ToolTip", "Disable sun disk rendering." },
	};
#endif
	void Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableSunDisk_SetBit(void* Obj)
	{
		((UAtmosphericFogComponent*)Obj)->bDisableSunDisk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableSunDisk = { "bDisableSunDisk", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAtmosphericFogComponent), &Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableSunDisk_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableSunDisk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableSunDisk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultLightColor_MetaData[] = {
		{ "Category", "Sun" },
		{ "Comment", "/** Default atmospheric sun light disc color. Used when there is no sunlight placed in the level. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Default atmospheric sun light disc color. Used when there is no sunlight placed in the level." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultLightColor = { "DefaultLightColor", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, DefaultLightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultLightColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultLightColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultBrightness_MetaData[] = {
		{ "Category", "Sun" },
		{ "Comment", "/** Default atmospheric sun light disc luminance. Used when there is no atmospheric sun light selected in the level. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Default atmospheric sun light disc luminance. Used when there is no atmospheric sun light selected in the level." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultBrightness = { "DefaultBrightness", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, DefaultBrightness), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultBrightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultBrightness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunDiscScale_MetaData[] = {
		{ "Category", "Sun" },
		{ "Comment", "/** Sun half apex angle in degree, see https://en.wikipedia.org/wiki/Solid_angle */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Sun half apex angle in degree, see https://en.wikipedia.org/wiki/Solid_angle" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunDiscScale = { "SunDiscScale", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, SunDiscScale), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunDiscScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunDiscScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_StartDistance_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** The atmospheric fog start distance in centimeters. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "The atmospheric fog start distance in centimeters." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, StartDistance), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_StartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_StartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_GroundOffset_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Offset the view altitude (along Z). */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Offset the view altitude (along Z)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_GroundOffset = { "GroundOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, GroundOffset), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_GroundOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_GroundOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceOffset_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Apply a distance offset before evaluating the atmospheric fog, in km (to handle large distance). Only on surfaces, excludes the sky. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Apply a distance offset before evaluating the atmospheric fog, in km (to handle large distance). Only on surfaces, excludes the sky." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceOffset = { "DistanceOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, DistanceOffset), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_AltitudeScale_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Scale the view altitude (only Z scale). */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Scale the view altitude (only Z scale)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_AltitudeScale = { "AltitudeScale", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, AltitudeScale), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_AltitudeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_AltitudeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceScale_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Scale the view position. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Scale the view position." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceScale = { "DistanceScale", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, DistanceScale), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityOffset_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Offset the atmosphere transmittance over background [-1.f ~ 1.f]. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Offset the atmosphere transmittance over background [-1.f ~ 1.f]." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityOffset = { "DensityOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, DensityOffset), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityMultiplier_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Scales the atmosphere transmittance over background. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Scales the atmosphere transmittance over background." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityMultiplier = { "DensityMultiplier", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, DensityMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_FogMultiplier_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Scale the scattered luminance from the atmosphere sun light only on surfaces, excludes the sky. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Scale the scattered luminance from the atmosphere sun light only on surfaces, excludes the sky." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_FogMultiplier = { "FogMultiplier", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, FogMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_FogMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_FogMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunMultiplier_MetaData[] = {
		{ "Category", "Atmosphere" },
		{ "Comment", "/** Scale the scattered luminance from the atmosphere sun light. Only affect the sky and atmospheric fog. */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Scale the scattered luminance from the atmosphere sun light. Only affect the sky and atmospheric fog." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunMultiplier = { "SunMultiplier", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAtmosphericFogComponent, SunMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAtmosphericFogComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_IrradianceTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_TransmittanceTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_PrecomputeParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableGroundScattering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bAtmosphereAffectsSunIlluminance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_bDisableSunDisk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultLightColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DefaultBrightness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunDiscScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_StartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_GroundOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_AltitudeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DistanceScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_DensityMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_FogMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAtmosphericFogComponent_Statics::NewProp_SunMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtmosphericFogComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtmosphericFogComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::ClassParams = {
		&UAtmosphericFogComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAtmosphericFogComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAtmosphericFogComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtmosphericFogComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtmosphericFogComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtmosphericFogComponent, 347612141);
	template<> ENGINE_API UClass* StaticClass<UAtmosphericFogComponent>()
	{
		return UAtmosphericFogComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtmosphericFogComponent(Z_Construct_UClass_UAtmosphericFogComponent, &UAtmosphericFogComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UAtmosphericFogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtmosphericFogComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtmosphericFogComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
