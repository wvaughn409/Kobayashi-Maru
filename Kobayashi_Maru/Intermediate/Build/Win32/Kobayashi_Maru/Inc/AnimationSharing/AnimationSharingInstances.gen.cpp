// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationSharing/Public/AnimationSharingInstances.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationSharingInstances() {}
// Cross Module References
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingStateInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_AnimationSharing();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingTransitionInstance();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister();
	ANIMATIONSHARING_API UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance();
// End Cross Module References
	DEFINE_FUNCTION(UAnimSharingStateInstance::execGetInstancedActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetInstancedActors(Z_Param_Out_Actors);
		P_NATIVE_END;
	}
	void UAnimSharingStateInstance::StaticRegisterNativesUAnimSharingStateInstance()
	{
		UClass* Class = UAnimSharingStateInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetInstancedActors", &UAnimSharingStateInstance::execGetInstancedActors },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics
	{
		struct AnimSharingStateInstance_eventGetInstancedActors_Parms
		{
			TArray<AActor*> Actors;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimSharingStateInstance_eventGetInstancedActors_Parms, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::NewProp_Actors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimSharingStateInstance, nullptr, "GetInstancedActors", nullptr, nullptr, sizeof(AnimSharingStateInstance_eventGetInstancedActors_Parms), Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimSharingStateInstance_NoRegister()
	{
		return UAnimSharingStateInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingStateInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStateBool_MetaData[];
#endif
		static void NewProp_bStateBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStateBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PermutationTimeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PermutationTimeOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationToPlay_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimationToPlay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingStateInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimSharingStateInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimSharingStateInstance_GetInstancedActors, "GetInstancedActors" }, // 1799952940
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingStateInstance, Instance), Z_Construct_UClass_UAnimSharingInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	void Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_SetBit(void* Obj)
	{
		((UAnimSharingStateInstance*)Obj)->bStateBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool = { "bStateBool", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSharingStateInstance), &Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingStateInstance, PlayRate), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset = { "PermutationTimeOffset", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingStateInstance, PermutationTimeOffset), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay_MetaData[] = {
		{ "Category", "AnimationSharing" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingStateInstance, AnimationToPlay), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_Instance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_bStateBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_PermutationTimeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingStateInstance_Statics::NewProp_AnimationToPlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingStateInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingStateInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingStateInstance_Statics::ClassParams = {
		&UAnimSharingStateInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingStateInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingStateInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSharingStateInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSharingStateInstance, 2109477551);
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingStateInstance>()
	{
		return UAnimSharingStateInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSharingStateInstance(Z_Construct_UClass_UAnimSharingStateInstance, &UAnimSharingStateInstance::StaticClass, TEXT("/Script/AnimationSharing"), TEXT("UAnimSharingStateInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingStateInstance);
	void UAnimSharingTransitionInstance::StaticRegisterNativesUAnimSharingTransitionInstance()
	{
	}
	UClass* Z_Construct_UClass_UAnimSharingTransitionInstance_NoRegister()
	{
		return UAnimSharingTransitionInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingTransitionInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlendBool_MetaData[];
#endif
		static void NewProp_bBlendBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlendBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ToComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_FromComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	void Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_SetBit(void* Obj)
	{
		((UAnimSharingTransitionInstance*)Obj)->bBlendBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool = { "bBlendBool", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSharingTransitionInstance), &Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingTransitionInstance, BlendTime), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent = { "ToComponent", nullptr, (EPropertyFlags)0x002408000009201d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingTransitionInstance, ToComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent_MetaData[] = {
		{ "Category", "Transition" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent = { "FromComponent", nullptr, (EPropertyFlags)0x002408000009201d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingTransitionInstance, FromComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_bBlendBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_BlendTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_ToComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::NewProp_FromComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingTransitionInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::ClassParams = {
		&UAnimSharingTransitionInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingTransitionInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSharingTransitionInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSharingTransitionInstance, 1282624850);
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingTransitionInstance>()
	{
		return UAnimSharingTransitionInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSharingTransitionInstance(Z_Construct_UClass_UAnimSharingTransitionInstance, &UAnimSharingTransitionInstance::StaticClass, TEXT("/Script/AnimationSharing"), TEXT("UAnimSharingTransitionInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingTransitionInstance);
	void UAnimSharingAdditiveInstance::StaticRegisterNativesUAnimSharingAdditiveInstance()
	{
	}
	UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance_NoRegister()
	{
		return UAnimSharingAdditiveInstance::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStateBool_MetaData[];
#endif
		static void NewProp_bStateBool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStateBool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditiveAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AdditiveAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_BaseComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationSharing,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "AnimationSharingInstances.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	void Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_SetBit(void* Obj)
	{
		((UAnimSharingAdditiveInstance*)Obj)->bStateBool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool = { "bStateBool", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimSharingAdditiveInstance), &Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0020080000012015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingAdditiveInstance, Alpha), METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation = { "AdditiveAnimation", nullptr, (EPropertyFlags)0x0024080000012015, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingAdditiveInstance, AdditiveAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent_MetaData[] = {
		{ "Category", "Additive" },
		{ "ModuleRelativePath", "Public/AnimationSharingInstances.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent = { "BaseComponent", nullptr, (EPropertyFlags)0x002408000009201d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimSharingAdditiveInstance, BaseComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_bStateBool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_AdditiveAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::NewProp_BaseComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSharingAdditiveInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::ClassParams = {
		&UAnimSharingAdditiveInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::PropPointers),
		0,
		0x008000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSharingAdditiveInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimSharingAdditiveInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimSharingAdditiveInstance, 2705004398);
	template<> ANIMATIONSHARING_API UClass* StaticClass<UAnimSharingAdditiveInstance>()
	{
		return UAnimSharingAdditiveInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimSharingAdditiveInstance(Z_Construct_UClass_UAnimSharingAdditiveInstance, &UAnimSharingAdditiveInstance::StaticClass, TEXT("/Script/AnimationSharing"), TEXT("UAnimSharingAdditiveInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSharingAdditiveInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
