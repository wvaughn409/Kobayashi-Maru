// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/SystemTimeTimecodeProvider.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSystemTimeTimecodeProvider() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USystemTimeTimecodeProvider();
	ENGINE_API UClass* Z_Construct_UClass_UTimecodeProvider();
	UPackage* Z_Construct_UPackage__Script_Engine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
// End Cross Module References
	void USystemTimeTimecodeProvider::StaticRegisterNativesUSystemTimeTimecodeProvider()
	{
	}
	UClass* Z_Construct_UClass_USystemTimeTimecodeProvider_NoRegister()
	{
		return USystemTimeTimecodeProvider::StaticClass();
	}
	struct Z_Construct_UClass_USystemTimeTimecodeProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseHighPerformanceClock_MetaData[];
#endif
		static void NewProp_bUseHighPerformanceClock_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseHighPerformanceClock;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateFullFrame_MetaData[];
#endif
		static void NewProp_bGenerateFullFrame_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateFullFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FrameRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTimecodeProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Converts the current system time to timecode, relative to a provided frame rate.\n */" },
		{ "IncludePath", "Engine/SystemTimeTimecodeProvider.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "Converts the current system time to timecode, relative to a provided frame rate." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/**\n\x09 * Use the high performance clock instead of the system time to generate the timecode value.\n\x09 * Using the high performance clock is faster but will make the value drift over time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "Use the high performance clock instead of the system time to generate the timecode value.\nUsing the high performance clock is faster but will make the value drift over time." },
	};
#endif
	void Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_SetBit(void* Obj)
	{
		((USystemTimeTimecodeProvider*)Obj)->bUseHighPerformanceClock = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock = { "bUseHighPerformanceClock", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USystemTimeTimecodeProvider), &Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_SetBit, METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** When generating frame time, should we generate full frame without subframe value.*/" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "When generating frame time, should we generate full frame without subframe value." },
	};
#endif
	void Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_SetBit(void* Obj)
	{
		((USystemTimeTimecodeProvider*)Obj)->bGenerateFullFrame = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame = { "bGenerateFullFrame", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USystemTimeTimecodeProvider), &Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Timecode" },
		{ "Comment", "/** The frame rate at which the timecode value will be generated. */" },
		{ "ModuleRelativePath", "Classes/Engine/SystemTimeTimecodeProvider.h" },
		{ "ToolTip", "The frame rate at which the timecode value will be generated." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USystemTimeTimecodeProvider, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bUseHighPerformanceClock,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_bGenerateFullFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::NewProp_FrameRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USystemTimeTimecodeProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams = {
		&USystemTimeTimecodeProvider::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USystemTimeTimecodeProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USystemTimeTimecodeProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USystemTimeTimecodeProvider, 2268780486);
	template<> ENGINE_API UClass* StaticClass<USystemTimeTimecodeProvider>()
	{
		return USystemTimeTimecodeProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USystemTimeTimecodeProvider(Z_Construct_UClass_USystemTimeTimecodeProvider, &USystemTimeTimecodeProvider::StaticClass, TEXT("/Script/Engine"), TEXT("USystemTimeTimecodeProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USystemTimeTimecodeProvider);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
