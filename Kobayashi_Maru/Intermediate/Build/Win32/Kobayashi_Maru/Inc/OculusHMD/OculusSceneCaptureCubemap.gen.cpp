// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusHMD/Private/OculusSceneCaptureCubemap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusSceneCaptureCubemap() {}
// Cross Module References
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap_NoRegister();
	OCULUSHMD_API UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OculusHMD();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
// End Cross Module References
	void UOculusSceneCaptureCubemap::StaticRegisterNativesUOculusSceneCaptureCubemap()
	{
	}
	UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap_NoRegister()
	{
		return UOculusSceneCaptureCubemap::StaticClass();
	}
	struct Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CaptureComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusHMD,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OculusSceneCaptureCubemap.h" },
		{ "ModuleRelativePath", "Private/OculusSceneCaptureCubemap.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/OculusSceneCaptureCubemap.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents = { "CaptureComponents", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOculusSceneCaptureCubemap, CaptureComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner = { "CaptureComponents", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::NewProp_CaptureComponents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusSceneCaptureCubemap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::ClassParams = {
		&UOculusSceneCaptureCubemap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusSceneCaptureCubemap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusSceneCaptureCubemap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusSceneCaptureCubemap, 2290681763);
	template<> OCULUSHMD_API UClass* StaticClass<UOculusSceneCaptureCubemap>()
	{
		return UOculusSceneCaptureCubemap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusSceneCaptureCubemap(Z_Construct_UClass_UOculusSceneCaptureCubemap, &UOculusSceneCaptureCubemap::StaticClass, TEXT("/Script/OculusHMD"), TEXT("UOculusSceneCaptureCubemap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusSceneCaptureCubemap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
