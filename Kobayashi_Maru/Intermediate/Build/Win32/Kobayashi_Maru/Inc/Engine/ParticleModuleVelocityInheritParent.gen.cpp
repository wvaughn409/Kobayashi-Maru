// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVelocityInheritParent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVelocityBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
// End Cross Module References
	void UParticleModuleVelocityInheritParent::StaticRegisterNativesUParticleModuleVelocityInheritParent()
	{
	}
	UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent_NoRegister()
	{
		return UParticleModuleVelocityInheritParent::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVelocityBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Inherit Parent Velocity" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Velocity" },
		{ "Comment", "/**\n\x09 *\x09The scale to apply tot he parent velocity prior to adding it to the particle velocity during spawn.\n\x09 *\x09Value is retrieved using the EmitterTime of the emitter.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h" },
		{ "ToolTip", "The scale to apply tot he parent velocity prior to adding it to the particle velocity during spawn.\nValue is retrieved using the EmitterTime of the emitter." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UParticleModuleVelocityInheritParent, Scale), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVelocityInheritParent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::ClassParams = {
		&UParticleModuleVelocityInheritParent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVelocityInheritParent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UParticleModuleVelocityInheritParent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UParticleModuleVelocityInheritParent, 1289248115);
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVelocityInheritParent>()
	{
		return UParticleModuleVelocityInheritParent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UParticleModuleVelocityInheritParent(Z_Construct_UClass_UParticleModuleVelocityInheritParent, &UParticleModuleVelocityInheritParent::StaticClass, TEXT("/Script/Engine"), TEXT("UParticleModuleVelocityInheritParent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVelocityInheritParent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
