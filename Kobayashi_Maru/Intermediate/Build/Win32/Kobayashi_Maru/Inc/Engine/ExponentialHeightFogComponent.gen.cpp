// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/ExponentialHeightFogComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExponentialHeightFogComponent() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExponentialHeightFogData();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
class UScriptStruct* FExponentialHeightFogData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ENGINE_API uint32 Get_Z_Construct_UScriptStruct_FExponentialHeightFogData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FExponentialHeightFogData, Z_Construct_UPackage__Script_Engine(), TEXT("ExponentialHeightFogData"), sizeof(FExponentialHeightFogData), Get_Z_Construct_UScriptStruct_FExponentialHeightFogData_Hash());
	}
	return Singleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExponentialHeightFogData>()
{
	return FExponentialHeightFogData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FExponentialHeightFogData(FExponentialHeightFogData::StaticStruct, TEXT("/Script/Engine"), TEXT("ExponentialHeightFogData"), false, nullptr, nullptr);
static struct FScriptStruct_Engine_StaticRegisterNativesFExponentialHeightFogData
{
	FScriptStruct_Engine_StaticRegisterNativesFExponentialHeightFogData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ExponentialHeightFogData")),new UScriptStruct::TCppStructOps<FExponentialHeightFogData>);
	}
} ScriptStruct_Engine_StaticRegisterNativesFExponentialHeightFogData;
	struct Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""Data for an individual fog line integral.\n*\x09This is the data which is not shared between fogs when multiple fogs are set up on a single UExponentialHeightFogComponent\n*/" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Data for an individual fog line integral.\nThis is the data which is not shared between fogs when multiple fogs are set up on a single UExponentialHeightFogComponent" },
	};
