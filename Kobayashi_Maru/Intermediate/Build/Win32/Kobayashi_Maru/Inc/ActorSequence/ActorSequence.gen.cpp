// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequence/Public/ActorSequence.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequence() {}
// Cross Module References
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence_NoRegister();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequence();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
	ACTORSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScene_NoRegister();
// End Cross Module References
	void UActorSequence::StaticRegisterNativesUActorSequence()
	{
	}
	UClass* Z_Construct_UClass_UActorSequence_NoRegister()
	{
		return UActorSequence::StaticClass();
	}
	struct Z_Construct_UClass_UActorSequence_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasBeenInitialized_MetaData[];
#endif
		static void NewProp_bHasBeenInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasBeenInitialized;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectReferences_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectReferences;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovieScene_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovieScene;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSequence_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequence,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Movie scene animation embedded within an actor.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "ActorSequence.h" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene animation embedded within an actor." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
	};
#endif
	void Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_SetBit(void* Obj)
	{
		((UActorSequence*)Obj)->bHasBeenInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized = { "bHasBeenInitialized", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UActorSequence), &Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences_MetaData[] = {
		{ "Comment", "/** Collection of object references. */" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ToolTip", "Collection of object references." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences = { "ObjectReferences", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequence, ObjectReferences), Z_Construct_UScriptStruct_FActorSequenceObjectReferenceMap, METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene_MetaData[] = {
		{ "Comment", "/** Pointer to the movie scene that controls this animation. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorSequence.h" },
		{ "ToolTip", "Pointer to the movie scene that controls this animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene = { "MovieScene", nullptr, (EPropertyFlags)0x0042000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequence, MovieScene), Z_Construct_UClass_UMovieScene_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSequence_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_bHasBeenInitialized,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_ObjectReferences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequence_Statics::NewProp_MovieScene,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSequence_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSequence>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorSequence_Statics::ClassParams = {
		&UActorSequence::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorSequence_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequence_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSequence()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorSequence_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSequence, 3286054527);
	template<> ACTORSEQUENCE_API UClass* StaticClass<UActorSequence>()
	{
		return UActorSequence::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSequence(Z_Construct_UClass_UActorSequence, &UActorSequence::StaticClass, TEXT("/Script/ActorSequence"), TEXT("UActorSequence"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequence);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
