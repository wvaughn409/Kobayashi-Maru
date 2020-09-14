// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Public/LandscapeBlueprintBrushBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeBlueprintBrushBase() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execRequestLandscapeUpdate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLandscapeUpdate();
		P_NATIVE_END;
	}
	static FName NAME_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies = FName(TEXT("GetBlueprintRenderDependencies"));
	void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<UTexture2D*>& OutStreamableAssets)
	{
		LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms Parms;
		Parms.OutStreamableAssets=OutStreamableAssets;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies),&Parms);
		OutStreamableAssets=Parms.OutStreamableAssets;
	}
	static FName NAME_ALandscapeBlueprintBrushBase_Initialize = FName(TEXT("Initialize"));
	void ALandscapeBlueprintBrushBase::Initialize(FTransform const& InLandscapeTransform, FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize)
	{
		LandscapeBlueprintBrushBase_eventInitialize_Parms Parms;
		Parms.InLandscapeTransform=InLandscapeTransform;
		Parms.InLandscapeSize=InLandscapeSize;
		Parms.InLandscapeRenderTargetSize=InLandscapeRenderTargetSize;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_Initialize),&Parms);
	}
	static FName NAME_ALandscapeBlueprintBrushBase_Render = FName(TEXT("Render"));
	UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName const& InWeightmapLayerName)
	{
		LandscapeBlueprintBrushBase_eventRender_Parms Parms;
		Parms.InIsHeightmap=InIsHeightmap ? true : false;
		Parms.InCombinedResult=InCombinedResult;
		Parms.InWeightmapLayerName=InWeightmapLayerName;
		ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_Render),&Parms);
		return Parms.ReturnValue;
	}
	void ALandscapeBlueprintBrushBase::StaticRegisterNativesALandscapeBlueprintBrushBase()
	{
		UClass* Class = ALandscapeBlueprintBrushBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RequestLandscapeUpdate", &ALandscapeBlueprintBrushBase::execRequestLandscapeUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics
	{
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutStreamableAssets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutStreamableAssets_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets = { "OutStreamableAssets", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms, OutStreamableAssets), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets_Inner = { "OutStreamableAssets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "GetBlueprintRenderDependencies", nullptr, nullptr, sizeof(LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLandscapeRenderTargetSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLandscapeRenderTargetSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLandscapeSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLandscapeSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InLandscapeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InLandscapeTransform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize = { "InLandscapeRenderTargetSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeRenderTargetSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize = { "InLandscapeSize", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform = { "InLandscapeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "Initialize", nullptr, nullptr, sizeof(LandscapeBlueprintBrushBase_eventInitialize_Parms), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCombinedResult;
		static void NewProp_InIsHeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InIsHeightmap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, InWeightmapLayerName), METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InCombinedResult = { "InCombinedResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, InCombinedResult), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap_SetBit(void* Obj)
	{
		((LandscapeBlueprintBrushBase_eventRender_Parms*)Obj)->InIsHeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap = { "InIsHeightmap", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LandscapeBlueprintBrushBase_eventRender_Parms), &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InCombinedResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "Render", nullptr, nullptr, sizeof(LandscapeBlueprintBrushBase_eventRender_Parms), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "RequestLandscapeUpdate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister()
	{
		return ALandscapeBlueprintBrushBase::StaticClass();
	}
	struct Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[];
#endif
		static void NewProp_bIsVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectedWeightmapLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AffectedWeightmapLayers;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AffectedWeightmapLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectWeightmap_MetaData[];
#endif
		static void NewProp_AffectWeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectWeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AffectHeightmap_MetaData[];
#endif
		static void NewProp_AffectHeightmap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AffectHeightmap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningLandscape_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningLandscape;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies, "GetBlueprintRenderDependencies" }, // 2266199688
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize, "Initialize" }, // 2442752621
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render, "Render" }, // 78884672
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate, "RequestLandscapeUpdate" }, // 3328487975
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeBlueprintBrushBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_SetBit(void* Obj)
	{
		((ALandscapeBlueprintBrushBase*)Obj)->bIsVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers = { "AffectedWeightmapLayers", nullptr, (EPropertyFlags)0x0020080800000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeBlueprintBrushBase, AffectedWeightmapLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_Inner = { "AffectedWeightmapLayers", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintBrushBase*)Obj)->AffectWeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap = { "AffectWeightmap", nullptr, (EPropertyFlags)0x0020080800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_SetBit(void* Obj)
	{
		((ALandscapeBlueprintBrushBase*)Obj)->AffectHeightmap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap = { "AffectHeightmap", nullptr, (EPropertyFlags)0x0020080800000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape = { "OwningLandscape", nullptr, (EPropertyFlags)0x0020080800002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscapeBlueprintBrushBase, OwningLandscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeBlueprintBrushBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::ClassParams = {
		&ALandscapeBlueprintBrushBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers), 0),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscapeBlueprintBrushBase, 3032581439);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscapeBlueprintBrushBase>()
	{
		return ALandscapeBlueprintBrushBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscapeBlueprintBrushBase(Z_Construct_UClass_ALandscapeBlueprintBrushBase, &ALandscapeBlueprintBrushBase::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscapeBlueprintBrushBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeBlueprintBrushBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