#endif
	void* Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExponentialHeightFogData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightOffset_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Height offset, relative to the actor position Z. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Height offset, relative to the actor position Z." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightOffset = { "FogHeightOffset", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExponentialHeightFogData, FogHeightOffset), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/**\n\x09* Height density factor, controls how the density increases as height decreases.\n\x09* Smaller values make the visible transition larger.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExponentialHeightFogData, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogDensity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Global density factor for this fog. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Global density factor for this fog." },
		{ "UIMax", ".05" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FExponentialHeightFogData, FogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogDensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogDensity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ExponentialHeightFogData",
		sizeof(FExponentialHeightFogData),
		alignof(FExponentialHeightFogData),
		Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FExponentialHeightFogData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FExponentialHeightFogData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Engine();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ExponentialHeightFogData"), sizeof(FExponentialHeightFogData), Get_Z_Construct_UScriptStruct_FExponentialHeightFogData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FExponentialHeightFogData_Hash() { return 1097358981U; }
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumetricFogDistance(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogEmissive)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumetricFogEmissive(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogAlbedo)
	{
		P_GET_STRUCT(FColor,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumetricFogAlbedo(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogExtinctionScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumetricFogExtinctionScale(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogScatteringDistribution)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumetricFogScatteringDistribution(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFog)
	{
		P_GET_UBOOL(Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVolumetricFog(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogCutoffDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogCutoffDistance(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetStartDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartDistance(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogMaxOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogMaxOpacity(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogHeightFalloff)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogHeightFalloff(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetDirectionalInscatteringColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirectionalInscatteringColor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetDirectionalInscatteringStartDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirectionalInscatteringStartDistance(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetDirectionalInscatteringExponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDirectionalInscatteringExponent(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetInscatteringTextureTint)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInscatteringTextureTint(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetNonDirectionalInscatteringColorDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNonDirectionalInscatteringColorDistance(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFullyDirectionalInscatteringColorDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFullyDirectionalInscatteringColorDistance(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetInscatteringColorCubemapAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInscatteringColorCubemapAngle(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetInscatteringColorCubemap)
	{
		P_GET_OBJECT(UTextureCube,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInscatteringColorCubemap(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogInscatteringColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogInscatteringColor(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogDensity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFogDensity(Z_Param_Value);
		P_NATIVE_END;
	}
	void UExponentialHeightFogComponent::StaticRegisterNativesUExponentialHeightFogComponent()
	{
		UClass* Class = UExponentialHeightFogComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetDirectionalInscatteringColor", &UExponentialHeightFogComponent::execSetDirectionalInscatteringColor },
			{ "SetDirectionalInscatteringExponent", &UExponentialHeightFogComponent::execSetDirectionalInscatteringExponent },
			{ "SetDirectionalInscatteringStartDistance", &UExponentialHeightFogComponent::execSetDirectionalInscatteringStartDistance },
			{ "SetFogCutoffDistance", &UExponentialHeightFogComponent::execSetFogCutoffDistance },
			{ "SetFogDensity", &UExponentialHeightFogComponent::execSetFogDensity },
			{ "SetFogHeightFalloff", &UExponentialHeightFogComponent::execSetFogHeightFalloff },
			{ "SetFogInscatteringColor", &UExponentialHeightFogComponent::execSetFogInscatteringColor },
			{ "SetFogMaxOpacity", &UExponentialHeightFogComponent::execSetFogMaxOpacity },
			{ "SetFullyDirectionalInscatteringColorDistance", &UExponentialHeightFogComponent::execSetFullyDirectionalInscatteringColorDistance },
			{ "SetInscatteringColorCubemap", &UExponentialHeightFogComponent::execSetInscatteringColorCubemap },
			{ "SetInscatteringColorCubemapAngle", &UExponentialHeightFogComponent::execSetInscatteringColorCubemapAngle },
			{ "SetInscatteringTextureTint", &UExponentialHeightFogComponent::execSetInscatteringTextureTint },
			{ "SetNonDirectionalInscatteringColorDistance", &UExponentialHeightFogComponent::execSetNonDirectionalInscatteringColorDistance },
			{ "SetStartDistance", &UExponentialHeightFogComponent::execSetStartDistance },
			{ "SetVolumetricFog", &UExponentialHeightFogComponent::execSetVolumetricFog },
			{ "SetVolumetricFogAlbedo", &UExponentialHeightFogComponent::execSetVolumetricFogAlbedo },
			{ "SetVolumetricFogDistance", &UExponentialHeightFogComponent::execSetVolumetricFogDistance },
			{ "SetVolumetricFogEmissive", &UExponentialHeightFogComponent::execSetVolumetricFogEmissive },
			{ "SetVolumetricFogExtinctionScale", &UExponentialHeightFogComponent::execSetVolumetricFogExtinctionScale },
			{ "SetVolumetricFogScatteringDistribution", &UExponentialHeightFogComponent::execSetVolumetricFogScatteringDistribution },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms
		{
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetDirectionalInscatteringColor", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetDirectionalInscatteringExponent", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetDirectionalInscatteringStartDistance", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogCutoffDistance", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogDensity_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogDensity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogDensity", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetFogDensity_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogHeightFalloff", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms
		{
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogInscatteringColor", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogMaxOpacity", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFullyDirectionalInscatteringColorDistance", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms
		{
			UTextureCube* Value;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms, Value), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetInscatteringColorCubemap", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetInscatteringColorCubemapAngle", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics
	{
		struct ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms
		{
			FLinearColor Value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetInscatteringTextureTint", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetNonDirectionalInscatteringColorDistance", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetStartDistance_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetStartDistance_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetStartDistance", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetStartDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFog_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((ExponentialHeightFogComponent_eventSetVolumetricFog_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFog", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms
		{
			FColor NewValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogAlbedo", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogDistance", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogEmissive", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogExtinctionScale", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics
	{
		struct ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogScatteringDistribution", nullptr, nullptr, sizeof(ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister()
	{
		return UExponentialHeightFogComponent::StaticClass();
	}
	struct Z_Construct_UClass_UExponentialHeightFogComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData[];
#endif
		static void NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightColorsWithFogInscatteringColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogStaticLightingScatteringIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogExtinctionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogExtinctionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogEmissive_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumetricFogEmissive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogAlbedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VolumetricFogAlbedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogScatteringDistribution_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogScatteringDistribution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableVolumetricFog_MetaData[];
#endif
		static void NewProp_bEnableVolumetricFog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableVolumetricFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogCutoffDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogCutoffDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMaxOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMaxOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NonDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullyDirectionalInscatteringColorDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FullyDirectionalInscatteringColorDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringTextureTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InscatteringTextureTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemapAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InscatteringColorCubemapAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemap_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InscatteringColorCubemap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondFogData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondFogData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExponentialHeightFogComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UExponentialHeightFogComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor, "SetDirectionalInscatteringColor" }, // 1824514170
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent, "SetDirectionalInscatteringExponent" }, // 29835494
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance, "SetDirectionalInscatteringStartDistance" }, // 935962357
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance, "SetFogCutoffDistance" }, // 313427130
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity, "SetFogDensity" }, // 3787236740
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff, "SetFogHeightFalloff" }, // 3712909993
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor, "SetFogInscatteringColor" }, // 1075364373
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity, "SetFogMaxOpacity" }, // 3299486558
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance, "SetFullyDirectionalInscatteringColorDistance" }, // 3574072869
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap, "SetInscatteringColorCubemap" }, // 520111842
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle, "SetInscatteringColorCubemapAngle" }, // 1651266166
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint, "SetInscatteringTextureTint" }, // 313405437
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance, "SetNonDirectionalInscatteringColorDistance" }, // 2490760723
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance, "SetStartDistance" }, // 2209057449
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog, "SetVolumetricFog" }, // 2296393703
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo, "SetVolumetricFogAlbedo" }, // 1394416685
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance, "SetVolumetricFogDistance" }, // 3036179052
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive, "SetVolumetricFogEmissive" }, // 4191568688
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale, "SetVolumetricFogExtinctionScale" }, // 4076469910
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution, "SetVolumetricFogScatteringDistribution" }, // 1448924073
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to create fogging effects such as clouds but with a density that is related to the height of the fog.\n */" },
		{ "HideCategories", "Object Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ExponentialHeightFogComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Used to create fogging effects such as clouds but with a density that is related to the height of the fog." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Whether to use FogInscatteringColor for the Sky Light volumetric scattering color and DirectionalInscatteringColor for the Directional Light scattering color. \n\x09 * Make sure your directional light has 'Atmosphere Sun Light' enabled!\n\x09 * Enabling this allows Volumetric fog to better match Height fog in the distance, but produces non-physical volumetric lighting that may not match surface lighting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Whether to use FogInscatteringColor for the Sky Light volumetric scattering color and DirectionalInscatteringColor for the Directional Light scattering color.\nMake sure your directional light has 'Atmosphere Sun Light' enabled!\nEnabling this allows Volumetric fog to better match Height fog in the distance, but produces non-physical volumetric lighting that may not match surface lighting." },
	};
#endif
	void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit(void* Obj)
	{
		((UExponentialHeightFogComponent*)Obj)->bOverrideLightColorsWithFogInscatteringColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors = { "bOverrideLightColorsWithFogInscatteringColors", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Static Lighting Scattering Intensity" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity = { "VolumetricFogStaticLightingScatteringIntensity", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogStaticLightingScatteringIntensity), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Distance over which volumetric fog should be computed.  Larger values extend the effect into the distance but expose under-sampling artifacts in details.\n\x09 */" },
		{ "DisplayName", "View Distance" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance over which volumetric fog should be computed.  Larger values extend the effect into the distance but expose under-sampling artifacts in details." },
		{ "UIMax", "10000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance = { "VolumetricFogDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** Scales the height fog particle extinction amount used by volumetric fog.  Values larger than 1 cause fog particles everywhere absorb more light. */" },
		{ "DisplayName", "Extinction Scale" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Scales the height fog particle extinction amount used by volumetric fog.  Values larger than 1 cause fog particles everywhere absorb more light." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale = { "VolumetricFogExtinctionScale", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogExtinctionScale), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\n\x09 * In most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting, \n\x09 * So stationary skylights are unshadowed and static skylights don't affect volumetric fog at all.\n\x09 */" },
		{ "DisplayName", "Emissive" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\nIn most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting,\nSo stationary skylights are unshadowed and static skylights don't affect volumetric fog at all." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive = { "VolumetricFogEmissive", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * The height fog particle reflectiveness used by volumetric fog. \n\x09 * Water particles in air have an albedo near white, while dust has slightly darker value.\n\x09 */" },
		{ "DisplayName", "Albedo" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "The height fog particle reflectiveness used by volumetric fog.\nWater particles in air have an albedo near white, while dust has slightly darker value." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo = { "VolumetricFogAlbedo", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Controls the scattering phase function - how much incoming light scatters in various directions.\n\x09 * A distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.  \n\x09 * In order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0.\n\x09 */" },
		{ "DisplayName", "Scattering Distribution" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the scattering phase function - how much incoming light scatters in various directions.\nA distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.\nIn order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0." },
		{ "UIMax", ".9" },
		{ "UIMin", "-.9" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution = { "VolumetricFogScatteringDistribution", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogScatteringDistribution), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Whether to enable Volumetric fog.  Scalability settings control the resolution of the fog simulation. \n\x09 * Note that Volumetric fog currently does not support StartDistance, FogMaxOpacity and FogCutoffDistance.\n\x09 * Volumetric fog also can't match exponential height fog in general as exponential height fog has non-physical behavior.\n\x09 */" },
		{ "DisplayName", "Volumetric Fog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Whether to enable Volumetric fog.  Scalability settings control the resolution of the fog simulation.\nNote that Volumetric fog currently does not support StartDistance, FogMaxOpacity and FogCutoffDistance.\nVolumetric fog also can't match exponential height fog in general as exponential height fog has non-physical behavior." },
	};
#endif
	void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_SetBit(void* Obj)
	{
		((UExponentialHeightFogComponent*)Obj)->bEnableVolumetricFog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog = { "bEnableVolumetricFog", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in." },
		{ "UIMax", "20000000" },
		{ "UIMin", "100000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance = { "FogCutoffDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogCutoffDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Distance from the camera that the fog will start, in world units. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance from the camera that the fog will start, in world units." },
		{ "UIMax", "5000" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, StartDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** \n\x09 * Maximum opacity of the fog.  \n\x09 * A value of 1 means the fog can become fully opaque at a distance and replace scene color completely,\n\x09 * A value of 0 means the fog color will not be factored in at all.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Maximum opacity of the fog.\nA value of 1 means the fog can become fully opaque at a distance and replace scene color completely,\nA value of 0 means the fog color will not be factored in at all." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity = { "FogMaxOpacity", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogMaxOpacity), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "Comment", "/** \n\x09 * Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light. \n\x09 * Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor = { "DirectionalInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "Comment", "/** \n\x09 * Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light. \n\x09 * Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance = { "DirectionalInscatteringStartDistance", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringStartDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "Comment", "/** \n\x09 * Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.  \n\x09 * Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
		{ "UIMax", "64" },
		{ "UIMin", "2" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent = { "DirectionalInscatteringExponent", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringExponent), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance = { "NonDirectionalInscatteringColorDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, NonDirectionalInscatteringColorDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance = { "FullyDirectionalInscatteringColorDistance", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FullyDirectionalInscatteringColorDistance), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Tint color used when InscatteringColorCubemap is specified, for quick edits without having to reimport InscatteringColorCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Tint color used when InscatteringColorCubemap is specified, for quick edits without having to reimport InscatteringColorCubemap." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint = { "InscatteringTextureTint", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringTextureTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Angle to rotate the InscatteringColorCubemap around the Z axis. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Angle to rotate the InscatteringColorCubemap around the Z axis." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle = { "InscatteringColorCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemapAngle), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** \n\x09 * Cubemap that can be specified for fog color, which is useful to make distant, heavily fogged scene elements match the sky.\n\x09 * When the cubemap is specified, FogInscatteringColor is ignored and Directional inscattering is disabled. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Cubemap that can be specified for fog color, which is useful to make distant, heavily fogged scene elements match the sky.\nWhen the cubemap is specified, FogInscatteringColor is ignored and Directional inscattering is disabled." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap = { "InscatteringColorCubemap", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SecondFogData_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Settings for the second fog. Setting the density of this to 0 means it doesn't have any influence. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Settings for the second fog. Setting the density of this to 0 means it doesn't have any influence." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SecondFogData = { "SecondFogData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, SecondFogData), Z_Construct_UScriptStruct_FExponentialHeightFogData, METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SecondFogData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SecondFogData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/**\n\x09 * Height density factor, controls how the density increases as height decreases.\n\x09 * Smaller values make the visible transition larger.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2" },
		{ "UIMin", "0.001" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Global density factor. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Global density factor." },
		{ "UIMax", ".05" },
		{ "UIMin", "0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogDensity), METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SecondFogData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExponentialHeightFogComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExponentialHeightFogComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::ClassParams = {
		&UExponentialHeightFogComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExponentialHeightFogComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExponentialHeightFogComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExponentialHeightFogComponent, 1693975918);
	template<> ENGINE_API UClass* StaticClass<UExponentialHeightFogComponent>()
	{
		return UExponentialHeightFogComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExponentialHeightFogComponent(Z_Construct_UClass_UExponentialHeightFogComponent, &UExponentialHeightFogComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UExponentialHeightFogComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExponentialHeightFogComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
