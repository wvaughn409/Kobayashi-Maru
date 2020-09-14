// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheActor() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_AGeometryCacheActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGeometryCacheActor::execGetGeometryCacheComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGeometryCacheComponent**)Z_Param__Result=P_THIS->GetGeometryCacheComponent();
		P_NATIVE_END;
	}
	void AGeometryCacheActor::StaticRegisterNativesAGeometryCacheActor()
	{
		UClass* Class = AGeometryCacheActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGeometryCacheComponent", &AGeometryCacheActor::execGetGeometryCacheComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics
	{
		struct GeometryCacheActor_eventGetGeometryCacheComponent_Parms
		{
			UGeometryCacheComponent* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheActor_eventGetGeometryCacheComponent_Parms, ReturnValue), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|GeometryCache" },
		{ "Comment", "/** Returns GeometryCacheComponent subobject **/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
		{ "ToolTip", "Returns GeometryCacheComponent subobject *" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGeometryCacheActor, nullptr, "GetGeometryCacheComponent", nullptr, nullptr, sizeof(GeometryCacheActor_eventGetGeometryCacheComponent_Parms), Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGeometryCacheActor_NoRegister()
	{
		return AGeometryCacheActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCacheActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryCacheComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeometryCacheComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCacheActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGeometryCacheActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGeometryCacheActor_GetGeometryCacheComponent, "GetGeometryCacheComponent" }, // 3067309178
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** GeometryCache actor, serves as a place-able actor for GeometryCache objects*/" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "GeometryCacheActor.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
		{ "ToolTip", "GeometryCache actor, serves as a place-able actor for GeometryCache objects" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GeometryCacheActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|GeometryCache" },
		{ "ModuleRelativePath", "Classes/GeometryCacheActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent = { "GeometryCacheComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGeometryCacheActor, GeometryCacheComponent), Z_Construct_UClass_UGeometryCacheComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCacheActor_Statics::NewProp_GeometryCacheComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCacheActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCacheActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCacheActor_Statics::ClassParams = {
		&AGeometryCacheActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCacheActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCacheActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGeometryCacheActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGeometryCacheActor, 1204441728);
	template<> GEOMETRYCACHE_API UClass* StaticClass<AGeometryCacheActor>()
	{
		return AGeometryCacheActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGeometryCacheActor(Z_Construct_UClass_AGeometryCacheActor, &AGeometryCacheActor::StaticClass, TEXT("/Script/GeometryCache"), TEXT("AGeometryCacheActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCacheActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
