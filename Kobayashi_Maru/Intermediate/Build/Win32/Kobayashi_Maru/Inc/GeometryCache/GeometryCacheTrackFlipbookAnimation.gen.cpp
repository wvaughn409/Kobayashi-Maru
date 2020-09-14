// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCache/Classes/GeometryCacheTrackFlipbookAnimation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCacheTrackFlipbookAnimation() {}
// Cross Module References
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_NoRegister();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation();
	GEOMETRYCACHE_API UClass* Z_Construct_UClass_UGeometryCacheTrack();
	UPackage* Z_Construct_UPackage__Script_GeometryCache();
	GEOMETRYCACHE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCacheMeshData();
// End Cross Module References
	DEFINE_FUNCTION(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::execAddMeshSample)
	{
		P_GET_STRUCT_REF(FGeometryCacheMeshData,Z_Param_Out_MeshData);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SampleTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddMeshSample(Z_Param_Out_MeshData,Z_Param_SampleTime);
		P_NATIVE_END;
	}
	void UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticRegisterNativesUDEPRECATED_GeometryCacheTrack_FlipbookAnimation()
	{
		UClass* Class = UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMeshSample", &UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::execAddMeshSample },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics
	{
		struct GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms
		{
			FGeometryCacheMeshData MeshData;
			float SampleTime;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SampleTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SampleTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeshData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_SampleTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_SampleTime = { "SampleTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms, SampleTime), METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_SampleTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_SampleTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_MeshData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_MeshData = { "MeshData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms, MeshData), Z_Construct_UScriptStruct_FGeometryCacheMeshData, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_MeshData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_MeshData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_SampleTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::NewProp_MeshData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09* Add a GeometryCacheMeshData sample to the Track\n\x09*\n\x09* @param MeshData - Holds the mesh data for the specific sample\n\x09* @param SampleTime - SampleTime for the specific sample being added\n\x09* @return void\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
		{ "ToolTip", "Add a GeometryCacheMeshData sample to the Track\n\n@param MeshData - Holds the mesh data for the specific sample\n@param SampleTime - SampleTime for the specific sample being added\n@return void" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, nullptr, "AddMeshSample", nullptr, nullptr, sizeof(GeometryCacheTrack_FlipbookAnimation_eventAddMeshSample_Parms), Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_NoRegister()
	{
		return UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumMeshSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NumMeshSamples;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometryCacheTrack,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCache,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_AddMeshSample, "AddMeshSample" }, // 3492183818
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Derived GeometryCacheTrack class, used for Transform animation. */" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "GeometryCacheTrackFlipbookAnimation.h" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
		{ "ToolTip", "Derived GeometryCacheTrack class, used for Transform animation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::NewProp_NumMeshSamples_MetaData[] = {
		{ "Category", "GeometryCache" },
		{ "Comment", "/** Number of Mesh Sample within this track */" },
		{ "ModuleRelativePath", "Classes/GeometryCacheTrackFlipbookAnimation.h" },
		{ "ToolTip", "Number of Mesh Sample within this track" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::NewProp_NumMeshSamples = { "NumMeshSamples", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, NumMeshSamples), METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::NewProp_NumMeshSamples_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::NewProp_NumMeshSamples_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::NewProp_NumMeshSamples,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::ClassParams = {
		&UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::PropPointers),
		0,
		0x021022A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, 1729273163);
	template<> GEOMETRYCACHE_API UClass* StaticClass<UDEPRECATED_GeometryCacheTrack_FlipbookAnimation>()
	{
		return UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation(Z_Construct_UClass_UDEPRECATED_GeometryCacheTrack_FlipbookAnimation, &UDEPRECATED_GeometryCacheTrack_FlipbookAnimation::StaticClass, TEXT("/Script/GeometryCache"), TEXT("UDEPRECATED_GeometryCacheTrack_FlipbookAnimation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_GeometryCacheTrack_FlipbookAnimation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
