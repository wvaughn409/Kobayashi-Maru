// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperSpriteAtlas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperSpriteAtlas() {}
// Cross Module References
	PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteAtlas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureCompressionSettings();
// End Cross Module References
	static UEnum* EPaperSpriteAtlasPadding_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding, Z_Construct_UPackage__Script_Paper2D(), TEXT("EPaperSpriteAtlasPadding"));
		}
		return Singleton;
	}
	template<> PAPER2D_API UEnum* StaticEnum<EPaperSpriteAtlasPadding>()
	{
		return EPaperSpriteAtlasPadding_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPaperSpriteAtlasPadding(EPaperSpriteAtlasPadding_StaticEnum, TEXT("/Script/Paper2D"), TEXT("EPaperSpriteAtlasPadding"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Hash() { return 1476458873U; }
	UEnum* Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPaperSpriteAtlasPadding"), 0, Get_Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPaperSpriteAtlasPadding::DilateBorder", (int64)EPaperSpriteAtlasPadding::DilateBorder },
				{ "EPaperSpriteAtlasPadding::PadWithZero", (int64)EPaperSpriteAtlasPadding::PadWithZero },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DilateBorder.Comment", "/** Dilate the texture to pad the atlas. */" },
				{ "DilateBorder.Name", "EPaperSpriteAtlasPadding::DilateBorder" },
				{ "DilateBorder.ToolTip", "Dilate the texture to pad the atlas." },
				{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
				{ "PadWithZero.Comment", "/** Padding border filled with zeros. */" },
				{ "PadWithZero.Name", "EPaperSpriteAtlasPadding::PadWithZero" },
				{ "PadWithZero.ToolTip", "Padding border filled with zeros." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
				nullptr,
				"EPaperSpriteAtlasPadding",
				"EPaperSpriteAtlasPadding",
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
class UScriptStruct* FPaperSpriteAtlasSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PAPER2D_API uint32 Get_Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot, Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperSpriteAtlasSlot"), sizeof(FPaperSpriteAtlasSlot), Get_Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Hash());
	}
	return Singleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperSpriteAtlasSlot>()
{
	return FPaperSpriteAtlasSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPaperSpriteAtlasSlot(FPaperSpriteAtlasSlot::StaticStruct, TEXT("/Script/Paper2D"), TEXT("PaperSpriteAtlasSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Paper2D_StaticRegisterNativesFPaperSpriteAtlasSlot
{
	FScriptStruct_Paper2D_StaticRegisterNativesFPaperSpriteAtlasSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PaperSpriteAtlasSlot")),new UScriptStruct::TCppStructOps<FPaperSpriteAtlasSlot>);
	}
} ScriptStruct_Paper2D_StaticRegisterNativesFPaperSpriteAtlasSlot;
	struct Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlasIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AtlasIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpriteRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SpriteRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperSpriteAtlasSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Height), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Width), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex = { "AtlasIndex", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, AtlasIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef = { "SpriteRef", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPaperSpriteAtlasSlot, SpriteRef), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_AtlasIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::NewProp_SpriteRef,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"PaperSpriteAtlasSlot",
		sizeof(FPaperSpriteAtlasSlot),
		alignof(FPaperSpriteAtlasSlot),
		Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Paper2D();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PaperSpriteAtlasSlot"), sizeof(FPaperSpriteAtlasSlot), Get_Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot_Hash() { return 2764897691U; }
	void UPaperSpriteAtlas::StaticRegisterNativesUPaperSpriteAtlas()
	{
	}
	UClass* Z_Construct_UClass_UPaperSpriteAtlas_NoRegister()
	{
		return UPaperSpriteAtlas::StaticClass();
	}
	struct Z_Construct_UClass_UPaperSpriteAtlas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BuiltPadding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BuiltHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuiltWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BuiltWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumIncrementalBuilds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumIncrementalBuilds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlasSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AtlasSlots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlasSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRebuildAtlas_MetaData[];
#endif
		static void NewProp_bRebuildAtlas_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRebuildAtlas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlasGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlasGUID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeneratedTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GeneratedTextures;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GeneratedTextures_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompressionSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CompressionSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PaddingType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PaddingType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PaddingType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MipCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MipCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlasDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AtlasDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperSpriteAtlas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Groups together a set of sprites that will try to share the same texture atlas (allowing them to be combined into a single draw call)\n" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperSpriteAtlas.h" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Groups together a set of sprites that will try to share the same texture atlas (allowing them to be combined into a single draw call)" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding = { "BuiltPadding", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltPadding), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight = { "BuiltHeight", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth_MetaData[] = {
		{ "Comment", "// Values used when building this atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Values used when building this atlas" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth = { "BuiltWidth", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, BuiltWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds_MetaData[] = {
		{ "Comment", "// Track the number of incremental builds\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Track the number of incremental builds" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds = { "NumIncrementalBuilds", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, NumIncrementalBuilds), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_MetaData[] = {
		{ "Comment", "// Slots in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Slots in the atlas" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots = { "AtlasSlots", nullptr, (EPropertyFlags)0x0010000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_Inner = { "AtlasSlots", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPaperSpriteAtlasSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Slots in the atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Slots in the atlas" },
	};
#endif
	void Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_SetBit(void* Obj)
	{
		((UPaperSpriteAtlas*)Obj)->bRebuildAtlas = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas = { "bRebuildAtlas", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPaperSpriteAtlas), &Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The GUID of the atlas group, used to match up sprites that belong to this group even thru atlas renames\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The GUID of the atlas group, used to match up sprites that belong to this group even thru atlas renames" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID = { "AtlasGUID", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// List of generated atlas textures\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "List of generated atlas textures" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0010000800020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, GeneratedTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_Inner = { "GeneratedTextures", nullptr, (EPropertyFlags)0x0000000800020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// Texture filtering mode when sampling these textures\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Texture filtering mode when sampling these textures" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, Filter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings_MetaData[] = {
		{ "Category", "AtlasTexture" },
		{ "Comment", "// Compression settings to use on atlas texture\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Compression settings to use on atlas texture" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings = { "CompressionSettings", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, CompressionSettings), Z_Construct_UEnum_Engine_TextureCompressionSettings, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The number of pixels of padding\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The number of pixels of padding" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, Padding), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// The type of padding performed on this atlas\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "The type of padding performed on this atlas" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType = { "PaddingType", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, PaddingType), Z_Construct_UEnum_Paper2D_EPaperSpriteAtlasPadding, METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page height (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page height (single pages might be smaller)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount = { "MipCount", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, MipCount), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page height (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page height (single pages might be smaller)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight = { "MaxHeight", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, MaxHeight), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Maximum atlas page width (single pages might be smaller)\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Maximum atlas page width (single pages might be smaller)" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth = { "MaxWidth", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, MaxWidth), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription_MetaData[] = {
		{ "Category", "General" },
		{ "Comment", "// Description of this atlas, which shows up in the content browser tooltip\n" },
		{ "ModuleRelativePath", "Classes/PaperSpriteAtlas.h" },
		{ "ToolTip", "Description of this atlas, which shows up in the content browser tooltip" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription = { "AtlasDescription", nullptr, (EPropertyFlags)0x0010000800000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPaperSpriteAtlas, AtlasDescription), METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltPadding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_BuiltWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_NumIncrementalBuilds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_bRebuildAtlas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_GeneratedTextures_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_CompressionSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_Padding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_PaddingType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MipCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_MaxWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperSpriteAtlas_Statics::NewProp_AtlasDescription,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperSpriteAtlas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperSpriteAtlas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaperSpriteAtlas_Statics::ClassParams = {
		&UPaperSpriteAtlas::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::PropPointers), 0),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperSpriteAtlas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperSpriteAtlas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaperSpriteAtlas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaperSpriteAtlas, 3038008441);
	template<> PAPER2D_API UClass* StaticClass<UPaperSpriteAtlas>()
	{
		return UPaperSpriteAtlas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaperSpriteAtlas(Z_Construct_UClass_UPaperSpriteAtlas, &UPaperSpriteAtlas::StaticClass, TEXT("/Script/Paper2D"), TEXT("UPaperSpriteAtlas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperSpriteAtlas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
