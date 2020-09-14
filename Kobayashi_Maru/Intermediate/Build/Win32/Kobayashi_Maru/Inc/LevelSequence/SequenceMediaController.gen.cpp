// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/SequenceMediaController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceMediaController() {}
// Cross Module References
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceMediaController_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceMediaController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaComponent_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALevelSequenceMediaController::execOnRep_ServerStartTimeSeconds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ServerStartTimeSeconds();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceMediaController::execSynchronizeToServer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DesyncThresholdSeconds);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SynchronizeToServer(Z_Param_DesyncThresholdSeconds);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceMediaController::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALevelSequenceActor**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceMediaController::execGetMediaComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaComponent**)Z_Param__Result=P_THIS->GetMediaComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceMediaController::execPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Play();
		P_NATIVE_END;
	}
	void ALevelSequenceMediaController::StaticRegisterNativesALevelSequenceMediaController()
	{
		UClass* Class = ALevelSequenceMediaController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMediaComponent", &ALevelSequenceMediaController::execGetMediaComponent },
			{ "GetSequence", &ALevelSequenceMediaController::execGetSequence },
			{ "OnRep_ServerStartTimeSeconds", &ALevelSequenceMediaController::execOnRep_ServerStartTimeSeconds },
			{ "Play", &ALevelSequenceMediaController::execPlay },
			{ "SynchronizeToServer", &ALevelSequenceMediaController::execSynchronizeToServer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics
	{
		struct LevelSequenceMediaController_eventGetMediaComponent_Parms
		{
			UMediaComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceMediaController_eventGetMediaComponent_Parms, ReturnValue), Z_Construct_UClass_UMediaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Access this actor's media component\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Access this actor's media component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "GetMediaComponent", nullptr, nullptr, sizeof(LevelSequenceMediaController_eventGetMediaComponent_Parms), Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics
	{
		struct LevelSequenceMediaController_eventGetSequence_Parms
		{
			ALevelSequenceActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceMediaController_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Access this actor's Level Sequence Actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Access this actor's Level Sequence Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "GetSequence", nullptr, nullptr, sizeof(LevelSequenceMediaController_eventGetSequence_Parms), Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "OnRep_ServerStartTimeSeconds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "Play", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_Play()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_Play_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics
	{
		struct LevelSequenceMediaController_eventSynchronizeToServer_Parms
		{
			float DesyncThresholdSeconds;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DesyncThresholdSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::NewProp_DesyncThresholdSeconds = { "DesyncThresholdSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceMediaController_eventSynchronizeToServer_Parms, DesyncThresholdSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::NewProp_DesyncThresholdSeconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Synchronization" },
		{ "Comment", "/**\n\x09 * Forcibly synchronize the sequence to the server's position if it has diverged by more than the specified threshold\n\x09 */" },
		{ "CPP_Default_DesyncThresholdSeconds", "2.000000" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Forcibly synchronize the sequence to the server's position if it has diverged by more than the specified threshold" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceMediaController, nullptr, "SynchronizeToServer", nullptr, nullptr, sizeof(LevelSequenceMediaController_eventSynchronizeToServer_Parms), Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelSequenceMediaController_NoRegister()
	{
		return ALevelSequenceMediaController::StaticClass();
	}
	struct Z_Construct_UClass_ALevelSequenceMediaController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ServerStartTimeSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ServerStartTimeSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MediaComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MediaComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelSequenceMediaController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelSequenceMediaController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_GetMediaComponent, "GetMediaComponent" }, // 2356237156
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_GetSequence, "GetSequence" }, // 3575563307
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_OnRep_ServerStartTimeSeconds, "OnRep_ServerStartTimeSeconds" }, // 2141860456
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_Play, "Play" }, // 3140075721
		{ &Z_Construct_UFunction_ALevelSequenceMediaController_SynchronizeToServer, "SynchronizeToServer" }, // 574722761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceMediaController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Replicated actor class that is responsible for instigating various cinematic assets (Media, Audio, Level Sequences) in a synchronized fasion\n */" },
		{ "HideCategories", "Rendering Physics LOD Activation Input Collision" },
		{ "IncludePath", "SequenceMediaController.h" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Replicated actor class that is responsible for instigating various cinematic assets (Media, Audio, Level Sequences) in a synchronized fasion" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_ServerStartTimeSeconds_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Synchronization" },
		{ "Comment", "/** Replicated time at which the server started the sequence (taken from AGameStateBase::GetServerWorldTimeSeconds) */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Replicated time at which the server started the sequence (taken from AGameStateBase::GetServerWorldTimeSeconds)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_ServerStartTimeSeconds = { "ServerStartTimeSeconds", "OnRep_ServerStartTimeSeconds", (EPropertyFlags)0x0040000100000034, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceMediaController, ServerStartTimeSeconds), METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_ServerStartTimeSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_ServerStartTimeSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_MediaComponent_MetaData[] = {
		{ "BlueprintGetter", "GetMediaComponent" },
		{ "Category", "Synchronization" },
		{ "Comment", "/** Media component that contains the media player to synchronize with */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Media component that contains the media player to synchronize with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_MediaComponent = { "MediaComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceMediaController, MediaComponent), Z_Construct_UClass_UMediaComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_MediaComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_MediaComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_Sequence_MetaData[] = {
		{ "BlueprintGetter", "GetSequence" },
		{ "Category", "Synchronization" },
		{ "Comment", "/** Pointer to the sequence actor to use for playback */" },
		{ "ModuleRelativePath", "Public/SequenceMediaController.h" },
		{ "ToolTip", "Pointer to the sequence actor to use for playback" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceMediaController, Sequence), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_Sequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSequenceMediaController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_ServerStartTimeSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_MediaComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceMediaController_Statics::NewProp_Sequence,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieSceneCustomClockSource_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceMediaController, IMovieSceneCustomClockSource), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelSequenceMediaController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSequenceMediaController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelSequenceMediaController_Statics::ClassParams = {
		&ALevelSequenceMediaController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelSequenceMediaController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceMediaController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceMediaController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelSequenceMediaController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelSequenceMediaController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelSequenceMediaController, 3471218504);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ALevelSequenceMediaController>()
	{
		return ALevelSequenceMediaController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelSequenceMediaController(Z_Construct_UClass_ALevelSequenceMediaController, &ALevelSequenceMediaController::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ALevelSequenceMediaController"), false, nullptr, nullptr, nullptr);

	void ALevelSequenceMediaController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ServerStartTimeSeconds(TEXT("ServerStartTimeSeconds"));

		const bool bIsValid = true
			&& Name_ServerStartTimeSeconds == ClassReps[(int32)ENetFields_Private::ServerStartTimeSeconds].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelSequenceMediaController"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceMediaController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
