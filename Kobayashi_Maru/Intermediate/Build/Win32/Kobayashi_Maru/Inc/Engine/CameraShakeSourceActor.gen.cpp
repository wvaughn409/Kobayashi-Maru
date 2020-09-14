// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Camera/CameraShakeSourceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeSourceActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACameraShakeSourceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACameraShakeSourceActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
// End Cross Module References
	void ACameraShakeSourceActor::StaticRegisterNativesACameraShakeSourceActor()
	{
	}
	UClass* Z_Construct_UClass_ACameraShakeSourceActor_NoRegister()
	{
		return ACameraShakeSourceActor::StaticClass();
	}
	struct Z_Construct_UClass_ACameraShakeSourceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraShakeSourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraShakeSourceComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraShakeSourceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraShakeSourceActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/CameraShakeSourceActor.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraShakeSourceActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent = { "CameraShakeSourceComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraShakeSourceActor, CameraShakeSourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraShakeSourceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraShakeSourceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraShakeSourceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraShakeSourceActor_Statics::ClassParams = {
		&ACameraShakeSourceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraShakeSourceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraShakeSourceActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraShakeSourceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraShakeSourceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraShakeSourceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraShakeSourceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraShakeSourceActor, 1552097709);
	template<> ENGINE_API UClass* StaticClass<ACameraShakeSourceActor>()
	{
		return ACameraShakeSourceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraShakeSourceActor(Z_Construct_UClass_ACameraShakeSourceActor, &ACameraShakeSourceActor::StaticClass, TEXT("/Script/Engine"), TEXT("ACameraShakeSourceActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraShakeSourceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
