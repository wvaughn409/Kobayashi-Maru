// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UMG/Public/Binding/TextBinding.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextBinding() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UTextBinding_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UTextBinding::execGetStringValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetStringValue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextBinding::execGetTextValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetTextValue();
		P_NATIVE_END;
	}
	void UTextBinding::StaticRegisterNativesUTextBinding()
	{
		UClass* Class = UTextBinding::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStringValue", &UTextBinding::execGetStringValue },
			{ "GetTextValue", &UTextBinding::execGetTextValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextBinding_GetStringValue_Statics
	{
		struct TextBinding_eventGetStringValue_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBinding_eventGetStringValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBinding, nullptr, "GetStringValue", nullptr, nullptr, sizeof(TextBinding_eventGetStringValue_Parms), Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBinding_GetStringValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBinding_GetStringValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextBinding_GetTextValue_Statics
	{
		struct TextBinding_eventGetTextValue_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TextBinding_eventGetTextValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextBinding, nullptr, "GetTextValue", nullptr, nullptr, sizeof(TextBinding_eventGetTextValue_Parms), Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextBinding_GetTextValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTextBinding_GetTextValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTextBinding_NoRegister()
	{
		return UTextBinding::StaticClass();
	}
	struct Z_Construct_UClass_UTextBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPropertyBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextBinding_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextBinding_GetStringValue, "GetStringValue" }, // 116431212
		{ &Z_Construct_UFunction_UTextBinding_GetTextValue, "GetTextValue" }, // 2132259748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/TextBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/TextBinding.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextBinding>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTextBinding_Statics::ClassParams = {
		&UTextBinding::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextBinding()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTextBinding_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTextBinding, 2812056125);
	template<> UMG_API UClass* StaticClass<UTextBinding>()
	{
		return UTextBinding::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTextBinding(Z_Construct_UClass_UTextBinding, &UTextBinding::StaticClass, TEXT("/Script/UMG"), TEXT("UTextBinding"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextBinding);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
