// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/ControlPointMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPointMeshActor() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_AControlPointMeshActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_AControlPointMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
// End Cross Module References
	void AControlPointMeshActor::StaticRegisterNativesAControlPointMeshActor()
	{
	}
	UClass* Z_Construct_UClass_AControlPointMeshActor_NoRegister()
	{
		return AControlPointMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AControlPointMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlPointMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControlPointMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlPointMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPointMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * ControlPointMeshActor is an actor with a ControlPointMeshComponent.\n *\n * @see UControlPointMeshComponent\n */" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "ControlPointMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/ControlPointMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ControlPointMeshActor is an actor with a ControlPointMeshComponent.\n\n@see UControlPointMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ControlPointMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh,Components|ControlPointMesh" },
		{ "ModuleRelativePath", "Classes/ControlPointMeshActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent = { "ControlPointMeshComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AControlPointMeshActor, ControlPointMeshComponent), Z_Construct_UClass_UControlPointMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControlPointMeshActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlPointMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlPointMeshActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControlPointMeshActor_Statics::ClassParams = {
		&AControlPointMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AControlPointMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AControlPointMeshActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControlPointMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControlPointMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControlPointMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControlPointMeshActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControlPointMeshActor, 2870549742);
	template<> LANDSCAPE_API UClass* StaticClass<AControlPointMeshActor>()
	{
		return AControlPointMeshActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControlPointMeshActor(Z_Construct_UClass_AControlPointMeshActor, &AControlPointMeshActor::StaticClass, TEXT("/Script/Landscape"), TEXT("AControlPointMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControlPointMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
