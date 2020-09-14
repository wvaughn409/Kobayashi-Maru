// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Public/ObjectTrace.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectTrace() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UObjectTraceWorldSubsystem::StaticRegisterNativesUObjectTraceWorldSubsystem()
	{
	}
	UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem_NoRegister()
	{
		return UObjectTraceWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// World subsystem used to track world info\n" },
		{ "IncludePath", "ObjectTrace.h" },
		{ "ModuleRelativePath", "Public/ObjectTrace.h" },
		{ "ToolTip", "World subsystem used to track world info" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectTraceWorldSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::ClassParams = {
		&UObjectTraceWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectTraceWorldSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UObjectTraceWorldSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UObjectTraceWorldSubsystem, 1807482254);
	template<> ENGINE_API UClass* StaticClass<UObjectTraceWorldSubsystem>()
	{
		return UObjectTraceWorldSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UObjectTraceWorldSubsystem(Z_Construct_UClass_UObjectTraceWorldSubsystem, &UObjectTraceWorldSubsystem::StaticClass, TEXT("/Script/Engine"), TEXT("UObjectTraceWorldSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectTraceWorldSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
