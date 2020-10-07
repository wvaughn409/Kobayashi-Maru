// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/ArticyGenerated/ManiacManfredExpressoScripts.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManiacManfredExpressoScripts() {}
// Cross Module References
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredMethodsProvider_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredMethodsProvider();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredExpressoScripts_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredExpressoScripts();
	ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyExpressoScripts();
// End Cross Module References
	DEFINE_FUNCTION(IManiacManfredMethodsProvider::execrestart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->restart_Implementation();
		P_NATIVE_END;
	}
	void IManiacManfredMethodsProvider::restart()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_restart instead.");
	}
	void UManiacManfredMethodsProvider::StaticRegisterNativesUManiacManfredMethodsProvider()
	{
		UClass* Class = UManiacManfredMethodsProvider::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "restart", &IManiacManfredMethodsProvider::execrestart },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UManiacManfredMethodsProvider_restart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UManiacManfredMethodsProvider_restart_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "restart" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredExpressoScripts.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UManiacManfredMethodsProvider_restart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UManiacManfredMethodsProvider, nullptr, "restart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UManiacManfredMethodsProvider_restart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UManiacManfredMethodsProvider_restart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UManiacManfredMethodsProvider_restart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UManiacManfredMethodsProvider_restart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UManiacManfredMethodsProvider_NoRegister()
	{
		return UManiacManfredMethodsProvider::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredMethodsProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UManiacManfredMethodsProvider_restart, "restart" }, // 3579286159
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredExpressoScripts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IManiacManfredMethodsProvider>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::ClassParams = {
		&UManiacManfredMethodsProvider::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredMethodsProvider()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredMethodsProvider_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredMethodsProvider, 3783451897);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredMethodsProvider>()
	{
		return UManiacManfredMethodsProvider::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredMethodsProvider(Z_Construct_UClass_UManiacManfredMethodsProvider, &UManiacManfredMethodsProvider::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredMethodsProvider"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredMethodsProvider);
	static FName NAME_UManiacManfredMethodsProvider_restart = FName(TEXT("restart"));
	void IManiacManfredMethodsProvider::Execute_restart(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UManiacManfredMethodsProvider::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UManiacManfredMethodsProvider_restart);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IManiacManfredMethodsProvider*)(O->GetNativeInterfaceAddress(UManiacManfredMethodsProvider::StaticClass())))
		{
			I->restart_Implementation();
		}
	}
	void UManiacManfredExpressoScripts::StaticRegisterNativesUManiacManfredExpressoScripts()
	{
	}
	UClass* Z_Construct_UClass_UManiacManfredExpressoScripts_NoRegister()
	{
		return UManiacManfredExpressoScripts::StaticClass();
	}
	struct Z_Construct_UClass_UManiacManfredExpressoScripts_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UManiacManfredExpressoScripts_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UArticyExpressoScripts,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UManiacManfredExpressoScripts_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ArticyGenerated/ManiacManfredExpressoScripts.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ArticyGenerated/ManiacManfredExpressoScripts.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UManiacManfredExpressoScripts_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UManiacManfredExpressoScripts>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UManiacManfredExpressoScripts_Statics::ClassParams = {
		&UManiacManfredExpressoScripts::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UManiacManfredExpressoScripts_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UManiacManfredExpressoScripts_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UManiacManfredExpressoScripts()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UManiacManfredExpressoScripts_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UManiacManfredExpressoScripts, 1922850997);
	template<> COMPLETERPG_API UClass* StaticClass<UManiacManfredExpressoScripts>()
	{
		return UManiacManfredExpressoScripts::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UManiacManfredExpressoScripts(Z_Construct_UClass_UManiacManfredExpressoScripts, &UManiacManfredExpressoScripts::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("UManiacManfredExpressoScripts"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UManiacManfredExpressoScripts);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
