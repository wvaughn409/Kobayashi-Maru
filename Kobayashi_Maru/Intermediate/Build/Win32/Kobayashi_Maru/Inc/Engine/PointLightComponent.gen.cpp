// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Components/PointLightComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePointLightComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent();
	ENGINE_API UClass* Z_Construct_UClass_ULocalLightComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPointLightComponent::execSetSourceLength)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceLength(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointLightComponent::execSetSoftSourceRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSoftSourceRadius(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointLightComponent::execSetSourceRadius)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_bNewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSourceRadius(Z_Param_bNewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPointLightComponent::execSetLightFalloffExponent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightFalloffExponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLightFalloffExponent(Z_Param_NewLightFalloffExponent);
		P_NATIVE_END;
	}
	void UPointLightComponent::StaticRegisterNativesUPointLightComponent()
	{
		UClass* Class = UPointLightComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetLightFalloffExponent", &UPointLightComponent::execSetLightFalloffExponent },
			{ "SetSoftSourceRadius", &UPointLightComponent::execSetSoftSourceRadius },
			{ "SetSourceLength", &UPointLightComponent::execSetSourceLength },
			{ "SetSourceRadius", &UPointLightComponent::execSetSourceRadius },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics
	{
		struct PointLightComponent_eventSetLightFalloffExponent_Parms
		{
			float NewLightFalloffExponent;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewLightFalloffExponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent = { "NewLightFalloffExponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointLightComponent_eventSetLightFalloffExponent_Parms, NewLightFalloffExponent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::NewProp_NewLightFalloffExponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, nullptr, "SetLightFalloffExponent", nullptr, nullptr, sizeof(PointLightComponent_eventSetLightFalloffExponent_Parms), Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics
	{
		struct PointLightComponent_eventSetSoftSourceRadius_Parms
		{
			float bNewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointLightComponent_eventSetSoftSourceRadius_Parms, bNewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, nullptr, "SetSoftSourceRadius", nullptr, nullptr, sizeof(PointLightComponent_eventSetSoftSourceRadius_Parms), Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics
	{
		struct PointLightComponent_eventSetSourceLength_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointLightComponent_eventSetSourceLength_Parms, NewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, nullptr, "SetSourceLength", nullptr, nullptr, sizeof(PointLightComponent_eventSetSourceLength_Parms), Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetSourceLength()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointLightComponent_SetSourceLength_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics
	{
		struct PointLightComponent_eventSetSourceRadius_Parms
		{
			float bNewValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PointLightComponent_eventSetSourceRadius_Parms, bNewValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPointLightComponent, nullptr, "SetSourceRadius", nullptr, nullptr, sizeof(PointLightComponent_eventSetSourceRadius_Parms), Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPointLightComponent_SetSourceRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPointLightComponent_SetSourceRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPointLightComponent_NoRegister()
	{
		return UPointLightComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPointLightComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftSourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SoftSourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SourceRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightFalloffExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LightFalloffExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseInverseSquaredFalloff_MetaData[];
#endif
		static void NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseInverseSquaredFalloff;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPointLightComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULocalLightComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPointLightComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPointLightComponent_SetLightFalloffExponent, "SetLightFalloffExponent" }, // 2363678698
		{ &Z_Construct_UFunction_UPointLightComponent_SetSoftSourceRadius, "SetSoftSourceRadius" }, // 2619327922
		{ &Z_Construct_UFunction_UPointLightComponent_SetSourceLength, "SetSourceLength" }, // 3150090507
		{ &Z_Construct_UFunction_UPointLightComponent_SetSourceRadius, "SetSourceRadius" }, // 365365405
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights Common" },
		{ "Comment", "/**\n * A light component which emits light from a single point equally in all directions.\n */" },
		{ "HideCategories", "Object LightShafts Object LightShafts Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/PointLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
		{ "ToolTip", "A light component which emits light from a single point equally in all directions." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceLength_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Length of light source shape.\n\x09 * Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
		{ "ToolTip", "Length of light source shape.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceLength = { "SourceLength", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointLightComponent, SourceLength), METADATA_PARAMS(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SoftSourceRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Soft radius of light source shape.\n\x09* Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
		{ "ToolTip", "Soft radius of light source shape.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SoftSourceRadius = { "SoftSourceRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointLightComponent, SoftSourceRadius), METADATA_PARAMS(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SoftSourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SoftSourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceRadius_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Radius of light source shape.\n\x09 * Note that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
		{ "ToolTip", "Radius of light source shape.\nNote that light sources shapes which intersect shadow casting geometry can cause shadowing artifacts." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceRadius = { "SourceRadius", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointLightComponent, SourceRadius), METADATA_PARAMS(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightComponent_Statics::NewProp_LightFalloffExponent_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Controls the radial falloff of the light when UseInverseSquaredFalloff is disabled. \n\x09 * 2 is almost linear and very unrealistic and around 8 it looks reasonable.\n\x09 * With large exponents, the light has contribution to only a small area of its influence radius but still costs the same as low exponents.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
		{ "ToolTip", "Controls the radial falloff of the light when UseInverseSquaredFalloff is disabled.\n2 is almost linear and very unrealistic and around 8 it looks reasonable.\nWith large exponents, the light has contribution to only a small area of its influence radius but still costs the same as low exponents." },
		{ "UIMax", "16.0" },
		{ "UIMin", "2.0" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPointLightComponent_Statics::NewProp_LightFalloffExponent = { "LightFalloffExponent", nullptr, (EPropertyFlags)0x0010040200000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPointLightComponent, LightFalloffExponent), METADATA_PARAMS(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_LightFalloffExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_LightFalloffExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPointLightComponent_Statics::NewProp_bUseInverseSquaredFalloff_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether to use physically based inverse squared distance falloff, where AttenuationRadius is only clamping the light's contribution.  \n\x09 * Disabling inverse squared falloff can be useful when placing fill lights (don't want a super bright spot near the light).\n\x09 * When enabled, the light's Intensity is in units of lumens, where 1700 lumens is a 100W lightbulb.\n\x09 * When disabled, the light's Intensity is a brightness scale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/PointLightComponent.h" },
		{ "ToolTip", "Whether to use physically based inverse squared distance falloff, where AttenuationRadius is only clamping the light's contribution.\nDisabling inverse squared falloff can be useful when placing fill lights (don't want a super bright spot near the light).\nWhen enabled, the light's Intensity is in units of lumens, where 1700 lumens is a 100W lightbulb.\nWhen disabled, the light's Intensity is a brightness scale." },
	};
#endif
	void Z_Construct_UClass_UPointLightComponent_Statics::NewProp_bUseInverseSquaredFalloff_SetBit(void* Obj)
	{
		((UPointLightComponent*)Obj)->bUseInverseSquaredFalloff = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPointLightComponent_Statics::NewProp_bUseInverseSquaredFalloff = { "bUseInverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UPointLightComponent), &Z_Construct_UClass_UPointLightComponent_Statics::NewProp_bUseInverseSquaredFalloff_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_bUseInverseSquaredFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightComponent_Statics::NewProp_bUseInverseSquaredFalloff_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPointLightComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SoftSourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightComponent_Statics::NewProp_SourceRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightComponent_Statics::NewProp_LightFalloffExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPointLightComponent_Statics::NewProp_bUseInverseSquaredFalloff,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPointLightComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPointLightComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPointLightComponent_Statics::ClassParams = {
		&UPointLightComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPointLightComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPointLightComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPointLightComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPointLightComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPointLightComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPointLightComponent, 880632291);
	template<> ENGINE_API UClass* StaticClass<UPointLightComponent>()
	{
		return UPointLightComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPointLightComponent(Z_Construct_UClass_UPointLightComponent, &UPointLightComponent::StaticClass, TEXT("/Script/Engine"), TEXT("UPointLightComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPointLightComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPointLightComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
