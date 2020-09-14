// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharing/Public/AnimationSharingManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingManager() {}
// Cross Module References
	ANIMATIONSHARING_API UScriptStruct* Z_Construct_UScriptStruct_FTickAnimationSharingFunction();
	UPackage* Z_Construct_UPackage__Script_AnimationSharing();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTickFunction();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingManager_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingManager();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimationSharingSetup_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
class UScriptStruct* FTickAnimationSharingFunction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONSHARING_API uint32 Get_Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTickAnimationSharingFunction, Z_Construct_UPackage__Script_AnimationSharing(), TEXT("TickAnimationSharingFunction"), sizeof(FTickAnimationSharingFunction), Get_Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Hash());
	}
	return Singleton;
}
template<> ANIMATIONSHARING_API UScriptStruct* StaticStruct<FTickAnimationSharingFunction>()
{
	return FTickAnimationSharingFunction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTickAnimationSharingFunction(FTickAnimationSharingFunction::StaticStruct, TEXT("/Script/AnimationSharing"), TEXT("TickAnimationSharingFunction"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationSharing_StaticRegisterNativesFTickAnimationSharingFunction
{
	FScriptStruct_AnimationSharing_StaticRegisterNativesFTickAnimationSharingFunction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TickAnimationSharingFunction")),new UScriptStruct::TCppStructOps<FTickAnimationSharingFunction>);
	}
} ScriptStruct_AnimationSharing_StaticRegisterNativesFTickAnimationSharingFunction;
	struct Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTickAnimationSharingFunction>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
		Z_Construct_UScriptStruct_FTickFunction,
		&NewStructOps,
		"TickAnimationSharingFunction",
		sizeof(FTickAnimationSharingFunction),
		alignof(FTickAnimationSharingFunction),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTickAnimationSharingFunction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationSharing();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TickAnimationSharingFunction"), sizeof(FTickAnimationSharingFunction), Get_Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTickAnimationSharingFunction_Hash() { return 1277585456U; }
	void UAnimSharingInstance::StaticRegisterNativesUAnimSharingInstance()
	{
	}
	UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister()
	{
		return UAnimSharingInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharingActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateEnum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UsedAnimationSequences_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UsedAnimationSequences;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UsedAnimationSequences_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateProcessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateProcessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegisteredActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegisteredActors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationSharingManager.h" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Actor to which all the running SkeletalMeshComponents used for the sharing are attached to */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Actor to which all the running SkeletalMeshComponents used for the sharing are attached to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor = { "SharingActor", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingInstance, SharingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Enum class set up by the user to 'describe' the animation states */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Enum class set up by the user to 'describe' the animation states" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum = { "StateEnum", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingInstance, StateEnum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences = { "UsedAnimationSequences", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingInstance, UsedAnimationSequences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_Inner = { "UsedAnimationSequences", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** (Blueprint)class instance used for determining the state enum value for each registered actor */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "(Blueprint)class instance used for determining the state enum value for each registered actor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor = { "StateProcessor", nullptr, (EPropertyFlags)0x0010000000002001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingInstance, StateProcessor), Z_Construct_UClass_UAnimationSharingStateProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Actors currently registered to be animation driven by the AnimManager using this setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Actors currently registered to be animation driven by the AnimManager using this setup" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors = { "RegisteredActors", nullptr, (EPropertyFlags)0x0010000000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingInstance, RegisteredActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_Inner = { "RegisteredActors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_SharingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_UsedAnimationSequences_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_StateProcessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingInstance_Statics::NewProp_RegisteredActors_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingInstance_Statics::ClassParams = {
		&UAnimSharingInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSharingInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSharingInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSharingInstance, 3530067932);
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingInstance>()
	{
		return UAnimSharingInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSharingInstance(Z_Construct_UClass_UAnimSharingInstance, &UAnimSharingInstance::StaticClass, TEXT("/Script/AnimationSharing"), TEXT("UAnimSharingInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingInstance);
	DEFINE_FUNCTION(UAnimationSharingManager::execAnimationSharingEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationSharingManager::AnimationSharingEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSharingManager::execRegisterActorWithSkeletonBP)
	{
		P_GET_OBJECT(AActor,Z_Param_InActor);
		P_GET_OBJECT(USkeleton,Z_Param_SharingSkeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterActorWithSkeletonBP(Z_Param_InActor,Z_Param_SharingSkeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSharingManager::execCreateAnimationSharingManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAnimationSharingSetup,Z_Param_Setup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAnimationSharingManager::CreateAnimationSharingManager(Z_Param_WorldContextObject,Z_Param_Setup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationSharingManager::execGetAnimationSharingManager)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimationSharingManager**)Z_Param__Result=UAnimationSharingManager::GetAnimationSharingManager(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	void UAnimationSharingManager::StaticRegisterNativesUAnimationSharingManager()
	{
		UClass* Class = UAnimationSharingManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimationSharingEnabled", &UAnimationSharingManager::execAnimationSharingEnabled },
			{ "CreateAnimationSharingManager", &UAnimationSharingManager::execCreateAnimationSharingManager },
			{ "GetAnimationSharingManager", &UAnimationSharingManager::execGetAnimationSharingManager },
			{ "RegisterActorWithSkeletonBP", &UAnimationSharingManager::execRegisterActorWithSkeletonBP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics
	{
		struct AnimationSharingManager_eventAnimationSharingEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationSharingManager_eventAnimationSharingEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationSharingManager_eventAnimationSharingEnabled_Parms), &Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Returns whether or not the animation sharing is enabled */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Returns whether or not the animation sharing is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "AnimationSharingEnabled", nullptr, nullptr, sizeof(AnimationSharingManager_eventAnimationSharingEnabled_Parms), Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics
	{
		struct AnimationSharingManager_eventCreateAnimationSharingManager_Parms
		{
			UObject* WorldContextObject;
			const UAnimationSharingSetup* Setup;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Setup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Setup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AnimationSharingManager_eventCreateAnimationSharingManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AnimationSharingManager_eventCreateAnimationSharingManager_Parms), &Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup = { "Setup", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingManager_eventCreateAnimationSharingManager_Parms, Setup), Z_Construct_UClass_UAnimationSharingSetup_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingManager_eventCreateAnimationSharingManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_Setup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Create an Animation Sharing Manager using the provided Setup */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Create an Animation Sharing Manager using the provided Setup" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "CreateAnimationSharingManager", nullptr, nullptr, sizeof(AnimationSharingManager_eventCreateAnimationSharingManager_Parms), Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics
	{
		struct AnimationSharingManager_eventGetAnimationSharingManager_Parms
		{
			UObject* WorldContextObject;
			UAnimationSharingManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingManager_eventGetAnimationSharingManager_Parms, ReturnValue), Z_Construct_UClass_UAnimationSharingManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingManager_eventGetAnimationSharingManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Returns the AnimationSharing Manager, nullptr if none was set up */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Returns the AnimationSharing Manager, nullptr if none was set up" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "GetAnimationSharingManager", nullptr, nullptr, sizeof(AnimationSharingManager_eventGetAnimationSharingManager_Parms), Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics
	{
		struct AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms
		{
			AActor* InActor;
			const USkeleton* SharingSkeleton;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharingSkeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SharingSkeleton;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton = { "SharingSkeleton", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms, SharingSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_InActor = { "InActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms, InActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_SharingSkeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::NewProp_InActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Register an Actor with this Animation Sharing manager, according to the SharingSkeleton */" },
		{ "DisplayName", "Register Actor" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Register an Actor with this Animation Sharing manager, according to the SharingSkeleton" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationSharingManager, nullptr, "RegisterActorWithSkeletonBP", nullptr, nullptr, sizeof(AnimationSharingManager_eventRegisterActorWithSkeletonBP_Parms), Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimationSharingManager_NoRegister()
	{
		return UAnimationSharingManager::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationSharingManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerSkeletonData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerSkeletonData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerSkeletonData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeletons_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Skeletons;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeletons_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationSharingManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationSharingManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationSharingManager_AnimationSharingEnabled, "AnimationSharingEnabled" }, // 3703284137
		{ &Z_Construct_UFunction_UAnimationSharingManager_CreateAnimationSharingManager, "CreateAnimationSharingManager" }, // 1112796558
		{ &Z_Construct_UFunction_UAnimationSharingManager_GetAnimationSharingManager, "GetAnimationSharingManager" }, // 59341888
		{ &Z_Construct_UFunction_UAnimationSharingManager_RegisterActorWithSkeletonBP, "RegisterActorWithSkeletonBP" }, // 2360556408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimationSharingManager.h" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "Comment", "/** Sharing data required for the unique Skeleton setups */" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "ToolTip", "Sharing data required for the unique Skeleton setups" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData = { "PerSkeletonData", nullptr, (EPropertyFlags)0x0020080000022001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSharingManager, PerSkeletonData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_Inner = { "PerSkeletonData", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAnimSharingInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_MetaData[] = {
		{ "Comment", "/** Array of unique skeletons, matches PerSkeletonData array entries*/" },
		{ "ModuleRelativePath", "Public/AnimationSharingManager.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "Array of unique skeletons, matches PerSkeletonData array entries" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons = { "Skeletons", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimationSharingManager, Skeletons), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_Inner = { "Skeletons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimationSharingManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_PerSkeletonData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimationSharingManager_Statics::NewProp_Skeletons_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationSharingManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationSharingManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimationSharingManager_Statics::ClassParams = {
		&UAnimationSharingManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimationSharingManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::PropPointers),
		0,
		0x001000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationSharingManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationSharingManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationSharingManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimationSharingManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimationSharingManager, 29206654);
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimationSharingManager>()
	{
		return UAnimationSharingManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimationSharingManager(Z_Construct_UClass_UAnimationSharingManager, &UAnimationSharingManager::StaticClass, TEXT("/Script/AnimationSharing"), TEXT("UAnimationSharingManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationSharingManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
