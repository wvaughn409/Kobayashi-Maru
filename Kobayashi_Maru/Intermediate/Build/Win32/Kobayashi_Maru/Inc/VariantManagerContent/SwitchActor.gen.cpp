// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/SwitchActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchActor() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ASwitchActor_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ASwitchActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASwitchActor::execSelectOption)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_OptionIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectOption(Z_Param_OptionIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASwitchActor::execGetSelectedOption)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSelectedOption();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASwitchActor::execGetOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetOptions();
		P_NATIVE_END;
	}
	void ASwitchActor::StaticRegisterNativesASwitchActor()
	{
		UClass* Class = ASwitchActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOptions", &ASwitchActor::execGetOptions },
			{ "GetSelectedOption", &ASwitchActor::execGetSelectedOption },
			{ "SelectOption", &ASwitchActor::execSelectOption },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASwitchActor_GetOptions_Statics
	{
		struct SwitchActor_eventGetOptions_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchActor_eventGetOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SwitchActor" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "Returns the child actors that are available options, in a fixed order that may differ from the one displayed in the world outliner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchActor, nullptr, "GetOptions", nullptr, nullptr, sizeof(SwitchActor_eventGetOptions_Parms), Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwitchActor_GetOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwitchActor_GetOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics
	{
		struct SwitchActor_eventGetSelectedOption_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchActor_eventGetSelectedOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SwitchActor" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "If we have exactly one child actor visible, it will return a pointer to it. Returns nullptr otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchActor, nullptr, "GetSelectedOption", nullptr, nullptr, sizeof(SwitchActor_eventGetSelectedOption_Parms), Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwitchActor_GetSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwitchActor_GetSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASwitchActor_SelectOption_Statics
	{
		struct SwitchActor_eventSelectOption_Parms
		{
			int32 OptionIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OptionIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::NewProp_OptionIndex = { "OptionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SwitchActor_eventSelectOption_Parms, OptionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::NewProp_OptionIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SwitchActor" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "Select one of the available options by index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASwitchActor, nullptr, "SelectOption", nullptr, nullptr, sizeof(SwitchActor_eventSelectOption_Parms), Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASwitchActor_SelectOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASwitchActor_SelectOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASwitchActor_NoRegister()
	{
		return ASwitchActor::StaticClass();
	}
	struct Z_Construct_UClass_ASwitchActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSelectedOption_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastSelectedOption;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASwitchActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASwitchActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASwitchActor_GetOptions, "GetOptions" }, // 4050520112
		{ &Z_Construct_UFunction_ASwitchActor_GetSelectedOption, "GetSelectedOption" }, // 3671333429
		{ &Z_Construct_UFunction_ASwitchActor_SelectOption, "SelectOption" }, // 4034989074
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Switch Actor allows quickly toggling the visibility of its child actors so that\n * only one is visible at a time. It can also be captured with the Variant Manager\n * to expose this capability as a property capture\n */" },
		{ "IncludePath", "SwitchActor.h" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Switch Actor allows quickly toggling the visibility of its child actors so that\nonly one is visible at a time. It can also be captured with the Variant Manager\nto expose this capability as a property capture" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchActor_Statics::NewProp_LastSelectedOption_MetaData[] = {
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASwitchActor_Statics::NewProp_LastSelectedOption = { "LastSelectedOption", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitchActor, LastSelectedOption), METADATA_PARAMS(Z_Construct_UClass_ASwitchActor_Statics::NewProp_LastSelectedOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::NewProp_LastSelectedOption_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASwitchActor_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Category", "SwitchActor" },
		{ "Comment", "// Exposing our root component like this allows manual Mobility control on the details panel\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SwitchActor.h" },
		{ "ToolTip", "Exposing our root component like this allows manual Mobility control on the details panel" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASwitchActor_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASwitchActor, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASwitchActor_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::NewProp_SceneComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASwitchActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchActor_Statics::NewProp_LastSelectedOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASwitchActor_Statics::NewProp_SceneComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASwitchActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASwitchActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASwitchActor_Statics::ClassParams = {
		&ASwitchActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASwitchActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASwitchActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASwitchActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASwitchActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASwitchActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASwitchActor, 127823425);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ASwitchActor>()
	{
		return ASwitchActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASwitchActor(Z_Construct_UClass_ASwitchActor, &ASwitchActor::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("ASwitchActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASwitchActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
