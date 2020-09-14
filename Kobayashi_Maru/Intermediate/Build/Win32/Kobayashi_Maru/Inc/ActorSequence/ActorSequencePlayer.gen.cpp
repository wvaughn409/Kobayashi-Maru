// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorSequence/Public/ActorSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSequencePlayer() {}
// Cross Module References
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister();
	ACTORSEQUENCE_API UClass* Z_Construct_UClass_UActorSequencePlayer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	UPackage* Z_Construct_UPackage__Script_ActorSequence();
// End Cross Module References
	void UActorSequencePlayer::StaticRegisterNativesUActorSequencePlayer()
	{
	}
	UClass* Z_Construct_UClass_UActorSequencePlayer_NoRegister()
	{
		return UActorSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UActorSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_ActorSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UActorSequencePlayer is used to actually \"play\" an actor sequence asset at runtime.\n */" },
		{ "IncludePath", "ActorSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/ActorSequencePlayer.h" },
		{ "ToolTip", "UActorSequencePlayer is used to actually \"play\" an actor sequence asset at runtime." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActorSequencePlayer_Statics::ClassParams = {
		&UActorSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActorSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActorSequencePlayer, 506604566);
	template<> ACTORSEQUENCE_API UClass* StaticClass<UActorSequencePlayer>()
	{
		return UActorSequencePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActorSequencePlayer(Z_Construct_UClass_UActorSequencePlayer, &UActorSequencePlayer::StaticClass, TEXT("/Script/ActorSequence"), TEXT("UActorSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
