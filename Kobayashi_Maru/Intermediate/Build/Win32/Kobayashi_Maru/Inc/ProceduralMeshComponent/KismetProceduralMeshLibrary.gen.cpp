// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProceduralMeshComponent/Public/KismetProceduralMeshLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKismetProceduralMeshLibrary() {}
// Cross Module References
	PROCEDURALMESHCOMPONENT_API UEnum* Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshComponent();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UKismetProceduralMeshLibrary_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UKismetProceduralMeshLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	PROCEDURALMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FProcMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* EProcMeshSliceCapOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption, Z_Construct_UPackage__Script_ProceduralMeshComponent(), TEXT("EProcMeshSliceCapOption"));
		}
		return Singleton;
	}
	template<> PROCEDURALMESHCOMPONENT_API UEnum* StaticEnum<EProcMeshSliceCapOption>()
	{
		return EProcMeshSliceCapOption_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EProcMeshSliceCapOption(EProcMeshSliceCapOption_StaticEnum, TEXT("/Script/ProceduralMeshComponent"), TEXT("EProcMeshSliceCapOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption_Hash() { return 631500621U; }
	UEnum* Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EProcMeshSliceCapOption"), 0, Get_Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EProcMeshSliceCapOption::NoCap", (int64)EProcMeshSliceCapOption::NoCap },
				{ "EProcMeshSliceCapOption::CreateNewSectionForCap", (int64)EProcMeshSliceCapOption::CreateNewSectionForCap },
				{ "EProcMeshSliceCapOption::UseLastSectionForCap", (int64)EProcMeshSliceCapOption::UseLastSectionForCap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Options for creating cap geometry when slicing */" },
				{ "CreateNewSectionForCap.Comment", "/** Add a new section to ProceduralMesh for cap */" },
				{ "CreateNewSectionForCap.Name", "EProcMeshSliceCapOption::CreateNewSectionForCap" },
				{ "CreateNewSectionForCap.ToolTip", "Add a new section to ProceduralMesh for cap" },
				{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
				{ "NoCap.Comment", "/** Do not create cap geometry */" },
				{ "NoCap.Name", "EProcMeshSliceCapOption::NoCap" },
				{ "NoCap.ToolTip", "Do not create cap geometry" },
				{ "ToolTip", "Options for creating cap geometry when slicing" },
				{ "UseLastSectionForCap.Comment", "/** Add cap geometry to existing last section */" },
				{ "UseLastSectionForCap.Name", "EProcMeshSliceCapOption::UseLastSectionForCap" },
				{ "UseLastSectionForCap.ToolTip", "Add cap geometry to existing last section" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralMeshComponent,
				nullptr,
				"EProcMeshSliceCapOption",
				"EProcMeshSliceCapOption",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execSliceProceduralMesh)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_InProcMesh);
		P_GET_STRUCT(FVector,Z_Param_PlanePosition);
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal);
		P_GET_UBOOL(Z_Param_bCreateOtherHalf);
		P_GET_OBJECT_REF(UProceduralMeshComponent,Z_Param_Out_OutOtherHalfProcMesh);
		P_GET_ENUM(EProcMeshSliceCapOption,Z_Param_CapOption);
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::SliceProceduralMesh(Z_Param_InProcMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalfProcMesh,EProcMeshSliceCapOption(Z_Param_CapOption),Z_Param_CapMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execGetSectionFromProceduralMesh)
	{
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_InProcMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::GetSectionFromProceduralMesh(Z_Param_InProcMesh,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execCopyProceduralMeshFromStaticMeshComponent)
	{
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_OBJECT(UProceduralMeshComponent,Z_Param_ProcMeshComponent);
		P_GET_UBOOL(Z_Param_bCreateCollision);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::CopyProceduralMeshFromStaticMeshComponent(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_ProcMeshComponent,Z_Param_bCreateCollision);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execGetSectionFromStaticMesh)
	{
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SectionIndex);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::GetSectionFromStaticMesh(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execCreateGridMeshSplit)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumY);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1s);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GridSpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::CreateGridMeshSplit(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_Out_UV1s,Z_Param_GridSpacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execCreateGridMeshWelded)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumY);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GridSpacing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::CreateGridMeshWelded(Z_Param_NumX,Z_Param_NumY,Z_Param_Out_Triangles,Z_Param_Out_Vertices,Z_Param_Out_UVs,Z_Param_GridSpacing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execCreateGridMeshTriangles)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumX);
		P_GET_PROPERTY(FIntProperty,Z_Param_NumY);
		P_GET_UBOOL(Z_Param_bWinding);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execConvertQuadToTriangles)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert0);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert1);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert2);
		P_GET_PROPERTY(FIntProperty,Z_Param_Vert3);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execCalculateTangentsForMesh)
	{
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_UVs,Z_Param_Out_Normals,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UKismetProceduralMeshLibrary::execGenerateBoxMesh)
	{
		P_GET_STRUCT(FVector,Z_Param_BoxRadius);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs);
		P_GET_TARRAY_REF(FProcMeshTangent,Z_Param_Out_Tangents);
		P_FINISH;
		P_NATIVE_BEGIN;
		UKismetProceduralMeshLibrary::GenerateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents);
		P_NATIVE_END;
	}
	void UKismetProceduralMeshLibrary::StaticRegisterNativesUKismetProceduralMeshLibrary()
	{
		UClass* Class = UKismetProceduralMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTangentsForMesh", &UKismetProceduralMeshLibrary::execCalculateTangentsForMesh },
			{ "ConvertQuadToTriangles", &UKismetProceduralMeshLibrary::execConvertQuadToTriangles },
			{ "CopyProceduralMeshFromStaticMeshComponent", &UKismetProceduralMeshLibrary::execCopyProceduralMeshFromStaticMeshComponent },
			{ "CreateGridMeshSplit", &UKismetProceduralMeshLibrary::execCreateGridMeshSplit },
			{ "CreateGridMeshTriangles", &UKismetProceduralMeshLibrary::execCreateGridMeshTriangles },
			{ "CreateGridMeshWelded", &UKismetProceduralMeshLibrary::execCreateGridMeshWelded },
			{ "GenerateBoxMesh", &UKismetProceduralMeshLibrary::execGenerateBoxMesh },
			{ "GetSectionFromProceduralMesh", &UKismetProceduralMeshLibrary::execGetSectionFromProceduralMesh },
			{ "GetSectionFromStaticMesh", &UKismetProceduralMeshLibrary::execGetSectionFromStaticMesh },
			{ "SliceProceduralMesh", &UKismetProceduralMeshLibrary::execSliceProceduralMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics
	{
		struct KismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector2D> UVs;
			TArray<FVector> Normals;
			TArray<FProcMeshTangent> Tangents;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::NewProp_Vertices_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "SmoothingGroups,UVs" },
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** \n\x09 *\x09""Automatically generate normals and tangent vectors for a mesh\n\x09 *\x09UVs are required for correct tangent generation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Automatically generate normals and tangent vectors for a mesh\nUVs are required for correct tangent generation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "CalculateTangentsForMesh", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventCalculateTangentsForMesh_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics
	{
		struct KismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms
		{
			TArray<int32> Triangles;
			int32 Vert0;
			int32 Vert1;
			int32 Vert2;
			int32 Vert3;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert3;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert2;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert1;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Vert0;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert3 = { "Vert3", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert3), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert2 = { "Vert2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert2), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert1 = { "Vert1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert1), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert0 = { "Vert0", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Vert0), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Vert0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::NewProp_Triangles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Add a quad, specified by four indices, to a triangle index buffer as two triangles. */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Add a quad, specified by four indices, to a triangle index buffer as two triangles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "ConvertQuadToTriangles", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventConvertQuadToTriangles_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics
	{
		struct KismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			int32 LODIndex;
			UProceduralMeshComponent* ProcMeshComponent;
			bool bCreateCollision;
		};
		static void NewProp_bCreateCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcMeshComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision_SetBit(void* Obj)
	{
		((KismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms*)Obj)->bCreateCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision = { "bCreateCollision", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms), &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent = { "ProcMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms, ProcMeshComponent), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_bCreateCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_ProcMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::NewProp_StaticMeshComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Copy materials from StaticMeshComponent to ProceduralMeshComponent. */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Copy materials from StaticMeshComponent to ProceduralMeshComponent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "CopyProceduralMeshFromStaticMeshComponent", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventCopyProceduralMeshFromStaticMeshComponent_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics
	{
		struct KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms
		{
			int32 NumX;
			int32 NumY;
			TArray<int32> Triangles;
			TArray<FVector> Vertices;
			TArray<FVector2D> UVs;
			TArray<FVector2D> UV1s;
			float GridSpacing;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UV1s;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1s_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, GridSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s = { "UV1s", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, UV1s), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s_Inner = { "UV1s", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, NumY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms, NumX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_GridSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UV1s_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::NewProp_NumX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09*\x09Generate a vertex buffer, index buffer and UVs for a grid mesh where each quad is split, with standard 0-1 UVs on UV0 and point sampled texel center UVs for UV1.\n\x09*\x09@param\x09NumX\x09\x09\x09Number of vertices in X direction (must be >= 2)\n\x09*\x09@param\x09NumY\x09\x09\x09Number of vertices in y direction (must be >= 2)\n\x09*\x09@out\x09Triangles\x09\x09Output index buffer\n\x09*\x09@out\x09Vertices\x09\x09Output vertex buffer\n\x09*\x09@out\x09UVs\x09\x09\x09\x09Out UVs\n\x09*\x09@out\x09UV1s\x09\x09\x09Out UV1s\n\x09*\x09@param\x09GridSpacing\x09\x09Size of each quad in world units\n\x09*/" },
		{ "CPP_Default_GridSpacing", "16.000000" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate a vertex buffer, index buffer and UVs for a grid mesh where each quad is split, with standard 0-1 UVs on UV0 and point sampled texel center UVs for UV1.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@out    Triangles               Output index buffer\n@out    Vertices                Output vertex buffer\n@out    UVs                             Out UVs\n@out    UV1s                    Out UV1s\n@param  GridSpacing             Size of each quad in world units" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "CreateGridMeshSplit", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventCreateGridMeshSplit_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics
	{
		struct KismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms
		{
			int32 NumX;
			int32 NumY;
			bool bWinding;
			TArray<int32> Triangles;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static void NewProp_bWinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWinding;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding_SetBit(void* Obj)
	{
		((KismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms*)Obj)->bWinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding = { "bWinding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms), &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms, NumY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms, NumX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_bWinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::NewProp_NumX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** \n\x09 *\x09Generate an index buffer for a grid of quads. \n\x09 *\x09@param\x09NumX\x09\x09\x09Number of vertices in X direction (must be >= 2)\n\x09 *\x09@param\x09NumY\x09\x09\x09Number of vertices in y direction (must be >= 2)\n\x09 *\x09@param\x09""bWinding\x09\x09Reverses winding of indices generated for each quad\n\x09 *\x09@out\x09Triangles\x09\x09Output index buffer\n\x09 */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate an index buffer for a grid of quads.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@param  bWinding                Reverses winding of indices generated for each quad\n@out    Triangles               Output index buffer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "CreateGridMeshTriangles", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventCreateGridMeshTriangles_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics
	{
		struct KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms
		{
			int32 NumX;
			int32 NumY;
			TArray<int32> Triangles;
			TArray<FVector> Vertices;
			TArray<FVector2D> UVs;
			float GridSpacing;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GridSpacing;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumY;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_GridSpacing = { "GridSpacing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, GridSpacing), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumY = { "NumY", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, NumY), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumX = { "NumX", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms, NumX), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_GridSpacing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::NewProp_NumX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/**\n\x09*\x09Generate a vertex buffer, index buffer and UVs for a tessellated grid mesh.\n\x09*\x09@param\x09NumX\x09\x09\x09Number of vertices in X direction (must be >= 2)\n\x09*\x09@param\x09NumY\x09\x09\x09Number of vertices in y direction (must be >= 2)\n\x09*\x09@out\x09Triangles\x09\x09Output index buffer\n\x09*\x09@out\x09Vertices\x09\x09Output vertex buffer\n\x09*\x09@out\x09UVs\x09\x09\x09\x09Out UVs\n\x09*\x09@param\x09GridSpacing\x09\x09Size of each quad in world units\n\x09*/" },
		{ "CPP_Default_GridSpacing", "16.000000" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate a vertex buffer, index buffer and UVs for a tessellated grid mesh.\n@param  NumX                    Number of vertices in X direction (must be >= 2)\n@param  NumY                    Number of vertices in y direction (must be >= 2)\n@out    Triangles               Output index buffer\n@out    Vertices                Output vertex buffer\n@out    UVs                             Out UVs\n@param  GridSpacing             Size of each quad in world units" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "CreateGridMeshWelded", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventCreateGridMeshWelded_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics
	{
		struct KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms
		{
			FVector BoxRadius;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FProcMeshTangent> Tangents;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_BoxRadius = { "BoxRadius", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms, BoxRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::NewProp_BoxRadius,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Generate vertex and index buffer for a simple box, given the supplied dimensions. Normals, UVs and tangents are also generated for each vertex. */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Generate vertex and index buffer for a simple box, given the supplied dimensions. Normals, UVs and tangents are also generated for each vertex." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "GenerateBoxMesh", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventGenerateBoxMesh_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics
	{
		struct KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms
		{
			UProceduralMeshComponent* InProcMesh;
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FProcMeshTangent> Tangents;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InProcMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh = { "InProcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms, InProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::NewProp_InProcMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Grab geometry data from a ProceduralMeshComponent. */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Grab geometry data from a ProceduralMeshComponent." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "GetSectionFromProceduralMesh", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventGetSectionFromProceduralMesh_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics
	{
		struct KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms
		{
			UStaticMesh* InMesh;
			int32 LODIndex;
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FProcMeshTangent> Tangents;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents = { "Tangents", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Tangents), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents_Inner = { "Tangents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FProcMeshTangent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs = { "UVs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, UVs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs_Inner = { "UVs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_SectionIndex = { "SectionIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_InMesh = { "InMesh", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Tangents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_UVs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Normals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_Vertices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_SectionIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::NewProp_InMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** Grab geometry data from a StaticMesh asset. */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Grab geometry data from a StaticMesh asset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "GetSectionFromStaticMesh", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventGetSectionFromStaticMesh_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics
	{
		struct KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms
		{
			UProceduralMeshComponent* InProcMesh;
			FVector PlanePosition;
			FVector PlaneNormal;
			bool bCreateOtherHalf;
			UProceduralMeshComponent* OutOtherHalfProcMesh;
			EProcMeshSliceCapOption CapOption;
			UMaterialInterface* CapMaterial;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapMaterial;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CapOption;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOtherHalfProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOtherHalfProcMesh;
		static void NewProp_bCreateOtherHalf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateOtherHalf;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InProcMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InProcMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapMaterial = { "CapMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, CapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption = { "CapOption", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, CapOption), Z_Construct_UEnum_ProceduralMeshComponent_EProcMeshSliceCapOption, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh = { "OutOtherHalfProcMesh", nullptr, (EPropertyFlags)0x0010000000080180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, OutOtherHalfProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh_MetaData)) };
	void Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf_SetBit(void* Obj)
	{
		((KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms*)Obj)->bCreateOtherHalf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf = { "bCreateOtherHalf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms), &Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlanePosition = { "PlanePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, PlanePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh = { "InProcMesh", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms, InProcMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_CapOption_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_OutOtherHalfProcMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_bCreateOtherHalf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_PlanePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::NewProp_InProcMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|ProceduralMesh" },
		{ "Comment", "/** \n\x09 *\x09Slice the ProceduralMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry. \n\x09 *\x09@param\x09InProcMesh\x09\x09\x09\x09ProceduralMeshComponent to slice\n\x09 *\x09@param\x09PlanePosition\x09\x09\x09Point on the plane to use for slicing, in world space\n\x09 *\x09@param\x09PlaneNormal\x09\x09\x09\x09Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n\x09 *\x09@param\x09""bCreateOtherHalf\x09\x09If true, an additional ProceduralMeshComponent (OutOtherHalfProcMesh) will be created using the other half of the sliced geometry\n\x09 *\x09@param\x09OutOtherHalfProcMesh\x09If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InProcMesh.\n\x09 *\x09@param\x09""CapOption\x09\x09\x09\x09If and how to create 'cap' geometry on the slicing plane\n\x09 *\x09@param\x09""CapMaterial\x09\x09\x09\x09If creating a new section for the cap, assign this material to that section\n\x09 */" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ToolTip", "Slice the ProceduralMeshComponent (including simple convex collision) using a plane. Optionally create 'cap' geometry.\n@param  InProcMesh                              ProceduralMeshComponent to slice\n@param  PlanePosition                   Point on the plane to use for slicing, in world space\n@param  PlaneNormal                             Normal of plane used for slicing. Geometry on the positive side of the plane will be kept.\n@param  bCreateOtherHalf                If true, an additional ProceduralMeshComponent (OutOtherHalfProcMesh) will be created using the other half of the sliced geometry\n@param  OutOtherHalfProcMesh    If bCreateOtherHalf is set, this is the new component created. Its owner will be the same as the supplied InProcMesh.\n@param  CapOption                               If and how to create 'cap' geometry on the slicing plane\n@param  CapMaterial                             If creating a new section for the cap, assign this material to that section" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UKismetProceduralMeshLibrary, nullptr, "SliceProceduralMesh", nullptr, nullptr, sizeof(KismetProceduralMeshLibrary_eventSliceProceduralMesh_Parms), Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UKismetProceduralMeshLibrary_NoRegister()
	{
		return UKismetProceduralMeshLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CalculateTangentsForMesh, "CalculateTangentsForMesh" }, // 1287026800
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_ConvertQuadToTriangles, "ConvertQuadToTriangles" }, // 2528856686
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CopyProceduralMeshFromStaticMeshComponent, "CopyProceduralMeshFromStaticMeshComponent" }, // 2837551244
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshSplit, "CreateGridMeshSplit" }, // 2218671887
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshTriangles, "CreateGridMeshTriangles" }, // 322554890
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_CreateGridMeshWelded, "CreateGridMeshWelded" }, // 869232654
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_GenerateBoxMesh, "GenerateBoxMesh" }, // 3323634023
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromProceduralMesh, "GetSectionFromProceduralMesh" }, // 2200961909
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_GetSectionFromStaticMesh, "GetSectionFromStaticMesh" }, // 3915206121
		{ &Z_Construct_UFunction_UKismetProceduralMeshLibrary_SliceProceduralMesh, "SliceProceduralMesh" }, // 528594746
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KismetProceduralMeshLibrary.h" },
		{ "ModuleRelativePath", "Public/KismetProceduralMeshLibrary.h" },
		{ "ScriptName", "ProceduralMeshLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKismetProceduralMeshLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::ClassParams = {
		&UKismetProceduralMeshLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKismetProceduralMeshLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKismetProceduralMeshLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKismetProceduralMeshLibrary, 72248174);
	template<> PROCEDURALMESHCOMPONENT_API UClass* StaticClass<UKismetProceduralMeshLibrary>()
	{
		return UKismetProceduralMeshLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKismetProceduralMeshLibrary(Z_Construct_UClass_UKismetProceduralMeshLibrary, &UKismetProceduralMeshLibrary::StaticClass, TEXT("/Script/ProceduralMeshComponent"), TEXT("UKismetProceduralMeshLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKismetProceduralMeshLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
