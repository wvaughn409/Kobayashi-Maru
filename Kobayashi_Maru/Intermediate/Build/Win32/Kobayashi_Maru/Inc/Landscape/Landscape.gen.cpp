// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Landscape/Classes/Landscape.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscape() {}
// Cross Module References
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeBlendMode();
	UPackage* Z_Construct_UPackage__Script_Landscape();
	LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayer();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
	LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerBrush();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape();
	LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
	LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
// End Cross Module References
	static UEnum* ELandscapeBlendMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeBlendMode, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeBlendMode"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeBlendMode>()
	{
		return ELandscapeBlendMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeBlendMode(ELandscapeBlendMode_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeBlendMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Hash() { return 2322638104U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeBlendMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeBlendMode"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LSBM_AdditiveBlend", (int64)LSBM_AdditiveBlend },
				{ "LSBM_AlphaBlend", (int64)LSBM_AlphaBlend },
				{ "LSBM_MAX", (int64)LSBM_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LSBM_AdditiveBlend.Name", "LSBM_AdditiveBlend" },
				{ "LSBM_AlphaBlend.Name", "LSBM_AlphaBlend" },
				{ "LSBM_MAX.Name", "LSBM_MAX" },
				{ "ModuleRelativePath", "Classes/Landscape.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeBlendMode",
				"ELandscapeBlendMode",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELandscapeSetupErrors_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors, Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeSetupErrors"));
		}
		return Singleton;
	}
	template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeSetupErrors>()
	{
		return ELandscapeSetupErrors_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELandscapeSetupErrors(ELandscapeSetupErrors_StaticEnum, TEXT("/Script/Landscape"), TEXT("ELandscapeSetupErrors"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Hash() { return 2306311161U; }
	UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELandscapeSetupErrors"), 0, Get_Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "LSE_None", (int64)LSE_None },
				{ "LSE_NoLandscapeInfo", (int64)LSE_NoLandscapeInfo },
				{ "LSE_CollsionXY", (int64)LSE_CollsionXY },
				{ "LSE_NoLayerInfo", (int64)LSE_NoLayerInfo },
				{ "LSE_MAX", (int64)LSE_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "LSE_CollsionXY.Comment", "/** There was already component with same X,Y. */" },
				{ "LSE_CollsionXY.Name", "LSE_CollsionXY" },
				{ "LSE_CollsionXY.ToolTip", "There was already component with same X,Y." },
				{ "LSE_MAX.Name", "LSE_MAX" },
				{ "LSE_NoLandscapeInfo.Comment", "/** No Landscape Info available. */" },
				{ "LSE_NoLandscapeInfo.Name", "LSE_NoLandscapeInfo" },
				{ "LSE_NoLandscapeInfo.ToolTip", "No Landscape Info available." },
				{ "LSE_NoLayerInfo.Comment", "/** No Layer Info, need to add proper layers. */" },
				{ "LSE_NoLayerInfo.Name", "LSE_NoLayerInfo" },
				{ "LSE_NoLayerInfo.ToolTip", "No Layer Info, need to add proper layers." },
				{ "LSE_None.Name", "LSE_None" },
				{ "ModuleRelativePath", "Classes/Landscape.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
				nullptr,
				"ELandscapeSetupErrors",
				"ELandscapeSetupErrors",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FLandscapeLayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayer, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayer"), sizeof(FLandscapeLayer), Get_Z_Construct_UScriptStruct_FLandscapeLayer_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayer>()
{
	return FLandscapeLayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeLayer(FLandscapeLayer::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeLayer"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayer
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeLayer")),new UScriptStruct::TCppStructOps<FLandscapeLayer>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayer;
	struct Z_Construct_UScriptStruct_FLandscapeLayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerAllocationBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_WeightmapLayerAllocationBlend;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightmapLayerAllocationBlend_Key_KeyProp;
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WeightmapLayerAllocationBlend_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Brushes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Brushes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Brushes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BlendMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeightmapAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightmapAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[];
#endif
		static void NewProp_bLocked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend = { "WeightmapLayerAllocationBlend", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, WeightmapLayerAllocationBlend), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_Key_KeyProp = { "WeightmapLayerAllocationBlend_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_ValueProp = { "WeightmapLayerAllocationBlend", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes = { "Brushes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, Brushes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_Inner = { "Brushes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeLayerBrush, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, BlendMode), Z_Construct_UEnum_Landscape_ELandscapeBlendMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha = { "WeightmapAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, WeightmapAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha = { "HeightmapAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, HeightmapAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_SetBit(void* Obj)
	{
		((FLandscapeLayer*)Obj)->bLocked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLandscapeLayer), &Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FLandscapeLayer*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FLandscapeLayer), &Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayer, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeLayer",
		sizeof(FLandscapeLayer),
		alignof(FLandscapeLayer),
		Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeLayer"), sizeof(FLandscapeLayer), Get_Z_Construct_UScriptStruct_FLandscapeLayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeLayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayer_Hash() { return 1215610532U; }
class UScriptStruct* FLandscapeLayerBrush::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern LANDSCAPE_API uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerBrush_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerBrush, Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayerBrush"), sizeof(FLandscapeLayerBrush), Get_Z_Construct_UScriptStruct_FLandscapeLayerBrush_Hash());
	}
	return Singleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayerBrush>()
{
	return FLandscapeLayerBrush::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLandscapeLayerBrush(FLandscapeLayerBrush::StaticStruct, TEXT("/Script/Landscape"), TEXT("LandscapeLayerBrush"), false, nullptr, nullptr);
static struct FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerBrush
{
	FScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerBrush()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LandscapeLayerBrush")),new UScriptStruct::TCppStructOps<FLandscapeLayerBrush>);
	}
} ScriptStruct_Landscape_StaticRegisterNativesFLandscapeLayerBrush;
	struct Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintBrush_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BlueprintBrush;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayerBrush>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush = { "BlueprintBrush", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLandscapeLayerBrush, BlueprintBrush), Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush,
	};
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
		nullptr,
		&NewStructOps,
		"LandscapeLayerBrush",
		sizeof(FLandscapeLayerBrush),
		alignof(FLandscapeLayerBrush),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerBrush()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerBrush_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Landscape();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LandscapeLayerBrush"), sizeof(FLandscapeLayerBrush), Get_Z_Construct_UScriptStruct_FLandscapeLayerBrush_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLandscapeLayerBrush_Hash() { return 3875357664U; }
	void ALandscape::StaticRegisterNativesALandscape()
	{
	}
	UClass* Z_Construct_UClass_ALandscape_NoRegister()
	{
		return ALandscape::StaticClass();
	}
	struct Z_Construct_UClass_ALandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSplineLayerUpdateRequested_MetaData[];
#endif
		static void NewProp_bSplineLayerUpdateRequested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSplineLayerUpdateRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayerContentUpdateModes_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LayerContentUpdateModes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WasCompilingShaders_MetaData[];
#endif
		static void NewProp_WasCompilingShaders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WasCompilingShaders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandscapeLayersAreInitialized_MetaData[];
#endif
		static void NewProp_bLandscapeLayersAreInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandscapeLayersAreInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesAffectedComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_LandscapeSplinesAffectedComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplinesAffectedComponents_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeightmapRTList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WeightmapRTList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeightmapRTList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeightmapRTList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeightmapRTList;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeightmapRTList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeLayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesTargetLayerGuid_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LandscapeSplinesTargetLayerGuid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanHaveLayersContent_MetaData[];
#endif
		static void NewProp_bCanHaveLayersContent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanHaveLayersContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Mobility Attachment Physics Debug" },
		{ "IncludePath", "Landscape.h" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->bSplineLayerUpdateRequested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested = { "bSplineLayerUpdateRequested", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes = { "LayerContentUpdateModes", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LayerContentUpdateModes), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->WasCompilingShaders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders = { "WasCompilingShaders", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->bLandscapeLayersAreInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized = { "bLandscapeLayersAreInitialized", nullptr, (EPropertyFlags)0x0040000800002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_MetaData[] = {
		{ "Comment", "/** Components affected by landscape splines (used to partially clear Layer Reserved for Splines) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Components affected by landscape splines (used to partially clear Layer Reserved for Splines)" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents = { "LandscapeSplinesAffectedComponents", nullptr, (EPropertyFlags)0x0040008800002008, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LandscapeSplinesAffectedComponents), METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_ElementProp = { "LandscapeSplinesAffectedComponents", nullptr, (EPropertyFlags)0x0000000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList = { "WeightmapRTList", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, WeightmapRTList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_Inner = { "WeightmapRTList", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0010000800002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, HeightmapRTList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LandscapeLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_Inner = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLandscapeLayer, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid_MetaData[] = {
		{ "Comment", "/** Target Landscape Layer for Landscape Splines */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Target Landscape Layer for Landscape Splines" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid = { "LandscapeSplinesTargetLayerGuid", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandscape, LandscapeSplinesTargetLayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif
	void Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_SetBit(void* Obj)
	{
		((ALandscape*)Obj)->bCanHaveLayersContent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent = { "bCanHaveLayersContent", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscape>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandscape_Statics::ClassParams = {
		&ALandscape::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscape_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::PropPointers), 0),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandscape()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandscape_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandscape, 625840949);
	template<> LANDSCAPE_API UClass* StaticClass<ALandscape>()
	{
		return ALandscape::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandscape(Z_Construct_UClass_ALandscape, &ALandscape::StaticClass, TEXT("/Script/Landscape"), TEXT("ALandscape"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscape);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
