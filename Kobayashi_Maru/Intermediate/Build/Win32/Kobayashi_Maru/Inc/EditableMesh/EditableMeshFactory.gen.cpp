// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditableMesh/Public/EditableMeshFactory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditableMeshFactory() {}
// Cross Module References
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMeshFactory_NoRegister();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMeshFactory();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_EditableMesh();
	EDITABLEMESH_API UClass* Z_Construct_UClass_UEditableMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UEditableMeshFactory::execMakeEditableMesh)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEditableMesh**)Z_Param__Result=UEditableMeshFactory::MakeEditableMesh(Z_Param_PrimitiveComponent,Z_Param_LODIndex);
		P_NATIVE_END;
	}
	void UEditableMeshFactory::StaticRegisterNativesUEditableMeshFactory()
	{
		UClass* Class = UEditableMeshFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MakeEditableMesh", &UEditableMeshFactory::execMakeEditableMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics
	{
		struct EditableMeshFactory_eventMakeEditableMesh_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			int32 LODIndex;
			UEditableMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMeshFactory_eventMakeEditableMesh_Parms, ReturnValue), Z_Construct_UClass_UEditableMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_LODIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMeshFactory_eventMakeEditableMesh_Parms, LODIndex), METADATA_PARAMS(Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_LODIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_LODIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EditableMeshFactory_eventMakeEditableMesh_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_LODIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::NewProp_PrimitiveComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editable Mesh" },
		{ "ModuleRelativePath", "Public/EditableMeshFactory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEditableMeshFactory, nullptr, "MakeEditableMesh", nullptr, nullptr, sizeof(EditableMeshFactory_eventMakeEditableMesh_Parms), Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEditableMeshFactory_NoRegister()
	{
		return UEditableMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_UEditableMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditableMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditableMesh,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEditableMeshFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEditableMeshFactory_MakeEditableMesh, "MakeEditableMesh" }, // 1059981019
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditableMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// @todo mesheditor: Comment these classes and enums!\n" },
		{ "IncludePath", "EditableMeshFactory.h" },
		{ "ModuleRelativePath", "Public/EditableMeshFactory.h" },
		{ "ToolTip", "@todo mesheditor: Comment these classes and enums!" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditableMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditableMeshFactory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEditableMeshFactory_Statics::ClassParams = {
		&UEditableMeshFactory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditableMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditableMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditableMeshFactory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEditableMeshFactory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEditableMeshFactory, 954697852);
	template<> EDITABLEMESH_API UClass* StaticClass<UEditableMeshFactory>()
	{
		return UEditableMeshFactory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEditableMeshFactory(Z_Construct_UClass_UEditableMeshFactory, &UEditableMeshFactory::StaticClass, TEXT("/Script/EditableMesh"), TEXT("UEditableMeshFactory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditableMeshFactory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
