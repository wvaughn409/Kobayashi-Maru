// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerContent/Public/LevelVariantSets.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSets() {}
// Cross Module References
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULevelVariantSets::execGetVariantSetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariantSet**)Z_Param__Result=P_THIS->GetVariantSetByName(Z_Param_VariantSetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelVariantSets::execGetVariantSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantSetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariantSet**)Z_Param__Result=P_THIS->GetVariantSet(Z_Param_VariantSetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelVariantSets::execGetNumVariantSets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVariantSets();
		P_NATIVE_END;
	}
	void ULevelVariantSets::StaticRegisterNativesULevelVariantSets()
	{
		UClass* Class = ULevelVariantSets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumVariantSets", &ULevelVariantSets::execGetNumVariantSets },
			{ "GetVariantSet", &ULevelVariantSets::execGetVariantSet },
			{ "GetVariantSetByName", &ULevelVariantSets::execGetVariantSetByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics
	{
		struct LevelVariantSets_eventGetNumVariantSets_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSets_eventGetNumVariantSets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetNumVariantSets", nullptr, nullptr, sizeof(LevelVariantSets_eventGetNumVariantSets_Parms), Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics
	{
		struct LevelVariantSets_eventGetVariantSet_Parms
		{
			int32 VariantSetIndex;
			UVariantSet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VariantSetIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSet_Parms, ReturnValue), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_VariantSetIndex = { "VariantSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSet_Parms, VariantSetIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_VariantSetIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetVariantSet", nullptr, nullptr, sizeof(LevelVariantSets_eventGetVariantSet_Parms), Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSets_GetVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics
	{
		struct LevelVariantSets_eventGetVariantSetByName_Parms
		{
			FString VariantSetName;
			UVariantSet* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSetByName_Parms, ReturnValue), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSetByName_Parms, VariantSetName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_VariantSetName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetVariantSetByName", nullptr, nullptr, sizeof(LevelVariantSets_eventGetVariantSetByName_Parms), Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister()
	{
		return ULevelVariantSets::StaticClass();
	}
	struct Z_Construct_UClass_ULevelVariantSets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VariantSets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VariantSets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VariantSets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DirectorClass;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DirectorBlueprint;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelVariantSets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelVariantSets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets, "GetNumVariantSets" }, // 2259332110
		{ &Z_Construct_UFunction_ULevelVariantSets_GetVariantSet, "GetVariantSet" }, // 678481745
		{ &Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName, "GetVariantSetByName" }, // 4176281209
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelVariantSets.h" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets = { "VariantSets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelVariantSets, VariantSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_Inner = { "VariantSets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass_MetaData[] = {
		{ "Comment", "// The class that is used to spawn this levelvariantsets' director instance.\n// Director instances are allocated one per instance\n" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
		{ "ToolTip", "The class that is used to spawn this levelvariantsets' director instance.\nDirector instances are allocated one per instance" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass = { "DirectorClass", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelVariantSets, DirectorClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint_MetaData[] = {
		{ "Comment", "// A pointer to the director blueprint that generates this levelvariantsets' DirectorClass\n" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
		{ "ToolTip", "A pointer to the director blueprint that generates this levelvariantsets' DirectorClass" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint = { "DirectorBlueprint", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULevelVariantSets, DirectorBlueprint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelVariantSets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSets>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSets_Statics::ClassParams = {
		&ULevelVariantSets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelVariantSets()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULevelVariantSets_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULevelVariantSets, 1025586500);
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ULevelVariantSets>()
	{
		return ULevelVariantSets::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULevelVariantSets(Z_Construct_UClass_ULevelVariantSets, &ULevelVariantSets::StaticClass, TEXT("/Script/VariantManagerContent"), TEXT("ULevelVariantSets"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSets);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelVariantSets)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
