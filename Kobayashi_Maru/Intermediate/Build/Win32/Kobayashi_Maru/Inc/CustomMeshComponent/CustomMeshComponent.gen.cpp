// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CustomMeshComponent/Classes/CustomMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomMeshComponent() {}
// Cross Module References
	CUSTOMMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshTriangle();
	UPackage* Z_Construct_UPackage__Script_CustomMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMMESHCOMPONENT_API UClass* Z_Construct_UClass_UCustomMeshComponent_NoRegister();
	CUSTOMMESHCOMPONENT_API UClass* Z_Construct_UClass_UCustomMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
// End Cross Module References
class UScriptStruct* FCustomMeshTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CUSTOMMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomMeshTriangle, Z_Construct_UPackage__Script_CustomMeshComponent(), TEXT("CustomMeshTriangle"), sizeof(FCustomMeshTriangle), Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_Hash());
	}
	return Singleton;
}
template<> CUSTOMMESHCOMPONENT_API UScriptStruct* StaticStruct<FCustomMeshTriangle>()
{
	return FCustomMeshTriangle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomMeshTriangle(FCustomMeshTriangle::StaticStruct, TEXT("/Script/CustomMeshComponent"), TEXT("CustomMeshTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_CustomMeshComponent_StaticRegisterNativesFCustomMeshTriangle
{
	FScriptStruct_CustomMeshComponent_StaticRegisterNativesFCustomMeshTriangle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomMeshTriangle")),new UScriptStruct::TCppStructOps<FCustomMeshTriangle>);
	}
} ScriptStruct_CustomMeshComponent_StaticRegisterNativesFCustomMeshTriangle;
	struct Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertex2_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertex1_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertex0_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertex0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomMeshTriangle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex2_MetaData[] = {
		{ "Category", "Triangle" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex2 = { "Vertex2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshTriangle, Vertex2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex1_MetaData[] = {
		{ "Category", "Triangle" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex1 = { "Vertex1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshTriangle, Vertex1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex0_MetaData[] = {
		{ "Category", "Triangle" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex0 = { "Vertex0", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomMeshTriangle, Vertex0), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::NewProp_Vertex0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomMeshComponent,
		nullptr,
		&NewStructOps,
		"CustomMeshTriangle",
		sizeof(FCustomMeshTriangle),
		alignof(FCustomMeshTriangle),
		Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshTriangle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CustomMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomMeshTriangle"), sizeof(FCustomMeshTriangle), Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomMeshTriangle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomMeshTriangle_Hash() { return 3504976104U; }
	DEFINE_FUNCTION(UCustomMeshComponent::execClearCustomMeshTriangles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearCustomMeshTriangles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMeshComponent::execAddCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FCustomMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomMeshComponent::execSetCustomMeshTriangles)
	{
		P_GET_TARRAY_REF(FCustomMeshTriangle,Z_Param_Out_Triangles);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomMeshTriangles(Z_Param_Out_Triangles);
		P_NATIVE_END;
	}
	void UCustomMeshComponent::StaticRegisterNativesUCustomMeshComponent()
	{
		UClass* Class = UCustomMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCustomMeshTriangles", &UCustomMeshComponent::execAddCustomMeshTriangles },
			{ "ClearCustomMeshTriangles", &UCustomMeshComponent::execClearCustomMeshTriangles },
			{ "SetCustomMeshTriangles", &UCustomMeshComponent::execSetCustomMeshTriangles },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics
	{
		struct CustomMeshComponent_eventAddCustomMeshTriangles_Parms
		{
			TArray<FCustomMeshTriangle> Triangles;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMeshComponent_eventAddCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomMeshTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations. */" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
		{ "ToolTip", "Add to the geometry to use on this triangle mesh.  This may cause an allocation.  Use SetCustomMeshTriangles() instead when possible to reduce allocations." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMeshComponent, nullptr, "AddCustomMeshTriangles", nullptr, nullptr, sizeof(CustomMeshComponent_eventAddCustomMeshTriangles_Parms), Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation. */" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
		{ "ToolTip", "Removes all geometry from this triangle mesh.  Does not deallocate memory, allowing new geometry to reuse the existing allocation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMeshComponent, nullptr, "ClearCustomMeshTriangles", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics
	{
		struct CustomMeshComponent_eventSetCustomMeshTriangles_Parms
		{
			TArray<FCustomMeshTriangle> Triangles;
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
	void Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomMeshComponent_eventSetCustomMeshTriangles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CustomMeshComponent_eventSetCustomMeshTriangles_Parms), &Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CustomMeshComponent_eventSetCustomMeshTriangles_Parms, Triangles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomMeshTriangle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::NewProp_Triangles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|CustomMesh" },
		{ "Comment", "/** Set the geometry to use on this triangle mesh */" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
		{ "ToolTip", "Set the geometry to use on this triangle mesh" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomMeshComponent, nullptr, "SetCustomMeshTriangles", nullptr, nullptr, sizeof(CustomMeshComponent_eventSetCustomMeshTriangles_Parms), Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCustomMeshComponent_NoRegister()
	{
		return UCustomMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UCustomMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomMeshComponent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomMeshComponent_AddCustomMeshTriangles, "AddCustomMeshTriangles" }, // 325809418
		{ &Z_Construct_UFunction_UCustomMeshComponent_ClearCustomMeshTriangles, "ClearCustomMeshTriangles" }, // 1377375334
		{ &Z_Construct_UFunction_UCustomMeshComponent_SetCustomMeshTriangles, "SetCustomMeshTriangles" }, // 3613693209
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** Component that allows you to specify custom triangle mesh geometry */" },
		{ "HideCategories", "Object LOD Physics Collision Mobility Trigger" },
		{ "IncludePath", "CustomMeshComponent.h" },
		{ "ModuleRelativePath", "Classes/CustomMeshComponent.h" },
		{ "ToolTip", "Component that allows you to specify custom triangle mesh geometry" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomMeshComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCustomMeshComponent_Statics::ClassParams = {
		&UCustomMeshComponent::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomMeshComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCustomMeshComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCustomMeshComponent, 3443327315);
	template<> CUSTOMMESHCOMPONENT_API UClass* StaticClass<UCustomMeshComponent>()
	{
		return UCustomMeshComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCustomMeshComponent(Z_Construct_UClass_UCustomMeshComponent, &UCustomMeshComponent::StaticClass, TEXT("/Script/CustomMeshComponent"), TEXT("UCustomMeshComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomMeshComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
