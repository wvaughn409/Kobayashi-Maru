// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SpotLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpotLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASpotLight();
	ENGINE_API UClass* Z_Construct_UClass_ALight();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpotLight::execSetOuterConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewOuterConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOuterConeAngle(Z_Param_NewOuterConeAngle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpotLight::execSetInnerConeAngle)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewInnerConeAngle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInnerConeAngle(Z_Param_NewInnerConeAngle);
		P_NATIVE_END;
	}
	void ASpotLight::StaticRegisterNativesASpotLight()
	{
		UClass* Class = ASpotLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetInnerConeAngle", &ASpotLight::execSetInnerConeAngle },
			{ "SetOuterConeAngle", &ASpotLight::execSetOuterConeAngle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics
	{
		struct SpotLight_eventSetInnerConeAngle_Parms
		{
			float NewInnerConeAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewInnerConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle = { "NewInnerConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpotLight_eventSetInnerConeAngle_Parms, NewInnerConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::NewProp_NewInnerConeAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, nullptr, "SetInnerConeAngle", nullptr, nullptr, sizeof(SpotLight_eventSetInnerConeAngle_Parms), Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpotLight_SetInnerConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpotLight_SetInnerConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics
	{
		struct SpotLight_eventSetOuterConeAngle_Parms
		{
			float NewOuterConeAngle;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewOuterConeAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle = { "NewOuterConeAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpotLight_eventSetOuterConeAngle_Parms, NewOuterConeAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::NewProp_NewOuterConeAngle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpotLight, nullptr, "SetOuterConeAngle", nullptr, nullptr, sizeof(SpotLight_eventSetOuterConeAngle_Parms), Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpotLight_SetOuterConeAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpotLight_SetOuterConeAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpotLight_NoRegister()
	{
		return ASpotLight::StaticClass();
	}
	struct Z_Construct_UClass_ASpotLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpotLightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpotLightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpotLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALight,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpotLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpotLight_SetInnerConeAngle, "SetInnerConeAngle" }, // 4232140044
		{ &Z_Construct_UFunction_ASpotLight_SetOuterConeAngle, "SetOuterConeAngle" }, // 3922983261
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights SpotLights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SpotLight.h" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpotLight, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent_MetaData[] = {
		{ "Category", "Light" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "SpotLight,Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Engine/SpotLight.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent = { "SpotLightComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpotLight, SpotLightComponent), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpotLight_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpotLight_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpotLight_Statics::NewProp_SpotLightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpotLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpotLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpotLight_Statics::ClassParams = {
		&ASpotLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpotLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpotLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpotLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpotLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpotLight, 2471513019);
	template<> ENGINE_API UClass* StaticClass<ASpotLight>()
	{
		return ASpotLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpotLight(Z_Construct_UClass_ASpotLight, &ASpotLight::StaticClass, TEXT("/Script/Engine"), TEXT("ASpotLight"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpotLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
