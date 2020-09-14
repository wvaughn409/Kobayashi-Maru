// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SkyLight.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkyLight() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkyLight();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_USkyLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASkyLight::execOnRep_bEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_bEnabled();
		P_NATIVE_END;
	}
	void ASkyLight::StaticRegisterNativesASkyLight()
	{
		UClass* Class = ASkyLight::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_bEnabled", &ASkyLight::execOnRep_bEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASkyLight, nullptr, "OnRep_bEnabled", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASkyLight_OnRep_bEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASkyLight_OnRep_bEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASkyLight_NoRegister()
	{
		return ASkyLight::StaticClass();
	}
	struct Z_Construct_UClass_ASkyLight_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LightComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASkyLight_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASkyLight_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASkyLight_OnRep_bEnabled, "OnRep_bEnabled" }, // 70649270
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Input Collision Replication Info Input Movement Collision Utilities|Transformation" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SkyLight.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** replicated copy of LightComponent's bEnabled property */" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "replicated copy of LightComponent's bEnabled property" },
	};
#endif
	void Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ASkyLight*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ASkyLight), &Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Light" },
		{ "Comment", "/** @todo document */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Light,Rendering,Rendering|Components|SkyLight" },
		{ "ModuleRelativePath", "Classes/Engine/SkyLight.h" },
		{ "ToolTip", "@todo document" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent = { "LightComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASkyLight, LightComponent), Z_Construct_UClass_USkyLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASkyLight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyLight_Statics::NewProp_bEnabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASkyLight_Statics::NewProp_LightComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASkyLight_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASkyLight>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASkyLight_Statics::ClassParams = {
		&ASkyLight::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASkyLight_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASkyLight_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASkyLight()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASkyLight_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASkyLight, 2731860833);
	template<> ENGINE_API UClass* StaticClass<ASkyLight>()
	{
		return ASkyLight::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASkyLight(Z_Construct_UClass_ASkyLight, &ASkyLight::StaticClass, TEXT("/Script/Engine"), TEXT("ASkyLight"), false, nullptr, nullptr, nullptr);

	void ASkyLight::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_bEnabled(TEXT("bEnabled"));

		const bool bIsValid = true
			&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ASkyLight"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASkyLight);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
