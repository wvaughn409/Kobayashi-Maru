// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperCharacter() {}
// Cross Module References
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
// End Cross Module References
	void APaperCharacter::StaticRegisterNativesAPaperCharacter()
	{
	}
	UClass* Z_Construct_UClass_APaperCharacter_NoRegister()
	{
		return APaperCharacter::StaticClass();
	}
	struct Z_Construct_UClass_APaperCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaperCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// APaperCharacter behaves like ACharacter, but uses a UPaperFlipbookComponent instead of a USkeletalMeshComponent as a visual representation\n// Note: The variable named Mesh will not be set up on this actor!\n" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PaperCharacter.h" },
		{ "ModuleRelativePath", "Classes/PaperCharacter.h" },
		{ "ToolTip", "APaperCharacter behaves like ACharacter, but uses a UPaperFlipbookComponent instead of a USkeletalMeshComponent as a visual representation\nNote: The variable named Mesh will not be set up on this actor!" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Character" },
		{ "Comment", "/** The main skeletal mesh associated with this Character (optional sub-object). */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/PaperCharacter.h" },
		{ "ToolTip", "The main skeletal mesh associated with this Character (optional sub-object)." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaperCharacter, Sprite), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaperCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaperCharacter_Statics::NewProp_Sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaperCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaperCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaperCharacter_Statics::ClassParams = {
		&APaperCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaperCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaperCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaperCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaperCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaperCharacter, 1893975726);
	template<> PAPER2D_API UClass* StaticClass<APaperCharacter>()
	{
		return APaperCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaperCharacter(Z_Construct_UClass_APaperCharacter, &APaperCharacter::StaticClass, TEXT("/Script/Paper2D"), TEXT("APaperCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaperCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
