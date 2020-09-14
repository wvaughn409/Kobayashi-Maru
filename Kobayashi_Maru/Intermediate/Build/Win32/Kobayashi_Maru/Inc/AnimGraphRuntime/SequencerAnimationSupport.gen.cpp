// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphRuntime/Public/SequencerAnimationSupport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequencerAnimationSupport() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_USequencerAnimationSupport();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	void USequencerAnimationSupport::StaticRegisterNativesUSequencerAnimationSupport()
	{
	}
	UClass* Z_Construct_UClass_USequencerAnimationSupport_NoRegister()
	{
		return USequencerAnimationSupport::StaticClass();
	}
	struct Z_Construct_UClass_USequencerAnimationSupport_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequencerAnimationSupport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/SequencerAnimationSupport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequencerAnimationSupport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISequencerAnimationSupport>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USequencerAnimationSupport_Statics::ClassParams = {
		&USequencerAnimationSupport::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequencerAnimationSupport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequencerAnimationSupport()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USequencerAnimationSupport_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USequencerAnimationSupport, 1451275563);
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<USequencerAnimationSupport>()
	{
		return USequencerAnimationSupport::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USequencerAnimationSupport(Z_Construct_UClass_USequencerAnimationSupport, &USequencerAnimationSupport::StaticClass, TEXT("/Script/AnimGraphRuntime"), TEXT("USequencerAnimationSupport"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequencerAnimationSupport);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
