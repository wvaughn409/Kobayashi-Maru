// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequence/Public/LevelSequenceActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceActor() {}
// Cross Module References
	LEVELSEQUENCE_API UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequencePlayer_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequenceCameraSettings();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "OnLevelSequenceLoaded__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FBoundActorProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LEVELSEQUENCE_API uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoundActorProxy, Z_Construct_UPackage__Script_LevelSequence(), TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash());
	}
	return Singleton;
}
template<> LEVELSEQUENCE_API UScriptStruct* StaticStruct<FBoundActorProxy>()
{
	return FBoundActorProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBoundActorProxy(FBoundActorProxy::StaticStruct, TEXT("/Script/LevelSequence"), TEXT("BoundActorProxy"), false, nullptr, nullptr);
static struct FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy
{
	FScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BoundActorProxy")),new UScriptStruct::TCppStructOps<FBoundActorProxy>);
	}
} ScriptStruct_LevelSequence_StaticRegisterNativesFBoundActorProxy;
	struct Z_Construct_UScriptStruct_FBoundActorProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoundActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoundActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoundActorProxy>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Specifies the actor to override the binding with */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Specifies the actor to override the binding with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor = { "BoundActor", nullptr, (EPropertyFlags)0x0010040800000801, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBoundActorProxy, BoundActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoundActorProxy_Statics::NewProp_BoundActor,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
		nullptr,
		&NewStructOps,
		"BoundActorProxy",
		sizeof(FBoundActorProxy),
		alignof(FBoundActorProxy),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoundActorProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBoundActorProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_LevelSequence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BoundActorProxy"), sizeof(FBoundActorProxy), Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBoundActorProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBoundActorProxy_Hash() { return 2793696057U; }
	void ULevelSequenceBurnInInitSettings::StaticRegisterNativesULevelSequenceBurnInInitSettings()
	{
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInInitSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams = {
		&ULevelSequenceBurnInInitSettings::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInInitSettings, 3095856126);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInInitSettings>()
	{
		return ULevelSequenceBurnInInitSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInInitSettings(Z_Construct_UClass_ULevelSequenceBurnInInitSettings, &ULevelSequenceBurnInInitSettings::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInInitSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInInitSettings);
	DEFINE_FUNCTION(ULevelSequenceBurnInOptions::execSetBurnIn)
	{
		P_GET_STRUCT(FSoftClassPath,Z_Param_InBurnInClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBurnIn(Z_Param_InBurnInClass);
		P_NATIVE_END;
	}
	void ULevelSequenceBurnInOptions::StaticRegisterNativesULevelSequenceBurnInOptions()
	{
		UClass* Class = ULevelSequenceBurnInOptions::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetBurnIn", &ULevelSequenceBurnInOptions::execSetBurnIn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics
	{
		struct LevelSequenceBurnInOptions_eventSetBurnIn_Parms
		{
			FSoftClassPath InBurnInClass;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InBurnInClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass = { "InBurnInClass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceBurnInOptions_eventSetBurnIn_Parms, InBurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::NewProp_InBurnInClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams[] = {
		{ "Category", "General" },
		{ "Comment", "/** Loads the specified class path and initializes an instance, then stores it in Settings. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Loads the specified class path and initializes an instance, then stores it in Settings." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnInOptions, nullptr, "SetBurnIn", nullptr, nullptr, sizeof(LevelSequenceBurnInOptions_eventSetBurnIn_Parms), Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurnInClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseBurnIn_MetaData[];
#endif
		static void NewProp_bUseBurnIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseBurnIn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceBurnInOptions_SetBurnIn, "SetBurnIn" }, // 4212969455
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceBurnInOptions, Settings), Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData[] = {
		{ "Category", "General" },
		{ "EditCondition", "bUseBurnIn" },
		{ "MetaClass", "LevelSequenceBurnIn" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass = { "BurnInClass", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelSequenceBurnInOptions, BurnInClass), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit(void* Obj)
	{
		((ULevelSequenceBurnInOptions*)Obj)->bUseBurnIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn = { "bUseBurnIn", nullptr, (EPropertyFlags)0x0010000000004005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULevelSequenceBurnInOptions), &Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_Settings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_BurnInClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::NewProp_bUseBurnIn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnInOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams = {
		&ULevelSequenceBurnInOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::PropPointers),
		0,
		0x00B004A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnInOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelSequenceBurnInOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelSequenceBurnInOptions, 2572360725);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnInOptions>()
	{
		return ULevelSequenceBurnInOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelSequenceBurnInOptions(Z_Construct_UClass_ULevelSequenceBurnInOptions, &ULevelSequenceBurnInOptions::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ULevelSequenceBurnInOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnInOptions);
	DEFINE_FUNCTION(ALevelSequenceActor::execFindNamedBindings)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FMovieSceneObjectBindingID>*)Z_Param__Result=P_THIS->FindNamedBindings(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execFindNamedBinding)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMovieSceneObjectBindingID*)Z_Param__Result=P_THIS->FindNamedBinding(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execResetBindings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBindings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execResetBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetBinding(Z_Param_Binding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execRemoveBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBindingByTag(Z_Param_Tag,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execRemoveBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveBinding(Z_Param_Binding,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execAddBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingTag);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBindingByTag(Z_Param_BindingTag,Z_Param_Actor,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execAddBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBinding(Z_Param_Binding,Z_Param_Actor,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetBindingByTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BindingTag);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBindingByTag(Z_Param_BindingTag,Z_Param_Out_Actors,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetBinding)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_Binding);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_GET_UBOOL(Z_Param_bAllowBindingsFromAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBinding(Z_Param_Binding,Z_Param_Out_Actors,Z_Param_bAllowBindingsFromAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execShowBurnin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowBurnin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execHideBurnin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideBurnin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execGetSequencePlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequencePlayer**)Z_Param__Result=P_THIS->GetSequencePlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetReplicatePlayback)
	{
		P_GET_UBOOL(Z_Param_ReplicatePlayback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReplicatePlayback(Z_Param_ReplicatePlayback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetEventReceivers)
	{
		P_GET_TARRAY(AActor*,Z_Param_AdditionalReceivers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventReceivers(Z_Param_AdditionalReceivers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execSetSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_InSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSequence(Z_Param_InSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execLoadSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->LoadSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALevelSequenceActor::execGetSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetSequence();
		P_NATIVE_END;
	}
	void ALevelSequenceActor::StaticRegisterNativesALevelSequenceActor()
	{
		UClass* Class = ALevelSequenceActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBinding", &ALevelSequenceActor::execAddBinding },
			{ "AddBindingByTag", &ALevelSequenceActor::execAddBindingByTag },
			{ "FindNamedBinding", &ALevelSequenceActor::execFindNamedBinding },
			{ "FindNamedBindings", &ALevelSequenceActor::execFindNamedBindings },
			{ "GetSequence", &ALevelSequenceActor::execGetSequence },
			{ "GetSequencePlayer", &ALevelSequenceActor::execGetSequencePlayer },
			{ "HideBurnin", &ALevelSequenceActor::execHideBurnin },
			{ "LoadSequence", &ALevelSequenceActor::execLoadSequence },
			{ "RemoveBinding", &ALevelSequenceActor::execRemoveBinding },
			{ "RemoveBindingByTag", &ALevelSequenceActor::execRemoveBindingByTag },
			{ "ResetBinding", &ALevelSequenceActor::execResetBinding },
			{ "ResetBindings", &ALevelSequenceActor::execResetBindings },
			{ "SetBinding", &ALevelSequenceActor::execSetBinding },
			{ "SetBindingByTag", &ALevelSequenceActor::execSetBindingByTag },
			{ "SetEventReceivers", &ALevelSequenceActor::execSetEventReceivers },
			{ "SetReplicatePlayback", &ALevelSequenceActor::execSetReplicatePlayback },
			{ "SetSequence", &ALevelSequenceActor::execSetSequence },
			{ "ShowBurnin", &ALevelSequenceActor::execShowBurnin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics
	{
		struct LevelSequenceActor_eventAddBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventAddBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventAddBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\x09 *\n\x09 * @param Binding Binding to modify\n\x09 * @param Actor Actor to bind\n\x09 * @param bAllowBindingsFromAsset Allow bindings from the level sequence asset\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Adds the specified actor to the overridden bindings for the specified binding ID, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actor Actor to bind\n@param bAllowBindingsFromAsset Allow bindings from the level sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "AddBinding", nullptr, nullptr, sizeof(LevelSequenceActor_eventAddBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics
	{
		struct LevelSequenceActor_eventAddBindingByTag_Parms
		{
			FName BindingTag;
			AActor* Actor;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindingTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventAddBindingByTag_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventAddBindingByTag_Parms), &Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBindingByTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_BindingTag = { "BindingTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventAddBindingByTag_Parms, BindingTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::NewProp_BindingTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Binds an actor to all the bindings tagged with the specified name in this sequence. Does not remove any exising bindings that have been set up through this API. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 *\n\x09 * @param BindingTag   The unique tag name to lookup bindings with\n\x09 * @param Actor        The actor to assign to all the tagged bindings\n\x09 * @param bAllowBindingsFromAsset Whether to continue to allow bindings from the level sequence asset (true) or not (false)\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Binds an actor to all the bindings tagged with the specified name in this sequence. Does not remove any exising bindings that have been set up through this API. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\n@param BindingTag   The unique tag name to lookup bindings with\n@param Actor        The actor to assign to all the tagged bindings\n@param bAllowBindingsFromAsset Whether to continue to allow bindings from the level sequence asset (true) or not (false)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "AddBindingByTag", nullptr, nullptr, sizeof(LevelSequenceActor_eventAddBindingByTag_Parms), Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics
	{
		struct LevelSequenceActor_eventFindNamedBinding_Parms
		{
			FName Tag;
			FMovieSceneObjectBindingID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBinding_Parms, ReturnValue), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBinding_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Retrieve the first object binding that has been tagged with the specified name\n\x09 */" },
		{ "DisplayName", "Find Binding by Tag" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Retrieve the first object binding that has been tagged with the specified name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "FindNamedBinding", nullptr, nullptr, sizeof(LevelSequenceActor_eventFindNamedBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics
	{
		struct LevelSequenceActor_eventFindNamedBindings_Parms
		{
			FName Tag;
			TArray<FMovieSceneObjectBindingID> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBindings_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventFindNamedBindings_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Retrieve all the bindings that have been tagged with the specified name\n\x09 *\n\x09 * @param Tag  The unique tag name to lookup bindings with. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 * @return An array containing all the bindings that are tagged with this name, potentially empty.\n\x09 */" },
		{ "DisplayName", "Find Bindings by Tag" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Retrieve all the bindings that have been tagged with the specified name\n\n@param Tag  The unique tag name to lookup bindings with. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n@return An array containing all the bindings that are tagged with this name, potentially empty." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "FindNamedBindings", nullptr, nullptr, sizeof(LevelSequenceActor_eventFindNamedBindings_Parms), Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics
	{
		struct LevelSequenceActor_eventGetSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventGetSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Get the level sequence being played by this actor.\n\x09 *\n\x09 * @return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n\x09 * @see SetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Get the level sequence being played by this actor.\n\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequence", nullptr, nullptr, sizeof(LevelSequenceActor_eventGetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics
	{
		struct LevelSequenceActor_eventGetSequencePlayer_Parms
		{
			ULevelSequencePlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventGetSequencePlayer_Parms, ReturnValue), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Access this actor's sequence player, or None if it is not yet initialized\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Access this actor's sequence player, or None if it is not yet initialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "GetSequencePlayer", nullptr, nullptr, sizeof(LevelSequenceActor_eventGetSequencePlayer_Parms), Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/* Hide burnin */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Hide burnin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "HideBurnin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_HideBurnin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_HideBurnin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics
	{
		struct LevelSequenceActor_eventLoadSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventLoadSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Get the level sequence being played by this actor.\n\x09 *\n\x09 * @return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n\x09 * @see SetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Get the level sequence being played by this actor.\n\n@return Level sequence, or nullptr if not assigned or if it cannot be loaded.\n@see SetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "LoadSequence", nullptr, nullptr, sizeof(LevelSequenceActor_eventLoadSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_LoadSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_LoadSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics
	{
		struct LevelSequenceActor_eventRemoveBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Removes the specified actor from the specified binding's actor array\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "RemoveBinding", nullptr, nullptr, sizeof(LevelSequenceActor_eventRemoveBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics
	{
		struct LevelSequenceActor_eventRemoveBindingByTag_Parms
		{
			FName Tag;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBindingByTag_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventRemoveBindingByTag_Parms, Tag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Removes the specified actor from the specified binding's actor array\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Removes the specified actor from the specified binding's actor array" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "RemoveBindingByTag", nullptr, nullptr, sizeof(LevelSequenceActor_eventRemoveBindingByTag_Parms), Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics
	{
		struct LevelSequenceActor_eventResetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventResetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Resets the specified binding back to the defaults defined by the Level Sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets the specified binding back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBinding", nullptr, nullptr, sizeof(LevelSequenceActor_eventResetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Resets all overridden bindings back to the defaults defined by the Level Sequence asset\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Resets all overridden bindings back to the defaults defined by the Level Sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ResetBindings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ResetBindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ResetBindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics
	{
		struct LevelSequenceActor_eventSetBinding_Parms
		{
			FMovieSceneObjectBindingID Binding;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetBinding_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetBinding_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBinding_Parms, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::NewProp_Binding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\x09 *\n\x09 * @param Binding Binding to modify\n\x09 * @param Actors Actors to bind\n\x09 * @param bAllowBindingsFromAsset Allow bindings from the level sequence asset\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Overrides the specified binding with the specified actors, optionally still allowing the bindings defined in the Level Sequence asset\n\n@param Binding Binding to modify\n@param Actors Actors to bind\n@param bAllowBindingsFromAsset Allow bindings from the level sequence asset" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetBinding", nullptr, nullptr, sizeof(LevelSequenceActor_eventSetBinding_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics
	{
		struct LevelSequenceActor_eventSetBindingByTag_Parms
		{
			FName BindingTag;
			TArray<AActor*> Actors;
			bool bAllowBindingsFromAsset;
		};
		static void NewProp_bAllowBindingsFromAsset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowBindingsFromAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BindingTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetBindingByTag_Parms*)Obj)->bAllowBindingsFromAsset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset = { "bAllowBindingsFromAsset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetBindingByTag_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBindingByTag_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_BindingTag = { "BindingTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetBindingByTag_Parms, BindingTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_bAllowBindingsFromAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::NewProp_BindingTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic|Bindings" },
		{ "Comment", "/**\n\x09 * Assigns an set of actors to all the bindings tagged with the specified name in this sequence. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\x09 *\n\x09 * @param BindingTag   The unique tag name to lookup bindings with\n\x09 * @param Actors       The actors to assign to all the tagged bindings\n\x09 * @param bAllowBindingsFromAsset Whether to continue to allow bindings from the level sequence asset (true) or not (false)\n\x09 */" },
		{ "CPP_Default_bAllowBindingsFromAsset", "false" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Assigns an set of actors to all the bindings tagged with the specified name in this sequence. Object Bindings can be tagged within the sequence UI by RMB -> Tags... on the object binding in the tree.\n\n@param BindingTag   The unique tag name to lookup bindings with\n@param Actors       The actors to assign to all the tagged bindings\n@param bAllowBindingsFromAsset Whether to continue to allow bindings from the level sequence asset (true) or not (false)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetBindingByTag", nullptr, nullptr, sizeof(LevelSequenceActor_eventSetBindingByTag_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics
	{
		struct LevelSequenceActor_eventSetEventReceivers_Parms
		{
			TArray<AActor*> AdditionalReceivers;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalReceivers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalReceivers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers = { "AdditionalReceivers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetEventReceivers_Parms, AdditionalReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers_Inner = { "AdditionalReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::NewProp_AdditionalReceivers_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Set an array of additional actors that will receive events triggerd from this sequence actor\n\x09 *\n\x09 * @param AdditionalReceivers An array of actors to receive events\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set an array of additional actors that will receive events triggerd from this sequence actor\n\n@param AdditionalReceivers An array of actors to receive events" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetEventReceivers", nullptr, nullptr, sizeof(LevelSequenceActor_eventSetEventReceivers_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics
	{
		struct LevelSequenceActor_eventSetReplicatePlayback_Parms
		{
			bool ReplicatePlayback;
		};
		static void NewProp_ReplicatePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReplicatePlayback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit(void* Obj)
	{
		((LevelSequenceActor_eventSetReplicatePlayback_Parms*)Obj)->ReplicatePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback = { "ReplicatePlayback", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LevelSequenceActor_eventSetReplicatePlayback_Parms), &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::NewProp_ReplicatePlayback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Set whether or not to replicate playback for this actor\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set whether or not to replicate playback for this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetReplicatePlayback", nullptr, nullptr, sizeof(LevelSequenceActor_eventSetReplicatePlayback_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics
	{
		struct LevelSequenceActor_eventSetSequence_Parms
		{
			ULevelSequence* InSequence;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence = { "InSequence", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelSequenceActor_eventSetSequence_Parms, InSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::NewProp_InSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Set the level sequence being played by this actor.\n\x09 *\n\x09 * @param InSequence The sequence object to set.\n\x09 * @see GetSequence\n\x09 */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Set the level sequence being played by this actor.\n\n@param InSequence The sequence object to set.\n@see GetSequence" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "SetSequence", nullptr, nullptr, sizeof(LevelSequenceActor_eventSetSequence_Parms), Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_SetSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_SetSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/* Show burnin */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Show burnin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALevelSequenceActor, nullptr, "ShowBurnin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister()
	{
		return ALevelSequenceActor::StaticClass();
	}
	struct Z_Construct_UClass_ALevelSequenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShowBurnin_MetaData[];
#endif
		static void NewProp_bShowBurnin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShowBurnin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultInstanceData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultInstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReplicatePlayback_MetaData[];
#endif
		static void NewProp_bReplicatePlayback_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReplicatePlayback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideInstanceData_MetaData[];
#endif
		static void NewProp_bOverrideInstanceData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideInstanceData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[];
#endif
		static void NewProp_bAutoPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BindingOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BindingOverrides;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurnInOptions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BurnInOptions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CameraSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalEventReceivers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AdditionalEventReceivers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalEventReceivers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SequencePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SequencePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlaybackSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaybackSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALevelSequenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALevelSequenceActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBinding, "AddBinding" }, // 2024415214
		{ &Z_Construct_UFunction_ALevelSequenceActor_AddBindingByTag, "AddBindingByTag" }, // 4068440921
		{ &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBinding, "FindNamedBinding" }, // 4135226228
		{ &Z_Construct_UFunction_ALevelSequenceActor_FindNamedBindings, "FindNamedBindings" }, // 468709052
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequence, "GetSequence" }, // 2847289901
		{ &Z_Construct_UFunction_ALevelSequenceActor_GetSequencePlayer, "GetSequencePlayer" }, // 1429941250
		{ &Z_Construct_UFunction_ALevelSequenceActor_HideBurnin, "HideBurnin" }, // 3884392409
		{ &Z_Construct_UFunction_ALevelSequenceActor_LoadSequence, "LoadSequence" }, // 149917668
		{ &Z_Construct_UDelegateFunction_ALevelSequenceActor_OnLevelSequenceLoaded__DelegateSignature, "OnLevelSequenceLoaded__DelegateSignature" }, // 4275053197
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBinding, "RemoveBinding" }, // 616509916
		{ &Z_Construct_UFunction_ALevelSequenceActor_RemoveBindingByTag, "RemoveBindingByTag" }, // 2961796342
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBinding, "ResetBinding" }, // 473209339
		{ &Z_Construct_UFunction_ALevelSequenceActor_ResetBindings, "ResetBindings" }, // 3061919977
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBinding, "SetBinding" }, // 201374604
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetBindingByTag, "SetBindingByTag" }, // 3509124552
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetEventReceivers, "SetEventReceivers" }, // 664369752
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetReplicatePlayback, "SetReplicatePlayback" }, // 421118076
		{ &Z_Construct_UFunction_ALevelSequenceActor_SetSequence, "SetSequence" }, // 4237468057
		{ &Z_Construct_UFunction_ALevelSequenceActor_ShowBurnin, "ShowBurnin" }, // 514821145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor responsible for controlling a specific level sequence in the world.\n */" },
		{ "HideCategories", "Rendering Physics LOD Activation Input" },
		{ "IncludePath", "LevelSequenceActor.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Actor responsible for controlling a specific level sequence in the world." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bShowBurnin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin = { "bShowBurnin", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData[] = {
		{ "Comment", "/** Burn-in widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Burn-in widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance = { "BurnInInstance", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, BurnInInstance), Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Instance data that can be used to dynamically control sequence evaluation at runtime */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Instance data that can be used to dynamically control sequence evaluation at runtime" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData = { "DefaultInstanceData", nullptr, (EPropertyFlags)0x001200000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, DefaultInstanceData), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData[] = {
		{ "BlueprintSetter", "SetReplicatePlayback" },
		{ "Category", "Replication" },
		{ "Comment", "/** If true, playback of this level sequence on the server will be synchronized across other clients */" },
		{ "DisplayName", "Replicate Playback" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "If true, playback of this level sequence on the server will be synchronized across other clients" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bReplicatePlayback = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback = { "bReplicatePlayback", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Enable specification of dynamic instance data to be supplied to the sequence during playback */" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Enable specification of dynamic instance data to be supplied to the sequence during playback" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bOverrideInstanceData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData = { "bOverrideInstanceData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	void Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
	{
		((ALevelSequenceActor*)Obj)->bAutoPlay_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ALevelSequenceActor), &Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "/** Mapping of actors to override the sequence bindings with */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ToolTip", "Mapping of actors to override the sequence bindings with" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides = { "BindingOverrides", nullptr, (EPropertyFlags)0x001200000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, BindingOverrides), Z_Construct_UClass_UMovieSceneBindingOverrides_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData[] = {
		{ "Category", "General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions = { "BurnInOptions", nullptr, (EPropertyFlags)0x001200000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, BurnInOptions), Z_Construct_UClass_ULevelSequenceBurnInOptions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings_MetaData[] = {
		{ "Category", "Cameras" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings = { "CameraSettings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, CameraSettings), Z_Construct_UScriptStruct_FLevelSequenceCameraSettings, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData[] = {
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers = { "AdditionalEventReceivers", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, AdditionalEventReceivers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_Inner = { "AdditionalEventReceivers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowedClasses", "LevelSequence" },
		{ "Category", "General" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, LevelSequence), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData[] = {
		{ "BlueprintGetter", "GetSequencePlayer" },
		{ "Category", "Playback" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Game|Cinematic" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer = { "SequencePlayer", nullptr, (EPropertyFlags)0x001200000008203c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, SequencePlayer), Z_Construct_UClass_ULevelSequencePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData[] = {
		{ "Category", "Playback" },
		{ "ModuleRelativePath", "Public/LevelSequenceActor.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings = { "PlaybackSettings", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALevelSequenceActor, PlaybackSettings), Z_Construct_UScriptStruct_FMovieSceneSequencePlaybackSettings, METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bShowBurnin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_DefaultInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bReplicatePlayback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bOverrideInstanceData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_bAutoPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BindingOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_BurnInOptions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_CameraSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_AdditionalEventReceivers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_SequencePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALevelSequenceActor_Statics::NewProp_PlaybackSettings,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALevelSequenceActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMovieScenePlaybackClient_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieScenePlaybackClient), false },
			{ Z_Construct_UClass_UMovieSceneBindingOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(ALevelSequenceActor, IMovieSceneBindingOwnerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALevelSequenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALevelSequenceActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams = {
		&ALevelSequenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALevelSequenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALevelSequenceActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALevelSequenceActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALevelSequenceActor, 2992007495);
	template<> LEVELSEQUENCE_API UClass* StaticClass<ALevelSequenceActor>()
	{
		return ALevelSequenceActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALevelSequenceActor(Z_Construct_UClass_ALevelSequenceActor, &ALevelSequenceActor::StaticClass, TEXT("/Script/LevelSequence"), TEXT("ALevelSequenceActor"), false, nullptr, nullptr, nullptr);

	void ALevelSequenceActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_SequencePlayer(TEXT("SequencePlayer"));

		const bool bIsValid = true
			&& Name_SequencePlayer == ClassReps[(int32)ENetFields_Private::SequencePlayer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALevelSequenceActor"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALevelSequenceActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
