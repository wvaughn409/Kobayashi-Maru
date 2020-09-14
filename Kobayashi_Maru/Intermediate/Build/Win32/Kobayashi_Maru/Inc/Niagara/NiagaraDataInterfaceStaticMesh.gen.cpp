// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Classes/NiagaraDataInterfaceStaticMesh.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceStaticMesh() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter();
	UPackage* Z_Construct_UPackage__Script_Niagara();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FNDIStaticMeshSectionFilter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NIAGARA_API uint32 Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, Z_Construct_UPackage__Script_Niagara(), TEXT("NDIStaticMeshSectionFilter"), sizeof(FNDIStaticMeshSectionFilter), Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash());
	}
	return Singleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNDIStaticMeshSectionFilter>()
{
	return FNDIStaticMeshSectionFilter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNDIStaticMeshSectionFilter(FNDIStaticMeshSectionFilter::StaticStruct, TEXT("/Script/Niagara"), TEXT("NDIStaticMeshSectionFilter"), false, nullptr, nullptr);
static struct FScriptStruct_Niagara_StaticRegisterNativesFNDIStaticMeshSectionFilter
{
	FScriptStruct_Niagara_StaticRegisterNativesFNDIStaticMeshSectionFilter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NDIStaticMeshSectionFilter")),new UScriptStruct::TCppStructOps<FNDIStaticMeshSectionFilter>);
	}
} ScriptStruct_Niagara_StaticRegisterNativesFNDIStaticMeshSectionFilter;
	struct Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllowedMaterialSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllowedMaterialSlots;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AllowedMaterialSlots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNDIStaticMeshSectionFilter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData[] = {
		{ "Category", "Section Filter" },
		{ "Comment", "/** Only allow sections these material slots. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Only allow sections these material slots." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNDIStaticMeshSectionFilter, AllowedMaterialSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner = { "AllowedMaterialSlots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::NewProp_AllowedMaterialSlots_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NDIStaticMeshSectionFilter",
		sizeof(FNDIStaticMeshSectionFilter),
		alignof(FNDIStaticMeshSectionFilter),
		Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Niagara();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NDIStaticMeshSectionFilter"), sizeof(FNDIStaticMeshSectionFilter), Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter_Hash() { return 4199390527U; }
	void UNiagaraDataInterfaceStaticMesh::StaticRegisterNativesUNiagaraDataInterfaceStaticMesh()
	{
	}
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_NoRegister()
	{
		return UNiagaraDataInterfaceStaticMesh::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DefaultMesh;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Data Interface allowing sampling of static meshes. */" },
		{ "DisplayName", "Static Mesh" },
		{ "IncludePath", "NiagaraDataInterfaceStaticMesh.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Data Interface allowing sampling of static meshes." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Array of filters the can be used to limit sampling to certain sections of the mesh. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Array of filters the can be used to limit sampling to certain sections of the mesh." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter = { "SectionFilter", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SectionFilter), Z_Construct_UScriptStruct_FNDIStaticMeshSectionFilter, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData[] = {
		{ "Comment", "/** The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source component from which to sample. Takes precedence over the direct mesh. Not exposed to the user, only indirectly accessible from blueprints." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, SourceComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "The source actor from which to sample. Takes precedence over the direct mesh. Note that this can only be set when used as a user variable on a component in the world." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. This mesh is NOT removed from cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh = { "DefaultMesh", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, DefaultMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceStaticMesh.h" },
		{ "ToolTip", "Mesh used to sample from when not overridden by a source actor from the scene. Only available in editor for previewing. This is removed in cooked builds." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNiagaraDataInterfaceStaticMesh, PreviewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SectionFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_SourceComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_DefaultMesh,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::NewProp_PreviewMesh,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceStaticMesh>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams = {
		&UNiagaraDataInterfaceStaticMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNiagaraDataInterfaceStaticMesh, 2904970118);
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceStaticMesh>()
	{
		return UNiagaraDataInterfaceStaticMesh::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNiagaraDataInterfaceStaticMesh(Z_Construct_UClass_UNiagaraDataInterfaceStaticMesh, &UNiagaraDataInterfaceStaticMesh::StaticClass, TEXT("/Script/Niagara"), TEXT("UNiagaraDataInterfaceStaticMesh"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceStaticMesh);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
