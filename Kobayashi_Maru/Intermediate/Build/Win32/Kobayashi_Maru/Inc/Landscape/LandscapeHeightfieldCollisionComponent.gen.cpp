// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeHeightfieldCollisionComponent.h"
#include "Landscape/Classes/LandscapeProxy.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeHeightfieldCollisionComponent() {}
// Cross Module References
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULandscapeHeightfieldCollisionComponent::execGetRenderComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULandscapeComponent**)Z_Param__Result=P_THIS->GetRenderComponent();
		P_NATIVE_END;
	}
	void ULandscapeHeightfieldCollisionComponent::StaticRegisterNativesULandscapeHeightfieldCollisionComponent()
	{
		UClass* Class = ULandscapeHeightfieldCollisionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRenderComponent", &ULandscapeHeightfieldCollisionComponent::execGetRenderComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics
	{
		struct LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms
		{
			ULandscapeComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms, ReturnValue), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Returns associated landscape component */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Returns associated landscape component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent, nullptr, "GetRenderComponent", nullptr, nullptr, sizeof(LandscapeHeightfieldCollisionComponent_eventGetRenderComponent_Parms), Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_NoRegister()
	{
		return ULandscapeHeightfieldCollisionComponent::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CookedPhysicalMaterials_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CookedPhysicalMaterials;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CookedPhysicalMaterials_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FLazyObjectPropertyParams NewProp_RenderComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedLocalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedLocalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightfieldGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeightfieldGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionQuadFlags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CollisionQuadFlags;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CollisionQuadFlags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SimpleCollisionSizeQuads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SimpleCollisionSizeQuads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionSizeQuads_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollisionSizeQuads;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseY_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionBaseX_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionBaseX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentLayerInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentLayerInfos;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentLayerInfos_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULandscapeHeightfieldCollisionComponent_GetRenderComponent, "GetRenderComponent" }, // 1051847407
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility VirtualTexture Trigger" },
		{ "IncludePath", "LandscapeHeightfieldCollisionComponent.h" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_MetaData[] = {
		{ "Comment", "/** This is a list of physical materials that is actually used by a cooked HeightField */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "This is a list of physical materials that is actually used by a cooked HeightField" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials = { "CookedPhysicalMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CookedPhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_Inner = { "CookedPhysicalMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent_MetaData[] = {
		{ "Comment", "/** Reference to render component */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Reference to render component" },
	};
#endif
	const UE4CodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent = { "RenderComponent", nullptr, (EPropertyFlags)0x0014000000080008, UE4CodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, RenderComponent), Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox_MetaData[] = {
		{ "Comment", "/** Cached local-space bounding box, created at heightmap update time */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Cached local-space bounding box, created at heightmap update time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox = { "CachedLocalBox", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CachedLocalBox), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid_MetaData[] = {
		{ "Comment", "/** Guid used to share PhysX heightfield objects in the editor */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Guid used to share PhysX heightfield objects in the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid = { "HeightfieldGuid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, HeightfieldGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_MetaData[] = {
		{ "Comment", "/** The flags for each collision quad. See ECollisionQuadFlags. */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "The flags for each collision quad. See ECollisionQuadFlags." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags = { "CollisionQuadFlags", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionQuadFlags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_Inner = { "CollisionQuadFlags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads_MetaData[] = {
		{ "Comment", "/** Size of component's \"simple collision\" in collision quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Size of component's \"simple collision\" in collision quads" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads = { "SimpleCollisionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SimpleCollisionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale_MetaData[] = {
		{ "Comment", "/** Collision scale: (ComponentSizeQuads) / (CollisionSizeQuads) */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Collision scale: (ComponentSizeQuads) / (CollisionSizeQuads)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale = { "CollisionScale", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads_MetaData[] = {
		{ "Comment", "/** Size of component in collision quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Size of component in collision quads" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads = { "CollisionSizeQuads", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, CollisionSizeQuads), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY = { "SectionBaseY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX_MetaData[] = {
		{ "Comment", "/** Offset of component in landscape quads */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "Offset of component in landscape quads" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX = { "SectionBaseX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, SectionBaseX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_MetaData[] = {
		{ "Comment", "/** List of layers painted on this component. Matches the WeightmapLayerAllocations array in the LandscapeComponent. */" },
		{ "ModuleRelativePath", "Classes/LandscapeHeightfieldCollisionComponent.h" },
		{ "ToolTip", "List of layers painted on this component. Matches the WeightmapLayerAllocations array in the LandscapeComponent." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos = { "ComponentLayerInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeHeightfieldCollisionComponent, ComponentLayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_Inner = { "ComponentLayerInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CookedPhysicalMaterials_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_RenderComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CachedLocalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_HeightfieldGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionQuadFlags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SimpleCollisionSizeQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_CollisionSizeQuads,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_SectionBaseX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::NewProp_ComponentLayerInfos_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeHeightfieldCollisionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::ClassParams = {
		&ULandscapeHeightfieldCollisionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::PropPointers),
		0,
		0x00A800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeHeightfieldCollisionComponent, 4187790932);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeHeightfieldCollisionComponent>()
	{
		return ULandscapeHeightfieldCollisionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeHeightfieldCollisionComponent(Z_Construct_UClass_ULandscapeHeightfieldCollisionComponent, &ULandscapeHeightfieldCollisionComponent::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeHeightfieldCollisionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeHeightfieldCollisionComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULandscapeHeightfieldCollisionComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
