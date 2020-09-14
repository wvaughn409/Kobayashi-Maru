// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraActor() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANiagaraActor::execOnNiagaraSystemFinished)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_FinishedComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNiagaraSystemFinished(Z_Param_FinishedComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANiagaraActor::execSetDestroyOnSystemFinish)
	{
		P_GET_UBOOL(Z_Param_bShouldDestroyOnSystemFinish);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDestroyOnSystemFinish(Z_Param_bShouldDestroyOnSystemFinish);
		P_NATIVE_END;
	}
	void ANiagaraActor::StaticRegisterNativesANiagaraActor()
	{
		UClass* Class = ANiagaraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnNiagaraSystemFinished", &ANiagaraActor::execOnNiagaraSystemFinished },
			{ "SetDestroyOnSystemFinish", &ANiagaraActor::execSetDestroyOnSystemFinish },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics
	{
		struct NiagaraActor_eventOnNiagaraSystemFinished_Parms
		{
			UNiagaraComponent* FinishedComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishedComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent = { "FinishedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NiagaraActor_eventOnNiagaraSystemFinished_Parms, FinishedComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::NewProp_FinishedComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/** Callback when Niagara system finishes. */" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Callback when Niagara system finishes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraActor, nullptr, "OnNiagaraSystemFinished", nullptr, nullptr, sizeof(NiagaraActor_eventOnNiagaraSystemFinished_Parms), Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics
	{
		struct NiagaraActor_eventSetDestroyOnSystemFinish_Parms
		{
			bool bShouldDestroyOnSystemFinish;
		};
		static void NewProp_bShouldDestroyOnSystemFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldDestroyOnSystemFinish;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((NiagaraActor_eventSetDestroyOnSystemFinish_Parms*)Obj)->bShouldDestroyOnSystemFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish = { "bShouldDestroyOnSystemFinish", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NiagaraActor_eventSetDestroyOnSystemFinish_Parms), &Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::NewProp_bShouldDestroyOnSystemFinish,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraActor" },
		{ "Comment", "/** Set true for this actor to self-destruct when the Niagara system finishes, false otherwise */" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Set true for this actor to self-destruct when the Niagara system finishes, false otherwise" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANiagaraActor, nullptr, "SetDestroyOnSystemFinish", nullptr, nullptr, sizeof(NiagaraActor_eventSetDestroyOnSystemFinish_Parms), Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANiagaraActor_NoRegister()
	{
		return ANiagaraActor::StaticClass();
	}
	struct Z_Construct_UClass_ANiagaraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnSystemFinish_MetaData[];
#endif
		static void NewProp_bDestroyOnSystemFinish_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnSystemFinish;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANiagaraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANiagaraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANiagaraActor_OnNiagaraSystemFinished, "OnNiagaraSystemFinished" }, // 2890579977
		{ &Z_Construct_UFunction_ANiagaraActor_SetDestroyOnSystemFinish, "SetDestroyOnSystemFinish" }, // 2973640375
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "NiagaraActor.h" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData[] = {
		{ "Comment", "/** True for this actor to self-destruct when the Niagara system finishes, false otherwise */" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "True for this actor to self-destruct when the Niagara system finishes, false otherwise" },
	};
#endif
	void Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_SetBit(void* Obj)
	{
		((ANiagaraActor*)Obj)->bDestroyOnSystemFinish = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish = { "bDestroyOnSystemFinish", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ANiagaraActor), &Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "// Reference to arrow visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Reference to arrow visualization component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "// Reference to sprite visualization component\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Reference to sprite visualization component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0040000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "NiagaraActor" },
		{ "Comment", "/** Pointer to System component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraActor.h" },
		{ "ToolTip", "Pointer to System component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANiagaraActor, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_bDestroyOnSystemFinish,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_ArrowComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraActor_Statics::NewProp_NiagaraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANiagaraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraActor_Statics::ClassParams = {
		&ANiagaraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANiagaraActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANiagaraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANiagaraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANiagaraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANiagaraActor, 1186864239);
	template<> NIAGARA_API UClass* StaticClass<ANiagaraActor>()
	{
		return ANiagaraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANiagaraActor(Z_Construct_UClass_ANiagaraActor, &ANiagaraActor::StaticClass, TEXT("/Script/Niagara"), TEXT("ANiagaraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
