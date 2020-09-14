// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OculusMR/Private/OculusMR_PlaneMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusMR_PlaneMeshComponent() {}
// Cross Module References
	OCULUSMR_API UScriptStruct* Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle();
	UPackage* Z_Construct_UPackage__Script_OculusMR();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent_NoRegister();
	OCULUSMR_API UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
// End Cross Module References
class UScriptStruct* FOculusMR_PlaneMeshTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern OCULUSMR_API uint32 Get_Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle, Z_Construct_UPackage__Script_OculusMR(), TEXT("OculusMR_PlaneMeshTriangle"), sizeof(FOculusMR_PlaneMeshTriangle), Get_Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Hash());
	}
	return Singleton;
}
template<> OCULUSMR_API UScriptStruct* StaticStruct<FOculusMR_PlaneMeshTriangle>()
{
	return FOculusMR_PlaneMeshTriangle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOculusMR_PlaneMeshTriangle(FOculusMR_PlaneMeshTriangle::StaticStruct, TEXT("/Script/OculusMR"), TEXT("OculusMR_PlaneMeshTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_OculusMR_StaticRegisterNativesFOculusMR_PlaneMeshTriangle
{
	FScriptStruct_OculusMR_StaticRegisterNativesFOculusMR_PlaneMeshTriangle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OculusMR_PlaneMeshTriangle")),new UScriptStruct::TCppStructOps<FOculusMR_PlaneMeshTriangle>);
	}
} ScriptStruct_OculusMR_StaticRegisterNativesFOculusMR_PlaneMeshTriangle;
	struct Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertex2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertex1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertex0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOculusMR_PlaneMeshTriangle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, UV2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, Vertex2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, UV1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, Vertex1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData[] = {
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0 = { "Vertex0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOculusMR_PlaneMeshTriangle, Vertex0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_UV0,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::NewProp_Vertex0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
		nullptr,
		&NewStructOps,
		"OculusMR_PlaneMeshTriangle",
		sizeof(FOculusMR_PlaneMeshTriangle),
		alignof(FOculusMR_PlaneMeshTriangle),
		Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_OculusMR();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OculusMR_PlaneMeshTriangle"), sizeof(FOculusMR_PlaneMeshTriangle), Get_Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle_Hash() { return 1761762734U; }
	DEFINE_FUNCTION(UOculusMR_PlaneMeshComponent::execClearCustomMeshTriangles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCustomMeshTriangles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_PlaneMeshComponent::execAddCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOculusMR_PlaneMeshComponent::execSetCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FOculusMR_PlaneMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	void UOculusMR_PlaneMeshComponent::StaticRegisterNativesUOculusMR_PlaneMeshComponent()
	{
		UClass* Class = UOculusMR_PlaneMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomMeshTriangles", &UOculusMR_PlaneMeshComponent::execAddCustomMeshTriangles },
			{ "ClearCustomMeshTriangles", &UOculusMR_PlaneMeshComponent::execClearCustomMeshTriangles },
			{ "SetCustomMeshTriangles", &UOculusMR_PlaneMeshComponent::execSetCustomMeshTriangles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics
	{
		struct OculusMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms
		{
			TArray<FOculusMR_PlaneMeshTriangle> Triangles;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations. */" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_PlaneMeshComponent, nullptr, "AddCustomMeshTriangles", nullptr, nullptr, sizeof(OculusMR_PlaneMeshComponent_eventAddCustomMeshTriangles_Parms), Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation. */" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_PlaneMeshComponent, nullptr, "ClearCustomMeshTriangles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics
	{
		struct OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms
		{
			TArray<FOculusMR_PlaneMeshTriangle> Triangles;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms), &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOculusMR_PlaneMeshTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Set the geometry to use on this triangle mesh */" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Set the geometry to use on this triangle mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOculusMR_PlaneMeshComponent, nullptr, "SetCustomMeshTriangles", nullptr, nullptr, sizeof(OculusMR_PlaneMeshComponent_eventSetCustomMeshTriangles_Parms), Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent_NoRegister()
	{
		return UOculusMR_PlaneMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusMR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_AddCustomMeshTriangles, "AddCustomMeshTriangles" }, // 1916920868
		{ &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_ClearCustomMeshTriangles, "ClearCustomMeshTriangles" }, // 1729041192
		{ &Z_Construct_UFunction_UOculusMR_PlaneMeshComponent_SetCustomMeshTriangles, "SetCustomMeshTriangles" }, // 679635882
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
		{ "HideCategories", "Object LOD Physics Collision Mobility Trigger" },
		{ "IncludePath", "OculusMR_PlaneMeshComponent.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/OculusMR_PlaneMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusMR_PlaneMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::ClassParams = {
		&UOculusMR_PlaneMeshComponent::StaticClass,
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
		0x00A012A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusMR_PlaneMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOculusMR_PlaneMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOculusMR_PlaneMeshComponent, 1514973157);
	template<> OCULUSMR_API UClass* StaticClass<UOculusMR_PlaneMeshComponent>()
	{
		return UOculusMR_PlaneMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOculusMR_PlaneMeshComponent(Z_Construct_UClass_UOculusMR_PlaneMeshComponent, &UOculusMR_PlaneMeshComponent::StaticClass, TEXT("/Script/OculusMR"), TEXT("UOculusMR_PlaneMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusMR_PlaneMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
