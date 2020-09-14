// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Foliage/Public/FoliageType_Actor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_Actor() {}
// Cross Module References
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_Actor_NoRegister();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_Actor();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
	UPackage* Z_Construct_UPackage__Script_Foliage();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UFoliageType_Actor::StaticRegisterNativesUFoliageType_Actor()
	{
	}
	UClass* Z_Construct_UClass_UFoliageType_Actor_NoRegister()
	{
		return UFoliageType_Actor::StaticClass();
	}
	struct Z_Construct_UClass_UFoliageType_Actor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldAttachToBaseComponent_MetaData[];
#endif
		static void NewProp_bShouldAttachToBaseComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldAttachToBaseComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFoliageType_Actor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFoliageType,
		(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FoliageType_Actor.h" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif
	void Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_SetBit(void* Obj)
	{
		((UFoliageType_Actor*)Obj)->bShouldAttachToBaseComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent = { "bShouldAttachToBaseComponent", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UFoliageType_Actor), &Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass_MetaData[] = {
		{ "Category", "Actor" },
		{ "ModuleRelativePath", "Public/FoliageType_Actor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFoliageType_Actor, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_bShouldAttachToBaseComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Actor_Statics::NewProp_ActorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFoliageType_Actor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_Actor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_Actor_Statics::ClassParams = {
		&UFoliageType_Actor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Actor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFoliageType_Actor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFoliageType_Actor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFoliageType_Actor, 3299183692);
	template<> FOLIAGE_API UClass* StaticClass<UFoliageType_Actor>()
	{
		return UFoliageType_Actor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFoliageType_Actor(Z_Construct_UClass_UFoliageType_Actor, &UFoliageType_Actor::StaticClass, TEXT("/Script/Foliage"), TEXT("UFoliageType_Actor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_Actor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
