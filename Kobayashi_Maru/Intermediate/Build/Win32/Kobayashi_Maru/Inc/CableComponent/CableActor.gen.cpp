// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CableComponent/Classes/CableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableActor() {}
// Cross Module References
	CABLECOMPONENT_API UClass* Z_Construct_UClass_ACableActor_NoRegister();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_ACableActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CableComponent();
	CABLECOMPONENT_API UClass* Z_Construct_UClass_UCableComponent_NoRegister();
// End Cross Module References
	void ACableActor::StaticRegisterNativesACableActor()
	{
	}
	UClass* Z_Construct_UClass_ACableActor_NoRegister()
	{
		return ACableActor::StaticClass();
	}
	struct Z_Construct_UClass_ACableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CableComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CableComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CableComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACableActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** An actor that renders a simulated cable */" },
		{ "HideCategories", "Input Replication" },
		{ "IncludePath", "CableActor.h" },
		{ "ModuleRelativePath", "Classes/CableActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "An actor that renders a simulated cable" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent_MetaData[] = {
		{ "Category", "Cable" },
		{ "Comment", "/** Cable component that performs simulation and rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CableActor.h" },
		{ "ToolTip", "Cable component that performs simulation and rendering" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent = { "CableComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACableActor, CableComponent), Z_Construct_UClass_UCableComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACableActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACableActor_Statics::NewProp_CableComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACableActor_Statics::ClassParams = {
		&ACableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACableActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACableActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACableActor, 2870908816);
	template<> CABLECOMPONENT_API UClass* StaticClass<ACableActor>()
	{
		return ACableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACableActor(Z_Construct_UClass_ACableActor, &ACableActor::StaticClass, TEXT("/Script/CableComponent"), TEXT("ACableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
