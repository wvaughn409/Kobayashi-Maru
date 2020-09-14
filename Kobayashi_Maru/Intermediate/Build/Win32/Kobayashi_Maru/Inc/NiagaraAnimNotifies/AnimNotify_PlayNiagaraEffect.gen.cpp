// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraAnimNotifies/Public/AnimNotify_PlayNiagaraEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayNiagaraEffect() {}
// Cross Module References
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_NoRegister();
	NIAGARAANIMNOTIFIES_API UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	UPackage* Z_Construct_UPackage__Script_NiagaraAnimNotifies();
	ENGINE_API UClass* Z_Construct_UClass_UFXSystemComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAnimNotify_PlayNiagaraEffect::execGetSpawnedEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UFXSystemComponent**)Z_Param__Result=P_THIS->GetSpawnedEffect();
		P_NATIVE_END;
	}
	void UAnimNotify_PlayNiagaraEffect::StaticRegisterNativesUAnimNotify_PlayNiagaraEffect()
	{
		UClass* Class = UAnimNotify_PlayNiagaraEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnedEffect", &UAnimNotify_PlayNiagaraEffect::execGetSpawnedEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics
	{
		struct AnimNotify_PlayNiagaraEffect_eventGetSpawnedEffect_Parms
		{
			UFXSystemComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AnimNotify_PlayNiagaraEffect_eventGetSpawnedEffect_Parms, ReturnValue), Z_Construct_UClass_UFXSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Return FXSystemComponent created from SpawnEffect\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Return FXSystemComponent created from SpawnEffect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect, nullptr, "GetSpawnedEffect", nullptr, nullptr, sizeof(AnimNotify_PlayNiagaraEffect_eventGetSpawnedEffect_Parms), Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_NoRegister()
	{
		return UAnimNotify_PlayNiagaraEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Attached_MetaData[];
#endif
		static void NewProp_Attached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Attached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Template;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraAnimNotifies,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotify_PlayNiagaraEffect_GetSpawnedEffect, "GetSpawnedEffect" }, // 2829087098
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Play Niagara Particle Effect" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotify_PlayNiagaraEffect.h" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName_MetaData[] = {
		{ "AnimNotifyBoneName", "true" },
		{ "Category", "AnimNotify" },
		{ "Comment", "// SocketName to attach to\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "SocketName to attach to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, SocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Should attach to the bone/socket\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Should attach to the bone/socket" },
	};
#endif
	void Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_SetBit(void* Obj)
	{
		((UAnimNotify_PlayNiagaraEffect*)Obj)->Attached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached = { "Attached", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAnimNotify_PlayNiagaraEffect), &Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Scale to spawn the Niagara system at\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Scale to spawn the Niagara system at" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000011, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Rotation offset from socket\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Rotation offset from socket" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Location offset from the socket\n" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Location offset from the socket" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "// Niagara System to Spawn\n" },
		{ "DisplayName", "Niagara System" },
		{ "ModuleRelativePath", "Public/AnimNotify_PlayNiagaraEffect.h" },
		{ "ToolTip", "Niagara System to Spawn" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimNotify_PlayNiagaraEffect, Template), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Attached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_RotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_LocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::NewProp_Template,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayNiagaraEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::ClassParams = {
		&UAnimNotify_PlayNiagaraEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::PropPointers),
		0,
		0x001120A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimNotify_PlayNiagaraEffect, 3007133926);
	template<> NIAGARAANIMNOTIFIES_API UClass* StaticClass<UAnimNotify_PlayNiagaraEffect>()
	{
		return UAnimNotify_PlayNiagaraEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimNotify_PlayNiagaraEffect(Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect, &UAnimNotify_PlayNiagaraEffect::StaticClass, TEXT("/Script/NiagaraAnimNotifies"), TEXT("UAnimNotify_PlayNiagaraEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayNiagaraEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
