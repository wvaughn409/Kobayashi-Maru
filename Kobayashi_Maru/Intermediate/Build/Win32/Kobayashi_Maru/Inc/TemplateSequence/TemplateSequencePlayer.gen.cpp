// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TemplateSequence/Public/TemplateSequencePlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTemplateSequencePlayer() {}
// Cross Module References
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePlayer_NoRegister();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequencePlayer();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSequencePlayer();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_ATemplateSequenceActor_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_UTemplateSequence_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTemplateSequencePlayer::execCreateTemplateSequencePlayer)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTemplateSequence,Z_Param_TemplateSequence);
		P_GET_STRUCT(FMovieSceneSequencePlaybackSettings,Z_Param_Settings);
		P_GET_OBJECT_REF(ATemplateSequenceActor,Z_Param_Out_OutActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTemplateSequencePlayer**)Z_Param__Result=UTemplateSequencePlayer::CreateTemplateSequencePlayer(Z_Param_WorldContextObject,Z_Param_TemplateSequence,Z_Param_Settings,Z_Param_Out_OutActor);
		P_NATIVE_END;
	}
	void UTemplateSequencePlayer::StaticRegisterNativesUTemplateSequencePlayer()
	{
		UClass* Class = UTemplateSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateTemplateSequencePlayer", &UTemplateSequencePlayer::execCreateTemplateSequencePlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics
	{
		struct TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms
		{
			UObject* WorldContextObject;
			UTemplateSequence* TemplateSequence;
			FMovieSceneSequencePlaybackSettings Settings;
			ATemplateSequenceActor* OutActor;
			UTemplateSequencePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateSequence;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_UTemplateSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_OutActor = { "OutActor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, OutActor), Z_Construct_UClass_ATemplateSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, Settings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_TemplateSequence = { "TemplateSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, TemplateSequence), Z_Construct_UClass_UTemplateSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_OutActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_TemplateSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "DynamicOutputParam", "OutActor" },
		{ "ModuleRelativePath", "Public/TemplateSequencePlayer.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTemplateSequencePlayer, nullptr, "CreateTemplateSequencePlayer", nullptr, nullptr, sizeof(TemplateSequencePlayer_eventCreateTemplateSequencePlayer_Parms), Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTemplateSequencePlayer_NoRegister()
	{
		return UTemplateSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UTemplateSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTemplateSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSequencePlayer,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTemplateSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTemplateSequencePlayer_CreateTemplateSequencePlayer, "CreateTemplateSequencePlayer" }, // 1281148729
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTemplateSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TemplateSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/TemplateSequencePlayer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTemplateSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTemplateSequencePlayer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTemplateSequencePlayer_Statics::ClassParams = {
		&UTemplateSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTemplateSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTemplateSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTemplateSequencePlayer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTemplateSequencePlayer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTemplateSequencePlayer, 322203951);
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<UTemplateSequencePlayer>()
	{
		return UTemplateSequencePlayer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTemplateSequencePlayer(Z_Construct_UClass_UTemplateSequencePlayer, &UTemplateSequencePlayer::StaticClass, TEXT("/Script/TemplateSequence"), TEXT("UTemplateSequencePlayer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTemplateSequencePlayer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
