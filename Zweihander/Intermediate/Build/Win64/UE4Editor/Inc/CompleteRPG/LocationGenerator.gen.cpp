// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompleteRPG/LocationGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocationGenerator() {}
// Cross Module References
	COMPLETERPG_API UScriptStruct* Z_Construct_UScriptStruct_FRect();
	UPackage* Z_Construct_UPackage__Script_CompleteRPG();
	COMPLETERPG_API UClass* Z_Construct_UClass_ULocationGenerator_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_ULocationGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredLocationImage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ARTICYRUNTIME_API UClass* Z_Construct_UClass_UArticyBaseObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	COMPLETERPG_API UClass* Z_Construct_UClass_UManiacManfredLocation_NoRegister();
// End Cross Module References
class UScriptStruct* FRect::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPLETERPG_API uint32 Get_Z_Construct_UScriptStruct_FRect_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRect, Z_Construct_UPackage__Script_CompleteRPG(), TEXT("Rect"), sizeof(FRect), Get_Z_Construct_UScriptStruct_FRect_Hash());
	}
	return Singleton;
}
template<> COMPLETERPG_API UScriptStruct* StaticStruct<FRect>()
{
	return FRect::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRect(FRect::StaticStruct, TEXT("/Script/CompleteRPG"), TEXT("Rect"), false, nullptr, nullptr);
static struct FScriptStruct_CompleteRPG_StaticRegisterNativesFRect
{
	FScriptStruct_CompleteRPG_StaticRegisterNativesFRect()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Rect")),new UScriptStruct::TCppStructOps<FRect>);
	}
} ScriptStruct_CompleteRPG_StaticRegisterNativesFRect;
	struct Z_Construct_UScriptStruct_FRect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRect_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "LocationGenerator.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRect_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRect>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRect_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
		nullptr,
		&NewStructOps,
		"Rect",
		sizeof(FRect),
		alignof(FRect),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRect_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRect_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRect()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRect_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_CompleteRPG();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Rect"), sizeof(FRect), Get_Z_Construct_UScriptStruct_FRect_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRect_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRect_Hash() { return 1347533689U; }
	DEFINE_FUNCTION(ULocationGenerator::execGenerateLocation)
	{
		P_GET_OBJECT(UManiacManfredLocation,Z_Param_Location);
		P_GET_PROPERTY(FFloatProperty,Z_Param_PixelsToUnits);
		P_GET_TMAP(TSubclassOf<UArticyBaseObject> ,TSubclassOf<UActorComponent> ,Z_Param_ObjectComponentMap);
		P_GET_OBJECT(AActor,Z_Param_WorldContext);
		P_GET_OBJECT_REF(UManiacManfredLocationImage,Z_Param_Out_BackgroundLayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		ULocationGenerator::GenerateLocation(Z_Param_Location,Z_Param_PixelsToUnits,Z_Param_ObjectComponentMap,Z_Param_WorldContext,Z_Param_Out_BackgroundLayer);
		P_NATIVE_END;
	}
	void ULocationGenerator::StaticRegisterNativesULocationGenerator()
	{
		UClass* Class = ULocationGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateLocation", &ULocationGenerator::execGenerateLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics
	{
		struct LocationGenerator_eventGenerateLocation_Parms
		{
			UManiacManfredLocation* Location;
			float PixelsToUnits;
			TMap<TSubclassOf<UArticyBaseObject> ,TSubclassOf<UActorComponent> > ObjectComponentMap;
			AActor* WorldContext;
			UManiacManfredLocationImage* BackgroundLayer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackgroundLayer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectComponentMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ObjectComponentMap;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectComponentMap_Key_KeyProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObjectComponentMap_ValueProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PixelsToUnits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_BackgroundLayer = { "BackgroundLayer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationGenerator_eventGenerateLocation_Parms, BackgroundLayer), Z_Construct_UClass_UManiacManfredLocationImage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationGenerator_eventGenerateLocation_Parms, WorldContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap = { "ObjectComponentMap", nullptr, (EPropertyFlags)0x0014000000000082, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationGenerator_eventGenerateLocation_Parms, ObjectComponentMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap_Key_KeyProp = { "ObjectComponentMap_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UArticyBaseObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap_ValueProp = { "ObjectComponentMap", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UActorComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_PixelsToUnits = { "PixelsToUnits", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationGenerator_eventGenerateLocation_Parms, PixelsToUnits), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LocationGenerator_eventGenerateLocation_Parms, Location), Z_Construct_UClass_UManiacManfredLocation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_BackgroundLayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_WorldContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_ObjectComponentMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_PixelsToUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*OUT*/" },
		{ "ModuleRelativePath", "LocationGenerator.h" },
		{ "ToolTip", "OUT" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocationGenerator, nullptr, "GenerateLocation", nullptr, nullptr, sizeof(LocationGenerator_eventGenerateLocation_Parms), Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULocationGenerator_GenerateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULocationGenerator_GenerateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULocationGenerator_NoRegister()
	{
		return ULocationGenerator::StaticClass();
	}
	struct Z_Construct_UClass_ULocationGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocationGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_CompleteRPG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULocationGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocationGenerator_GenerateLocation, "GenerateLocation" }, // 1601965649
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocationGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "LocationGenerator.h" },
		{ "ModuleRelativePath", "LocationGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocationGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocationGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULocationGenerator_Statics::ClassParams = {
		&ULocationGenerator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULocationGenerator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocationGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocationGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULocationGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULocationGenerator, 3411066172);
	template<> COMPLETERPG_API UClass* StaticClass<ULocationGenerator>()
	{
		return ULocationGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULocationGenerator(Z_Construct_UClass_ULocationGenerator, &ULocationGenerator::StaticClass, TEXT("/Script/CompleteRPG"), TEXT("ULocationGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocationGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
