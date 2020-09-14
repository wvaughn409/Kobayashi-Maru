// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/LandscapeLayerInfoObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeLayerInfoObject() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ESplineModulationColorMask();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
// End Cross Module References
	static UEnum* ESplineModulationColorMask_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ESplineModulationColorMask, Z_Construct_UPackage__Script_Landscape(), TEXT("ESplineModulationColorMask"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ESplineModulationColorMask>()
	{
		return ESplineModulationColorMask_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineModulationColorMask(ESplineModulationColorMask_StaticEnum, TEXT("/Script/Landscape"), TEXT("ESplineModulationColorMask"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Hash() { return 2719655749U; }
	UEnum* Z_Construct_UEnum_Landscape_ESplineModulationColorMask()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineModulationColorMask"), 0, Get_Z_Construct_UEnum_Landscape_ESplineModulationColorMask_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineModulationColorMask::Red", (int64)ESplineModulationColorMask::Red },
				{ "ESplineModulationColorMask::Green", (int64)ESplineModulationColorMask::Green },
				{ "ESplineModulationColorMask::Blue", (int64)ESplineModulationColorMask::Blue },
				{ "ESplineModulationColorMask::Alpha", (int64)ESplineModulationColorMask::Alpha },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Alpha.Name", "ESplineModulationColorMask::Alpha" },
				{ "Blue.Name", "ESplineModulationColorMask::Blue" },
				{ "Green.Name", "ESplineModulationColorMask::Green" },
				{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
				{ "Red.Name", "ESplineModulationColorMask::Red" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ESplineModulationColorMask",
				"ESplineModulationColorMask",
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
	void ULandscapeLayerInfoObject::StaticRegisterNativesULandscapeLayerInfoObject()
	{
	}
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeLayerInfoObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerUsageDebugColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LayerUsageDebugColor;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsReferencedFromLoadedData_MetaData[];
#endif
		static void NewProp_IsReferencedFromLoadedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsReferencedFromLoadedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationBias_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationBias;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationTiling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SplineFalloffModulationTiling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationColorMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SplineFalloffModulationColorMask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SplineFalloffModulationColorMask_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineFalloffModulationTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineFalloffModulationTexture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoWeightBlend_MetaData[];
#endif
		static void NewProp_bNoWeightBlend_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoWeightBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumCollisionRelevanceWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumCollisionRelevanceWeight;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hardness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hardness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LandscapeLayerInfoObject.h" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "Comment", "/* The color to use for layer usage debug */" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "The color to use for layer usage debug" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor = { "LayerUsageDebugColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerUsageDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->IsReferencedFromLoadedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData = { "IsReferencedFromLoadedData", nullptr, (EPropertyFlags)0x0010000c00002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Scale" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale = { "SplineFalloffModulationScale", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationScale), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0" },
		{ "DisplayName", "Bias" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias = { "SplineFalloffModulationBias", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationBias), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "ClampMin", "0.01" },
		{ "DisplayName", "Tiling" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling = { "SplineFalloffModulationTiling", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationTiling), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "DisplayName", "Color Mask" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask = { "SplineFalloffModulationColorMask", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationColorMask), Z_Construct_UEnum_Landscape_ESplineModulationColorMask, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture_MetaData[] = {
		{ "Category", "SplineFalloffModulation" },
		{ "Comment", "/** Texture to modulate the Splines Falloff Layer Alpha */" },
		{ "DisplayName", "Texture" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "Texture to modulate the Splines Falloff Layer Alpha" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture = { "SplineFalloffModulationTexture", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, SplineFalloffModulationTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit(void* Obj)
	{
		((ULandscapeLayerInfoObject*)Obj)->bNoWeightBlend = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend = { "bNoWeightBlend", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(ULandscapeLayerInfoObject), &Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/* The minimum weight that needs to be painted for that layer to be picked up as the dominant physical layer */" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
		{ "ToolTip", "The minimum weight that needs to be painted for that layer to be picked up as the dominant physical layer" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight = { "MinimumCollisionRelevanceWeight", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, MinimumCollisionRelevanceWeight), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness = { "Hardness", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, Hardness), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData[] = {
		{ "Category", "LandscapeLayerInfoObject" },
		{ "ModuleRelativePath", "Classes/LandscapeLayerInfoObject.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010010000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULandscapeLayerInfoObject, LayerName), METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerUsageDebugColor,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_IsReferencedFromLoadedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationBias,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTiling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationColorMask_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_SplineFalloffModulationTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_bNoWeightBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_MinimumCollisionRelevanceWeight,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_Hardness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_PhysMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::NewProp_LayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeLayerInfoObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams = {
		&ULandscapeLayerInfoObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeLayerInfoObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULandscapeLayerInfoObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULandscapeLayerInfoObject, 3829122743);
	template<> LANDSCAPE_API UClass* StaticClass<ULandscapeLayerInfoObject>()
	{
		return ULandscapeLayerInfoObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULandscapeLayerInfoObject(Z_Construct_UClass_ULandscapeLayerInfoObject, &ULandscapeLayerInfoObject::StaticClass, TEXT("/Script/Landscape"), TEXT("ULandscapeLayerInfoObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeLayerInfoObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
