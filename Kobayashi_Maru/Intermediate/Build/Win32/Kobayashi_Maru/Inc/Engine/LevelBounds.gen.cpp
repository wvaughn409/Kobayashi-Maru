// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Engine/Classes/Engine/LevelBounds.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelBounds() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ALevelBounds_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ALevelBounds();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Engine();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ALevelBounds::StaticRegisterNativesALevelBounds()
	{
	}
	UClass* Z_Construct_UClass_ALevelBounds_NoRegister()
	{
		return ALevelBounds::StaticClass();
	}
	struct Z_Construct_UClass_ALevelBounds_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoUpdateBounds_MetaData[];
#endif
		static void NewProp_bAutoUpdateBounds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoUpdateBounds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelBounds_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelBounds_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n * Defines level bounds\n * Updates bounding box automatically based on actors transformation changes or holds fixed user defined bounding box\n * Uses only actors where AActor::IsLevelBoundsRelevant() == true\n */" },
		{ "HideCategories", "Advanced Collision Display Rendering Physics Input" },
		{ "IncludePath", "Engine/LevelBounds.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Defines level bounds\nUpdates bounding box automatically based on actors transformation changes or holds fixed user defined bounding box\nUses only actors where AActor::IsLevelBoundsRelevant() == true" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_MetaData[] = {
		{ "Category", "LevelBounds" },
		{ "Comment", "/** Whether to automatically update actor bounds based on all relevant actors bounds belonging to the same level */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
		{ "ToolTip", "Whether to automatically update actor bounds based on all relevant actors bounds belonging to the same level" },
	};
#endif
	void Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_SetBit(void* Obj)
	{
		((ALevelBounds*)Obj)->bAutoUpdateBounds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds = { "bAutoUpdateBounds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALevelBounds), &Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelBounds_Statics::NewProp_BoxComponent_MetaData[] = {
		{ "Category", "LevelBounds" },
		{ "Comment", "/** Bounding box for the level bounds. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/LevelBounds.h" },
		{ "ToolTip", "Bounding box for the level bounds." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelBounds_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelBounds, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelBounds_Statics::NewProp_BoxComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::NewProp_BoxComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelBounds_Statics::NewProp_bAutoUpdateBounds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelBounds_Statics::NewProp_BoxComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelBounds_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelBounds>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelBounds_Statics::ClassParams = {
		&ALevelBounds::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALevelBounds_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelBounds_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelBounds_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelBounds()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelBounds_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelBounds, 3176071059);
	template<> ENGINE_API UClass* StaticClass<ALevelBounds>()
	{
		return ALevelBounds::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelBounds(Z_Construct_UClass_ALevelBounds, &ALevelBounds::StaticClass, TEXT("/Script/Engine"), TEXT("ALevelBounds"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelBounds);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
