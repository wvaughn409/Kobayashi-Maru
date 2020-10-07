// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/ArticyGenerated/ManiacManfredInterfaces.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiacManfredInterfaces() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredSoundfileFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredDialogChoiceFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredItemCombinationFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredVariableBindingFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredCharacterFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredMoraleFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredLocationSettingsFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredZoneConditionFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredDisplayConditionFeature_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(IManiacManfredObjectWithSoundfileFeature::execGetFeatureSoundfile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredSoundfileFeature**)Z_Param__Result=P_THIS->GetFeatureSoundfile();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithSoundfileFeature::StaticRegisterNativesUManiacManfredObjectWithSoundfileFeature()
	{
		UClass* Class = UManiacManfredObjectWithSoundfileFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureSoundfile", &IManiacManfredObjectWithSoundfileFeature::execGetFeatureSoundfile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics
	{
		struct ManiacManfredObjectWithSoundfileFeature_eventGetFeatureSoundfile_Parms
		{
			UManiacManfredSoundfileFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithSoundfileFeature_eventGetFeatureSoundfile_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredSoundfileFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature, nullptr, "GetFeatureSoundfile", nullptr, nullptr, sizeof(ManiacManfredObjectWithSoundfileFeature_eventGetFeatureSoundfile_Parms), Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_NoRegister()
	{
		return UManiacManfredObjectWithSoundfileFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithSoundfileFeature_GetFeatureSoundfile, "GetFeatureSoundfile" }, // 467215199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithSoundfileFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithSoundfileFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithSoundfileFeature, 87008793);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithSoundfileFeature>()
	{
		return UManiacManfredObjectWithSoundfileFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithSoundfileFeature(Z_Construct_UClass_UManiacManfredObjectWithSoundfileFeature, &UManiacManfredObjectWithSoundfileFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithSoundfileFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithSoundfileFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithDialogChoiceFeature::execGetFeatureDialogChoice)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredDialogChoiceFeature**)Z_Param__Result=P_THIS->GetFeatureDialogChoice();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithDialogChoiceFeature::StaticRegisterNativesUManiacManfredObjectWithDialogChoiceFeature()
	{
		UClass* Class = UManiacManfredObjectWithDialogChoiceFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureDialogChoice", &IManiacManfredObjectWithDialogChoiceFeature::execGetFeatureDialogChoice },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics
	{
		struct ManiacManfredObjectWithDialogChoiceFeature_eventGetFeatureDialogChoice_Parms
		{
			UManiacManfredDialogChoiceFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithDialogChoiceFeature_eventGetFeatureDialogChoice_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredDialogChoiceFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature, nullptr, "GetFeatureDialogChoice", nullptr, nullptr, sizeof(ManiacManfredObjectWithDialogChoiceFeature_eventGetFeatureDialogChoice_Parms), Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_NoRegister()
	{
		return UManiacManfredObjectWithDialogChoiceFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithDialogChoiceFeature_GetFeatureDialogChoice, "GetFeatureDialogChoice" }, // 945529393
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithDialogChoiceFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithDialogChoiceFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithDialogChoiceFeature, 2285764383);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithDialogChoiceFeature>()
	{
		return UManiacManfredObjectWithDialogChoiceFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithDialogChoiceFeature(Z_Construct_UClass_UManiacManfredObjectWithDialogChoiceFeature, &UManiacManfredObjectWithDialogChoiceFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithDialogChoiceFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithDialogChoiceFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithItemCombinationFeature::execGetFeatureItemCombination)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredItemCombinationFeature**)Z_Param__Result=P_THIS->GetFeatureItemCombination();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithItemCombinationFeature::StaticRegisterNativesUManiacManfredObjectWithItemCombinationFeature()
	{
		UClass* Class = UManiacManfredObjectWithItemCombinationFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureItemCombination", &IManiacManfredObjectWithItemCombinationFeature::execGetFeatureItemCombination },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics
	{
		struct ManiacManfredObjectWithItemCombinationFeature_eventGetFeatureItemCombination_Parms
		{
			UManiacManfredItemCombinationFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithItemCombinationFeature_eventGetFeatureItemCombination_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredItemCombinationFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature, nullptr, "GetFeatureItemCombination", nullptr, nullptr, sizeof(ManiacManfredObjectWithItemCombinationFeature_eventGetFeatureItemCombination_Parms), Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_NoRegister()
	{
		return UManiacManfredObjectWithItemCombinationFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithItemCombinationFeature_GetFeatureItemCombination, "GetFeatureItemCombination" }, // 3666228572
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithItemCombinationFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithItemCombinationFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithItemCombinationFeature, 4270561671);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithItemCombinationFeature>()
	{
		return UManiacManfredObjectWithItemCombinationFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithItemCombinationFeature(Z_Construct_UClass_UManiacManfredObjectWithItemCombinationFeature, &UManiacManfredObjectWithItemCombinationFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithItemCombinationFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithItemCombinationFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithVariableBindingFeature::execGetFeatureVariableBinding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredVariableBindingFeature**)Z_Param__Result=P_THIS->GetFeatureVariableBinding();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithVariableBindingFeature::StaticRegisterNativesUManiacManfredObjectWithVariableBindingFeature()
	{
		UClass* Class = UManiacManfredObjectWithVariableBindingFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureVariableBinding", &IManiacManfredObjectWithVariableBindingFeature::execGetFeatureVariableBinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics
	{
		struct ManiacManfredObjectWithVariableBindingFeature_eventGetFeatureVariableBinding_Parms
		{
			UManiacManfredVariableBindingFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithVariableBindingFeature_eventGetFeatureVariableBinding_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredVariableBindingFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature, nullptr, "GetFeatureVariableBinding", nullptr, nullptr, sizeof(ManiacManfredObjectWithVariableBindingFeature_eventGetFeatureVariableBinding_Parms), Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_NoRegister()
	{
		return UManiacManfredObjectWithVariableBindingFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithVariableBindingFeature_GetFeatureVariableBinding, "GetFeatureVariableBinding" }, // 2410007201
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithVariableBindingFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithVariableBindingFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithVariableBindingFeature, 870377998);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithVariableBindingFeature>()
	{
		return UManiacManfredObjectWithVariableBindingFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithVariableBindingFeature(Z_Construct_UClass_UManiacManfredObjectWithVariableBindingFeature, &UManiacManfredObjectWithVariableBindingFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithVariableBindingFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithVariableBindingFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithCharacterFeature::execGetFeatureCharacter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredCharacterFeature**)Z_Param__Result=P_THIS->GetFeatureCharacter();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithCharacterFeature::StaticRegisterNativesUManiacManfredObjectWithCharacterFeature()
	{
		UClass* Class = UManiacManfredObjectWithCharacterFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureCharacter", &IManiacManfredObjectWithCharacterFeature::execGetFeatureCharacter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics
	{
		struct ManiacManfredObjectWithCharacterFeature_eventGetFeatureCharacter_Parms
		{
			UManiacManfredCharacterFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithCharacterFeature_eventGetFeatureCharacter_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredCharacterFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature, nullptr, "GetFeatureCharacter", nullptr, nullptr, sizeof(ManiacManfredObjectWithCharacterFeature_eventGetFeatureCharacter_Parms), Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_NoRegister()
	{
		return UManiacManfredObjectWithCharacterFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithCharacterFeature_GetFeatureCharacter, "GetFeatureCharacter" }, // 2405181211
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithCharacterFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithCharacterFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithCharacterFeature, 788714018);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithCharacterFeature>()
	{
		return UManiacManfredObjectWithCharacterFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithCharacterFeature(Z_Construct_UClass_UManiacManfredObjectWithCharacterFeature, &UManiacManfredObjectWithCharacterFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithCharacterFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithCharacterFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithMoraleFeature::execGetFeatureMorale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredMoraleFeature**)Z_Param__Result=P_THIS->GetFeatureMorale();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithMoraleFeature::StaticRegisterNativesUManiacManfredObjectWithMoraleFeature()
	{
		UClass* Class = UManiacManfredObjectWithMoraleFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureMorale", &IManiacManfredObjectWithMoraleFeature::execGetFeatureMorale },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics
	{
		struct ManiacManfredObjectWithMoraleFeature_eventGetFeatureMorale_Parms
		{
			UManiacManfredMoraleFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithMoraleFeature_eventGetFeatureMorale_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredMoraleFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature, nullptr, "GetFeatureMorale", nullptr, nullptr, sizeof(ManiacManfredObjectWithMoraleFeature_eventGetFeatureMorale_Parms), Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_NoRegister()
	{
		return UManiacManfredObjectWithMoraleFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithMoraleFeature_GetFeatureMorale, "GetFeatureMorale" }, // 913389139
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithMoraleFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithMoraleFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithMoraleFeature, 1361311890);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithMoraleFeature>()
	{
		return UManiacManfredObjectWithMoraleFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithMoraleFeature(Z_Construct_UClass_UManiacManfredObjectWithMoraleFeature, &UManiacManfredObjectWithMoraleFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithMoraleFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithMoraleFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithLocationSettingsFeature::execGetFeatureLocationSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredLocationSettingsFeature**)Z_Param__Result=P_THIS->GetFeatureLocationSettings();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithLocationSettingsFeature::StaticRegisterNativesUManiacManfredObjectWithLocationSettingsFeature()
	{
		UClass* Class = UManiacManfredObjectWithLocationSettingsFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureLocationSettings", &IManiacManfredObjectWithLocationSettingsFeature::execGetFeatureLocationSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics
	{
		struct ManiacManfredObjectWithLocationSettingsFeature_eventGetFeatureLocationSettings_Parms
		{
			UManiacManfredLocationSettingsFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithLocationSettingsFeature_eventGetFeatureLocationSettings_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredLocationSettingsFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature, nullptr, "GetFeatureLocationSettings", nullptr, nullptr, sizeof(ManiacManfredObjectWithLocationSettingsFeature_eventGetFeatureLocationSettings_Parms), Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_NoRegister()
	{
		return UManiacManfredObjectWithLocationSettingsFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithLocationSettingsFeature_GetFeatureLocationSettings, "GetFeatureLocationSettings" }, // 1566496656
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithLocationSettingsFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithLocationSettingsFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithLocationSettingsFeature, 2915867019);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithLocationSettingsFeature>()
	{
		return UManiacManfredObjectWithLocationSettingsFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithLocationSettingsFeature(Z_Construct_UClass_UManiacManfredObjectWithLocationSettingsFeature, &UManiacManfredObjectWithLocationSettingsFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithLocationSettingsFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithLocationSettingsFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithZoneConditionFeature::execGetFeatureZoneCondition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredZoneConditionFeature**)Z_Param__Result=P_THIS->GetFeatureZoneCondition();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithZoneConditionFeature::StaticRegisterNativesUManiacManfredObjectWithZoneConditionFeature()
	{
		UClass* Class = UManiacManfredObjectWithZoneConditionFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureZoneCondition", &IManiacManfredObjectWithZoneConditionFeature::execGetFeatureZoneCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics
	{
		struct ManiacManfredObjectWithZoneConditionFeature_eventGetFeatureZoneCondition_Parms
		{
			UManiacManfredZoneConditionFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithZoneConditionFeature_eventGetFeatureZoneCondition_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredZoneConditionFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature, nullptr, "GetFeatureZoneCondition", nullptr, nullptr, sizeof(ManiacManfredObjectWithZoneConditionFeature_eventGetFeatureZoneCondition_Parms), Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_NoRegister()
	{
		return UManiacManfredObjectWithZoneConditionFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithZoneConditionFeature_GetFeatureZoneCondition, "GetFeatureZoneCondition" }, // 3751978147
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithZoneConditionFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithZoneConditionFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithZoneConditionFeature, 2195997964);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithZoneConditionFeature>()
	{
		return UManiacManfredObjectWithZoneConditionFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithZoneConditionFeature(Z_Construct_UClass_UManiacManfredObjectWithZoneConditionFeature, &UManiacManfredObjectWithZoneConditionFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithZoneConditionFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithZoneConditionFeature);
	DEFINE_FUNCTION(IManiacManfredObjectWithDisplayConditionFeature::execGetFeatureDisplayCondition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UManiacManfredDisplayConditionFeature**)Z_Param__Result=P_THIS->GetFeatureDisplayCondition();
		P_NATIVE_END;
	}
	void UManiacManfredObjectWithDisplayConditionFeature::StaticRegisterNativesUManiacManfredObjectWithDisplayConditionFeature()
	{
		UClass* Class = UManiacManfredObjectWithDisplayConditionFeature::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFeatureDisplayCondition", &IManiacManfredObjectWithDisplayConditionFeature::execGetFeatureDisplayCondition },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics
	{
		struct ManiacManfredObjectWithDisplayConditionFeature_eventGetFeatureDisplayCondition_Parms
		{
			UManiacManfredDisplayConditionFeature* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ManiacManfredObjectWithDisplayConditionFeature_eventGetFeatureDisplayCondition_Parms, ReturnValue), Z_Construct_UClass_UManiacManfredDisplayConditionFeature_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature, nullptr, "GetFeatureDisplayCondition", nullptr, nullptr, sizeof(ManiacManfredObjectWithDisplayConditionFeature_eventGetFeatureDisplayCondition_Parms), Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_NoRegister()
	{
		return UManiacManfredObjectWithDisplayConditionFeature::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredObjectWithDisplayConditionFeature_GetFeatureDisplayCondition, "GetFeatureDisplayCondition" }, // 4214353901
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "Category", "ManiacManfred Feature Interfaces" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredObjectWithDisplayConditionFeature>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::ClassParams = {
		&UManiacManfredObjectWithDisplayConditionFeature::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredObjectWithDisplayConditionFeature, 804553390);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredObjectWithDisplayConditionFeature>()
	{
		return UManiacManfredObjectWithDisplayConditionFeature::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredObjectWithDisplayConditionFeature(Z_Construct_UClass_UManiacManfredObjectWithDisplayConditionFeature, &UManiacManfredObjectWithDisplayConditionFeature::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredObjectWithDisplayConditionFeature"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredObjectWithDisplayConditionFeature);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
