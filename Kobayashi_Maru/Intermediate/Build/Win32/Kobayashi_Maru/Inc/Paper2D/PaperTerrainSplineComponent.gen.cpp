// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperTerrainSplineComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperTerrainSplineComponent() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperTerrainSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	void UPaperTerrainSplineComponent::StaticRegisterNativesUPaperTerrainSplineComponent()
	{
	}
	UClass* Z_Construct_UClass_UPaperTerrainSplineComponent_NoRegister()
	{
		return UPaperTerrainSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperTerrainSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//@TODO: Document\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "PaperTerrainSplineComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperTerrainSplineComponent.h" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperTerrainSplineComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::ClassParams = {
		&UPaperTerrainSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperTerrainSplineComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperTerrainSplineComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperTerrainSplineComponent, 609783569);
	template<> PAPER2D_API UClass* StaticClass<UPaperTerrainSplineComponent>()
	{
		return UPaperTerrainSplineComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperTerrainSplineComponent(Z_Construct_UClass_UPaperTerrainSplineComponent, &UPaperTerrainSplineComponent::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperTerrainSplineComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperTerrainSplineComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
