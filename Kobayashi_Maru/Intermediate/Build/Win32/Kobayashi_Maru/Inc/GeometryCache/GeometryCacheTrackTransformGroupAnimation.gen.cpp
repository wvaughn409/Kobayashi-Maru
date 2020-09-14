// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheTrackTransformGroupAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackTransformGroupAnimation() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::execSetMesh)
	{
		P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_NewMeshData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMesh(Z_Param_Out_NewMeshData);
		P_NATIVE_END;
	}
	void UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_TransformGroupAnimation()
	{
		UClass* Class = UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMesh", &UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::execSetMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics
	{
		struct GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms
		{
			FGeometryCacheMeshData NewMeshData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewMeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewMeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::NewProp_NewMeshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::NewProp_NewMeshData = { "NewMeshData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms, NewMeshData), Z_Construct_UScriptStruct_FGeometryCacheMeshData, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::NewProp_NewMeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::NewProp_NewMeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::NewProp_NewMeshData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Sets/updates the MeshData for this track\n\x09*\n\x09* @param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh\x09\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformGroupAnimation.h" },
		{ "ToolTip", "Sets/updates the MeshData for this track\n\n@param NewMeshData - GeometryCacheMeshData instance later used as the rendered mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation, nullptr, "SetMesh", nullptr, nullptr, sizeof(GeometryCacheTrack_TransformGroupAnimation_eventSetMesh_Parms), Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_NoRegister()
	{
		return UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_SetMesh, "SetMesh" }, // 516293626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Derived GeometryCacheTrack class, used for Transform animation. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackTransformGroupAnimation.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackTransformGroupAnimation.h" },
		{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::ClassParams = {
		&UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x021022A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation, 3215039034);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation>()
	{
		return UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation, &UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
