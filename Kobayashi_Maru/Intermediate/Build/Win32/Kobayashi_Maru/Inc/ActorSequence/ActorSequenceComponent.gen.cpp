// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequence/Public/ActorSequenceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequenceComponent() {}
// Cross Module References
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequenceComponent_NoRegister();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequenceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
// End Cross Module References
	void UActorSequenceComponent::StaticRegisterNativesUActorSequenceComponent()
	{
	}
	UClass* Z_Construct_UClass_UActorSequenceComponent_NoRegister()
	{
		return UActorSequenceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorSequenceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSequenceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Sequence" },
		{ "Comment", "/**\n * Movie scene animation embedded within an actor.\n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "HideCategories", "Collision Cooking Activation" },
		{ "IncludePath", "ActorSequenceComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Movie scene animation embedded within an actor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequenceComponent, SequencePlayer), Z_Construct_UClass_UActorSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Embedded actor sequence data */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
		{ "ToolTip", "Embedded actor sequence data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0022080000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequenceComponent, Sequence), Z_Construct_UClass_UActorSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/ActorSequenceComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActorSequenceComponent, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorSequenceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_SequencePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_Sequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorSequenceComponent_Statics::NewProp_PlaybackSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSequenceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSequenceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorSequenceComponent_Statics::ClassParams = {
		&UActorSequenceComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorSequenceComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSequenceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequenceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSequenceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorSequenceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSequenceComponent, 1785622960);
	template<> ACTORSEQUENCE_API UClass* StaticClass<UActorSequenceComponent>()
	{
		return UActorSequenceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSequenceComponent(Z_Construct_UClass_UActorSequenceComponent, &UActorSequenceComponent::StaticClass, TEXT("/Script/ActorSequence"), TEXT("UActorSequenceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequenceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
